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
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 2
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

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
  anon_sym_upstream = 12,
  anon_sym_events = 13,
  anon_sym_types = 14,
  anon_sym_COLON = 15,
  anon_sym_SEMI = 16,
  sym_number = 17,
  sym_float = 18,
  sym_true = 19,
  sym_false = 20,
  aux_sym__string_literal_token1 = 21,
  sym_identifier = 22,
  sym_mime_type = 23,
  sym_path_regex = 24,
  sym_path_literal = 25,
  sym_ipv6_address = 26,
  sym_comment = 27,
  sym_config = 28,
  sym__main_directive = 29,
  sym_http_directive = 30,
  sym_server_directive = 31,
  sym_location_directive = 32,
  sym_location_path = 33,
  sym__location_path_literal = 34,
  sym_events_directive = 35,
  sym_types_directive = 36,
  sym_assignment = 37,
  sym_const_value = 38,
  sym_boolean = 39,
  sym__string_literal = 40,
  sym_ip_address = 41,
  aux_sym_config_repeat1 = 42,
  aux_sym_http_directive_repeat1 = 43,
  aux_sym_server_directive_repeat1 = 44,
  aux_sym_upstream_directive_repeat1 = 45,
  aux_sym_types_directive_repeat1 = 46,
  aux_sym_assignment_repeat1 = 47,
  aux_sym_assignment_repeat2 = 48,
  alias_sym_location_path_modifier = 49,
  alias_sym_location_path_regex = 50,
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
  [anon_sym_upstream] = "upstream",
  [anon_sym_events] = "events",
  [anon_sym_types] = "types",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [sym_number] = "number",
  [sym_float] = "float",
  [sym_true] = "true",
  [sym_false] = "false",
  [aux_sym__string_literal_token1] = "string_literal",
  [sym_identifier] = "identifier",
  [sym_mime_type] = "mime_type",
  [sym_path_regex] = "path_regex",
  [sym_path_literal] = "path_literal",
  [sym_ipv6_address] = "ipv6_address",
  [sym_comment] = "comment",
  [sym_config] = "config",
  [sym__main_directive] = "_main_directive",
  [sym_http_directive] = "http_directive",
  [sym_server_directive] = "server_directive",
  [sym_location_directive] = "location_directive",
  [sym_location_path] = "location_path",
  [sym__location_path_literal] = "_location_path_literal",
  [sym_events_directive] = "events_directive",
  [sym_types_directive] = "types_directive",
  [sym_assignment] = "assignment",
  [sym_const_value] = "const_value",
  [sym_boolean] = "boolean",
  [sym__string_literal] = "_string_literal",
  [sym_ip_address] = "ip_address",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_http_directive_repeat1] = "http_directive_repeat1",
  [aux_sym_server_directive_repeat1] = "server_directive_repeat1",
  [aux_sym_upstream_directive_repeat1] = "upstream_directive_repeat1",
  [aux_sym_types_directive_repeat1] = "types_directive_repeat1",
  [aux_sym_assignment_repeat1] = "assignment_repeat1",
  [aux_sym_assignment_repeat2] = "assignment_repeat2",
  [alias_sym_location_path_modifier] = "location_path_modifier",
  [alias_sym_location_path_regex] = "location_path_regex",
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
  [anon_sym_upstream] = anon_sym_upstream,
  [anon_sym_events] = anon_sym_events,
  [anon_sym_types] = anon_sym_types,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [aux_sym__string_literal_token1] = aux_sym__string_literal_token1,
  [sym_identifier] = sym_identifier,
  [sym_mime_type] = sym_mime_type,
  [sym_path_regex] = sym_path_regex,
  [sym_path_literal] = sym_path_literal,
  [sym_ipv6_address] = sym_ipv6_address,
  [sym_comment] = sym_comment,
  [sym_config] = sym_config,
  [sym__main_directive] = sym__main_directive,
  [sym_http_directive] = sym_http_directive,
  [sym_server_directive] = sym_server_directive,
  [sym_location_directive] = sym_location_directive,
  [sym_location_path] = sym_location_path,
  [sym__location_path_literal] = sym__location_path_literal,
  [sym_events_directive] = sym_events_directive,
  [sym_types_directive] = sym_types_directive,
  [sym_assignment] = sym_assignment,
  [sym_const_value] = sym_const_value,
  [sym_boolean] = sym_boolean,
  [sym__string_literal] = sym__string_literal,
  [sym_ip_address] = sym_ip_address,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_http_directive_repeat1] = aux_sym_http_directive_repeat1,
  [aux_sym_server_directive_repeat1] = aux_sym_server_directive_repeat1,
  [aux_sym_upstream_directive_repeat1] = aux_sym_upstream_directive_repeat1,
  [aux_sym_types_directive_repeat1] = aux_sym_types_directive_repeat1,
  [aux_sym_assignment_repeat1] = aux_sym_assignment_repeat1,
  [aux_sym_assignment_repeat2] = aux_sym_assignment_repeat2,
  [alias_sym_location_path_modifier] = alias_sym_location_path_modifier,
  [alias_sym_location_path_regex] = alias_sym_location_path_regex,
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
  [anon_sym_SEMI] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_mime_type] = {
    .visible = true,
    .named = true,
  },
  [sym_path_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_path_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_ipv6_address] = {
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
  [sym__location_path_literal] = {
    .visible = false,
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
  [sym_ip_address] = {
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
  [alias_sym_location_path_regex] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_location_path_regex,
  },
  [2] = {
    [0] = alias_sym_location_path_modifier,
    [1] = alias_sym_location_path_regex,
  },
  [3] = {
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
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 7,
  [12] = 10,
  [13] = 8,
  [14] = 10,
  [15] = 7,
  [16] = 16,
  [17] = 7,
  [18] = 8,
  [19] = 7,
  [20] = 10,
  [21] = 10,
  [22] = 8,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 34,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 44,
  [46] = 46,
  [47] = 47,
  [48] = 46,
  [49] = 44,
  [50] = 46,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 57,
  [61] = 61,
  [62] = 62,
  [63] = 52,
  [64] = 57,
  [65] = 53,
  [66] = 66,
  [67] = 52,
  [68] = 68,
  [69] = 69,
  [70] = 69,
  [71] = 55,
  [72] = 51,
  [73] = 53,
  [74] = 74,
  [75] = 62,
  [76] = 76,
  [77] = 77,
  [78] = 69,
  [79] = 62,
  [80] = 53,
  [81] = 57,
  [82] = 52,
  [83] = 53,
  [84] = 52,
  [85] = 57,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 95,
  [97] = 90,
  [98] = 90,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(169);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '0') ADVANCE(191);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == ';') ADVANCE(190);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == '\\') SKIP(165)
      if (lookahead == '^') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'h') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(130);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == '~') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(293);
      if (lookahead == '0') ADVANCE(197);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == ';') ADVANCE(190);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 't') ADVANCE(264);
      if (lookahead == '~') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(240);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '0') ADVANCE(191);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'f') ADVANCE(235);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(244);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(162);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == 't') ADVANCE(279);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 's') ADVANCE(248);
      if (lookahead == 't') ADVANCE(279);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 't') ADVANCE(279);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '}') ADVANCE(173);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 21:
      if (lookahead == '%') ADVANCE(161);
      END_STATE();
    case 22:
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 23:
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 26:
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 36:
      if (lookahead == '%') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '%') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      END_STATE();
    case 38:
      if (lookahead == '%') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == '%') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '5') ADVANCE(44);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '5') ADVANCE(49);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == '0') ADVANCE(321);
      if (lookahead == '1') ADVANCE(355);
      if (lookahead == '2') ADVANCE(327);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 53:
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == ':') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == '1') ADVANCE(396);
      if (lookahead == '2') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 55:
      if (lookahead == '1') ADVANCE(51);
      if (lookahead == '2') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '2') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 57:
      if (lookahead == '1') ADVANCE(349);
      if (lookahead == '2') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      END_STATE();
    case 58:
      if (lookahead == '8') ADVANCE(53);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(359);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(22);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(399);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(60);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'v') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(91);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(101);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 103:
      if (lookahead == '[') ADVANCE(128);
      END_STATE();
    case 104:
      if (lookahead == ']') ADVANCE(178);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 107:
      if (lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 108:
      if (lookahead == 'b') ADVANCE(123);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 122:
      if (lookahead == 'j') ADVANCE(116);
      END_STATE();
    case 123:
      if (lookahead == 'j') ADVANCE(120);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 149:
      if (lookahead == 'v') ADVANCE(118);
      END_STATE();
    case 150:
      if (lookahead == '~') ADVANCE(182);
      END_STATE();
    case 151:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(399);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 162:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 163:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 164:
      if (eof) ADVANCE(169);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 165:
      if (eof) ADVANCE(169);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(164)
      END_STATE();
    case 166:
      if (eof) ADVANCE(169);
      if (lookahead == '\n') SKIP(168)
      END_STATE();
    case 167:
      if (eof) ADVANCE(169);
      if (lookahead == '\n') SKIP(168)
      if (lookahead == '\r') SKIP(166)
      END_STATE();
    case 168:
      if (eof) ADVANCE(169);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '\\') SKIP(167)
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'h') ADVANCE(274);
      if (lookahead == 's') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(168)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_http);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_server);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_server);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_location);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_location_at);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '*') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_TILDE_STAR);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_CARET_TILDE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(295);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_upstream);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_events);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_events);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_types);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_types);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(359);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '0') ADVANCE(207);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '_') ADVANCE(291);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '_') ADVANCE(291);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '_') ADVANCE(291);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '_') ADVANCE(291);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '_') ADVANCE(291);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(232);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead == ':') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(228);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(229);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(246);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(171);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(255);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(253);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(252);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(249);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(254);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(262);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(293);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == '-') ADVANCE(292);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == '-') ADVANCE(292);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == '-') ADVANCE(292);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == '-') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '.') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == ':') ADVANCE(60);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_mime_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_mime_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_mime_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_mime_type);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_path_regex);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_path_literal);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ipv6_address);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '5') ADVANCE(298);
      if (lookahead == ':') ADVANCE(33);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(302);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == '1') ADVANCE(301);
      if (lookahead == '2') ADVANCE(297);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(37);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(33);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(25);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(155);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == ':') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '0') ADVANCE(322);
      if (lookahead == ':') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '0') ADVANCE(358);
      if (lookahead == ':') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '5') ADVANCE(328);
      if (lookahead == ':') ADVANCE(160);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '5') ADVANCE(334);
      if (lookahead == ':') ADVANCE(155);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '5') ADVANCE(340);
      if (lookahead == ':') ADVANCE(156);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '5') ADVANCE(346);
      if (lookahead == ':') ADVANCE(158);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(388);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '5') ADVANCE(352);
      if (lookahead == ':') ADVANCE(159);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(332);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(338);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(344);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(350);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(388);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(388);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(356);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(390);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '0') ADVANCE(373);
      if (lookahead == ':') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(390);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '1') ADVANCE(331);
      if (lookahead == '2') ADVANCE(323);
      if (lookahead == 'f') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(371);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '1') ADVANCE(337);
      if (lookahead == '2') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '1') ADVANCE(343);
      if (lookahead == '2') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '1') ADVANCE(349);
      if (lookahead == '2') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '1') ADVANCE(355);
      if (lookahead == '2') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == '5') ADVANCE(394);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(395);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(160);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'f') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(369);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'f') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(365);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'f') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(370);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(52);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(57);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(157);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(374);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(375);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(155);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(156);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(158);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(388);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(159);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(390);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (lookahead == ':') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(296);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(398);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(399);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(402);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 168},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 168},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 168},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 168},
  [52] = {.lex_state = 168},
  [53] = {.lex_state = 168},
  [54] = {.lex_state = 168},
  [55] = {.lex_state = 168},
  [56] = {.lex_state = 168},
  [57] = {.lex_state = 168},
  [58] = {.lex_state = 168},
  [59] = {.lex_state = 168},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 17},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 17},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
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
    [anon_sym_upstream] = ACTIONS(1),
    [anon_sym_events] = ACTIONS(1),
    [anon_sym_types] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [aux_sym__string_literal_token1] = ACTIONS(1),
    [sym_path_regex] = ACTIONS(1),
    [sym_path_literal] = ACTIONS(1),
    [sym_ipv6_address] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_config] = STATE(93),
    [sym__main_directive] = STATE(26),
    [sym_http_directive] = STATE(26),
    [sym_server_directive] = STATE(26),
    [sym_events_directive] = STATE(26),
    [sym_assignment] = STATE(26),
    [aux_sym_config_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_http] = ACTIONS(7),
    [anon_sym_server] = ACTIONS(9),
    [anon_sym_events] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(19), 1,
      anon_sym_SEMI,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(27), 1,
      sym_mime_type,
    ACTIONS(29), 1,
      sym_ipv6_address,
    STATE(13), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(15), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [44] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      sym_mime_type,
    STATE(8), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    ACTIONS(31), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [88] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(41), 1,
      anon_sym_TILDE,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      sym_mime_type,
    STATE(22), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    ACTIONS(39), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [132] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(49), 1,
      anon_sym_TILDE,
    ACTIONS(51), 1,
      anon_sym_SEMI,
    ACTIONS(53), 1,
      sym_mime_type,
    STATE(18), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    ACTIONS(47), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [176] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(57), 1,
      anon_sym_TILDE,
    ACTIONS(59), 1,
      anon_sym_SEMI,
    ACTIONS(61), 1,
      sym_mime_type,
    STATE(9), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    ACTIONS(55), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [220] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(63), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      sym_mime_type,
    STATE(16), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [256] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(65), 1,
      sym_mime_type,
    ACTIONS(67), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [292] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(65), 1,
      sym_mime_type,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [328] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      sym_mime_type,
    STATE(19), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [364] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(65), 1,
      sym_mime_type,
    ACTIONS(73), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [400] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(75), 1,
      anon_sym_SEMI,
    ACTIONS(77), 1,
      sym_mime_type,
    STATE(17), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [436] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(65), 1,
      sym_mime_type,
    ACTIONS(79), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [472] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(67), 1,
      anon_sym_SEMI,
    ACTIONS(81), 1,
      sym_mime_type,
    STATE(15), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [508] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(65), 1,
      sym_mime_type,
    ACTIONS(83), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [544] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(93), 1,
      aux_sym__string_literal_token1,
    ACTIONS(96), 1,
      sym_mime_type,
    ACTIONS(99), 1,
      sym_ipv6_address,
    STATE(16), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(90), 2,
      sym_true,
      sym_false,
    ACTIONS(87), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [580] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(65), 1,
      sym_mime_type,
    ACTIONS(102), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [616] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(65), 1,
      sym_mime_type,
    ACTIONS(75), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [652] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(65), 1,
      sym_mime_type,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [688] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(79), 1,
      anon_sym_SEMI,
    ACTIONS(106), 1,
      sym_mime_type,
    STATE(11), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [724] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(110), 1,
      sym_mime_type,
    STATE(7), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [760] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    ACTIONS(65), 1,
      sym_mime_type,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      aux_sym_assignment_repeat2,
    STATE(24), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [796] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_EQ,
    ACTIONS(115), 1,
      anon_sym_COLON,
    STATE(23), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(118), 3,
      anon_sym_SEMI,
      aux_sym__string_literal_token1,
      sym_ipv6_address,
    ACTIONS(120), 6,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym_identifier,
      sym_mime_type,
  [822] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_EQ,
    ACTIONS(124), 1,
      anon_sym_COLON,
    STATE(25), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(126), 3,
      anon_sym_SEMI,
      aux_sym__string_literal_token1,
      sym_ipv6_address,
    ACTIONS(128), 6,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym_identifier,
      sym_mime_type,
  [848] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_EQ,
    ACTIONS(124), 1,
      anon_sym_COLON,
    STATE(23), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(85), 3,
      anon_sym_SEMI,
      aux_sym__string_literal_token1,
      sym_ipv6_address,
    ACTIONS(130), 6,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym_identifier,
      sym_mime_type,
  [874] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_http,
    ACTIONS(9), 1,
      anon_sym_server,
    ACTIONS(11), 1,
      anon_sym_events,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(29), 6,
      sym__main_directive,
      sym_http_directive,
      sym_server_directive,
      sym_events_directive,
      sym_assignment,
      aux_sym_config_repeat1,
  [901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 4,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym__string_literal_token1,
      sym_ipv6_address,
    ACTIONS(120), 7,
      anon_sym_COLON,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym_identifier,
      sym_mime_type,
  [920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 4,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym__string_literal_token1,
      sym_ipv6_address,
    ACTIONS(136), 7,
      anon_sym_COLON,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym_identifier,
      sym_mime_type,
  [939] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      anon_sym_http,
    ACTIONS(143), 1,
      anon_sym_server,
    ACTIONS(146), 1,
      anon_sym_events,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(29), 6,
      sym__main_directive,
      sym_http_directive,
      sym_server_directive,
      sym_events_directive,
      sym_assignment,
      aux_sym_config_repeat1,
  [966] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      sym_ipv6_address,
    STATE(27), 1,
      sym_const_value,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_float,
      sym_identifier,
    STATE(28), 3,
      sym_boolean,
      sym__string_literal,
      sym_ip_address,
  [993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 4,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym__string_literal_token1,
      sym_ipv6_address,
    ACTIONS(154), 7,
      anon_sym_COLON,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym_identifier,
      sym_mime_type,
  [1012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 4,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym__string_literal_token1,
      sym_ipv6_address,
    ACTIONS(158), 7,
      anon_sym_COLON,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym_identifier,
      sym_mime_type,
  [1031] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_location_at,
    ACTIONS(164), 1,
      anon_sym_TILDE,
    ACTIONS(168), 1,
      sym_path_regex,
    STATE(87), 1,
      sym_location_path,
    STATE(92), 1,
      sym__location_path_literal,
    ACTIONS(166), 2,
      anon_sym_SLASH,
      sym_path_literal,
    ACTIONS(162), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
  [1059] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(172), 1,
      anon_sym_location,
    ACTIONS(174), 1,
      anon_sym_types,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(40), 4,
      sym_location_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_server_directive_repeat1,
  [1081] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(180), 1,
      anon_sym_server,
    ACTIONS(183), 1,
      anon_sym_types,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(35), 4,
      sym_server_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_http_directive_repeat1,
  [1103] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_location,
    ACTIONS(174), 1,
      anon_sym_types,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(40), 4,
      sym_location_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_server_directive_repeat1,
  [1125] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_location,
    ACTIONS(174), 1,
      anon_sym_types,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(34), 4,
      sym_location_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_server_directive_repeat1,
  [1147] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_location,
    ACTIONS(174), 1,
      anon_sym_types,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(36), 4,
      sym_location_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_server_directive_repeat1,
  [1169] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_location,
    ACTIONS(174), 1,
      anon_sym_types,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(40), 4,
      sym_location_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_server_directive_repeat1,
  [1191] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      anon_sym_location,
    ACTIONS(202), 1,
      anon_sym_types,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(40), 4,
      sym_location_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_server_directive_repeat1,
  [1213] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(210), 1,
      anon_sym_server,
    ACTIONS(212), 1,
      anon_sym_types,
    ACTIONS(214), 1,
      sym_identifier,
    STATE(35), 4,
      sym_server_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_http_directive_repeat1,
  [1235] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_location,
    ACTIONS(174), 1,
      anon_sym_types,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(39), 4,
      sym_location_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_server_directive_repeat1,
  [1257] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_server,
    ACTIONS(212), 1,
      anon_sym_types,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(41), 4,
      sym_server_directive,
      sym_types_directive,
      sym_assignment,
      aux_sym_http_directive_repeat1,
  [1279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    ACTIONS(222), 1,
      anon_sym_types,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(47), 3,
      sym_types_directive,
      sym_assignment,
      aux_sym_types_directive_repeat1,
  [1297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_types,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(47), 3,
      sym_types_directive,
      sym_assignment,
      aux_sym_types_directive_repeat1,
  [1315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_types,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(45), 3,
      sym_types_directive,
      sym_assignment,
      aux_sym_types_directive_repeat1,
  [1333] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 1,
      anon_sym_types,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(47), 3,
      sym_types_directive,
      sym_assignment,
      aux_sym_types_directive_repeat1,
  [1351] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_types,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(44), 3,
      sym_types_directive,
      sym_assignment,
      aux_sym_types_directive_repeat1,
  [1369] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_types,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(47), 3,
      sym_types_directive,
      sym_assignment,
      aux_sym_types_directive_repeat1,
  [1387] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_types,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(49), 3,
      sym_types_directive,
      sym_assignment,
      aux_sym_types_directive_repeat1,
  [1405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym_identifier,
  [1418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym_identifier,
  [1431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym_identifier,
  [1444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym_identifier,
  [1457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym_identifier,
  [1470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym_identifier,
  [1483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym_identifier,
  [1496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym_identifier,
  [1509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    ACTIONS(278), 4,
      anon_sym_http,
      anon_sym_server,
      anon_sym_events,
      sym_identifier,
  [1522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 3,
      anon_sym_server,
      anon_sym_types,
      sym_identifier,
  [1534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    ACTIONS(282), 1,
      sym_identifier,
    STATE(74), 2,
      sym_assignment,
      aux_sym_upstream_directive_repeat1,
  [1548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(286), 3,
      anon_sym_location,
      anon_sym_types,
      sym_identifier,
  [1560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    ACTIONS(250), 3,
      anon_sym_location,
      anon_sym_types,
      sym_identifier,
  [1572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 3,
      anon_sym_location,
      anon_sym_types,
      sym_identifier,
  [1584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(254), 3,
      anon_sym_location,
      anon_sym_types,
      sym_identifier,
  [1596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    ACTIONS(290), 3,
      anon_sym_location,
      anon_sym_types,
      sym_identifier,
  [1608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    ACTIONS(250), 3,
      anon_sym_server,
      anon_sym_types,
      sym_identifier,
  [1620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_identifier,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(61), 2,
      sym_assignment,
      aux_sym_upstream_directive_repeat1,
  [1634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 3,
      anon_sym_server,
      anon_sym_types,
      sym_identifier,
  [1646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 3,
      anon_sym_location,
      anon_sym_types,
      sym_identifier,
  [1658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    ACTIONS(262), 3,
      anon_sym_server,
      anon_sym_types,
      sym_identifier,
  [1670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 3,
      anon_sym_server,
      anon_sym_types,
      sym_identifier,
  [1682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(254), 3,
      anon_sym_server,
      anon_sym_types,
      sym_identifier,
  [1694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(74), 2,
      sym_assignment,
      aux_sym_upstream_directive_repeat1,
  [1708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(286), 3,
      anon_sym_server,
      anon_sym_types,
      sym_identifier,
  [1720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    ACTIONS(305), 3,
      anon_sym_location,
      anon_sym_types,
      sym_identifier,
  [1732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_path_regex,
    STATE(89), 1,
      sym__location_path_literal,
    ACTIONS(307), 2,
      anon_sym_SLASH,
      sym_path_literal,
  [1746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 2,
      anon_sym_types,
      sym_identifier,
  [1757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(286), 2,
      anon_sym_types,
      sym_identifier,
  [1768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(254), 2,
      anon_sym_types,
      sym_identifier,
  [1779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 2,
      anon_sym_types,
      sym_identifier,
  [1790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    ACTIONS(250), 2,
      anon_sym_types,
      sym_identifier,
  [1801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
  [1832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
  [1839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
  [1846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
  [1853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
  [1860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_LBRACE,
  [1867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
  [1874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
  [1881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
  [1888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
  [1895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
  [1902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
  [1909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 220,
  [SMALL_STATE(8)] = 256,
  [SMALL_STATE(9)] = 292,
  [SMALL_STATE(10)] = 328,
  [SMALL_STATE(11)] = 364,
  [SMALL_STATE(12)] = 400,
  [SMALL_STATE(13)] = 436,
  [SMALL_STATE(14)] = 472,
  [SMALL_STATE(15)] = 508,
  [SMALL_STATE(16)] = 544,
  [SMALL_STATE(17)] = 580,
  [SMALL_STATE(18)] = 616,
  [SMALL_STATE(19)] = 652,
  [SMALL_STATE(20)] = 688,
  [SMALL_STATE(21)] = 724,
  [SMALL_STATE(22)] = 760,
  [SMALL_STATE(23)] = 796,
  [SMALL_STATE(24)] = 822,
  [SMALL_STATE(25)] = 848,
  [SMALL_STATE(26)] = 874,
  [SMALL_STATE(27)] = 901,
  [SMALL_STATE(28)] = 920,
  [SMALL_STATE(29)] = 939,
  [SMALL_STATE(30)] = 966,
  [SMALL_STATE(31)] = 993,
  [SMALL_STATE(32)] = 1012,
  [SMALL_STATE(33)] = 1031,
  [SMALL_STATE(34)] = 1059,
  [SMALL_STATE(35)] = 1081,
  [SMALL_STATE(36)] = 1103,
  [SMALL_STATE(37)] = 1125,
  [SMALL_STATE(38)] = 1147,
  [SMALL_STATE(39)] = 1169,
  [SMALL_STATE(40)] = 1191,
  [SMALL_STATE(41)] = 1213,
  [SMALL_STATE(42)] = 1235,
  [SMALL_STATE(43)] = 1257,
  [SMALL_STATE(44)] = 1279,
  [SMALL_STATE(45)] = 1297,
  [SMALL_STATE(46)] = 1315,
  [SMALL_STATE(47)] = 1333,
  [SMALL_STATE(48)] = 1351,
  [SMALL_STATE(49)] = 1369,
  [SMALL_STATE(50)] = 1387,
  [SMALL_STATE(51)] = 1405,
  [SMALL_STATE(52)] = 1418,
  [SMALL_STATE(53)] = 1431,
  [SMALL_STATE(54)] = 1444,
  [SMALL_STATE(55)] = 1457,
  [SMALL_STATE(56)] = 1470,
  [SMALL_STATE(57)] = 1483,
  [SMALL_STATE(58)] = 1496,
  [SMALL_STATE(59)] = 1509,
  [SMALL_STATE(60)] = 1522,
  [SMALL_STATE(61)] = 1534,
  [SMALL_STATE(62)] = 1548,
  [SMALL_STATE(63)] = 1560,
  [SMALL_STATE(64)] = 1572,
  [SMALL_STATE(65)] = 1584,
  [SMALL_STATE(66)] = 1596,
  [SMALL_STATE(67)] = 1608,
  [SMALL_STATE(68)] = 1620,
  [SMALL_STATE(69)] = 1634,
  [SMALL_STATE(70)] = 1646,
  [SMALL_STATE(71)] = 1658,
  [SMALL_STATE(72)] = 1670,
  [SMALL_STATE(73)] = 1682,
  [SMALL_STATE(74)] = 1694,
  [SMALL_STATE(75)] = 1708,
  [SMALL_STATE(76)] = 1720,
  [SMALL_STATE(77)] = 1732,
  [SMALL_STATE(78)] = 1746,
  [SMALL_STATE(79)] = 1757,
  [SMALL_STATE(80)] = 1768,
  [SMALL_STATE(81)] = 1779,
  [SMALL_STATE(82)] = 1790,
  [SMALL_STATE(83)] = 1801,
  [SMALL_STATE(84)] = 1809,
  [SMALL_STATE(85)] = 1817,
  [SMALL_STATE(86)] = 1825,
  [SMALL_STATE(87)] = 1832,
  [SMALL_STATE(88)] = 1839,
  [SMALL_STATE(89)] = 1846,
  [SMALL_STATE(90)] = 1853,
  [SMALL_STATE(91)] = 1860,
  [SMALL_STATE(92)] = 1867,
  [SMALL_STATE(93)] = 1874,
  [SMALL_STATE(94)] = 1881,
  [SMALL_STATE(95)] = 1888,
  [SMALL_STATE(96)] = 1895,
  [SMALL_STATE(97)] = 1902,
  [SMALL_STATE(98)] = 1909,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat2, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_repeat2, 2), SHIFT_REPEAT(28),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_repeat2, 2), SHIFT_REPEAT(32),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat2, 2), SHIFT_REPEAT(28),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_repeat2, 2), SHIFT_REPEAT(16),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat2, 2), SHIFT_REPEAT(31),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(30),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(30),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat2, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_repeat2, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_repeat2, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_value, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_value, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(86),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(95),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(94),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(5),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_address, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ip_address, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_http_directive_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_http_directive_repeat1, 2), SHIFT_REPEAT(96),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_http_directive_repeat1, 2), SHIFT_REPEAT(90),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_http_directive_repeat1, 2), SHIFT_REPEAT(3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_server_directive_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_server_directive_repeat1, 2), SHIFT_REPEAT(33),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_server_directive_repeat1, 2), SHIFT_REPEAT(97),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_server_directive_repeat1, 2), SHIFT_REPEAT(4),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_types_directive_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_types_directive_repeat1, 2), SHIFT_REPEAT(98),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_types_directive_repeat1, 2), SHIFT_REPEAT(6),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_server_directive, 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_server_directive, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_directive, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http_directive, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_server_directive, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_server_directive, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_events_directive, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_events_directive, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_events_directive, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_events_directive, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_directive, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http_directive, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_types_directive, 4),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_types_directive, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location_directive, 5),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location_directive, 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_types_directive, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_types_directive, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_upstream_directive_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_upstream_directive_repeat1, 2), SHIFT_REPEAT(2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location_directive, 4),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location_directive, 4),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location_path, 1, .production_id = 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location_path, 2, .production_id = 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location_path, 2, .production_id = 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location_path, 1),
  [325] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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
