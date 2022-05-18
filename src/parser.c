#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_LF = 1,
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
  sym_query_name = 40,
  sym_query_value = 41,
  sym_hash = 42,
  sym_version = 43,
  sym_status = 44,
  aux_sym_reason_token1 = 45,
  anon_sym_COLON = 46,
  sym_header_name = 47,
  sym_document = 48,
  sym_request_line = 49,
  sym_method = 50,
  sym_target = 51,
  sym_query_item = 52,
  sym_status_line = 53,
  sym_reason = 54,
  sym_header = 55,
  sym_header_value = 56,
  sym_body = 57,
  aux_sym_document_repeat1 = 58,
  aux_sym_target_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
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
  [sym_query_name] = "query_name",
  [sym_query_value] = "query_value",
  [sym_hash] = "hash",
  [sym_version] = "version",
  [sym_status] = "status",
  [aux_sym_reason_token1] = "reason_token1",
  [anon_sym_COLON] = ":",
  [sym_header_name] = "header_name",
  [sym_document] = "document",
  [sym_request_line] = "request_line",
  [sym_method] = "method",
  [sym_target] = "target",
  [sym_query_item] = "query_item",
  [sym_status_line] = "status_line",
  [sym_reason] = "reason",
  [sym_header] = "header",
  [sym_header_value] = "header_value",
  [sym_body] = "body",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_target_repeat1] = "target_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
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
  [sym_query_name] = sym_query_name,
  [sym_query_value] = sym_query_value,
  [sym_hash] = sym_hash,
  [sym_version] = sym_version,
  [sym_status] = sym_status,
  [aux_sym_reason_token1] = aux_sym_reason_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_header_name] = sym_header_name,
  [sym_document] = sym_document,
  [sym_request_line] = sym_request_line,
  [sym_method] = sym_method,
  [sym_target] = sym_target,
  [sym_query_item] = sym_query_item,
  [sym_status_line] = sym_status_line,
  [sym_reason] = sym_reason,
  [sym_header] = sym_header,
  [sym_header_value] = sym_header_value,
  [sym_body] = sym_body,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_target_repeat1] = aux_sym_target_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
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
  [sym_query_name] = {
    .visible = true,
    .named = true,
  },
  [sym_query_value] = {
    .visible = true,
    .named = true,
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
  [sym_document] = {
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
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_hash = 2,
  field_header_name = 3,
  field_header_value = 4,
  field_method = 5,
  field_path = 6,
  field_query_name = 7,
  field_query_value = 8,
  field_reason = 9,
  field_status = 10,
  field_target = 11,
  field_version = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_hash] = "hash",
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
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 3},
  [6] = {.index = 12, .length = 1},
  [7] = {.index = 13, .length = 1},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 2},
  [10] = {.index = 18, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 0},
  [1] =
    {field_reason, 2},
    {field_status, 1},
    {field_version, 0},
  [4] =
    {field_hash, 1},
    {field_path, 0},
  [6] =
    {field_method, 0},
    {field_target, 1},
    {field_version, 2},
  [9] =
    {field_header_name, 0},
    {field_header_name, 1},
    {field_header_value, 2},
  [12] =
    {field_body, 0},
  [13] =
    {field_query_name, 0},
  [14] =
    {field_hash, 3},
    {field_path, 0},
  [16] =
    {field_query_name, 0},
    {field_query_value, 2},
  [18] =
    {field_hash, 4},
    {field_path, 0},
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
      if (eof) ADVANCE(149);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '&') ADVANCE(186);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '?') ADVANCE(185);
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'B') ADVANCE(71);
      if (lookahead == 'C') ADVANCE(69);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == 'G') ADVANCE(42);
      if (lookahead == 'H') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(74);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead == 'O') ADVANCE(109);
      if (lookahead == 'P') ADVANCE(11);
      if (lookahead == 'R') ADVANCE(44);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == 'U') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(191);
      END_STATE();
    case 3:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(188);
      END_STATE();
    case 4:
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(193);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(147);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(146);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(31);
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(114);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(121);
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead == 'U') ADVANCE(117);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(111);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(135);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(88);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(122);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(51);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(52);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(76);
      if (lookahead == 'P') ADVANCE(105);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(77);
      if (lookahead == 'L') ADVANCE(78);
      if (lookahead == 'S') ADVANCE(139);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(123);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(86);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(113);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(85);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(134);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(127);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(119);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(159);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(154);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(169);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(170);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(177);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(12);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(124);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(7);
      if (lookahead == 'T') ADVANCE(130);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(164);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(165);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(162);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(184);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(180);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(183);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'K') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(141);
      if (lookahead == 'S') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(9);
      if (lookahead == 'O') ADVANCE(138);
      if (lookahead == 'U') ADVANCE(16);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(136);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 61:
      if (lookahead == 'F') ADVANCE(143);
      END_STATE();
    case 62:
      if (lookahead == 'F') ADVANCE(79);
      if (lookahead == 'P') ADVANCE(13);
      END_STATE();
    case 63:
      if (lookahead == 'G') ADVANCE(46);
      END_STATE();
    case 64:
      if (lookahead == 'G') ADVANCE(47);
      END_STATE();
    case 65:
      if (lookahead == 'H') ADVANCE(161);
      END_STATE();
    case 66:
      if (lookahead == 'H') ADVANCE(167);
      END_STATE();
    case 67:
      if (lookahead == 'H') ADVANCE(175);
      END_STATE();
    case 68:
      if (lookahead == 'H') ADVANCE(179);
      END_STATE();
    case 69:
      if (lookahead == 'H') ADVANCE(58);
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 70:
      if (lookahead == 'I') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(140);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(17);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(106);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(132);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(18);
      END_STATE();
    case 82:
      if (lookahead == 'K') ADVANCE(160);
      END_STATE();
    case 83:
      if (lookahead == 'K') ADVANCE(157);
      END_STATE();
    case 84:
      if (lookahead == 'K') ADVANCE(173);
      END_STATE();
    case 85:
      if (lookahead == 'K') ADVANCE(168);
      END_STATE();
    case 86:
      if (lookahead == 'K') ADVANCE(104);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(153);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(163);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(57);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(101);
      if (lookahead == 'P') ADVANCE(142);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(84);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(129);
      END_STATE();
    case 104:
      if (lookahead == 'O') ADVANCE(137);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(116);
      END_STATE();
    case 106:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 107:
      if (lookahead == 'P') ADVANCE(6);
      END_STATE();
    case 108:
      if (lookahead == 'P') ADVANCE(62);
      END_STATE();
    case 109:
      if (lookahead == 'P') ADVANCE(131);
      END_STATE();
    case 110:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 111:
      if (lookahead == 'R') ADVANCE(181);
      END_STATE();
    case 112:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 114:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(126);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(152);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(34);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(81);
      END_STATE();
    case 120:
      if (lookahead == 'S') ADVANCE(176);
      END_STATE();
    case 121:
      if (lookahead == 'S') ADVANCE(125);
      END_STATE();
    case 122:
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 123:
      if (lookahead == 'S') ADVANCE(35);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(155);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(171);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(174);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(178);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(107);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(144);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 137:
      if (lookahead == 'U') ADVANCE(128);
      END_STATE();
    case 138:
      if (lookahead == 'U') ADVANCE(118);
      END_STATE();
    case 139:
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 140:
      if (lookahead == 'V') ADVANCE(80);
      END_STATE();
    case 141:
      if (lookahead == 'V') ADVANCE(45);
      END_STATE();
    case 142:
      if (lookahead == 'Y') ADVANCE(156);
      END_STATE();
    case 143:
      if (lookahead == 'Y') ADVANCE(166);
      END_STATE();
    case 144:
      if (lookahead == 'Y') ADVANCE(182);
      END_STATE();
    case 145:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 148:
      if (eof) ADVANCE(149);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(148)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_ACL);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_MOVE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_BIND);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_MKCOL);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_MERGE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_NOTIFY);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SEARCH);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_REBIND);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_UNBIND);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_MSEARCH);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_CHECKOUT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_PROPPATCH);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_SUBSCRIBE);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_MKCALENDAR);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_MKACTIVITY);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_UNSUBSCRIBE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SOURCE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_query_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_query_name);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_query_value);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_query_value);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_hash);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_version);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_status);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_reason_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_reason_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 148},
  [3] = {.lex_state = 148},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 148},
  [9] = {.lex_state = 145},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 145},
  [22] = {.lex_state = 148},
  [23] = {.lex_state = 148},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 145},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 145},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 148},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
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
    [sym_document] = STATE(19),
    [sym_request_line] = STATE(9),
    [sym_method] = STATE(14),
    [sym_status_line] = STATE(9),
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
  [0] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      sym_header_name,
    STATE(3), 1,
      aux_sym_document_repeat1,
    STATE(32), 1,
      sym_header,
  [16] = 4,
    ACTIONS(17), 1,
      sym_header_name,
    STATE(3), 1,
      aux_sym_document_repeat1,
    STATE(32), 1,
      sym_header,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [30] = 4,
    ACTIONS(20), 1,
      anon_sym_AMP,
    ACTIONS(22), 1,
      sym_hash,
    ACTIONS(24), 1,
      sym_version,
    STATE(6), 1,
      aux_sym_target_repeat1,
  [43] = 3,
    ACTIONS(26), 1,
      anon_sym_AMP,
    STATE(5), 1,
      aux_sym_target_repeat1,
    ACTIONS(29), 2,
      sym_hash,
      sym_version,
  [54] = 4,
    ACTIONS(20), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      sym_hash,
    ACTIONS(33), 1,
      sym_version,
    STATE(5), 1,
      aux_sym_target_repeat1,
  [67] = 2,
    ACTIONS(37), 1,
      anon_sym_EQ,
    ACTIONS(35), 3,
      anon_sym_AMP,
      sym_hash,
      sym_version,
  [76] = 2,
    ACTIONS(39), 1,
      sym_header_name,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [84] = 3,
    ACTIONS(41), 1,
      sym_header_name,
    STATE(2), 1,
      aux_sym_document_repeat1,
    STATE(32), 1,
      sym_header,
  [94] = 1,
    ACTIONS(29), 3,
      anon_sym_AMP,
      sym_hash,
      sym_version,
  [100] = 1,
    ACTIONS(43), 3,
      anon_sym_AMP,
      sym_hash,
      sym_version,
  [106] = 3,
    ACTIONS(45), 1,
      anon_sym_QMARK,
    ACTIONS(47), 1,
      sym_hash,
    ACTIONS(49), 1,
      sym_version,
  [116] = 2,
    ACTIONS(51), 1,
      sym_query_name,
    STATE(4), 1,
      sym_query_item,
  [123] = 2,
    ACTIONS(53), 1,
      sym_path,
    STATE(31), 1,
      sym_target,
  [130] = 2,
    ACTIONS(55), 1,
      aux_sym_reason_token1,
    STATE(26), 1,
      sym_reason,
  [137] = 2,
    ACTIONS(57), 1,
      aux_sym_reason_token1,
    STATE(23), 1,
      sym_header_value,
  [144] = 2,
    ACTIONS(59), 1,
      aux_sym_reason_token1,
    STATE(25), 1,
      sym_body,
  [151] = 2,
    ACTIONS(51), 1,
      sym_query_name,
    STATE(10), 1,
      sym_query_item,
  [158] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
  [162] = 1,
    ACTIONS(63), 1,
      sym_version,
  [166] = 1,
    ACTIONS(65), 1,
      sym_header_name,
  [170] = 1,
    ACTIONS(67), 1,
      anon_sym_LF,
  [174] = 1,
    ACTIONS(69), 1,
      anon_sym_LF,
  [178] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [182] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
  [186] = 1,
    ACTIONS(75), 1,
      sym_header_name,
  [190] = 1,
    ACTIONS(77), 1,
      sym_status,
  [194] = 1,
    ACTIONS(79), 1,
      sym_query_value,
  [198] = 1,
    ACTIONS(81), 1,
      sym_header_name,
  [202] = 1,
    ACTIONS(83), 1,
      sym_version,
  [206] = 1,
    ACTIONS(85), 1,
      sym_version,
  [210] = 1,
    ACTIONS(87), 1,
      anon_sym_LF,
  [214] = 1,
    ACTIONS(89), 1,
      anon_sym_COLON,
  [218] = 1,
    ACTIONS(91), 1,
      sym_version,
  [222] = 1,
    ACTIONS(93), 1,
      sym_path,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 43,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 67,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 84,
  [SMALL_STATE(10)] = 94,
  [SMALL_STATE(11)] = 100,
  [SMALL_STATE(12)] = 106,
  [SMALL_STATE(13)] = 116,
  [SMALL_STATE(14)] = 123,
  [SMALL_STATE(15)] = 130,
  [SMALL_STATE(16)] = 137,
  [SMALL_STATE(17)] = 144,
  [SMALL_STATE(18)] = 151,
  [SMALL_STATE(19)] = 158,
  [SMALL_STATE(20)] = 162,
  [SMALL_STATE(21)] = 166,
  [SMALL_STATE(22)] = 170,
  [SMALL_STATE(23)] = 174,
  [SMALL_STATE(24)] = 178,
  [SMALL_STATE(25)] = 182,
  [SMALL_STATE(26)] = 186,
  [SMALL_STATE(27)] = 190,
  [SMALL_STATE(28)] = 194,
  [SMALL_STATE(29)] = 198,
  [SMALL_STATE(30)] = 202,
  [SMALL_STATE(31)] = 206,
  [SMALL_STATE(32)] = 210,
  [SMALL_STATE(33)] = 214,
  [SMALL_STATE(34)] = 218,
  [SMALL_STATE(35)] = 222,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(33),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 1),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_item, 1, .production_id = 7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_item, 3, .production_id = 9),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [61] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2, .production_id = 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_line, 3, .production_id = 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 6),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 3, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4, .production_id = 8),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 10),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
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
