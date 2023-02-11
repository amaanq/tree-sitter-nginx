/* eslint-disable camelcase */

// const assignment_keywords = [
//   //
//   // top level
//   //
//   'user',
//   'worker_processes',
//   'error_log',
//   'pid',
//   'worker_rlimit_nofile',
//
//   //
//   // events
//   //
//   'worker_connections',
//
//   //
//   // http
//   //
//   'include',
//   'index',
//   'default_type',
//   'log_format',
//   'access_log',
//   'sendfile',
//   'tcp_nopush',
//   'server_names_hash_bucket_size',
//   'server_names_hash_max_size',
//
//   //
//   // server
//   //
//   'listen',
//   'server_name',
//   // 'access_log',
//   'root',
//
//   //
//   // location
//   //
//   'alias',
//   'expires',
//   'try_files',
//   'proxy_pass',
//   'proxy_set_header',
//   'proxy_http_version',
//   // 'root'
// ];

module.exports = grammar({
  name: 'nginx',

  extras: ($) => [/[\s\f\uFEFF\u2060\u200B]|\\\r?\n/, $.comment],

  inline: ($) => [
    $._location_path_regex,
  ],

  rules: {
    config: ($) => repeat($._main_directive),

    _main_directive: ($) =>
      choice(
        $.events_directive,
        $.http_directive,
        $.server_directive,
        $.assignment,
      ),

    http_directive: ($) =>
      seq(
        'http',
        '{',
        repeat(choice($.assignment, $.server_directive, $.types_directive)),
        '}',
      ),

    server_directive: ($) =>
      seq(
        'server',
        '{',
        repeat(choice($.assignment, $.location_directive, $.types_directive)),
        '}',
      ),

    location_directive: ($) =>
      seq(
        'location',
        choice(
          $.location_at,
          $.location_path,
        ),
        '{',
        repeat(choice($.assignment, $.location_directive, $.types_directive, $.rewrite_directive)),
        '}',
      ),
    location_at: ($) => '@' + $.identifier,
    location_path: ($) =>
      seq(
        alias(optional(choice('=', '~', '~*', '^~')), $.location_path_modifier),
        $.path,
      ),
    _location_pattern: ($) => field('location', alias($.path_pattern, $.location_path_regex)),
    _location_path_literal: ($) => choice('/', $.path_literal),
    rewrite_directive: ($) => seq(alias('rewrite', $.rewrite_ident), $.path, $.path, optional($.rewrite_flags), ';'),
    rewrite_flags: ($) => seq($.rewrite_flag, repeat(seq($.rewrite_flag, optional($.rewrite_flag)))),
    rewrite_flag: () => choice('break', 'last', 'redirect', 'permanent', 'pcre_jit'),

    upstream_directive: ($) =>
      seq(
        'upstream',
        $.identifier,
        '{',
        repeat($.assignment),
        '}',
      ),

    events_directive: ($) =>
      seq(
        'events',
        '{',
        repeat($.assignment),
        '}',
      ),

    types_directive: ($) =>
      seq(
        'types',
        '{',
        repeat(choice($.assignment, $.types_directive)),
        '}',
      ),

    assignment: ($) =>
      seq(
        $.identifier,
        optional(choice('=', '~', '~*', '^~')),
        repeat(
          choice(
            $.mime_type,
            seq(
              $.const_value,
              repeat(seq(choice(':', '='), $.const_value),
              ),
            ),
          ),
        ),
        ';',
      ),
    assignment_value: ($) => choice($._string_literal, $.path),

    const_value: ($) =>
      choice(
        $.number,
        $.float,
        $.boolean,
        $._string_literal,
        $.identifier,
        $.address,
        // $.const_list,
      ),

    number: () => {
      const decimal_digits = /\d(_?\d)*/;

      const decimal_integer_literal = choice(
        '0',
        seq(optional('0'), /[1-9]/, optional(seq(optional('_'), decimal_digits))),
      );

      return token(decimal_integer_literal);
    },

    float: () => /[+-]?(\d+(\.\d+)?|\.\d+)([Ee][+-]?\d+)?/,

    boolean: ($) => choice($.true, $.false),
    true: () => 'true',
    false: () => 'false',

    _string_literal: ($) => alias(/"([^"\\]|\\.)*"|'([^'\\]|\\.)*'/, $.string_literal),

    _identifier: () => token(/[A-Za-z_][A-Za-z0-9._]*/),
    // _dynamic_identifier: () => token(/\$\{[A-Za-z_][A-Za-z0-9._]*\}/),
    dynamic_identifier: ($) => seq('$', $.const_value),
    identifier: ($) => choice($.dynamic_identifier, $._identifier),

    mime_type: () => /[A-Za-z0-9._\/-]+/,

    path: ($) => choice($.path_literal, $.path_pattern),
    path_pattern: () => /\/[^\/\s]+\/[a-z]*/,
    path_literal: () => /\/[^\/\s]+/,

    regex: ($) => seq(
      '/',
      field('pattern', $.regex_pattern),
      token.immediate('/'),
      optional(field('flags', $.regex_flags)),
    ),

    regex_pattern: () => token.immediate(prec(-1,
      repeat1(choice(
        seq(
          '[',
          repeat(choice(
            seq('\\', /./), // escaped character
            /[^\]\n\\]/, // any character besides ']' or '\n'
          )),
          ']',
        ), // square-bracket-delimited character class
        seq('\\', /./), // escaped character
        /[^/\\\[\n]/, // any character besides '[', '\', '/', '\n'
      )),
    )),
    regex_flags: () => token.immediate(/[a-z]+/),

    // Internet Addresses
    ipv4_address: () => token(
      /((25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)/,
    ),
    ipv6_address: () => token(
      // eslint-disable-next-line max-len
      /\[(([0-9a-fA-F]{1,4}:){7,7}[0-9a-fA-F]{1,4}|([0-9a-fA-F]{1,4}:){1,7}:|([0-9a-fA-F]{1,4}:){1,6}:[0-9a-fA-F]{1,4}|([0-9a-fA-F]{1,4}:){1,5}(:[0-9a-fA-F]{1,4}){1,2}|([0-9a-fA-F]{1,4}:){1,4}(:[0-9a-fA-F]{1,4}){1,3}|([0-9a-fA-F]{1,4}:){1,3}(:[0-9a-fA-F]{1,4}){1,4}|([0-9a-fA-F]{1,4}:){1,2}(:[0-9a-fA-F]{1,4}){1,5}|[0-9a-fA-F]{1,4}:((:[0-9a-fA-F]{1,4}){1,6})|:((:[0-9a-fA-F]{1,4}){1,7}|:))\]/,
    ),
    ip_address: ($) => choice($.ipv4_address, $.ipv6_address),
    port: () => token(/:(6553[0-5]|655[0-2][0-9]|65[0-4][0-9]{2}|6[0-4][0-9]{3}|[1-5][0-9]{4}|[1-9][0-9]{1,3}|[0-9])/),
    address: ($) => seq($.ip_address, optional($.port)),

    comment: () => token(seq('#', /.*/)),
  },
});
