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

#define LANGUAGE_VERSION 13
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_GET = 1,
  anon_sym_PUT = 2,
  anon_sym_ACL = 3,
  anon_sym_HEAD = 4,
  anon_sym_POST = 5,
  anon_sym_COPY = 6,
  anon_sym_LOCK = 7,
  anon_sym_MOVE = 8,
  anon_sym_BIND = 9,
  anon_sym_LINK = 10,
  anon_sym_PATCH = 11,
  anon_sym_TRACE = 12,
  anon_sym_MKCOL = 13,
  anon_sym_MERGE = 14,
  anon_sym_PURGE = 15,
  anon_sym_NOTIFY = 16,
  anon_sym_SEARCH = 17,
  anon_sym_UNLOCK = 18,
  anon_sym_REBIND = 19,
  anon_sym_UNBIND = 20,
  anon_sym_REPORT = 21,
  anon_sym_DELETE = 22,
  anon_sym_UNLINK = 23,
  anon_sym_CONNECT = 24,
  anon_sym_MSEARCH = 25,
  anon_sym_OPTIONS = 26,
  anon_sym_PROPFIND = 27,
  anon_sym_CHECKOUT = 28,
  anon_sym_PROPPATCH = 29,
  anon_sym_SUBSCRIBE = 30,
  anon_sym_MKCALENDAR = 31,
  anon_sym_MKACTIVITY = 32,
  anon_sym_UNSUBSCRIBE = 33,
  anon_sym_SOURCE = 34,
  anon_sym_QMARK = 35,
  anon_sym_AMP = 36,
  sym_path = 37,
  anon_sym_EQ = 38,
  sym_query_name = 39,
  sym_query_value = 40,
  sym_hash = 41,
  sym_version = 42,
  sym_status = 43,
  aux_sym_reason_token1 = 44,
  anon_sym_COLON = 45,
  sym_header_name = 46,
  sym__whitespace = 47,
  sym__space = 48,
  sym__newline = 49,
  sym_source_file = 50,
  sym_request_line = 51,
  sym_method = 52,
  sym_target = 53,
  sym_query_item = 54,
  sym_status_line = 55,
  sym_reason = 56,
  sym_header = 57,
  sym_header_value = 58,
  sym_body = 59,
  sym__data = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_target_repeat1 = 62,
  aux_sym_body_repeat1 = 63,
  aux_sym_body_repeat2 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym__whitespace] = "_whitespace",
  [sym__space] = "_space",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym_request_line] = "request_line",
  [sym_method] = "method",
  [sym_target] = "target",
  [sym_query_item] = "query_item",
  [sym_status_line] = "status_line",
  [sym_reason] = "reason",
  [sym_header] = "header",
  [sym_header_value] = "header_value",
  [sym_body] = "body",
  [sym__data] = "_data",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_target_repeat1] = "target_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_body_repeat2] = "body_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [sym__whitespace] = sym__whitespace,
  [sym__space] = sym__space,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym_request_line] = sym_request_line,
  [sym_method] = sym_method,
  [sym_target] = sym_target,
  [sym_query_item] = sym_query_item,
  [sym_status_line] = sym_status_line,
  [sym_reason] = sym_reason,
  [sym_header] = sym_header,
  [sym_header_value] = sym_header_value,
  [sym_body] = sym_body,
  [sym__data] = sym__data,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_target_repeat1] = aux_sym_target_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_body_repeat2] = aux_sym_body_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
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
  [sym__data] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat2] = {
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 3},
  [9] = {.index = 16, .length = 2},
  [10] = {.index = 18, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 0},
  [1] =
    {field_body, 3},
  [2] =
    {field_hash, 1},
    {field_path, 0},
  [4] =
    {field_query_name, 0},
  [5] =
    {field_reason, 4},
    {field_status, 2},
    {field_version, 0},
  [8] =
    {field_header_name, 0},
    {field_header_name, 1},
    {field_header_value, 3},
  [11] =
    {field_hash, 3},
    {field_path, 0},
  [13] =
    {field_method, 0},
    {field_target, 2},
    {field_version, 4},
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
      if (eof) ADVANCE(151);
      if (lookahead == '\n') ADVANCE(374);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '&') ADVANCE(221);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '=') ADVANCE(223);
      if (lookahead == '?') ADVANCE(220);
      if (lookahead == 'A') ADVANCE(248);
      if (lookahead == 'B') ADVANCE(297);
      if (lookahead == 'C') ADVANCE(295);
      if (lookahead == 'D') ADVANCE(280);
      if (lookahead == 'G') ADVANCE(268);
      if (lookahead == 'H') ADVANCE(269);
      if (lookahead == 'L') ADVANCE(300);
      if (lookahead == 'M') ADVANCE(279);
      if (lookahead == 'N') ADVANCE(329);
      if (lookahead == 'O') ADVANCE(335);
      if (lookahead == 'P') ADVANCE(237);
      if (lookahead == 'R') ADVANCE(270);
      if (lookahead == 'S') ADVANCE(281);
      if (lookahead == 'T') ADVANCE(338);
      if (lookahead == 'U') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (lookahead == '-' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(374);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(143);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(142);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(111);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(130);
      if (lookahead == 'O') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'U') ADVANCE(114);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(108);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(132);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'O') ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(112);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(119);
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(73);
      if (lookahead == 'P') ADVANCE(102);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(74);
      if (lookahead == 'L') ADVANCE(75);
      if (lookahead == 'S') ADVANCE(136);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(120);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(84);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(80);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(83);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(110);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(82);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(131);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(124);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(116);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(168);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(158);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(188);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(190);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(204);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(9);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(121);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(4);
      if (lookahead == 'T') ADVANCE(127);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(178);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(180);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(194);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(218);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(210);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(216);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead == 'K') ADVANCE(5);
      if (lookahead == 'O') ADVANCE(138);
      if (lookahead == 'S') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(6);
      if (lookahead == 'O') ADVANCE(135);
      if (lookahead == 'U') ADVANCE(13);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(133);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 58:
      if (lookahead == 'F') ADVANCE(140);
      END_STATE();
    case 59:
      if (lookahead == 'F') ADVANCE(76);
      if (lookahead == 'P') ADVANCE(10);
      END_STATE();
    case 60:
      if (lookahead == 'G') ADVANCE(43);
      END_STATE();
    case 61:
      if (lookahead == 'G') ADVANCE(44);
      END_STATE();
    case 62:
      if (lookahead == 'H') ADVANCE(172);
      END_STATE();
    case 63:
      if (lookahead == 'H') ADVANCE(184);
      END_STATE();
    case 64:
      if (lookahead == 'H') ADVANCE(200);
      END_STATE();
    case 65:
      if (lookahead == 'H') ADVANCE(208);
      END_STATE();
    case 66:
      if (lookahead == 'H') ADVANCE(55);
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 'I') ADVANCE(137);
      END_STATE();
    case 70:
      if (lookahead == 'I') ADVANCE(14);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(103);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(94);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(97);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(129);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(15);
      END_STATE();
    case 79:
      if (lookahead == 'K') ADVANCE(170);
      END_STATE();
    case 80:
      if (lookahead == 'K') ADVANCE(164);
      END_STATE();
    case 81:
      if (lookahead == 'K') ADVANCE(196);
      END_STATE();
    case 82:
      if (lookahead == 'K') ADVANCE(186);
      END_STATE();
    case 83:
      if (lookahead == 'K') ADVANCE(101);
      END_STATE();
    case 84:
      if (lookahead == 'L') ADVANCE(156);
      END_STATE();
    case 85:
      if (lookahead == 'L') ADVANCE(176);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(53);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(54);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 89:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(79);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(117);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(98);
      if (lookahead == 'P') ADVANCE(139);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(81);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 99:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(126);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(134);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(113);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 104:
      if (lookahead == 'P') ADVANCE(3);
      END_STATE();
    case 105:
      if (lookahead == 'P') ADVANCE(59);
      END_STATE();
    case 106:
      if (lookahead == 'P') ADVANCE(128);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 108:
      if (lookahead == 'R') ADVANCE(212);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 110:
      if (lookahead == 'R') ADVANCE(70);
      END_STATE();
    case 111:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 112:
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(123);
      END_STATE();
    case 114:
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(154);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 117:
      if (lookahead == 'S') ADVANCE(202);
      END_STATE();
    case 118:
      if (lookahead == 'S') ADVANCE(122);
      END_STATE();
    case 119:
      if (lookahead == 'S') ADVANCE(26);
      END_STATE();
    case 120:
      if (lookahead == 'S') ADVANCE(32);
      END_STATE();
    case 121:
      if (lookahead == 'T') ADVANCE(152);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(160);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(192);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(198);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(206);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(104);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(141);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 134:
      if (lookahead == 'U') ADVANCE(125);
      END_STATE();
    case 135:
      if (lookahead == 'U') ADVANCE(115);
      END_STATE();
    case 136:
      if (lookahead == 'U') ADVANCE(18);
      END_STATE();
    case 137:
      if (lookahead == 'V') ADVANCE(77);
      END_STATE();
    case 138:
      if (lookahead == 'V') ADVANCE(42);
      END_STATE();
    case 139:
      if (lookahead == 'Y') ADVANCE(162);
      END_STATE();
    case 140:
      if (lookahead == 'Y') ADVANCE(182);
      END_STATE();
    case 141:
      if (lookahead == 'Y') ADVANCE(214);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 144:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(224);
      END_STATE();
    case 145:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(225);
      END_STATE();
    case 146:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(222);
      END_STATE();
    case 147:
      if (eof) ADVANCE(151);
      if (lookahead == '\n') ADVANCE(374);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 148:
      if (eof) ADVANCE(151);
      if (lookahead == '\n') ADVANCE(374);
      if (lookahead == '\r') ADVANCE(229);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 149:
      if (eof) ADVANCE(151);
      if (lookahead == 'A') ADVANCE(19);
      if (lookahead == 'B') ADVANCE(68);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'D') ADVANCE(51);
      if (lookahead == 'G') ADVANCE(39);
      if (lookahead == 'H') ADVANCE(40);
      if (lookahead == 'L') ADVANCE(71);
      if (lookahead == 'M') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead == 'P') ADVANCE(8);
      if (lookahead == 'R') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(109);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(372);
      END_STATE();
    case 150:
      if (eof) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_ACL);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_ACL);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_MOVE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_MOVE);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BIND);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_BIND);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_MKCOL);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_MKCOL);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_MERGE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_MERGE);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_NOTIFY);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_NOTIFY);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SEARCH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SEARCH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_REBIND);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_REBIND);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_UNBIND);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_UNBIND);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_REPORT);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_MSEARCH);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_MSEARCH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_CHECKOUT);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_CHECKOUT);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_PROPPATCH);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_PROPPATCH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_SUBSCRIBE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SUBSCRIBE);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_MKCALENDAR);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_MKCALENDAR);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_MKACTIVITY);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_MKACTIVITY);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_UNSUBSCRIBE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_UNSUBSCRIBE);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_SOURCE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SOURCE);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_query_name);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_query_value);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_hash);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_version);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_status);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_reason_token1);
      if (lookahead == '\n') ADVANCE(374);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_reason_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(263);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(257);
      if (lookahead == 'C') ADVANCE(240);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(340);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(347);
      if (lookahead == 'R') ADVANCE(328);
      if (lookahead == 'U') ADVANCE(343);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(337);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(361);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(316);
      if (lookahead == 'O') ADVANCE(314);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(341);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(348);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(277);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(278);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(302);
      if (lookahead == 'P') ADVANCE(331);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(303);
      if (lookahead == 'L') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(365);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(349);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(313);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(291);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(309);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(292);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(312);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(293);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(294);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(339);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(311);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(353);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(274);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(276);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(345);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(169);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(159);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(189);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(191);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(205);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(238);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(350);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(233);
      if (lookahead == 'T') ADVANCE(356);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(245);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(167);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(179);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(181);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(175);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(219);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(211);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(217);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(336);
      if (lookahead == 'K') ADVANCE(234);
      if (lookahead == 'O') ADVANCE(367);
      if (lookahead == 'S') ADVANCE(286);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(315);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(235);
      if (lookahead == 'O') ADVANCE(364);
      if (lookahead == 'U') ADVANCE(242);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(362);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(325);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(252);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(258);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(241);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'F') ADVANCE(369);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'F') ADVANCE(305);
      if (lookahead == 'P') ADVANCE(239);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'G') ADVANCE(272);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'G') ADVANCE(273);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(173);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(185);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(201);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(209);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(284);
      if (lookahead == 'O') ADVANCE(322);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(287);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(318);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(366);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(243);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(319);
      if (lookahead == 'O') ADVANCE(250);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(332);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(321);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(323);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(324);
      if (lookahead == 'O') ADVANCE(256);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(326);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(358);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(244);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(171);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(165);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(197);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(187);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(330);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(157);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(177);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(282);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(283);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(246);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(262);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(308);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(346);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(264);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(327);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(310);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(267);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(266);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(285);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(334);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(355);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(363);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(342);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(320);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(232);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(288);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(357);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(289);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(213);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(236);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(299);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(251);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(253);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(352);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(290);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(260);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(307);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(203);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(351);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(255);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(261);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(153);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(193);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(199);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(296);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(333);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(301);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(370);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(249);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(298);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(254);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(275);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'U') ADVANCE(354);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'U') ADVANCE(344);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'U') ADVANCE(247);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'V') ADVANCE(306);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'V') ADVANCE(271);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'Y') ADVANCE(163);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'Y') ADVANCE(183);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'Y') ADVANCE(215);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 149},
  [2] = {.lex_state = 147},
  [3] = {.lex_state = 147},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 150},
  [6] = {.lex_state = 150},
  [7] = {.lex_state = 148},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 148},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 148},
  [13] = {.lex_state = 150},
  [14] = {.lex_state = 147},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 147},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 150},
  [20] = {.lex_state = 150},
  [21] = {.lex_state = 146},
  [22] = {.lex_state = 144},
  [23] = {.lex_state = 144},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 149},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 147},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 149},
  [37] = {.lex_state = 145},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 147},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
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
    [sym_header_name] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym_request_line] = STATE(17),
    [sym_method] = STATE(42),
    [sym_status_line] = STATE(17),
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
  [0] = 3,
    ACTIONS(11), 1,
      sym_header_name,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(2), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [12] = 4,
    ACTIONS(14), 1,
      ts_builtin_sym_end,
    ACTIONS(16), 1,
      sym_header_name,
    ACTIONS(18), 1,
      sym__newline,
    STATE(2), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [26] = 3,
    ACTIONS(20), 1,
      anon_sym_AMP,
    STATE(4), 1,
      aux_sym_target_repeat1,
    ACTIONS(23), 2,
      sym_hash,
      sym__space,
  [37] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym_reason_token1,
    STATE(5), 1,
      aux_sym_body_repeat2,
    STATE(7), 1,
      sym__data,
  [50] = 4,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      aux_sym_reason_token1,
    STATE(5), 1,
      aux_sym_body_repeat2,
    STATE(7), 1,
      sym__data,
  [63] = 4,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      aux_sym_reason_token1,
    ACTIONS(38), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym_body_repeat1,
  [76] = 4,
    ACTIONS(40), 1,
      anon_sym_AMP,
    ACTIONS(42), 1,
      sym_hash,
    ACTIONS(44), 1,
      sym__space,
    STATE(4), 1,
      aux_sym_target_repeat1,
  [89] = 2,
    ACTIONS(48), 1,
      anon_sym_EQ,
    ACTIONS(46), 3,
      anon_sym_AMP,
      sym_hash,
      sym__space,
  [98] = 4,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      aux_sym_reason_token1,
    ACTIONS(54), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym_body_repeat1,
  [111] = 4,
    ACTIONS(40), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      sym_hash,
    ACTIONS(59), 1,
      sym__space,
    STATE(8), 1,
      aux_sym_target_repeat1,
  [124] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      aux_sym_reason_token1,
    ACTIONS(63), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym_body_repeat1,
  [137] = 4,
    ACTIONS(32), 1,
      aux_sym_reason_token1,
    STATE(6), 1,
      aux_sym_body_repeat2,
    STATE(7), 1,
      sym__data,
    STATE(32), 1,
      sym_body,
  [150] = 1,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [156] = 3,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(69), 1,
      sym_hash,
    ACTIONS(71), 1,
      sym__space,
  [166] = 1,
    ACTIONS(23), 3,
      anon_sym_AMP,
      sym_hash,
      sym__space,
  [172] = 2,
    ACTIONS(16), 1,
      sym_header_name,
    STATE(3), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [180] = 1,
    ACTIONS(73), 3,
      anon_sym_AMP,
      sym_hash,
      sym__space,
  [186] = 2,
    ACTIONS(75), 1,
      aux_sym_reason_token1,
    STATE(26), 1,
      sym_reason,
  [193] = 2,
    ACTIONS(77), 1,
      aux_sym_reason_token1,
    STATE(28), 1,
      sym_header_value,
  [200] = 2,
    ACTIONS(79), 1,
      sym_path,
    STATE(35), 1,
      sym_target,
  [207] = 2,
    ACTIONS(81), 1,
      sym_query_name,
    STATE(16), 1,
      sym_query_item,
  [214] = 2,
    ACTIONS(81), 1,
      sym_query_name,
    STATE(11), 1,
      sym_query_item,
  [221] = 1,
    ACTIONS(83), 1,
      sym__space,
  [225] = 1,
    ACTIONS(85), 1,
      sym__newline,
  [229] = 1,
    ACTIONS(87), 1,
      sym__newline,
  [233] = 1,
    ACTIONS(89), 1,
      sym__newline,
  [237] = 1,
    ACTIONS(91), 1,
      sym__newline,
  [241] = 1,
    ACTIONS(93), 1,
      sym_version,
  [245] = 1,
    ACTIONS(95), 1,
      sym__space,
  [249] = 1,
    ACTIONS(97), 1,
      sym__space,
  [253] = 1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
  [257] = 1,
    ACTIONS(101), 1,
      sym__newline,
  [261] = 1,
    ACTIONS(103), 1,
      sym_header_name,
  [265] = 1,
    ACTIONS(105), 1,
      sym__space,
  [269] = 1,
    ACTIONS(107), 1,
      sym__whitespace,
  [273] = 1,
    ACTIONS(109), 1,
      sym_query_value,
  [277] = 1,
    ACTIONS(111), 1,
      anon_sym_COLON,
  [281] = 1,
    ACTIONS(113), 1,
      sym__space,
  [285] = 1,
    ACTIONS(115), 1,
      sym_status,
  [289] = 1,
    ACTIONS(117), 1,
      sym_header_name,
  [293] = 1,
    ACTIONS(119), 1,
      sym__space,
  [297] = 1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
  [301] = 1,
    ACTIONS(123), 1,
      sym__space,
  [305] = 1,
    ACTIONS(125), 1,
      sym__space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 37,
  [SMALL_STATE(6)] = 50,
  [SMALL_STATE(7)] = 63,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 89,
  [SMALL_STATE(10)] = 98,
  [SMALL_STATE(11)] = 111,
  [SMALL_STATE(12)] = 124,
  [SMALL_STATE(13)] = 137,
  [SMALL_STATE(14)] = 150,
  [SMALL_STATE(15)] = 156,
  [SMALL_STATE(16)] = 166,
  [SMALL_STATE(17)] = 172,
  [SMALL_STATE(18)] = 180,
  [SMALL_STATE(19)] = 186,
  [SMALL_STATE(20)] = 193,
  [SMALL_STATE(21)] = 200,
  [SMALL_STATE(22)] = 207,
  [SMALL_STATE(23)] = 214,
  [SMALL_STATE(24)] = 221,
  [SMALL_STATE(25)] = 225,
  [SMALL_STATE(26)] = 229,
  [SMALL_STATE(27)] = 233,
  [SMALL_STATE(28)] = 237,
  [SMALL_STATE(29)] = 241,
  [SMALL_STATE(30)] = 245,
  [SMALL_STATE(31)] = 249,
  [SMALL_STATE(32)] = 253,
  [SMALL_STATE(33)] = 257,
  [SMALL_STATE(34)] = 261,
  [SMALL_STATE(35)] = 265,
  [SMALL_STATE(36)] = 269,
  [SMALL_STATE(37)] = 273,
  [SMALL_STATE(38)] = 277,
  [SMALL_STATE(39)] = 281,
  [SMALL_STATE(40)] = 285,
  [SMALL_STATE(41)] = 289,
  [SMALL_STATE(42)] = 293,
  [SMALL_STATE(43)] = 297,
  [SMALL_STATE(44)] = 301,
  [SMALL_STATE(45)] = 305,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(7),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat2, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4, .production_id = 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_item, 1, .production_id = 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat2, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, .production_id = 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_item, 3, .production_id = 9),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 6, .production_id = 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4, .production_id = 7),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_line, 6, .production_id = 8),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [121] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 10),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
