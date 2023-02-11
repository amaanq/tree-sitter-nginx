#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 134
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 1
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_http = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_server = 4,
  anon_sym_location = 5,
  sym_location_at = 6,
  anon_sym_EQ = 7,
  anon_sym_TILDE = 8,
  anon_sym_TILDE_STAR = 9,
  anon_sym_CARET_TILDE = 10,
  anon_sym_SLASH = 11,
  anon_sym_rewrite = 12,
  anon_sym_SEMI = 13,
  anon_sym_break = 14,
  anon_sym_last = 15,
  anon_sym_redirect = 16,
  anon_sym_permanent = 17,
  anon_sym_pcre_jit = 18,
  anon_sym_upstream = 19,
  anon_sym_events = 20,
  anon_sym_types = 21,
  anon_sym_COLON = 22,
  sym_number = 23,
  sym_float = 24,
  sym_true = 25,
  sym_false = 26,
  aux_sym__string_literal_token1 = 27,
  sym__identifier = 28,
  anon_sym_DOLLAR = 29,
  sym_mime_type = 30,
  sym_path_pattern = 31,
  sym_path_literal = 32,
  anon_sym_SLASH2 = 33,
  sym_ipv4_address = 34,
  sym_ipv6_address = 35,
  sym_port = 36,
  sym_comment = 37,
  sym_config = 38,
  sym__main_directive = 39,
  sym_http_directive = 40,
  sym_server_directive = 41,
  sym_location_directive = 42,
  sym_location_path = 43,
  sym_rewrite_directive = 44,
  sym_rewrite_flags = 45,
  sym_rewrite_flag = 46,
  sym_events_directive = 47,
  sym_types_directive = 48,
  sym_assignment = 49,
  sym_const_value = 50,
  sym_boolean = 51,
  sym__string_literal = 52,
  sym_dynamic_identifier = 53,
  sym_identifier = 54,
  sym_path = 55,
  sym_ip_address = 56,
  sym_address = 57,
  aux_sym_config_repeat1 = 58,
  aux_sym_http_directive_repeat1 = 59,
  aux_sym_server_directive_repeat1 = 60,
  aux_sym_location_directive_repeat1 = 61,
  aux_sym_rewrite_flags_repeat1 = 62,
  aux_sym_upstream_directive_repeat1 = 63,
  aux_sym_types_directive_repeat1 = 64,
  aux_sym_assignment_repeat1 = 65,
  aux_sym_assignment_repeat2 = 66,
  alias_sym_location_path_modifier = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_http] = "http",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_server] = "server",
  [anon_sym_location] = "location",
  [sym_location_at] = "location_at",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE] = "~",
  [anon_sym_TILDE_STAR] = "~*",
  [anon_sym_CARET_TILDE] = "^~",
  [anon_sym_SLASH] = "/",
  [anon_sym_rewrite] = "rewrite_ident",
  [anon_sym_SEMI] = ";",
  [anon_sym_break] = "break",
  [anon_sym_last] = "last",
  [anon_sym_redirect] = "redirect",
  [anon_sym_permanent] = "permanent",
  [anon_sym_pcre_jit] = "pcre_jit",
  [anon_sym_upstream] = "upstream",
  [anon_sym_events] = "events",
  [anon_sym_types] = "types",
  [anon_sym_COLON] = ":",
  [sym_number] = "number",
  [sym_float] = "float",
  [sym_true] = "true",
  [sym_false] = "false",
  [aux_sym__string_literal_token1] = "string_literal",
  [sym__identifier] = "_identifier",
  [anon_sym_DOLLAR] = "$",
  [sym_mime_type] = "mime_type",
  [sym_path_pattern] = "path_pattern",
  [sym_path_literal] = "path_literal",
  [anon_sym_SLASH2] = "/",
  [sym_ipv4_address] = "ipv4_address",
  [sym_ipv6_address] = "ipv6_address",
  [sym_port] = "port",
  [sym_comment] = "comment",
  [sym_config] = "config",
  [sym__main_directive] = "_main_directive",
  [sym_http_directive] = "http_directive",
  [sym_server_directive] = "server_directive",
  [sym_location_directive] = "location_directive",
  [sym_location_path] = "location_path",
  [sym_rewrite_directive] = "rewrite_directive",
  [sym_rewrite_flags] = "rewrite_flags",
  [sym_rewrite_flag] = "rewrite_flag",
  [sym_events_directive] = "events_directive",
  [sym_types_directive] = "types_directive",
  [sym_assignment] = "assignment",
  [sym_const_value] = "const_value",
  [sym_boolean] = "boolean",
  [sym__string_literal] = "_string_literal",
  [sym_dynamic_identifier] = "dynamic_identifier",
  [sym_identifier] = "identifier",
  [sym_path] = "path",
  [sym_ip_address] = "ip_address",
  [sym_address] = "address",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_http_directive_repeat1] = "http_directive_repeat1",
  [aux_sym_server_directive_repeat1] = "server_directive_repeat1",
  [aux_sym_location_directive_repeat1] = "location_directive_repeat1",
  [aux_sym_rewrite_flags_repeat1] = "rewrite_flags_repeat1",
  [aux_sym_upstream_directive_repeat1] = "upstream_directive_repeat1",
  [aux_sym_types_directive_repeat1] = "types_directive_repeat1",
  [aux_sym_assignment_repeat1] = "assignment_repeat1",
  [aux_sym_assignment_repeat2] = "assignment_repeat2",
  [alias_sym_location_path_modifier] = "location_path_modifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_http] = anon_sym_http,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_server] = anon_sym_server,
  [anon_sym_location] = anon_sym_location,
  [sym_location_at] = sym_location_at,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_TILDE_STAR] = anon_sym_TILDE_STAR,
  [anon_sym_CARET_TILDE] = anon_sym_CARET_TILDE,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_rewrite] = anon_sym_rewrite,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_last] = anon_sym_last,
  [anon_sym_redirect] = anon_sym_redirect,
  [anon_sym_permanent] = anon_sym_permanent,
  [anon_sym_pcre_jit] = anon_sym_pcre_jit,
  [anon_sym_upstream] = anon_sym_upstream,
  [anon_sym_events] = anon_sym_events,
  [anon_sym_types] = anon_sym_types,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [aux_sym__string_literal_token1] = aux_sym__string_literal_token1,
  [sym__identifier] = sym__identifier,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_mime_type] = sym_mime_type,
  [sym_path_pattern] = sym_path_pattern,
  [sym_path_literal] = sym_path_literal,
  [anon_sym_SLASH2] = anon_sym_SLASH,
  [sym_ipv4_address] = sym_ipv4_address,
  [sym_ipv6_address] = sym_ipv6_address,
  [sym_port] = sym_port,
  [sym_comment] = sym_comment,
  [sym_config] = sym_config,
  [sym__main_directive] = sym__main_directive,
  [sym_http_directive] = sym_http_directive,
  [sym_server_directive] = sym_server_directive,
  [sym_location_directive] = sym_location_directive,
  [sym_location_path] = sym_location_path,
  [sym_rewrite_directive] = sym_rewrite_directive,
  [sym_rewrite_flags] = sym_rewrite_flags,
  [sym_rewrite_flag] = sym_rewrite_flag,
  [sym_events_directive] = sym_events_directive,
  [sym_types_directive] = sym_types_directive,
  [sym_assignment] = sym_assignment,
  [sym_const_value] = sym_const_value,
  [sym_boolean] = sym_boolean,
  [sym__string_literal] = sym__string_literal,
  [sym_dynamic_identifier] = sym_dynamic_identifier,
  [sym_identifier] = sym_identifier,
  [sym_path] = sym_path,
  [sym_ip_address] = sym_ip_address,
  [sym_address] = sym_address,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_http_directive_repeat1] = aux_sym_http_directive_repeat1,
  [aux_sym_server_directive_repeat1] = aux_sym_server_directive_repeat1,
  [aux_sym_location_directive_repeat1] = aux_sym_location_directive_repeat1,
  [aux_sym_rewrite_flags_repeat1] = aux_sym_rewrite_flags_repeat1,
  [aux_sym_upstream_directive_repeat1] = aux_sym_upstream_directive_repeat1,
  [aux_sym_types_directive_repeat1] = aux_sym_types_directive_repeat1,
  [aux_sym_assignment_repeat1] = aux_sym_assignment_repeat1,
  [aux_sym_assignment_repeat2] = aux_sym_assignment_repeat2,
  [alias_sym_location_path_modifier] = alias_sym_location_path_modifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_http] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_server] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_location] = {
    .visible = true,
    .named = false,
  },
  [sym_location_at] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rewrite] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_last] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_redirect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_permanent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pcre_jit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_upstream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_events] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_types] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_literal_token1] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_mime_type] = {
    .visible = true,
    .named = true,
  },
  [sym_path_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_path_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_ipv4_address] = {
    .visible = true,
    .named = true,
  },
  [sym_ipv6_address] = {
    .visible = true,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym__main_directive] = {
    .visible = false,
    .named = true,
  },
  [sym_http_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_server_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_location_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_location_path] = {
    .visible = true,
    .named = true,
  },
  [sym_rewrite_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_rewrite_flags] = {
    .visible = true,
    .named = true,
  },
  [sym_rewrite_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_events_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_types_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_const_value] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_dynamic_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_ip_address] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_http_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_server_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_location_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rewrite_flags_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_upstream_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_types_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_location_path_modifier] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_location_path_modifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 2,
  [5] = 2,
  [6] = 2,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 8,
  [14] = 11,
  [15] = 9,
  [16] = 11,
  [17] = 8,
  [18] = 11,
  [19] = 8,
  [20] = 9,
  [21] = 9,
  [22] = 8,
  [23] = 11,
  [24] = 11,
  [25] = 9,
  [26] = 8,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 42,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 49,
  [53] = 51,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 57,
  [59] = 56,
  [60] = 60,
  [61] = 57,
  [62] = 57,
  [63] = 63,
  [64] = 63,
  [65] = 63,
  [66] = 63,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 78,
  [90] = 90,
  [91] = 79,
  [92] = 90,
  [93] = 93,
  [94] = 94,
  [95] = 88,
  [96] = 78,
  [97] = 87,
  [98] = 75,
  [99] = 81,
  [100] = 78,
  [101] = 93,
  [102] = 90,
  [103] = 85,
  [104] = 79,
  [105] = 87,
  [106] = 88,
  [107] = 79,
  [108] = 90,
  [109] = 88,
  [110] = 78,
  [111] = 79,
  [112] = 87,
  [113] = 90,
  [114] = 114,
  [115] = 90,
  [116] = 78,
  [117] = 117,
  [118] = 79,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 127,
  [129] = 121,
  [130] = 130,
  [131] = 121,
  [132] = 121,
  [133] = 130,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(217);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(357);
      if (lookahead == '0') ADVANCE(248);
      if (lookahead == '1') ADVANCE(253);
      if (lookahead == '2') ADVANCE(249);
      if (lookahead == ':') ADVANCE(246);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\\') SKIP(212)
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == 'b') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'h') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead == '}') ADVANCE(221);
      if (lookahead == '~') ADVANCE(228);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(215)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(354);
      if (lookahead == '0') ADVANCE(255);
      if (lookahead == '1') ADVANCE(260);
      if (lookahead == '2') ADVANCE(256);
      if (lookahead == ':') ADVANCE(246);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == 'f') ADVANCE(290);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == '~') ADVANCE(228);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(354);
      if (lookahead == '0') ADVANCE(255);
      if (lookahead == '1') ADVANCE(260);
      if (lookahead == '2') ADVANCE(256);
      if (lookahead == ':') ADVANCE(245);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == 'f') ADVANCE(290);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == '~') ADVANCE(228);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '0') ADVANCE(248);
      if (lookahead == '1') ADVANCE(253);
      if (lookahead == '2') ADVANCE(249);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'f') ADVANCE(291);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == 'r') ADVANCE(300);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '}') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '}') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '}') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '}') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == '}') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'b') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '5') ADVANCE(34);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(273);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 38:
      if (lookahead == '2') ADVANCE(33);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(36);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(359);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(362);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(104);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ']') ADVANCE(363);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == ']') ADVANCE(363);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(100);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(46);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == ']') ADVANCE(363);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == ']') ADVANCE(363);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(81);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == ']') ADVANCE(363);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(90);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == ']') ADVANCE(363);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(99);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(124);
      END_STATE();
    case 102:
      if (lookahead == '[') ADVANCE(163);
      END_STATE();
    case 103:
      if (lookahead == ']') ADVANCE(363);
      END_STATE();
    case 104:
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 105:
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 106:
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 107:
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 109:
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 110:
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 111:
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 112:
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 113:
      if (lookahead == ']') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 114:
      if (lookahead == ']') ADVANCE(226);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(153);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'w') ADVANCE(171);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 152:
      if (lookahead == 'j') ADVANCE(140);
      END_STATE();
    case 153:
      if (lookahead == 'j') ADVANCE(150);
      END_STATE();
    case 154:
      if (lookahead == 'j') ADVANCE(147);
      END_STATE();
    case 155:
      if (lookahead == 'k') ADVANCE(235);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(240);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == 'y') ADVANCE(166);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 195:
      if (lookahead == 'v') ADVANCE(133);
      END_STATE();
    case 196:
      if (lookahead == 'v') ADVANCE(143);
      END_STATE();
    case 197:
      if (lookahead == '~') ADVANCE(230);
      END_STATE();
    case 198:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 208:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(356);
      END_STATE();
    case 209:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 210:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 211:
      if (eof) ADVANCE(217);
      if (lookahead == '\n') SKIP(215)
      END_STATE();
    case 212:
      if (eof) ADVANCE(217);
      if (lookahead == '\n') SKIP(215)
      if (lookahead == '\r') SKIP(211)
      END_STATE();
    case 213:
      if (eof) ADVANCE(217);
      if (lookahead == '\n') SKIP(216)
      END_STATE();
    case 214:
      if (eof) ADVANCE(217);
      if (lookahead == '\n') SKIP(216)
      if (lookahead == '\r') SKIP(213)
      END_STATE();
    case 215:
      if (eof) ADVANCE(217);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '0') ADVANCE(248);
      if (lookahead == '1') ADVANCE(253);
      if (lookahead == '2') ADVANCE(249);
      if (lookahead == ':') ADVANCE(246);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\\') SKIP(212)
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == 'b') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'h') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead == '}') ADVANCE(221);
      if (lookahead == '~') ADVANCE(228);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(215)
      END_STATE();
    case 216:
      if (eof) ADVANCE(217);
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == '\\') SKIP(214)
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == 'h') ADVANCE(325);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == '~') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(216)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_http);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_server);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_server);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_location);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_location_at);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '*') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_TILDE_STAR);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_CARET_TILDE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_last);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_redirect);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_permanent);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_pcre_jit);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_upstream);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_events);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_events);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_types);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_types);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '0') ADVANCE(364);
      if (lookahead == '6') ADVANCE(367);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(370);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(265);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '5') ADVANCE(250);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(252);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '_') ADVANCE(352);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '0') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '5') ADVANCE(257);
      if (lookahead == '_') ADVANCE(352);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(259);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '_') ADVANCE(352);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(258);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '_') ADVANCE(352);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '_') ADVANCE(352);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '_') ADVANCE(352);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '5') ADVANCE(270);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(272);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '5') ADVANCE(275);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(277);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(276);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(354);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(354);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(354);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(292);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(354);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(354);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(354);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(324);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(303);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(354);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(354);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(296);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(354);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(295);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(302);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w') ADVANCE(317);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(313);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(354);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '+') ADVANCE(200);
      if (lookahead == '-') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '.') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == '5') ADVANCE(340);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(341);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '.') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(343);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '.') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '.') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '.') ADVANCE(346);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '2') ADVANCE(274);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(278);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '2') ADVANCE(339);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(342);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '2') ADVANCE(347);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(353);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '5') ADVANCE(348);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(349);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_mime_type);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(354);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_mime_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_mime_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_mime_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_mime_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_mime_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_mime_type);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_path_pattern);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_path_literal);
      if (lookahead == '/') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ipv4_address);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ipv4_address);
      if (lookahead == '5') ADVANCE(360);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(361);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ipv4_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(358);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ipv6_address);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_port);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_port);
      if (lookahead == '3') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(369);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_port);
      if (lookahead == '5') ADVANCE(365);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(371);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_port);
      if (lookahead == '5') ADVANCE(366);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(372);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(364);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(373);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 216},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 216},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 216},
  [39] = {.lex_state = 21},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 21},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 25},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 216},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 216},
  [60] = {.lex_state = 27},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 27},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 28},
  [73] = {.lex_state = 28},
  [74] = {.lex_state = 28},
  [75] = {.lex_state = 24},
  [76] = {.lex_state = 24},
  [77] = {.lex_state = 216},
  [78] = {.lex_state = 216},
  [79] = {.lex_state = 216},
  [80] = {.lex_state = 24},
  [81] = {.lex_state = 24},
  [82] = {.lex_state = 216},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 216},
  [85] = {.lex_state = 216},
  [86] = {.lex_state = 216},
  [87] = {.lex_state = 24},
  [88] = {.lex_state = 24},
  [89] = {.lex_state = 24},
  [90] = {.lex_state = 24},
  [91] = {.lex_state = 24},
  [92] = {.lex_state = 216},
  [93] = {.lex_state = 216},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 25},
  [96] = {.lex_state = 26},
  [97] = {.lex_state = 25},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 26},
  [100] = {.lex_state = 25},
  [101] = {.lex_state = 25},
  [102] = {.lex_state = 25},
  [103] = {.lex_state = 25},
  [104] = {.lex_state = 25},
  [105] = {.lex_state = 26},
  [106] = {.lex_state = 26},
  [107] = {.lex_state = 26},
  [108] = {.lex_state = 26},
  [109] = {.lex_state = 27},
  [110] = {.lex_state = 27},
  [111] = {.lex_state = 27},
  [112] = {.lex_state = 27},
  [113] = {.lex_state = 27},
  [114] = {.lex_state = 216},
  [115] = {.lex_state = 28},
  [116] = {.lex_state = 28},
  [117] = {.lex_state = 216},
  [118] = {.lex_state = 28},
  [119] = {.lex_state = 216},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_http] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_server] = ACTIONS(1),
    [anon_sym_location] = ACTIONS(1),
    [sym_location_at] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_TILDE_STAR] = ACTIONS(1),
    [anon_sym_CARET_TILDE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_rewrite] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_last] = ACTIONS(1),
    [anon_sym_redirect] = ACTIONS(1),
    [anon_sym_permanent] = ACTIONS(1),
    [anon_sym_pcre_jit] = ACTIONS(1),
    [anon_sym_upstream] = ACTIONS(1),
    [anon_sym_events] = ACTIONS(1),
    [anon_sym_types] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [aux_sym__string_literal_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_SLASH2] = ACTIONS(1),
    [sym_ipv4_address] = ACTIONS(1),
    [sym_ipv6_address] = ACTIONS(1),
    [sym_port] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_config] = STATE(123),
    [sym__main_directive] = STATE(38),
    [sym_http_directive] = STATE(38),
    [sym_server_directive] = STATE(38),
    [sym_events_directive] = STATE(38),
    [sym_assignment] = STATE(38),
    [sym_dynamic_identifier] = STATE(34),
    [sym_identifier] = STATE(2),
    [aux_sym_config_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_http] = ACTIONS(7),
    [anon_sym_server] = ACTIONS(9),
    [anon_sym_events] = ACTIONS(11),
    [sym__identifier] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_TILDE,
    ACTIONS(21), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_mime_type,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    STATE(19), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    ACTIONS(17), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [59] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      sym_mime_type,
    STATE(22), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    ACTIONS(35), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [118] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(45), 1,
      anon_sym_TILDE,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      sym_mime_type,
    STATE(17), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    ACTIONS(43), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [177] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(53), 1,
      anon_sym_TILDE,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(57), 1,
      sym_mime_type,
    STATE(26), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    ACTIONS(51), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [236] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(61), 1,
      anon_sym_TILDE,
    ACTIONS(63), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      sym_mime_type,
    STATE(13), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    ACTIONS(59), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [295] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(69), 1,
      anon_sym_TILDE,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      sym_mime_type,
    STATE(8), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    ACTIONS(67), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [354] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(75), 1,
      anon_sym_SEMI,
    ACTIONS(77), 1,
      sym_mime_type,
    STATE(10), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [405] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(77), 1,
      sym_mime_type,
    ACTIONS(79), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [456] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    ACTIONS(89), 1,
      aux_sym__string_literal_token1,
    ACTIONS(92), 1,
      sym__identifier,
    ACTIONS(95), 1,
      anon_sym_DOLLAR,
    ACTIONS(98), 1,
      sym_mime_type,
    ACTIONS(101), 1,
      sym_ipv4_address,
    ACTIONS(104), 1,
      sym_ipv6_address,
    STATE(10), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(83), 2,
      sym_number,
      sym_float,
    ACTIONS(86), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [507] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(75), 1,
      anon_sym_SEMI,
    ACTIONS(107), 1,
      sym_mime_type,
    STATE(9), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [558] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(77), 1,
      sym_mime_type,
    ACTIONS(109), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [609] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(77), 1,
      sym_mime_type,
    ACTIONS(111), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [660] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(111), 1,
      anon_sym_SEMI,
    ACTIONS(113), 1,
      sym_mime_type,
    STATE(12), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [711] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(77), 1,
      sym_mime_type,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [762] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(117), 1,
      anon_sym_SEMI,
    ACTIONS(119), 1,
      sym_mime_type,
    STATE(25), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [813] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(77), 1,
      sym_mime_type,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [864] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    ACTIONS(123), 1,
      sym_mime_type,
    STATE(15), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [915] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(77), 1,
      sym_mime_type,
    ACTIONS(117), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [966] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(77), 1,
      sym_mime_type,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [1017] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(77), 1,
      sym_mime_type,
    ACTIONS(127), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [1068] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(77), 1,
      sym_mime_type,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [1119] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    ACTIONS(131), 1,
      sym_mime_type,
    STATE(21), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [1170] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(133), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      sym_mime_type,
    STATE(20), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [1221] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(77), 1,
      sym_mime_type,
    ACTIONS(137), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [1272] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(31), 1,
      sym_ipv4_address,
    ACTIONS(33), 1,
      sym_ipv6_address,
    ACTIONS(77), 1,
      sym_mime_type,
    ACTIONS(133), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      aux_sym_assignment_repeat2,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(40), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [1323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 8,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
      anon_sym_SEMI,
      aux_sym__string_literal_token1,
      anon_sym_DOLLAR,
      sym_ipv6_address,
      sym_port,
    ACTIONS(141), 9,
      anon_sym_TILDE,
      anon_sym_COLON,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym__identifier,
      sym_mime_type,
      sym_ipv4_address,
  [1348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_port,
    ACTIONS(143), 7,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
      anon_sym_SEMI,
      aux_sym__string_literal_token1,
      anon_sym_DOLLAR,
      sym_ipv6_address,
    ACTIONS(145), 9,
      anon_sym_TILDE,
      anon_sym_COLON,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym__identifier,
      sym_mime_type,
      sym_ipv4_address,
  [1375] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    STATE(28), 1,
      sym_ip_address,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(44), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    ACTIONS(33), 2,
      sym_ipv4_address,
      sym_ipv6_address,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [1415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 8,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
      anon_sym_SEMI,
      anon_sym_COLON,
      aux_sym__string_literal_token1,
      anon_sym_DOLLAR,
      sym_ipv6_address,
    ACTIONS(151), 8,
      anon_sym_TILDE,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym__identifier,
      sym_mime_type,
      sym_ipv4_address,
  [1439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 8,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
      anon_sym_SEMI,
      anon_sym_COLON,
      aux_sym__string_literal_token1,
      anon_sym_DOLLAR,
      sym_ipv6_address,
    ACTIONS(155), 8,
      anon_sym_TILDE,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym__identifier,
      sym_mime_type,
      sym_ipv4_address,
  [1463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 8,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
      anon_sym_SEMI,
      anon_sym_COLON,
      aux_sym__string_literal_token1,
      anon_sym_DOLLAR,
      sym_ipv6_address,
    ACTIONS(159), 8,
      anon_sym_TILDE,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym__identifier,
      sym_mime_type,
      sym_ipv4_address,
  [1487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 8,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
      anon_sym_SEMI,
      anon_sym_COLON,
      aux_sym__string_literal_token1,
      anon_sym_DOLLAR,
      sym_ipv6_address,
    ACTIONS(163), 8,
      anon_sym_TILDE,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym__identifier,
      sym_mime_type,
      sym_ipv4_address,
  [1511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 8,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
      anon_sym_SEMI,
      anon_sym_COLON,
      aux_sym__string_literal_token1,
      anon_sym_DOLLAR,
      sym_ipv6_address,
    ACTIONS(167), 8,
      anon_sym_TILDE,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym__identifier,
      sym_mime_type,
      sym_ipv4_address,
  [1535] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    STATE(28), 1,
      sym_ip_address,
    STATE(30), 1,
      sym_const_value,
    STATE(34), 1,
      sym_dynamic_identifier,
    ACTIONS(23), 2,
      sym_number,
      sym_float,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    ACTIONS(33), 2,
      sym_ipv4_address,
      sym_ipv6_address,
    STATE(32), 4,
      sym_boolean,
      sym__string_literal,
      sym_identifier,
      sym_address,
  [1575] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      anon_sym_http,
    ACTIONS(174), 1,
      anon_sym_server,
    ACTIONS(177), 1,
      anon_sym_events,
    ACTIONS(180), 1,
      sym__identifier,
    ACTIONS(183), 1,
      anon_sym_DOLLAR,
    STATE(2), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(36), 6,
      sym__main_directive,
      sym_http_directive,
      sym_server_directive,
      sym_events_directive,
      sym_assignment,
      aux_sym_config_repeat1,
  [1611] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(186), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(81), 4,
      anon_sym_SEMI,
      aux_sym__string_literal_token1,
      anon_sym_DOLLAR,
      sym_ipv6_address,
    ACTIONS(188), 7,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym__identifier,
      sym_mime_type,
      sym_ipv4_address,
  [1637] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_http,
    ACTIONS(9), 1,
      anon_sym_server,
    ACTIONS(11), 1,
      anon_sym_events,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(36), 6,
      sym__main_directive,
      sym_http_directive,
      sym_server_directive,
      sym_events_directive,
      sym_assignment,
      aux_sym_config_repeat1,
  [1673] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(192), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(195), 4,
      anon_sym_SEMI,
      aux_sym__string_literal_token1,
      anon_sym_DOLLAR,
      sym_ipv6_address,
    ACTIONS(197), 7,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym__identifier,
      sym_mime_type,
      sym_ipv4_address,
  [1699] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(186), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(199), 4,
      anon_sym_SEMI,
      aux_sym__string_literal_token1,
      anon_sym_DOLLAR,
      sym_ipv6_address,
    ACTIONS(201), 7,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym__identifier,
      sym_mime_type,
      sym_ipv4_address,
  [1725] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 1,
      anon_sym_location,
    ACTIONS(208), 1,
      anon_sym_rewrite,
    ACTIONS(211), 1,
      anon_sym_types,
    ACTIONS(214), 1,
      sym__identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(5), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(41), 5,
      sym_location_directive,
      sym_rewrite_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_location_directive_repeat1,
  [1760] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    ACTIONS(222), 1,
      anon_sym_location,
    ACTIONS(224), 1,
      anon_sym_rewrite,
    ACTIONS(226), 1,
      anon_sym_types,
    STATE(5), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(41), 5,
      sym_location_directive,
      sym_rewrite_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_location_directive_repeat1,
  [1795] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_location,
    ACTIONS(224), 1,
      anon_sym_rewrite,
    ACTIONS(226), 1,
      anon_sym_types,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(42), 5,
      sym_location_directive,
      sym_rewrite_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_location_directive_repeat1,
  [1830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_COLON,
      aux_sym__string_literal_token1,
      anon_sym_DOLLAR,
      sym_ipv6_address,
    ACTIONS(197), 7,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym__identifier,
      sym_mime_type,
      sym_ipv4_address,
  [1851] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_location,
    ACTIONS(224), 1,
      anon_sym_rewrite,
    ACTIONS(226), 1,
      anon_sym_types,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(46), 5,
      sym_location_directive,
      sym_rewrite_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_location_directive_repeat1,
  [1886] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_location,
    ACTIONS(224), 1,
      anon_sym_rewrite,
    ACTIONS(226), 1,
      anon_sym_types,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(41), 5,
      sym_location_directive,
      sym_rewrite_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_location_directive_repeat1,
  [1921] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    ACTIONS(236), 1,
      anon_sym_server,
    ACTIONS(239), 1,
      anon_sym_types,
    ACTIONS(242), 1,
      sym__identifier,
    ACTIONS(245), 1,
      anon_sym_DOLLAR,
    STATE(3), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(47), 4,
      sym_server_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_http_directive_repeat1,
  [1952] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    ACTIONS(250), 1,
      anon_sym_location,
    ACTIONS(253), 1,
      anon_sym_types,
    ACTIONS(256), 1,
      sym__identifier,
    ACTIONS(259), 1,
      anon_sym_DOLLAR,
    STATE(4), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(48), 4,
      sym_location_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_server_directive_repeat1,
  [1983] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(264), 1,
      anon_sym_location,
    ACTIONS(266), 1,
      anon_sym_types,
    STATE(4), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(48), 4,
      sym_location_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_server_directive_repeat1,
  [2014] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 1,
      anon_sym_server,
    ACTIONS(272), 1,
      anon_sym_types,
    STATE(3), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(54), 4,
      sym_server_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_http_directive_repeat1,
  [2045] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(264), 1,
      anon_sym_location,
    ACTIONS(266), 1,
      anon_sym_types,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(49), 4,
      sym_location_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_server_directive_repeat1,
  [2076] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(264), 1,
      anon_sym_location,
    ACTIONS(266), 1,
      anon_sym_types,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(48), 4,
      sym_location_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_server_directive_repeat1,
  [2107] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(264), 1,
      anon_sym_location,
    ACTIONS(266), 1,
      anon_sym_types,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(52), 4,
      sym_location_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_server_directive_repeat1,
  [2138] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      anon_sym_server,
    ACTIONS(272), 1,
      anon_sym_types,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(47), 4,
      sym_server_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_http_directive_repeat1,
  [2169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_path_literal,
    ACTIONS(282), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_break,
      anon_sym_last,
      anon_sym_redirect,
      anon_sym_permanent,
      anon_sym_pcre_jit,
      sym_path_pattern,
  [2186] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_location_at,
    ACTIONS(290), 1,
      anon_sym_TILDE,
    ACTIONS(292), 1,
      sym_path_pattern,
    ACTIONS(294), 1,
      sym_path_literal,
    STATE(125), 1,
      sym_path,
    STATE(130), 1,
      sym_location_path,
    ACTIONS(288), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
  [2213] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    ACTIONS(298), 1,
      anon_sym_types,
    STATE(7), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(60), 3,
      sym_types_directive,
      sym_assignment,
      aux_sym_types_directive_repeat1,
  [2240] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      anon_sym_types,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(60), 3,
      sym_types_directive,
      sym_assignment,
      aux_sym_types_directive_repeat1,
  [2267] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_TILDE,
    ACTIONS(292), 1,
      sym_path_pattern,
    ACTIONS(294), 1,
      sym_path_literal,
    ACTIONS(302), 1,
      sym_location_at,
    STATE(125), 1,
      sym_path,
    STATE(133), 1,
      sym_location_path,
    ACTIONS(288), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
  [2294] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 1,
      anon_sym_types,
    ACTIONS(309), 1,
      sym__identifier,
    ACTIONS(312), 1,
      anon_sym_DOLLAR,
    STATE(7), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(60), 3,
      sym_types_directive,
      sym_assignment,
      aux_sym_types_directive_repeat1,
  [2321] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      anon_sym_types,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(60), 3,
      sym_types_directive,
      sym_assignment,
      aux_sym_types_directive_repeat1,
  [2348] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      anon_sym_types,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(60), 3,
      sym_types_directive,
      sym_assignment,
      aux_sym_types_directive_repeat1,
  [2375] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      anon_sym_types,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(61), 3,
      sym_types_directive,
      sym_assignment,
      aux_sym_types_directive_repeat1,
  [2402] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      anon_sym_types,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(58), 3,
      sym_types_directive,
      sym_assignment,
      aux_sym_types_directive_repeat1,
  [2429] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      anon_sym_types,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(57), 3,
      sym_types_directive,
      sym_assignment,
      aux_sym_types_directive_repeat1,
  [2456] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      anon_sym_types,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(62), 3,
      sym_types_directive,
      sym_assignment,
      aux_sym_types_directive_repeat1,
  [2483] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      sym_rewrite_flag,
    STATE(122), 1,
      sym_rewrite_flags,
    ACTIONS(329), 5,
      anon_sym_break,
      anon_sym_last,
      anon_sym_redirect,
      anon_sym_permanent,
      anon_sym_pcre_jit,
  [2503] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    STATE(69), 1,
      aux_sym_rewrite_flags_repeat1,
    STATE(71), 1,
      sym_rewrite_flag,
    ACTIONS(329), 5,
      anon_sym_break,
      anon_sym_last,
      anon_sym_redirect,
      anon_sym_permanent,
      anon_sym_pcre_jit,
  [2523] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      aux_sym_rewrite_flags_repeat1,
    STATE(71), 1,
      sym_rewrite_flag,
    ACTIONS(329), 5,
      anon_sym_break,
      anon_sym_last,
      anon_sym_redirect,
      anon_sym_permanent,
      anon_sym_pcre_jit,
  [2543] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      aux_sym_rewrite_flags_repeat1,
    STATE(71), 1,
      sym_rewrite_flag,
    ACTIONS(337), 5,
      anon_sym_break,
      anon_sym_last,
      anon_sym_redirect,
      anon_sym_permanent,
      anon_sym_pcre_jit,
  [2563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym_rewrite_flag,
    ACTIONS(342), 5,
      anon_sym_break,
      anon_sym_last,
      anon_sym_redirect,
      anon_sym_permanent,
      anon_sym_pcre_jit,
  [2580] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(73), 2,
      sym_assignment,
      aux_sym_upstream_directive_repeat1,
  [2603] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(351), 1,
      sym__identifier,
    ACTIONS(354), 1,
      anon_sym_DOLLAR,
    STATE(6), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(73), 2,
      sym_assignment,
      aux_sym_upstream_directive_repeat1,
  [2626] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(347), 1,
      sym__identifier,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_identifier,
    STATE(34), 1,
      sym_dynamic_identifier,
    STATE(72), 2,
      sym_assignment,
      aux_sym_upstream_directive_repeat1,
  [2649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(361), 4,
      anon_sym_location,
      anon_sym_rewrite,
      anon_sym_types,
      sym__identifier,
  [2663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(365), 4,
      anon_sym_location,
      anon_sym_rewrite,
      anon_sym_types,
      sym__identifier,
  [2677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(369), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym__identifier,
  [2691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(373), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym__identifier,
  [2705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(377), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym__identifier,
  [2719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(381), 4,
      anon_sym_location,
      anon_sym_rewrite,
      anon_sym_types,
      sym__identifier,
  [2733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(385), 4,
      anon_sym_location,
      anon_sym_rewrite,
      anon_sym_types,
      sym__identifier,
  [2747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(389), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym__identifier,
  [2761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 6,
      anon_sym_SEMI,
      anon_sym_break,
      anon_sym_last,
      anon_sym_redirect,
      anon_sym_permanent,
      anon_sym_pcre_jit,
  [2773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(393), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym__identifier,
  [2787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(397), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym__identifier,
  [2801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(401), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym__identifier,
  [2815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(405), 4,
      anon_sym_location,
      anon_sym_rewrite,
      anon_sym_types,
      sym__identifier,
  [2829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(409), 4,
      anon_sym_location,
      anon_sym_rewrite,
      anon_sym_types,
      sym__identifier,
  [2843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(373), 4,
      anon_sym_location,
      anon_sym_rewrite,
      anon_sym_types,
      sym__identifier,
  [2857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(413), 4,
      anon_sym_location,
      anon_sym_rewrite,
      anon_sym_types,
      sym__identifier,
  [2871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(377), 4,
      anon_sym_location,
      anon_sym_rewrite,
      anon_sym_types,
      sym__identifier,
  [2885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(413), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym__identifier,
  [2899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(417), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym__identifier,
  [2913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 6,
      anon_sym_SEMI,
      anon_sym_break,
      anon_sym_last,
      anon_sym_redirect,
      anon_sym_permanent,
      anon_sym_pcre_jit,
  [2925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(409), 3,
      anon_sym_server,
      anon_sym_types,
      sym__identifier,
  [2938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(373), 3,
      anon_sym_location,
      anon_sym_types,
      sym__identifier,
  [2951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(405), 3,
      anon_sym_server,
      anon_sym_types,
      sym__identifier,
  [2964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(361), 3,
      anon_sym_location,
      anon_sym_types,
      sym__identifier,
  [2977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(385), 3,
      anon_sym_location,
      anon_sym_types,
      sym__identifier,
  [2990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(373), 3,
      anon_sym_server,
      anon_sym_types,
      sym__identifier,
  [3003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(417), 3,
      anon_sym_server,
      anon_sym_types,
      sym__identifier,
  [3016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(413), 3,
      anon_sym_server,
      anon_sym_types,
      sym__identifier,
  [3029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(397), 3,
      anon_sym_server,
      anon_sym_types,
      sym__identifier,
  [3042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(377), 3,
      anon_sym_server,
      anon_sym_types,
      sym__identifier,
  [3055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(405), 3,
      anon_sym_location,
      anon_sym_types,
      sym__identifier,
  [3068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(409), 3,
      anon_sym_location,
      anon_sym_types,
      sym__identifier,
  [3081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(377), 3,
      anon_sym_location,
      anon_sym_types,
      sym__identifier,
  [3094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(413), 3,
      anon_sym_location,
      anon_sym_types,
      sym__identifier,
  [3107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(409), 2,
      anon_sym_types,
      sym__identifier,
  [3119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(373), 2,
      anon_sym_types,
      sym__identifier,
  [3131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(377), 2,
      anon_sym_types,
      sym__identifier,
  [3143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(405), 2,
      anon_sym_types,
      sym__identifier,
  [3155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
    ACTIONS(413), 2,
      anon_sym_types,
      sym__identifier,
  [3167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_path_pattern,
    ACTIONS(294), 1,
      sym_path_literal,
    STATE(119), 1,
      sym_path,
  [3180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 3,
      anon_sym_RBRACE,
      sym__identifier,
      anon_sym_DOLLAR,
  [3189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 3,
      anon_sym_RBRACE,
      sym__identifier,
      anon_sym_DOLLAR,
  [3198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_path_pattern,
    ACTIONS(294), 1,
      sym_path_literal,
    STATE(120), 1,
      sym_path,
  [3211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 3,
      anon_sym_RBRACE,
      sym__identifier,
      anon_sym_DOLLAR,
  [3220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_path_pattern,
    ACTIONS(294), 1,
      sym_path_literal,
    STATE(67), 1,
      sym_path,
  [3233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_LBRACE,
  [3240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
  [3247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_SEMI,
  [3254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
  [3261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
  [3268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
  [3275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LBRACE,
  [3282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
  [3289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
  [3296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
  [3303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
  [3310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
  [3317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
  [3324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 236,
  [SMALL_STATE(7)] = 295,
  [SMALL_STATE(8)] = 354,
  [SMALL_STATE(9)] = 405,
  [SMALL_STATE(10)] = 456,
  [SMALL_STATE(11)] = 507,
  [SMALL_STATE(12)] = 558,
  [SMALL_STATE(13)] = 609,
  [SMALL_STATE(14)] = 660,
  [SMALL_STATE(15)] = 711,
  [SMALL_STATE(16)] = 762,
  [SMALL_STATE(17)] = 813,
  [SMALL_STATE(18)] = 864,
  [SMALL_STATE(19)] = 915,
  [SMALL_STATE(20)] = 966,
  [SMALL_STATE(21)] = 1017,
  [SMALL_STATE(22)] = 1068,
  [SMALL_STATE(23)] = 1119,
  [SMALL_STATE(24)] = 1170,
  [SMALL_STATE(25)] = 1221,
  [SMALL_STATE(26)] = 1272,
  [SMALL_STATE(27)] = 1323,
  [SMALL_STATE(28)] = 1348,
  [SMALL_STATE(29)] = 1375,
  [SMALL_STATE(30)] = 1415,
  [SMALL_STATE(31)] = 1439,
  [SMALL_STATE(32)] = 1463,
  [SMALL_STATE(33)] = 1487,
  [SMALL_STATE(34)] = 1511,
  [SMALL_STATE(35)] = 1535,
  [SMALL_STATE(36)] = 1575,
  [SMALL_STATE(37)] = 1611,
  [SMALL_STATE(38)] = 1637,
  [SMALL_STATE(39)] = 1673,
  [SMALL_STATE(40)] = 1699,
  [SMALL_STATE(41)] = 1725,
  [SMALL_STATE(42)] = 1760,
  [SMALL_STATE(43)] = 1795,
  [SMALL_STATE(44)] = 1830,
  [SMALL_STATE(45)] = 1851,
  [SMALL_STATE(46)] = 1886,
  [SMALL_STATE(47)] = 1921,
  [SMALL_STATE(48)] = 1952,
  [SMALL_STATE(49)] = 1983,
  [SMALL_STATE(50)] = 2014,
  [SMALL_STATE(51)] = 2045,
  [SMALL_STATE(52)] = 2076,
  [SMALL_STATE(53)] = 2107,
  [SMALL_STATE(54)] = 2138,
  [SMALL_STATE(55)] = 2169,
  [SMALL_STATE(56)] = 2186,
  [SMALL_STATE(57)] = 2213,
  [SMALL_STATE(58)] = 2240,
  [SMALL_STATE(59)] = 2267,
  [SMALL_STATE(60)] = 2294,
  [SMALL_STATE(61)] = 2321,
  [SMALL_STATE(62)] = 2348,
  [SMALL_STATE(63)] = 2375,
  [SMALL_STATE(64)] = 2402,
  [SMALL_STATE(65)] = 2429,
  [SMALL_STATE(66)] = 2456,
  [SMALL_STATE(67)] = 2483,
  [SMALL_STATE(68)] = 2503,
  [SMALL_STATE(69)] = 2523,
  [SMALL_STATE(70)] = 2543,
  [SMALL_STATE(71)] = 2563,
  [SMALL_STATE(72)] = 2580,
  [SMALL_STATE(73)] = 2603,
  [SMALL_STATE(74)] = 2626,
  [SMALL_STATE(75)] = 2649,
  [SMALL_STATE(76)] = 2663,
  [SMALL_STATE(77)] = 2677,
  [SMALL_STATE(78)] = 2691,
  [SMALL_STATE(79)] = 2705,
  [SMALL_STATE(80)] = 2719,
  [SMALL_STATE(81)] = 2733,
  [SMALL_STATE(82)] = 2747,
  [SMALL_STATE(83)] = 2761,
  [SMALL_STATE(84)] = 2773,
  [SMALL_STATE(85)] = 2787,
  [SMALL_STATE(86)] = 2801,
  [SMALL_STATE(87)] = 2815,
  [SMALL_STATE(88)] = 2829,
  [SMALL_STATE(89)] = 2843,
  [SMALL_STATE(90)] = 2857,
  [SMALL_STATE(91)] = 2871,
  [SMALL_STATE(92)] = 2885,
  [SMALL_STATE(93)] = 2899,
  [SMALL_STATE(94)] = 2913,
  [SMALL_STATE(95)] = 2925,
  [SMALL_STATE(96)] = 2938,
  [SMALL_STATE(97)] = 2951,
  [SMALL_STATE(98)] = 2964,
  [SMALL_STATE(99)] = 2977,
  [SMALL_STATE(100)] = 2990,
  [SMALL_STATE(101)] = 3003,
  [SMALL_STATE(102)] = 3016,
  [SMALL_STATE(103)] = 3029,
  [SMALL_STATE(104)] = 3042,
  [SMALL_STATE(105)] = 3055,
  [SMALL_STATE(106)] = 3068,
  [SMALL_STATE(107)] = 3081,
  [SMALL_STATE(108)] = 3094,
  [SMALL_STATE(109)] = 3107,
  [SMALL_STATE(110)] = 3119,
  [SMALL_STATE(111)] = 3131,
  [SMALL_STATE(112)] = 3143,
  [SMALL_STATE(113)] = 3155,
  [SMALL_STATE(114)] = 3167,
  [SMALL_STATE(115)] = 3180,
  [SMALL_STATE(116)] = 3189,
  [SMALL_STATE(117)] = 3198,
  [SMALL_STATE(118)] = 3211,
  [SMALL_STATE(119)] = 3220,
  [SMALL_STATE(120)] = 3233,
  [SMALL_STATE(121)] = 3240,
  [SMALL_STATE(122)] = 3247,
  [SMALL_STATE(123)] = 3254,
  [SMALL_STATE(124)] = 3261,
  [SMALL_STATE(125)] = 3268,
  [SMALL_STATE(126)] = 3275,
  [SMALL_STATE(127)] = 3282,
  [SMALL_STATE(128)] = 3289,
  [SMALL_STATE(129)] = 3296,
  [SMALL_STATE(130)] = 3303,
  [SMALL_STATE(131)] = 3310,
  [SMALL_STATE(132)] = 3317,
  [SMALL_STATE(133)] = 3324,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat2, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_repeat2, 2), SHIFT_REPEAT(32),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_repeat2, 2), SHIFT_REPEAT(31),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat2, 2), SHIFT_REPEAT(32),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_repeat2, 2), SHIFT_REPEAT(34),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat2, 2), SHIFT_REPEAT(35),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_repeat2, 2), SHIFT_REPEAT(10),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_repeat2, 2), SHIFT_REPEAT(27),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat2, 2), SHIFT_REPEAT(27),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_address, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ip_address, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_identifier, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_identifier, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_value, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_value, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(124),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(127),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(126),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(34),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(35),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_repeat2, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(29),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat2, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_repeat2, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_location_directive_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_location_directive_repeat1, 2), SHIFT_REPEAT(56),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_location_directive_repeat1, 2), SHIFT_REPEAT(114),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_location_directive_repeat1, 2), SHIFT_REPEAT(132),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_location_directive_repeat1, 2), SHIFT_REPEAT(34),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_location_directive_repeat1, 2), SHIFT_REPEAT(35),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_http_directive_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_http_directive_repeat1, 2), SHIFT_REPEAT(128),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_http_directive_repeat1, 2), SHIFT_REPEAT(121),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_http_directive_repeat1, 2), SHIFT_REPEAT(34),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_directive_repeat1, 2), SHIFT_REPEAT(35),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_server_directive_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_server_directive_repeat1, 2), SHIFT_REPEAT(59),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_server_directive_repeat1, 2), SHIFT_REPEAT(129),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_server_directive_repeat1, 2), SHIFT_REPEAT(34),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_server_directive_repeat1, 2), SHIFT_REPEAT(35),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_types_directive_repeat1, 2),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_types_directive_repeat1, 2), SHIFT_REPEAT(131),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_types_directive_repeat1, 2), SHIFT_REPEAT(34),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_types_directive_repeat1, 2), SHIFT_REPEAT(35),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rewrite_flags, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rewrite_flags, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rewrite_flags_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rewrite_flags_repeat1, 2), SHIFT_REPEAT(94),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rewrite_flags_repeat1, 1),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rewrite_flags_repeat1, 1), SHIFT_REPEAT(94),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_upstream_directive_repeat1, 2),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_upstream_directive_repeat1, 2), SHIFT_REPEAT(34),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_upstream_directive_repeat1, 2), SHIFT_REPEAT(35),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location_directive, 4),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location_directive, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rewrite_directive, 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rewrite_directive, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_events_directive, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_events_directive, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rewrite_directive, 5),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rewrite_directive, 5),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location_directive, 5),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location_directive, 5),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_directive, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http_directive, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_events_directive, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_events_directive, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_server_directive, 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_server_directive, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_directive, 4),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http_directive, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_types_directive, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_types_directive, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_types_directive, 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_types_directive, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_server_directive, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_server_directive, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rewrite_flag, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location_path, 2, .production_id = 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [427] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location_path, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nginx(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
