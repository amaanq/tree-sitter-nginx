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
        repeat(choice($.assignment, $.location_directive, $.types_directive)),
        '}',
      ),
    location_at: ($) => '@' + $.identifier,
    location_path: ($) =>
      seq(
        alias(optional(choice('=', '~', '~*', '^~')), $.location_path_modifier),
        choice(
          $._location_path_literal,
          $._location_path_regex,
        ),
      ),
    _location_path_regex: ($) => alias($.path_regex, $.location_path_regex),
    _location_path_literal: ($) => choice('/', $.path_literal),

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
    assignment_value: ($) => choice($._string_literal, $.path_regex),

    const_value: ($) =>
      choice(
        $.number,
        $.float,
        $.boolean,
        $._string_literal,
        $.identifier,
        $.ip_address,
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

    identifier: () => /[A-Za-z_][A-Za-z0-9._]*/,

    mime_type: () => /[A-Za-z0-9._\/-]+/,

    path_regex: () => /\/[^\/\s]+\/[a-z]*/,
    path_literal: () => /\/[^\/\s]+/,

    ip_address: ($) => choice($.ipv6_address),
    // ipv4_address: () => /^(25[0-5]|2[0-4][0-9]|1?[0-9][0-9]{1,2})(\.(25[0-5]|2[0-4][0-9]|1?[0-9]{1,2})){3}$/,
    ipv6_address: () => /(([0-9a-fA-F]{1,4}:){7,7}[0-9a-fA-F]{1,4}|([0-9a-fA-F]{1,4}:){1,7}:|([0-9a-fA-F]{1,4}:){1,6}:[0-9a-fA-F]{1,4}|([0-9a-fA-F]{1,4}:){1,5}(:[0-9a-fA-F]{1,4}){1,2}|([0-9a-fA-F]{1,4}:){1,4}(:[0-9a-fA-F]{1,4}){1,3}|([0-9a-fA-F]{1,4}:){1,3}(:[0-9a-fA-F]{1,4}){1,4}|([0-9a-fA-F]{1,4}:){1,2}(:[0-9a-fA-F]{1,4}){1,5}|[0-9a-fA-F]{1,4}:((:[0-9a-fA-F]{1,4}){1,6})|:((:[0-9a-fA-F]{1,4}){1,7}|:)|fe80:(:[0-9a-fA-F]{0,4}){0,4}%[0-9a-zA-Z]{1,}|::(ffff(:0{1,4}){0,1}:){0,1}((25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9])\.){3,3}(25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9])|([0-9a-fA-F]{1,4}:){1,4}:((25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9])\.){3,3}(25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9]))/,

    comment: () => token(seq('#', /.*/)),
  },
});
