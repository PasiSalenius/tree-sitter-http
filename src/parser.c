#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_ = 1,
  anon_sym_GET = 2,
  anon_sym_PUT = 3,
  anon_sym_ACL = 4,
  anon_sym_HEAD = 5,
  anon_sym_POST = 6,
  anon_sym_COPY = 7,
  anon_sym_LOCK = 8,
  anon_sym_MOVE = 9,
  anon_sym_BIND = 10,
  anon_sym_LINK = 11,
  anon_sym_PATCH = 12,
  anon_sym_TRACE = 13,
  anon_sym_MKCOL = 14,
  anon_sym_MERGE = 15,
  anon_sym_PURGE = 16,
  anon_sym_NOTIFY = 17,
  anon_sym_SEARCH = 18,
  anon_sym_UNLOCK = 19,
  anon_sym_REBIND = 20,
  anon_sym_UNBIND = 21,
  anon_sym_REPORT = 22,
  anon_sym_DELETE = 23,
  anon_sym_UNLINK = 24,
  anon_sym_CONNECT = 25,
  anon_sym_MSEARCH = 26,
  anon_sym_OPTIONS = 27,
  anon_sym_PROPFIND = 28,
  anon_sym_CHECKOUT = 29,
  anon_sym_PROPPATCH = 30,
  anon_sym_SUBSCRIBE = 31,
  anon_sym_MKCALENDAR = 32,
  anon_sym_MKACTIVITY = 33,
  anon_sym_UNSUBSCRIBE = 34,
  anon_sym_SOURCE = 35,
  anon_sym_QMARK = 36,
  anon_sym_AMP = 37,
  sym_path = 38,
  anon_sym_EQ = 39,
  aux_sym_query_name_token1 = 40,
  sym_hash = 41,
  sym_version = 42,
  sym_status = 43,
  aux_sym_reason_token1 = 44,
  anon_sym_COLON = 45,
  sym_header_name = 46,
  anon_sym_LF = 47,
  anon_sym_CR_LF = 48,
  sym_source_file = 49,
  sym__definition = 50,
  sym_start_line = 51,
  sym_request_line = 52,
  sym_method = 53,
  sym_target = 54,
  sym_query_item = 55,
  sym_query_name = 56,
  sym_query_value = 57,
  sym_status_line = 58,
  sym_reason = 59,
  sym_header = 60,
  sym_header_value = 61,
  sym_newline = 62,
  aux_sym__definition_repeat1 = 63,
  aux_sym_target_repeat1 = 64,
  aux_sym_header_repeat1 = 65,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_GET] = "GET",
  [anon_sym_PUT] = "PUT",
  [anon_sym_ACL] = "ACL",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_POST] = "POST",
  [anon_sym_COPY] = "COPY",
  [anon_sym_LOCK] = "LOCK",
  [anon_sym_MOVE] = "MOVE",
  [anon_sym_BIND] = "BIND",
  [anon_sym_LINK] = "LINK",
  [anon_sym_PATCH] = "PATCH",
  [anon_sym_TRACE] = "TRACE",
  [anon_sym_MKCOL] = "MKCOL",
  [anon_sym_MERGE] = "MERGE",
  [anon_sym_PURGE] = "PURGE",
  [anon_sym_NOTIFY] = "NOTIFY",
  [anon_sym_SEARCH] = "SEARCH",
  [anon_sym_UNLOCK] = "UNLOCK",
  [anon_sym_REBIND] = "REBIND",
  [anon_sym_UNBIND] = "UNBIND",
  [anon_sym_REPORT] = "REPORT",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_UNLINK] = "UNLINK",
  [anon_sym_CONNECT] = "CONNECT",
  [anon_sym_MSEARCH] = "MSEARCH",
  [anon_sym_OPTIONS] = "OPTIONS",
  [anon_sym_PROPFIND] = "PROPFIND",
  [anon_sym_CHECKOUT] = "CHECKOUT",
  [anon_sym_PROPPATCH] = "PROPPATCH",
  [anon_sym_SUBSCRIBE] = "SUBSCRIBE",
  [anon_sym_MKCALENDAR] = "MKCALENDAR",
  [anon_sym_MKACTIVITY] = "MKACTIVITY",
  [anon_sym_UNSUBSCRIBE] = "UNSUBSCRIBE",
  [anon_sym_SOURCE] = "SOURCE",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AMP] = "&",
  [sym_path] = "path",
  [anon_sym_EQ] = "=",
  [aux_sym_query_name_token1] = "query_name_token1",
  [sym_hash] = "hash",
  [sym_version] = "version",
  [sym_status] = "status",
  [aux_sym_reason_token1] = "reason_token1",
  [anon_sym_COLON] = ":",
  [sym_header_name] = "header_name",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_start_line] = "start_line",
  [sym_request_line] = "request_line",
  [sym_method] = "method",
  [sym_target] = "target",
  [sym_query_item] = "query_item",
  [sym_query_name] = "query_name",
  [sym_query_value] = "query_value",
  [sym_status_line] = "status_line",
  [sym_reason] = "reason",
  [sym_header] = "header",
  [sym_header_value] = "header_value",
  [sym_newline] = "newline",
  [aux_sym__definition_repeat1] = "_definition_repeat1",
  [aux_sym_target_repeat1] = "target_repeat1",
  [aux_sym_header_repeat1] = "header_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_PUT] = anon_sym_PUT,
  [anon_sym_ACL] = anon_sym_ACL,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_POST] = anon_sym_POST,
  [anon_sym_COPY] = anon_sym_COPY,
  [anon_sym_LOCK] = anon_sym_LOCK,
  [anon_sym_MOVE] = anon_sym_MOVE,
  [anon_sym_BIND] = anon_sym_BIND,
  [anon_sym_LINK] = anon_sym_LINK,
  [anon_sym_PATCH] = anon_sym_PATCH,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [anon_sym_MKCOL] = anon_sym_MKCOL,
  [anon_sym_MERGE] = anon_sym_MERGE,
  [anon_sym_PURGE] = anon_sym_PURGE,
  [anon_sym_NOTIFY] = anon_sym_NOTIFY,
  [anon_sym_SEARCH] = anon_sym_SEARCH,
  [anon_sym_UNLOCK] = anon_sym_UNLOCK,
  [anon_sym_REBIND] = anon_sym_REBIND,
  [anon_sym_UNBIND] = anon_sym_UNBIND,
  [anon_sym_REPORT] = anon_sym_REPORT,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_UNLINK] = anon_sym_UNLINK,
  [anon_sym_CONNECT] = anon_sym_CONNECT,
  [anon_sym_MSEARCH] = anon_sym_MSEARCH,
  [anon_sym_OPTIONS] = anon_sym_OPTIONS,
  [anon_sym_PROPFIND] = anon_sym_PROPFIND,
  [anon_sym_CHECKOUT] = anon_sym_CHECKOUT,
  [anon_sym_PROPPATCH] = anon_sym_PROPPATCH,
  [anon_sym_SUBSCRIBE] = anon_sym_SUBSCRIBE,
  [anon_sym_MKCALENDAR] = anon_sym_MKCALENDAR,
  [anon_sym_MKACTIVITY] = anon_sym_MKACTIVITY,
  [anon_sym_UNSUBSCRIBE] = anon_sym_UNSUBSCRIBE,
  [anon_sym_SOURCE] = anon_sym_SOURCE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_path] = sym_path,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_query_name_token1] = aux_sym_query_name_token1,
  [sym_hash] = sym_hash,
  [sym_version] = sym_version,
  [sym_status] = sym_status,
  [aux_sym_reason_token1] = aux_sym_reason_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_header_name] = sym_header_name,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_start_line] = sym_start_line,
  [sym_request_line] = sym_request_line,
  [sym_method] = sym_method,
  [sym_target] = sym_target,
  [sym_query_item] = sym_query_item,
  [sym_query_name] = sym_query_name,
  [sym_query_value] = sym_query_value,
  [sym_status_line] = sym_status_line,
  [sym_reason] = sym_reason,
  [sym_header] = sym_header,
  [sym_header_value] = sym_header_value,
  [sym_newline] = sym_newline,
  [aux_sym__definition_repeat1] = aux_sym__definition_repeat1,
  [aux_sym_target_repeat1] = aux_sym_target_repeat1,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COPY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BIND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LINK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PATCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MKCOL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MERGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PURGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTIFY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEARCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNLOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REBIND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNBIND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REPORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNLINK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONNECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MSEARCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROPFIND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHECKOUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROPPATCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUBSCRIBE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MKCALENDAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MKACTIVITY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNSUBSCRIBE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOURCE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_query_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_reason_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_header_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_start_line] = {
    .visible = true,
    .named = true,
  },
  [sym_request_line] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_query_item] = {
    .visible = true,
    .named = true,
  },
  [sym_query_name] = {
    .visible = true,
    .named = true,
  },
  [sym_query_value] = {
    .visible = true,
    .named = true,
  },
  [sym_status_line] = {
    .visible = true,
    .named = true,
  },
  [sym_reason] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_header_value] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_header_name = 1,
  field_header_value = 2,
  field_method = 3,
  field_path = 4,
  field_query_name = 5,
  field_query_value = 6,
  field_reason = 7,
  field_status = 8,
  field_target = 9,
  field_version = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_header_name] = "header_name",
  [field_header_value] = "header_value",
  [field_method] = "method",
  [field_path] = "path",
  [field_query_name] = "query_name",
  [field_query_value] = "query_value",
  [field_reason] = "reason",
  [field_status] = "status",
  [field_target] = "target",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 2},
  [5] = {.index = 9, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 0},
  [1] =
    {field_reason, 4},
    {field_status, 2},
    {field_version, 0},
  [4] =
    {field_method, 0},
    {field_target, 2},
    {field_version, 4},
  [7] =
    {field_header_name, 0},
    {field_header_value, 3},
  [9] =
    {field_query_name, 0},
    {field_query_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(151);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '&') ADVANCE(190);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '?') ADVANCE(189);
      if (lookahead == 'A') ADVANCE(25);
      if (lookahead == 'B') ADVANCE(74);
      if (lookahead == 'C') ADVANCE(72);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'G') ADVANCE(45);
      if (lookahead == 'H') ADVANCE(46);
      if (lookahead == 'L') ADVANCE(77);
      if (lookahead == 'M') ADVANCE(56);
      if (lookahead == 'N') ADVANCE(106);
      if (lookahead == 'O') ADVANCE(112);
      if (lookahead == 'P') ADVANCE(14);
      if (lookahead == 'R') ADVANCE(47);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == 'U') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(200);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(206);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(152);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '&') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(196);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '?') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(196);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(192);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(149);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(148);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(34);
      if (lookahead == 'C') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(117);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'U') ADVANCE(120);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(114);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(138);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(118);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(125);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(55);
      END_STATE();
    case 22:
      if (lookahead == 'B') ADVANCE(79);
      if (lookahead == 'P') ADVANCE(108);
      END_STATE();
    case 23:
      if (lookahead == 'B') ADVANCE(80);
      if (lookahead == 'L') ADVANCE(81);
      if (lookahead == 'S') ADVANCE(142);
      END_STATE();
    case 24:
      if (lookahead == 'B') ADVANCE(126);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(90);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(69);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(89);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(116);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(88);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(137);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(130);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(122);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(163);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(158);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(173);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(174);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(181);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(15);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(127);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(10);
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(162);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(168);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(176);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(188);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(184);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(187);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == 'K') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(144);
      if (lookahead == 'S') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == 'O') ADVANCE(141);
      if (lookahead == 'U') ADVANCE(19);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(35);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 64:
      if (lookahead == 'F') ADVANCE(146);
      END_STATE();
    case 65:
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'P') ADVANCE(16);
      END_STATE();
    case 66:
      if (lookahead == 'G') ADVANCE(49);
      END_STATE();
    case 67:
      if (lookahead == 'G') ADVANCE(50);
      END_STATE();
    case 68:
      if (lookahead == 'H') ADVANCE(165);
      END_STATE();
    case 69:
      if (lookahead == 'H') ADVANCE(171);
      END_STATE();
    case 70:
      if (lookahead == 'H') ADVANCE(179);
      END_STATE();
    case 71:
      if (lookahead == 'H') ADVANCE(183);
      END_STATE();
    case 72:
      if (lookahead == 'H') ADVANCE(61);
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(64);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(143);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'O') ADVANCE(33);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(103);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(135);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(21);
      END_STATE();
    case 85:
      if (lookahead == 'K') ADVANCE(164);
      END_STATE();
    case 86:
      if (lookahead == 'K') ADVANCE(161);
      END_STATE();
    case 87:
      if (lookahead == 'K') ADVANCE(177);
      END_STATE();
    case 88:
      if (lookahead == 'K') ADVANCE(172);
      END_STATE();
    case 89:
      if (lookahead == 'K') ADVANCE(107);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(157);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(167);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(59);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(60);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(104);
      if (lookahead == 'P') ADVANCE(145);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 106:
      if (lookahead == 'O') ADVANCE(132);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(140);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(119);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 110:
      if (lookahead == 'P') ADVANCE(9);
      END_STATE();
    case 111:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 112:
      if (lookahead == 'P') ADVANCE(134);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(66);
      END_STATE();
    case 114:
      if (lookahead == 'R') ADVANCE(185);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(30);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead == 'T') ADVANCE(156);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(84);
      END_STATE();
    case 123:
      if (lookahead == 'S') ADVANCE(180);
      END_STATE();
    case 124:
      if (lookahead == 'S') ADVANCE(128);
      END_STATE();
    case 125:
      if (lookahead == 'S') ADVANCE(32);
      END_STATE();
    case 126:
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(155);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(159);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(175);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(178);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(182);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(147);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 139:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 140:
      if (lookahead == 'U') ADVANCE(131);
      END_STATE();
    case 141:
      if (lookahead == 'U') ADVANCE(121);
      END_STATE();
    case 142:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 143:
      if (lookahead == 'V') ADVANCE(83);
      END_STATE();
    case 144:
      if (lookahead == 'V') ADVANCE(48);
      END_STATE();
    case 145:
      if (lookahead == 'Y') ADVANCE(160);
      END_STATE();
    case 146:
      if (lookahead == 'Y') ADVANCE(170);
      END_STATE();
    case 147:
      if (lookahead == 'Y') ADVANCE(186);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 150:
      if (eof) ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(205);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(194);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(200);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_ACL);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_MOVE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_BIND);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_MKCOL);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_MERGE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_NOTIFY);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_SEARCH);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_REBIND);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_UNBIND);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_MSEARCH);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_CHECKOUT);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_PROPPATCH);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SUBSCRIBE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_MKCALENDAR);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_MKACTIVITY);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_UNSUBSCRIBE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SOURCE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_query_name_token1);
      if (lookahead == ' ') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_query_name_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_query_name_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_hash);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_version);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_status);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_reason_token1);
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_reason_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_reason_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(206);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 150},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 150},
  [11] = {.lex_state = 150},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 150},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 150},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GET] = ACTIONS(1),
    [anon_sym_PUT] = ACTIONS(1),
    [anon_sym_ACL] = ACTIONS(1),
    [anon_sym_HEAD] = ACTIONS(1),
    [anon_sym_POST] = ACTIONS(1),
    [anon_sym_COPY] = ACTIONS(1),
    [anon_sym_LOCK] = ACTIONS(1),
    [anon_sym_MOVE] = ACTIONS(1),
    [anon_sym_BIND] = ACTIONS(1),
    [anon_sym_LINK] = ACTIONS(1),
    [anon_sym_PATCH] = ACTIONS(1),
    [anon_sym_TRACE] = ACTIONS(1),
    [anon_sym_MKCOL] = ACTIONS(1),
    [anon_sym_MERGE] = ACTIONS(1),
    [anon_sym_PURGE] = ACTIONS(1),
    [anon_sym_NOTIFY] = ACTIONS(1),
    [anon_sym_SEARCH] = ACTIONS(1),
    [anon_sym_UNLOCK] = ACTIONS(1),
    [anon_sym_REBIND] = ACTIONS(1),
    [anon_sym_UNBIND] = ACTIONS(1),
    [anon_sym_REPORT] = ACTIONS(1),
    [anon_sym_DELETE] = ACTIONS(1),
    [anon_sym_UNLINK] = ACTIONS(1),
    [anon_sym_CONNECT] = ACTIONS(1),
    [anon_sym_MSEARCH] = ACTIONS(1),
    [anon_sym_OPTIONS] = ACTIONS(1),
    [anon_sym_PROPFIND] = ACTIONS(1),
    [anon_sym_CHECKOUT] = ACTIONS(1),
    [anon_sym_PROPPATCH] = ACTIONS(1),
    [anon_sym_SUBSCRIBE] = ACTIONS(1),
    [anon_sym_MKCALENDAR] = ACTIONS(1),
    [anon_sym_MKACTIVITY] = ACTIONS(1),
    [anon_sym_UNSUBSCRIBE] = ACTIONS(1),
    [anon_sym_SOURCE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_hash] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [sym_status] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym__definition] = STATE(39),
    [sym_start_line] = STATE(13),
    [sym_request_line] = STATE(18),
    [sym_method] = STATE(35),
    [sym_status_line] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_GET] = ACTIONS(5),
    [anon_sym_PUT] = ACTIONS(5),
    [anon_sym_ACL] = ACTIONS(5),
    [anon_sym_HEAD] = ACTIONS(5),
    [anon_sym_POST] = ACTIONS(5),
    [anon_sym_COPY] = ACTIONS(5),
    [anon_sym_LOCK] = ACTIONS(5),
    [anon_sym_MOVE] = ACTIONS(5),
    [anon_sym_BIND] = ACTIONS(5),
    [anon_sym_LINK] = ACTIONS(5),
    [anon_sym_PATCH] = ACTIONS(5),
    [anon_sym_TRACE] = ACTIONS(5),
    [anon_sym_MKCOL] = ACTIONS(5),
    [anon_sym_MERGE] = ACTIONS(5),
    [anon_sym_PURGE] = ACTIONS(5),
    [anon_sym_NOTIFY] = ACTIONS(5),
    [anon_sym_SEARCH] = ACTIONS(5),
    [anon_sym_UNLOCK] = ACTIONS(5),
    [anon_sym_REBIND] = ACTIONS(5),
    [anon_sym_UNBIND] = ACTIONS(5),
    [anon_sym_REPORT] = ACTIONS(5),
    [anon_sym_DELETE] = ACTIONS(5),
    [anon_sym_UNLINK] = ACTIONS(5),
    [anon_sym_CONNECT] = ACTIONS(5),
    [anon_sym_MSEARCH] = ACTIONS(5),
    [anon_sym_OPTIONS] = ACTIONS(5),
    [anon_sym_PROPFIND] = ACTIONS(5),
    [anon_sym_CHECKOUT] = ACTIONS(5),
    [anon_sym_PROPPATCH] = ACTIONS(5),
    [anon_sym_SUBSCRIBE] = ACTIONS(5),
    [anon_sym_MKCALENDAR] = ACTIONS(5),
    [anon_sym_MKACTIVITY] = ACTIONS(5),
    [anon_sym_UNSUBSCRIBE] = ACTIONS(5),
    [anon_sym_SOURCE] = ACTIONS(5),
    [sym_version] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      aux_sym_query_name_token1,
    ACTIONS(13), 1,
      sym_hash,
    STATE(4), 1,
      aux_sym_target_repeat1,
    STATE(8), 1,
      sym_query_item,
    STATE(30), 1,
      sym_query_name,
  [19] = 5,
    ACTIONS(17), 1,
      aux_sym_query_name_token1,
    STATE(3), 1,
      aux_sym_target_repeat1,
    STATE(8), 1,
      sym_query_item,
    STATE(30), 1,
      sym_query_name,
    ACTIONS(15), 2,
      anon_sym_,
      sym_hash,
  [36] = 6,
    ACTIONS(11), 1,
      aux_sym_query_name_token1,
    ACTIONS(20), 1,
      anon_sym_,
    ACTIONS(22), 1,
      sym_hash,
    STATE(3), 1,
      aux_sym_target_repeat1,
    STATE(8), 1,
      sym_query_item,
    STATE(30), 1,
      sym_query_name,
  [55] = 1,
    ACTIONS(24), 4,
      anon_sym_,
      anon_sym_AMP,
      aux_sym_query_name_token1,
      sym_hash,
  [62] = 1,
    ACTIONS(26), 4,
      anon_sym_,
      anon_sym_AMP,
      aux_sym_query_name_token1,
      sym_hash,
  [69] = 3,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      sym_header_name,
    STATE(11), 2,
      sym_header,
      aux_sym__definition_repeat1,
  [80] = 2,
    ACTIONS(34), 1,
      anon_sym_AMP,
    ACTIONS(32), 3,
      anon_sym_,
      aux_sym_query_name_token1,
      sym_hash,
  [89] = 4,
    ACTIONS(36), 1,
      anon_sym_,
    ACTIONS(38), 1,
      aux_sym_reason_token1,
    STATE(14), 1,
      aux_sym_header_repeat1,
    STATE(15), 1,
      sym_header_value,
  [102] = 3,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      sym_header_name,
    STATE(10), 2,
      sym_header,
      aux_sym__definition_repeat1,
  [113] = 3,
    ACTIONS(30), 1,
      sym_header_name,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym_header,
      aux_sym__definition_repeat1,
  [124] = 1,
    ACTIONS(15), 3,
      anon_sym_,
      aux_sym_query_name_token1,
      sym_hash,
  [130] = 2,
    STATE(7), 1,
      sym_newline,
    ACTIONS(47), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [138] = 3,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(52), 1,
      aux_sym_reason_token1,
    STATE(14), 1,
      aux_sym_header_repeat1,
  [148] = 2,
    STATE(19), 1,
      sym_newline,
    ACTIONS(47), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [156] = 3,
    ACTIONS(54), 1,
      anon_sym_,
    ACTIONS(56), 1,
      anon_sym_QMARK,
    ACTIONS(58), 1,
      sym_hash,
  [166] = 1,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym_header_name,
  [171] = 1,
    ACTIONS(62), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [176] = 1,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym_header_name,
  [181] = 2,
    ACTIONS(66), 1,
      aux_sym_reason_token1,
    STATE(25), 1,
      sym_reason,
  [188] = 2,
    ACTIONS(68), 1,
      anon_sym_,
    STATE(9), 1,
      aux_sym_header_repeat1,
  [195] = 2,
    ACTIONS(70), 1,
      aux_sym_query_name_token1,
    STATE(5), 1,
      sym_query_value,
  [202] = 1,
    ACTIONS(72), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [207] = 1,
    ACTIONS(74), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [212] = 1,
    ACTIONS(76), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [217] = 1,
    ACTIONS(78), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [222] = 2,
    ACTIONS(80), 1,
      sym_path,
    STATE(40), 1,
      sym_target,
  [229] = 1,
    ACTIONS(82), 1,
      anon_sym_,
  [233] = 1,
    ACTIONS(84), 1,
      anon_sym_,
  [237] = 1,
    ACTIONS(86), 1,
      anon_sym_EQ,
  [241] = 1,
    ACTIONS(88), 1,
      anon_sym_EQ,
  [245] = 1,
    ACTIONS(90), 1,
      anon_sym_,
  [249] = 1,
    ACTIONS(92), 1,
      sym_version,
  [253] = 1,
    ACTIONS(94), 1,
      sym_status,
  [257] = 1,
    ACTIONS(96), 1,
      anon_sym_,
  [261] = 1,
    ACTIONS(98), 1,
      anon_sym_COLON,
  [265] = 1,
    ACTIONS(100), 1,
      anon_sym_,
  [269] = 1,
    ACTIONS(102), 1,
      anon_sym_,
  [273] = 1,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
  [277] = 1,
    ACTIONS(106), 1,
      anon_sym_,
  [281] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
  [285] = 1,
    ACTIONS(110), 1,
      anon_sym_,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 80,
  [SMALL_STATE(9)] = 89,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 113,
  [SMALL_STATE(12)] = 124,
  [SMALL_STATE(13)] = 130,
  [SMALL_STATE(14)] = 138,
  [SMALL_STATE(15)] = 148,
  [SMALL_STATE(16)] = 156,
  [SMALL_STATE(17)] = 166,
  [SMALL_STATE(18)] = 171,
  [SMALL_STATE(19)] = 176,
  [SMALL_STATE(20)] = 181,
  [SMALL_STATE(21)] = 188,
  [SMALL_STATE(22)] = 195,
  [SMALL_STATE(23)] = 202,
  [SMALL_STATE(24)] = 207,
  [SMALL_STATE(25)] = 212,
  [SMALL_STATE(26)] = 217,
  [SMALL_STATE(27)] = 222,
  [SMALL_STATE(28)] = 229,
  [SMALL_STATE(29)] = 233,
  [SMALL_STATE(30)] = 237,
  [SMALL_STATE(31)] = 241,
  [SMALL_STATE(32)] = 245,
  [SMALL_STATE(33)] = 249,
  [SMALL_STATE(34)] = 253,
  [SMALL_STATE(35)] = 257,
  [SMALL_STATE(36)] = 261,
  [SMALL_STATE(37)] = 265,
  [SMALL_STATE(38)] = 269,
  [SMALL_STATE(39)] = 273,
  [SMALL_STATE(40)] = 277,
  [SMALL_STATE(41)] = 281,
  [SMALL_STATE(42)] = 285,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 2, .production_id = 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(31),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 1),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_item, 3, .production_id = 5),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_value, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_repeat1, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(36),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(14),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1, .production_id = 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_line, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, .production_id = 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reason, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 5, .production_id = 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_line, 5, .production_id = 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_name, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_http(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
