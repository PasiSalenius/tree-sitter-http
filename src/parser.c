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
#define STATE_COUNT 109
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

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
  anon_sym_SLASH = 37,
  sym_path_component = 38,
  anon_sym_EQ = 39,
  sym_query_name = 40,
  sym_query_value = 41,
  sym_hash = 42,
  sym_version = 43,
  sym_status = 44,
  aux_sym_reason_token1 = 45,
  anon_sym_COLON = 46,
  sym__content_type_name = 47,
  sym__html_header_value = 48,
  aux_sym__javascript_header_value_token1 = 49,
  aux_sym__javascript_header_value_token2 = 50,
  sym__json_header_value = 51,
  aux_sym__xml_header_value_token1 = 52,
  aux_sym__xml_header_value_token2 = 53,
  sym_header_name = 54,
  sym_header_value = 55,
  sym__whitespace = 56,
  sym__space = 57,
  sym__newline = 58,
  sym_source_file = 59,
  sym__start_line = 60,
  sym_request_line = 61,
  sym_method = 62,
  sym__target = 63,
  aux_sym__path = 64,
  sym_query_item = 65,
  sym_status_line = 66,
  sym_reason = 67,
  sym__html_content = 68,
  sym__javascript_content = 69,
  sym__json_content = 70,
  sym__xml_content = 71,
  sym__other_content = 72,
  sym_header = 73,
  sym__javascript_header_value = 74,
  sym__xml_header_value = 75,
  sym_body = 76,
  sym_html_body = 77,
  sym_javascript_body = 78,
  sym_json_body = 79,
  sym_xml_body = 80,
  sym__data = 81,
  aux_sym_source_file_repeat1 = 82,
  aux_sym__target_repeat1 = 83,
  aux_sym_body_repeat1 = 84,
  aux_sym_body_repeat2 = 85,
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
  [anon_sym_SLASH] = "/",
  [sym_path_component] = "path_component",
  [anon_sym_EQ] = "=",
  [sym_query_name] = "query_name",
  [sym_query_value] = "query_value",
  [sym_hash] = "hash",
  [sym_version] = "version",
  [sym_status] = "status",
  [aux_sym_reason_token1] = "reason_token1",
  [anon_sym_COLON] = ":",
  [sym__content_type_name] = "header_name",
  [sym__html_header_value] = "header_value",
  [aux_sym__javascript_header_value_token1] = "_javascript_header_value_token1",
  [aux_sym__javascript_header_value_token2] = "_javascript_header_value_token2",
  [sym__json_header_value] = "header_value",
  [aux_sym__xml_header_value_token1] = "_xml_header_value_token1",
  [aux_sym__xml_header_value_token2] = "_xml_header_value_token2",
  [sym_header_name] = "header_name",
  [sym_header_value] = "header_value",
  [sym__whitespace] = "_whitespace",
  [sym__space] = "_space",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym__start_line] = "_start_line",
  [sym_request_line] = "request_line",
  [sym_method] = "method",
  [sym__target] = "_target",
  [aux_sym__path] = "_path",
  [sym_query_item] = "query_item",
  [sym_status_line] = "status_line",
  [sym_reason] = "reason",
  [sym__html_content] = "header",
  [sym__javascript_content] = "header",
  [sym__json_content] = "header",
  [sym__xml_content] = "header",
  [sym__other_content] = "header",
  [sym_header] = "header",
  [sym__javascript_header_value] = "header_value",
  [sym__xml_header_value] = "header_value",
  [sym_body] = "body",
  [sym_html_body] = "html_body",
  [sym_javascript_body] = "javascript_body",
  [sym_json_body] = "json_body",
  [sym_xml_body] = "xml_body",
  [sym__data] = "_data",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__target_repeat1] = "_target_repeat1",
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
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_path_component] = sym_path_component,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_query_name] = sym_query_name,
  [sym_query_value] = sym_query_value,
  [sym_hash] = sym_hash,
  [sym_version] = sym_version,
  [sym_status] = sym_status,
  [aux_sym_reason_token1] = aux_sym_reason_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__content_type_name] = sym_header_name,
  [sym__html_header_value] = sym_header_value,
  [aux_sym__javascript_header_value_token1] = aux_sym__javascript_header_value_token1,
  [aux_sym__javascript_header_value_token2] = aux_sym__javascript_header_value_token2,
  [sym__json_header_value] = sym_header_value,
  [aux_sym__xml_header_value_token1] = aux_sym__xml_header_value_token1,
  [aux_sym__xml_header_value_token2] = aux_sym__xml_header_value_token2,
  [sym_header_name] = sym_header_name,
  [sym_header_value] = sym_header_value,
  [sym__whitespace] = sym__whitespace,
  [sym__space] = sym__space,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym__start_line] = sym__start_line,
  [sym_request_line] = sym_request_line,
  [sym_method] = sym_method,
  [sym__target] = sym__target,
  [aux_sym__path] = aux_sym__path,
  [sym_query_item] = sym_query_item,
  [sym_status_line] = sym_status_line,
  [sym_reason] = sym_reason,
  [sym__html_content] = sym_header,
  [sym__javascript_content] = sym_header,
  [sym__json_content] = sym_header,
  [sym__xml_content] = sym_header,
  [sym__other_content] = sym_header,
  [sym_header] = sym_header,
  [sym__javascript_header_value] = sym_header_value,
  [sym__xml_header_value] = sym_header_value,
  [sym_body] = sym_body,
  [sym_html_body] = sym_html_body,
  [sym_javascript_body] = sym_javascript_body,
  [sym_json_body] = sym_json_body,
  [sym_xml_body] = sym_xml_body,
  [sym__data] = sym__data,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__target_repeat1] = aux_sym__target_repeat1,
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_path_component] = {
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
  [sym__content_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym__html_header_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__javascript_header_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__javascript_header_value_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__json_header_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__xml_header_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__xml_header_value_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_header_name] = {
    .visible = true,
    .named = true,
  },
  [sym_header_value] = {
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
  [sym__start_line] = {
    .visible = false,
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
  [sym__target] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__path] = {
    .visible = false,
    .named = false,
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
  [sym__html_content] = {
    .visible = true,
    .named = true,
  },
  [sym__javascript_content] = {
    .visible = true,
    .named = true,
  },
  [sym__json_content] = {
    .visible = true,
    .named = true,
  },
  [sym__xml_content] = {
    .visible = true,
    .named = true,
  },
  [sym__other_content] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym__javascript_header_value] = {
    .visible = true,
    .named = true,
  },
  [sym__xml_header_value] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_html_body] = {
    .visible = true,
    .named = true,
  },
  [sym_javascript_body] = {
    .visible = true,
    .named = true,
  },
  [sym_json_body] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_body] = {
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
  [aux_sym__target_repeat1] = {
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
      if (eof) ADVANCE(185);
      if (lookahead == '\t') ADVANCE(493);
      if (lookahead == '\n') ADVANCE(493);
      if (lookahead == '\r') ADVANCE(492);
      if (lookahead == ' ') ADVANCE(495);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '&') ADVANCE(255);
      if (lookahead == '/') ADVANCE(256);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead == '?') ADVANCE(254);
      if (lookahead == 'A') ADVANCE(294);
      if (lookahead == 'B') ADVANCE(343);
      if (lookahead == 'C') ADVANCE(341);
      if (lookahead == 'D') ADVANCE(326);
      if (lookahead == 'G') ADVANCE(314);
      if (lookahead == 'H') ADVANCE(315);
      if (lookahead == 'L') ADVANCE(346);
      if (lookahead == 'M') ADVANCE(325);
      if (lookahead == 'N') ADVANCE(375);
      if (lookahead == 'O') ADVANCE(381);
      if (lookahead == 'P') ADVANCE(283);
      if (lookahead == 'R') ADVANCE(316);
      if (lookahead == 'S') ADVANCE(327);
      if (lookahead == 'T') ADVANCE(384);
      if (lookahead == 'U') ADVANCE(363);
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead == 'c') ADVANCE(428);
      if (lookahead == 't') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (lookahead == '-' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(496);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(175);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(178);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(177);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(112);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == 'R') ADVANCE(100);
      if (lookahead == 'U') ADVANCE(115);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(109);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(133);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'O') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(113);
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(120);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(74);
      if (lookahead == 'P') ADVANCE(103);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(137);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(121);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(85);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(81);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(64);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(84);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(111);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(83);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(132);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(125);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(117);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(202);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(192);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(222);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(224);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(238);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(10);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(122);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(128);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(200);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(212);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(214);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(208);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(228);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(252);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(244);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(250);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(108);
      if (lookahead == 'K') ADVANCE(6);
      if (lookahead == 'O') ADVANCE(139);
      if (lookahead == 'S') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(7);
      if (lookahead == 'O') ADVANCE(136);
      if (lookahead == 'U') ADVANCE(14);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(134);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(97);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 59:
      if (lookahead == 'F') ADVANCE(141);
      END_STATE();
    case 60:
      if (lookahead == 'F') ADVANCE(77);
      if (lookahead == 'P') ADVANCE(11);
      END_STATE();
    case 61:
      if (lookahead == 'G') ADVANCE(44);
      END_STATE();
    case 62:
      if (lookahead == 'G') ADVANCE(45);
      END_STATE();
    case 63:
      if (lookahead == 'H') ADVANCE(206);
      END_STATE();
    case 64:
      if (lookahead == 'H') ADVANCE(218);
      END_STATE();
    case 65:
      if (lookahead == 'H') ADVANCE(234);
      END_STATE();
    case 66:
      if (lookahead == 'H') ADVANCE(242);
      END_STATE();
    case 67:
      if (lookahead == 'H') ADVANCE(56);
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(59);
      END_STATE();
    case 69:
      if (lookahead == 'I') ADVANCE(90);
      END_STATE();
    case 70:
      if (lookahead == 'I') ADVANCE(138);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(15);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(93);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(28);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(130);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(16);
      END_STATE();
    case 80:
      if (lookahead == 'K') ADVANCE(204);
      END_STATE();
    case 81:
      if (lookahead == 'K') ADVANCE(198);
      END_STATE();
    case 82:
      if (lookahead == 'K') ADVANCE(230);
      END_STATE();
    case 83:
      if (lookahead == 'K') ADVANCE(220);
      END_STATE();
    case 84:
      if (lookahead == 'K') ADVANCE(102);
      END_STATE();
    case 85:
      if (lookahead == 'L') ADVANCE(190);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(210);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(54);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(55);
      END_STATE();
    case 89:
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(118);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(99);
      if (lookahead == 'P') ADVANCE(140);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(57);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(106);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(135);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(114);
      END_STATE();
    case 104:
      if (lookahead == 'O') ADVANCE(92);
      END_STATE();
    case 105:
      if (lookahead == 'P') ADVANCE(4);
      END_STATE();
    case 106:
      if (lookahead == 'P') ADVANCE(60);
      END_STATE();
    case 107:
      if (lookahead == 'P') ADVANCE(129);
      END_STATE();
    case 108:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(246);
      END_STATE();
    case 110:
      if (lookahead == 'R') ADVANCE(8);
      END_STATE();
    case 111:
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 112:
      if (lookahead == 'R') ADVANCE(23);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 114:
      if (lookahead == 'R') ADVANCE(124);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(188);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 118:
      if (lookahead == 'S') ADVANCE(236);
      END_STATE();
    case 119:
      if (lookahead == 'S') ADVANCE(123);
      END_STATE();
    case 120:
      if (lookahead == 'S') ADVANCE(27);
      END_STATE();
    case 121:
      if (lookahead == 'S') ADVANCE(33);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(186);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(194);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(226);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(232);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(240);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(105);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(142);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 135:
      if (lookahead == 'U') ADVANCE(126);
      END_STATE();
    case 136:
      if (lookahead == 'U') ADVANCE(116);
      END_STATE();
    case 137:
      if (lookahead == 'U') ADVANCE(19);
      END_STATE();
    case 138:
      if (lookahead == 'V') ADVANCE(78);
      END_STATE();
    case 139:
      if (lookahead == 'V') ADVANCE(43);
      END_STATE();
    case 140:
      if (lookahead == 'Y') ADVANCE(196);
      END_STATE();
    case 141:
      if (lookahead == 'Y') ADVANCE(216);
      END_STATE();
    case 142:
      if (lookahead == 'Y') ADVANCE(248);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 149:
      if (lookahead == 'h') ADVANCE(169);
      if (lookahead == 'j') ADVANCE(143);
      END_STATE();
    case 150:
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 153:
      if (lookahead == 'j') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(150);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 173:
      if (lookahead == 'v') ADVANCE(144);
      END_STATE();
    case 174:
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 175:
      if (lookahead == 'x') ADVANCE(160);
      END_STATE();
    case 176:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(493);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 179:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(259);
      END_STATE();
    case 180:
      if (eof) ADVANCE(185);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(494);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '&') ADVANCE(255);
      if (lookahead == '/') ADVANCE(256);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead == '?') ADVANCE(254);
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'B') ADVANCE(69);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(40);
      if (lookahead == 'H') ADVANCE(41);
      if (lookahead == 'L') ADVANCE(72);
      if (lookahead == 'M') ADVANCE(51);
      if (lookahead == 'N') ADVANCE(101);
      if (lookahead == 'O') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(9);
      if (lookahead == 'R') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(110);
      if (lookahead == 'U') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 181:
      if (eof) ADVANCE(185);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 182:
      if (eof) ADVANCE(185);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 183:
      if (eof) ADVANCE(185);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == '\r') ADVANCE(265);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 184:
      if (eof) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(266);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ACL);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ACL);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_MOVE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_MOVE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_BIND);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_BIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_MKCOL);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_MKCOL);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_MERGE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_MERGE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_NOTIFY);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_NOTIFY);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_SEARCH);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SEARCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_REBIND);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_REBIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_UNBIND);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_UNBIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_REPORT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_MSEARCH);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_MSEARCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_CHECKOUT);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_CHECKOUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_PROPPATCH);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_PROPPATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_SUBSCRIBE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_SUBSCRIBE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_MKCALENDAR);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_MKCALENDAR);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_MKACTIVITY);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_MKACTIVITY);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_UNSUBSCRIBE);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_UNSUBSCRIBE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_SOURCE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SOURCE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_path_component);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_query_name);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_query_value);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_hash);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_version);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_status);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_status);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_reason_token1);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_reason_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__content_type_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__html_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__javascript_header_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__javascript_header_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__json_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__xml_header_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__xml_header_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(303);
      if (lookahead == 'C') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'O') ADVANCE(393);
      if (lookahead == 'R') ADVANCE(374);
      if (lookahead == 'U') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(362);
      if (lookahead == 'O') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(348);
      if (lookahead == 'P') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(349);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(279);
      if (lookahead == 'T') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(382);
      if (lookahead == 'K') ADVANCE(280);
      if (lookahead == 'O') ADVANCE(413);
      if (lookahead == 'S') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(281);
      if (lookahead == 'O') ADVANCE(410);
      if (lookahead == 'U') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'F') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'F') ADVANCE(351);
      if (lookahead == 'P') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'G') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'G') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(330);
      if (lookahead == 'O') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(365);
      if (lookahead == 'O') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(370);
      if (lookahead == 'O') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(373);
      if (lookahead == 'P') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'U') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'U') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'U') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'V') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'V') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'Y') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'Y') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'Y') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'x') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'y') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '+') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '/') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '/') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 's') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'h') ADVANCE(484);
      if (lookahead == 'j') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'h') ADVANCE(486);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'j') ADVANCE(449);
      if (lookahead == 'x') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'r') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'v') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'v') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'x') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'x') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(493);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(493);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(493);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 180},
  [2] = {.lex_state = 181},
  [3] = {.lex_state = 444},
  [4] = {.lex_state = 181},
  [5] = {.lex_state = 181},
  [6] = {.lex_state = 182},
  [7] = {.lex_state = 182},
  [8] = {.lex_state = 182},
  [9] = {.lex_state = 182},
  [10] = {.lex_state = 182},
  [11] = {.lex_state = 182},
  [12] = {.lex_state = 182},
  [13] = {.lex_state = 182},
  [14] = {.lex_state = 182},
  [15] = {.lex_state = 182},
  [16] = {.lex_state = 182},
  [17] = {.lex_state = 182},
  [18] = {.lex_state = 182},
  [19] = {.lex_state = 182},
  [20] = {.lex_state = 182},
  [21] = {.lex_state = 182},
  [22] = {.lex_state = 182},
  [23] = {.lex_state = 182},
  [24] = {.lex_state = 180},
  [25] = {.lex_state = 182},
  [26] = {.lex_state = 182},
  [27] = {.lex_state = 182},
  [28] = {.lex_state = 180},
  [29] = {.lex_state = 184},
  [30] = {.lex_state = 180},
  [31] = {.lex_state = 180},
  [32] = {.lex_state = 180},
  [33] = {.lex_state = 183},
  [34] = {.lex_state = 184},
  [35] = {.lex_state = 184},
  [36] = {.lex_state = 184},
  [37] = {.lex_state = 184},
  [38] = {.lex_state = 181},
  [39] = {.lex_state = 180},
  [40] = {.lex_state = 180},
  [41] = {.lex_state = 184},
  [42] = {.lex_state = 184},
  [43] = {.lex_state = 183},
  [44] = {.lex_state = 184},
  [45] = {.lex_state = 184},
  [46] = {.lex_state = 184},
  [47] = {.lex_state = 184},
  [48] = {.lex_state = 184},
  [49] = {.lex_state = 184},
  [50] = {.lex_state = 184},
  [51] = {.lex_state = 184},
  [52] = {.lex_state = 184},
  [53] = {.lex_state = 184},
  [54] = {.lex_state = 184},
  [55] = {.lex_state = 184},
  [56] = {.lex_state = 184},
  [57] = {.lex_state = 184},
  [58] = {.lex_state = 183},
  [59] = {.lex_state = 182},
  [60] = {.lex_state = 182},
  [61] = {.lex_state = 182},
  [62] = {.lex_state = 180},
  [63] = {.lex_state = 180},
  [64] = {.lex_state = 182},
  [65] = {.lex_state = 182},
  [66] = {.lex_state = 182},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 179},
  [69] = {.lex_state = 184},
  [70] = {.lex_state = 181},
  [71] = {.lex_state = 179},
  [72] = {.lex_state = 181},
  [73] = {.lex_state = 180},
  [74] = {.lex_state = 257},
  [75] = {.lex_state = 180},
  [76] = {.lex_state = 180},
  [77] = {.lex_state = 180},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 180},
  [81] = {.lex_state = 180},
  [82] = {.lex_state = 180},
  [83] = {.lex_state = 491},
  [84] = {.lex_state = 180},
  [85] = {.lex_state = 180},
  [86] = {.lex_state = 180},
  [87] = {.lex_state = 180},
  [88] = {.lex_state = 180},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 180},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 180},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 180},
  [95] = {.lex_state = 260},
  [96] = {.lex_state = 180},
  [97] = {.lex_state = 180},
  [98] = {.lex_state = 176},
  [99] = {.lex_state = 180},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 180},
  [102] = {.lex_state = 176},
  [103] = {.lex_state = 180},
  [104] = {.lex_state = 180},
  [105] = {.lex_state = 180},
  [106] = {.lex_state = 491},
  [107] = {.lex_state = 176},
  [108] = {.lex_state = 0},
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
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_hash] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [sym_status] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__content_type_name] = ACTIONS(1),
    [sym__html_header_value] = ACTIONS(1),
    [aux_sym__javascript_header_value_token1] = ACTIONS(1),
    [aux_sym__javascript_header_value_token2] = ACTIONS(1),
    [sym__json_header_value] = ACTIONS(1),
    [aux_sym__xml_header_value_token1] = ACTIONS(1),
    [aux_sym__xml_header_value_token2] = ACTIONS(1),
    [sym_header_name] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(100),
    [sym__start_line] = STATE(4),
    [sym_request_line] = STATE(4),
    [sym_method] = STATE(75),
    [sym_status_line] = STATE(4),
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
  [0] = 10,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym__content_type_name,
    ACTIONS(13), 1,
      sym_header_name,
    ACTIONS(15), 1,
      sym__newline,
    STATE(7), 1,
      sym__javascript_content,
    STATE(16), 1,
      sym__html_content,
    STATE(18), 1,
      sym__json_content,
    STATE(19), 1,
      sym__xml_content,
    STATE(20), 1,
      sym__other_content,
    STATE(5), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [32] = 7,
    ACTIONS(17), 1,
      sym__html_header_value,
    ACTIONS(21), 1,
      sym__json_header_value,
    ACTIONS(25), 1,
      sym_header_value,
    STATE(86), 1,
      sym__xml_header_value,
    STATE(94), 1,
      sym__javascript_header_value,
    ACTIONS(19), 2,
      aux_sym__javascript_header_value_token1,
      aux_sym__javascript_header_value_token2,
    ACTIONS(23), 2,
      aux_sym__xml_header_value_token1,
      aux_sym__xml_header_value_token2,
  [56] = 8,
    ACTIONS(11), 1,
      sym__content_type_name,
    ACTIONS(13), 1,
      sym_header_name,
    STATE(6), 1,
      sym__other_content,
    STATE(10), 1,
      sym__html_content,
    STATE(11), 1,
      sym__javascript_content,
    STATE(12), 1,
      sym__json_content,
    STATE(13), 1,
      sym__xml_content,
    STATE(2), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [82] = 4,
    ACTIONS(29), 1,
      sym__content_type_name,
    ACTIONS(31), 1,
      sym_header_name,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(5), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [97] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(34), 1,
      sym_header_name,
    STATE(14), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [111] = 4,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [125] = 4,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      sym__newline,
    STATE(15), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [139] = 4,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym__newline,
    STATE(15), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [153] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(46), 1,
      sym__newline,
    STATE(21), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [167] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(48), 1,
      sym__newline,
    STATE(23), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [181] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(50), 1,
      sym__newline,
    STATE(25), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [195] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(52), 1,
      sym__newline,
    STATE(27), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [209] = 4,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      sym__newline,
    STATE(15), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [223] = 3,
    ACTIONS(56), 1,
      sym_header_name,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(15), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [235] = 4,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym__newline,
    STATE(9), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [249] = 4,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      sym__newline,
    STATE(15), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [263] = 4,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      sym__newline,
    STATE(17), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [277] = 4,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym__newline,
    STATE(22), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [291] = 4,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      sym__newline,
    STATE(26), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [305] = 4,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym__newline,
    STATE(15), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [319] = 4,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym__newline,
    STATE(15), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [333] = 4,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym__newline,
    STATE(15), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [347] = 5,
    ACTIONS(69), 1,
      anon_sym_QMARK,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_hash,
    ACTIONS(75), 1,
      sym__space,
    STATE(28), 1,
      aux_sym__path,
  [363] = 4,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      sym__newline,
    STATE(15), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [377] = 4,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      sym__newline,
    STATE(15), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [391] = 4,
    ACTIONS(34), 1,
      sym_header_name,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym__newline,
    STATE(15), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [405] = 3,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      aux_sym__path,
    ACTIONS(79), 3,
      anon_sym_QMARK,
      sym_hash,
      sym__space,
  [417] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    STATE(43), 1,
      sym__data,
    STATE(50), 1,
      aux_sym_body_repeat2,
    STATE(91), 1,
      sym_xml_body,
  [430] = 1,
    ACTIONS(79), 4,
      anon_sym_QMARK,
      anon_sym_SLASH,
      sym_hash,
      sym__space,
  [437] = 3,
    ACTIONS(86), 1,
      anon_sym_AMP,
    STATE(31), 1,
      aux_sym__target_repeat1,
    ACTIONS(89), 2,
      sym_hash,
      sym__space,
  [448] = 4,
    ACTIONS(91), 1,
      anon_sym_AMP,
    ACTIONS(93), 1,
      sym_hash,
    ACTIONS(95), 1,
      sym__space,
    STATE(31), 1,
      aux_sym__target_repeat1,
  [461] = 4,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      aux_sym_reason_token1,
    ACTIONS(101), 1,
      sym__newline,
    STATE(33), 1,
      aux_sym_body_repeat1,
  [474] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    STATE(43), 1,
      sym__data,
    STATE(44), 1,
      aux_sym_body_repeat2,
    STATE(91), 1,
      sym_html_body,
  [487] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    STATE(43), 1,
      sym__data,
    STATE(46), 1,
      aux_sym_body_repeat2,
    STATE(91), 1,
      sym_javascript_body,
  [500] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    STATE(43), 1,
      sym__data,
    STATE(48), 1,
      aux_sym_body_repeat2,
    STATE(91), 1,
      sym_json_body,
  [513] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    STATE(43), 1,
      sym__data,
    STATE(52), 1,
      aux_sym_body_repeat2,
    STATE(91), 1,
      sym_body,
  [526] = 2,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(106), 2,
      sym__content_type_name,
      sym_header_name,
  [535] = 4,
    ACTIONS(91), 1,
      anon_sym_AMP,
    ACTIONS(108), 1,
      sym_hash,
    ACTIONS(110), 1,
      sym__space,
    STATE(32), 1,
      aux_sym__target_repeat1,
  [548] = 2,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(112), 3,
      anon_sym_AMP,
      sym_hash,
      sym__space,
  [557] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    STATE(43), 1,
      sym__data,
    STATE(52), 1,
      aux_sym_body_repeat2,
    STATE(93), 1,
      sym_body,
  [570] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    STATE(43), 1,
      sym__data,
    STATE(50), 1,
      aux_sym_body_repeat2,
    STATE(93), 1,
      sym_xml_body,
  [583] = 4,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      aux_sym_reason_token1,
    ACTIONS(120), 1,
      sym__newline,
    STATE(58), 1,
      aux_sym_body_repeat1,
  [596] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym__data,
    STATE(57), 1,
      aux_sym_body_repeat2,
  [609] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    STATE(43), 1,
      sym__data,
    STATE(44), 1,
      aux_sym_body_repeat2,
    STATE(89), 1,
      sym_html_body,
  [622] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym__data,
    STATE(57), 1,
      aux_sym_body_repeat2,
  [635] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    STATE(43), 1,
      sym__data,
    STATE(46), 1,
      aux_sym_body_repeat2,
    STATE(89), 1,
      sym_javascript_body,
  [648] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym__data,
    STATE(57), 1,
      aux_sym_body_repeat2,
  [661] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    STATE(43), 1,
      sym__data,
    STATE(48), 1,
      aux_sym_body_repeat2,
    STATE(89), 1,
      sym_json_body,
  [674] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym__data,
    STATE(57), 1,
      aux_sym_body_repeat2,
  [687] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    STATE(43), 1,
      sym__data,
    STATE(50), 1,
      aux_sym_body_repeat2,
    STATE(89), 1,
      sym_xml_body,
  [700] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym__data,
    STATE(57), 1,
      aux_sym_body_repeat2,
  [713] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    STATE(43), 1,
      sym__data,
    STATE(52), 1,
      aux_sym_body_repeat2,
    STATE(89), 1,
      sym_body,
  [726] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    STATE(43), 1,
      sym__data,
    STATE(48), 1,
      aux_sym_body_repeat2,
    STATE(93), 1,
      sym_json_body,
  [739] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    STATE(43), 1,
      sym__data,
    STATE(46), 1,
      aux_sym_body_repeat2,
    STATE(93), 1,
      sym_javascript_body,
  [752] = 4,
    ACTIONS(84), 1,
      aux_sym_reason_token1,
    STATE(43), 1,
      sym__data,
    STATE(44), 1,
      aux_sym_body_repeat2,
    STATE(93), 1,
      sym_html_body,
  [765] = 4,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      aux_sym_reason_token1,
    STATE(43), 1,
      sym__data,
    STATE(57), 1,
      aux_sym_body_repeat2,
  [778] = 4,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      aux_sym_reason_token1,
    ACTIONS(139), 1,
      sym__newline,
    STATE(33), 1,
      aux_sym_body_repeat1,
  [791] = 1,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [797] = 1,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [803] = 1,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [809] = 1,
    ACTIONS(89), 3,
      anon_sym_AMP,
      sym_hash,
      sym__space,
  [815] = 1,
    ACTIONS(145), 3,
      anon_sym_AMP,
      sym_hash,
      sym__space,
  [821] = 1,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [827] = 1,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [833] = 1,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [839] = 3,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      aux_sym__path,
    STATE(81), 1,
      sym__target,
  [849] = 2,
    ACTIONS(153), 1,
      sym_query_name,
    STATE(62), 1,
      sym_query_item,
  [856] = 2,
    ACTIONS(155), 1,
      aux_sym_reason_token1,
    STATE(92), 1,
      sym_reason,
  [863] = 1,
    ACTIONS(157), 2,
      sym__content_type_name,
      sym_header_name,
  [868] = 2,
    ACTIONS(153), 1,
      sym_query_name,
    STATE(39), 1,
      sym_query_item,
  [875] = 1,
    ACTIONS(159), 2,
      sym__content_type_name,
      sym_header_name,
  [880] = 1,
    ACTIONS(161), 1,
      sym__newline,
  [884] = 1,
    ACTIONS(163), 1,
      sym_path_component,
  [888] = 1,
    ACTIONS(165), 1,
      sym__space,
  [892] = 1,
    ACTIONS(167), 1,
      sym__newline,
  [896] = 1,
    ACTIONS(169), 1,
      sym_status,
  [900] = 1,
    ACTIONS(171), 1,
      anon_sym_COLON,
  [904] = 1,
    ACTIONS(173), 1,
      anon_sym_COLON,
  [908] = 1,
    ACTIONS(175), 1,
      sym__space,
  [912] = 1,
    ACTIONS(177), 1,
      sym__space,
  [916] = 1,
    ACTIONS(179), 1,
      sym__newline,
  [920] = 1,
    ACTIONS(181), 1,
      sym_header_value,
  [924] = 1,
    ACTIONS(183), 1,
      sym__newline,
  [928] = 1,
    ACTIONS(185), 1,
      sym__newline,
  [932] = 1,
    ACTIONS(187), 1,
      sym__newline,
  [936] = 1,
    ACTIONS(189), 1,
      sym__newline,
  [940] = 1,
    ACTIONS(191), 1,
      sym__newline,
  [944] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
  [948] = 1,
    ACTIONS(195), 1,
      sym__space,
  [952] = 1,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
  [956] = 1,
    ACTIONS(197), 1,
      sym__newline,
  [960] = 1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
  [964] = 1,
    ACTIONS(201), 1,
      sym__newline,
  [968] = 1,
    ACTIONS(203), 1,
      sym_query_value,
  [972] = 1,
    ACTIONS(205), 1,
      sym_version,
  [976] = 1,
    ACTIONS(95), 1,
      sym__space,
  [980] = 1,
    ACTIONS(207), 1,
      sym__whitespace,
  [984] = 1,
    ACTIONS(209), 1,
      sym__newline,
  [988] = 1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [992] = 1,
    ACTIONS(213), 1,
      sym__space,
  [996] = 1,
    ACTIONS(215), 1,
      sym__whitespace,
  [1000] = 1,
    ACTIONS(217), 1,
      sym__space,
  [1004] = 1,
    ACTIONS(219), 1,
      sym__space,
  [1008] = 1,
    ACTIONS(221), 1,
      sym__newline,
  [1012] = 1,
    ACTIONS(223), 1,
      sym_header_value,
  [1016] = 1,
    ACTIONS(225), 1,
      sym__whitespace,
  [1020] = 1,
    ACTIONS(227), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 125,
  [SMALL_STATE(9)] = 139,
  [SMALL_STATE(10)] = 153,
  [SMALL_STATE(11)] = 167,
  [SMALL_STATE(12)] = 181,
  [SMALL_STATE(13)] = 195,
  [SMALL_STATE(14)] = 209,
  [SMALL_STATE(15)] = 223,
  [SMALL_STATE(16)] = 235,
  [SMALL_STATE(17)] = 249,
  [SMALL_STATE(18)] = 263,
  [SMALL_STATE(19)] = 277,
  [SMALL_STATE(20)] = 291,
  [SMALL_STATE(21)] = 305,
  [SMALL_STATE(22)] = 319,
  [SMALL_STATE(23)] = 333,
  [SMALL_STATE(24)] = 347,
  [SMALL_STATE(25)] = 363,
  [SMALL_STATE(26)] = 377,
  [SMALL_STATE(27)] = 391,
  [SMALL_STATE(28)] = 405,
  [SMALL_STATE(29)] = 417,
  [SMALL_STATE(30)] = 430,
  [SMALL_STATE(31)] = 437,
  [SMALL_STATE(32)] = 448,
  [SMALL_STATE(33)] = 461,
  [SMALL_STATE(34)] = 474,
  [SMALL_STATE(35)] = 487,
  [SMALL_STATE(36)] = 500,
  [SMALL_STATE(37)] = 513,
  [SMALL_STATE(38)] = 526,
  [SMALL_STATE(39)] = 535,
  [SMALL_STATE(40)] = 548,
  [SMALL_STATE(41)] = 557,
  [SMALL_STATE(42)] = 570,
  [SMALL_STATE(43)] = 583,
  [SMALL_STATE(44)] = 596,
  [SMALL_STATE(45)] = 609,
  [SMALL_STATE(46)] = 622,
  [SMALL_STATE(47)] = 635,
  [SMALL_STATE(48)] = 648,
  [SMALL_STATE(49)] = 661,
  [SMALL_STATE(50)] = 674,
  [SMALL_STATE(51)] = 687,
  [SMALL_STATE(52)] = 700,
  [SMALL_STATE(53)] = 713,
  [SMALL_STATE(54)] = 726,
  [SMALL_STATE(55)] = 739,
  [SMALL_STATE(56)] = 752,
  [SMALL_STATE(57)] = 765,
  [SMALL_STATE(58)] = 778,
  [SMALL_STATE(59)] = 791,
  [SMALL_STATE(60)] = 797,
  [SMALL_STATE(61)] = 803,
  [SMALL_STATE(62)] = 809,
  [SMALL_STATE(63)] = 815,
  [SMALL_STATE(64)] = 821,
  [SMALL_STATE(65)] = 827,
  [SMALL_STATE(66)] = 833,
  [SMALL_STATE(67)] = 839,
  [SMALL_STATE(68)] = 849,
  [SMALL_STATE(69)] = 856,
  [SMALL_STATE(70)] = 863,
  [SMALL_STATE(71)] = 868,
  [SMALL_STATE(72)] = 875,
  [SMALL_STATE(73)] = 880,
  [SMALL_STATE(74)] = 884,
  [SMALL_STATE(75)] = 888,
  [SMALL_STATE(76)] = 892,
  [SMALL_STATE(77)] = 896,
  [SMALL_STATE(78)] = 900,
  [SMALL_STATE(79)] = 904,
  [SMALL_STATE(80)] = 908,
  [SMALL_STATE(81)] = 912,
  [SMALL_STATE(82)] = 916,
  [SMALL_STATE(83)] = 920,
  [SMALL_STATE(84)] = 924,
  [SMALL_STATE(85)] = 928,
  [SMALL_STATE(86)] = 932,
  [SMALL_STATE(87)] = 936,
  [SMALL_STATE(88)] = 940,
  [SMALL_STATE(89)] = 944,
  [SMALL_STATE(90)] = 948,
  [SMALL_STATE(91)] = 952,
  [SMALL_STATE(92)] = 956,
  [SMALL_STATE(93)] = 960,
  [SMALL_STATE(94)] = 964,
  [SMALL_STATE(95)] = 968,
  [SMALL_STATE(96)] = 972,
  [SMALL_STATE(97)] = 976,
  [SMALL_STATE(98)] = 980,
  [SMALL_STATE(99)] = 984,
  [SMALL_STATE(100)] = 988,
  [SMALL_STATE(101)] = 992,
  [SMALL_STATE(102)] = 996,
  [SMALL_STATE(103)] = 1000,
  [SMALL_STATE(104)] = 1004,
  [SMALL_STATE(105)] = 1008,
  [SMALL_STATE(106)] = 1012,
  [SMALL_STATE(107)] = 1016,
  [SMALL_STATE(108)] = 1020,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__path, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__path, 2), SHIFT_REPEAT(74),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_repeat1, 2), SHIFT_REPEAT(68),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(33),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_item, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat2, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_body, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_javascript_body, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(43),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat2, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_content, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_content, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_item, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_content, 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__javascript_content, 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_content, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_line, 6),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_header_value, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__javascript_header_value, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 1),
  [211] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
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
