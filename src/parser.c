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
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
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
  sym__css_header_value = 49,
  aux_sym__javascript_header_value_token1 = 50,
  aux_sym__javascript_header_value_token2 = 51,
  aux_sym__javascript_header_value_token3 = 52,
  sym__json_header_value = 53,
  aux_sym__xml_header_value_token1 = 54,
  aux_sym__xml_header_value_token2 = 55,
  sym_header_name = 56,
  sym_header_value = 57,
  sym__whitespace = 58,
  sym__space = 59,
  sym__newline = 60,
  sym_source_file = 61,
  sym__start_line = 62,
  sym_request_line = 63,
  sym_method = 64,
  sym__target = 65,
  aux_sym__path = 66,
  sym_query_item = 67,
  sym_status_line = 68,
  sym_reason = 69,
  sym__html_content = 70,
  sym__css_content = 71,
  sym__javascript_content = 72,
  sym__json_content = 73,
  sym__xml_content = 74,
  sym__other_content = 75,
  sym_header = 76,
  sym__javascript_header_value = 77,
  sym__xml_header_value = 78,
  sym_body = 79,
  sym_html_body = 80,
  sym_css_body = 81,
  sym_javascript_body = 82,
  sym_json_body = 83,
  sym_xml_body = 84,
  sym__data = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym__target_repeat1 = 87,
  aux_sym_body_repeat1 = 88,
  aux_sym_body_repeat2 = 89,
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
  [sym__css_header_value] = "header_value",
  [aux_sym__javascript_header_value_token1] = "_javascript_header_value_token1",
  [aux_sym__javascript_header_value_token2] = "_javascript_header_value_token2",
  [aux_sym__javascript_header_value_token3] = "_javascript_header_value_token3",
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
  [sym__css_content] = "header",
  [sym__javascript_content] = "header",
  [sym__json_content] = "header",
  [sym__xml_content] = "header",
  [sym__other_content] = "header",
  [sym_header] = "header",
  [sym__javascript_header_value] = "header_value",
  [sym__xml_header_value] = "header_value",
  [sym_body] = "body",
  [sym_html_body] = "html_body",
  [sym_css_body] = "css_body",
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
  [sym__css_header_value] = sym_header_value,
  [aux_sym__javascript_header_value_token1] = aux_sym__javascript_header_value_token1,
  [aux_sym__javascript_header_value_token2] = aux_sym__javascript_header_value_token2,
  [aux_sym__javascript_header_value_token3] = aux_sym__javascript_header_value_token3,
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
  [sym__css_content] = sym_header,
  [sym__javascript_content] = sym_header,
  [sym__json_content] = sym_header,
  [sym__xml_content] = sym_header,
  [sym__other_content] = sym_header,
  [sym_header] = sym_header,
  [sym__javascript_header_value] = sym_header_value,
  [sym__xml_header_value] = sym_header_value,
  [sym_body] = sym_body,
  [sym_html_body] = sym_html_body,
  [sym_css_body] = sym_css_body,
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
  [sym__css_header_value] = {
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
  [aux_sym__javascript_header_value_token3] = {
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
  [sym__css_content] = {
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
  [sym_css_body] = {
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
      if (eof) ADVANCE(197);
      if (lookahead == '\t') ADVANCE(519);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\r') ADVANCE(518);
      if (lookahead == ' ') ADVANCE(521);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '&') ADVANCE(267);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == ':') ADVANCE(279);
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '?') ADVANCE(266);
      if (lookahead == 'A') ADVANCE(308);
      if (lookahead == 'B') ADVANCE(357);
      if (lookahead == 'C') ADVANCE(355);
      if (lookahead == 'D') ADVANCE(340);
      if (lookahead == 'G') ADVANCE(328);
      if (lookahead == 'H') ADVANCE(329);
      if (lookahead == 'L') ADVANCE(360);
      if (lookahead == 'M') ADVANCE(339);
      if (lookahead == 'N') ADVANCE(389);
      if (lookahead == 'O') ADVANCE(395);
      if (lookahead == 'P') ADVANCE(297);
      if (lookahead == 'R') ADVANCE(330);
      if (lookahead == 'S') ADVANCE(341);
      if (lookahead == 'T') ADVANCE(398);
      if (lookahead == 'U') ADVANCE(377);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead == 't') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (lookahead == '-' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(522);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(187);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == 'h') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(160);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(190);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(189);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(30);
      if (lookahead == 'C') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(113);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'O') ADVANCE(120);
      if (lookahead == 'R') ADVANCE(101);
      if (lookahead == 'U') ADVANCE(116);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(110);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(134);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(87);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(114);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(121);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(51);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'P') ADVANCE(104);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(138);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(122);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(82);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(85);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(112);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(133);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(126);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(118);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(214);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(204);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(234);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(236);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(250);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(11);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(123);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(6);
      if (lookahead == 'T') ADVANCE(129);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(212);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(224);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(226);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(220);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(240);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(264);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(256);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(262);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == 'K') ADVANCE(7);
      if (lookahead == 'O') ADVANCE(140);
      if (lookahead == 'S') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(137);
      if (lookahead == 'U') ADVANCE(15);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 60:
      if (lookahead == 'F') ADVANCE(142);
      END_STATE();
    case 61:
      if (lookahead == 'F') ADVANCE(78);
      if (lookahead == 'P') ADVANCE(12);
      END_STATE();
    case 62:
      if (lookahead == 'G') ADVANCE(45);
      END_STATE();
    case 63:
      if (lookahead == 'G') ADVANCE(46);
      END_STATE();
    case 64:
      if (lookahead == 'H') ADVANCE(218);
      END_STATE();
    case 65:
      if (lookahead == 'H') ADVANCE(230);
      END_STATE();
    case 66:
      if (lookahead == 'H') ADVANCE(246);
      END_STATE();
    case 67:
      if (lookahead == 'H') ADVANCE(254);
      END_STATE();
    case 68:
      if (lookahead == 'H') ADVANCE(57);
      if (lookahead == 'O') ADVANCE(95);
      END_STATE();
    case 69:
      if (lookahead == 'I') ADVANCE(60);
      END_STATE();
    case 70:
      if (lookahead == 'I') ADVANCE(91);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(139);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(16);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(94);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(97);
      if (lookahead == 'O') ADVANCE(29);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(131);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(17);
      END_STATE();
    case 81:
      if (lookahead == 'K') ADVANCE(216);
      END_STATE();
    case 82:
      if (lookahead == 'K') ADVANCE(210);
      END_STATE();
    case 83:
      if (lookahead == 'K') ADVANCE(242);
      END_STATE();
    case 84:
      if (lookahead == 'K') ADVANCE(232);
      END_STATE();
    case 85:
      if (lookahead == 'K') ADVANCE(103);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(202);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(222);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(55);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(81);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(119);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == 'P') ADVANCE(141);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(136);
      END_STATE();
    case 104:
      if (lookahead == 'O') ADVANCE(115);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 106:
      if (lookahead == 'P') ADVANCE(5);
      END_STATE();
    case 107:
      if (lookahead == 'P') ADVANCE(61);
      END_STATE();
    case 108:
      if (lookahead == 'P') ADVANCE(130);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 110:
      if (lookahead == 'R') ADVANCE(258);
      END_STATE();
    case 111:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 112:
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 114:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'T') ADVANCE(200);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(80);
      END_STATE();
    case 119:
      if (lookahead == 'S') ADVANCE(248);
      END_STATE();
    case 120:
      if (lookahead == 'S') ADVANCE(124);
      END_STATE();
    case 121:
      if (lookahead == 'S') ADVANCE(28);
      END_STATE();
    case 122:
      if (lookahead == 'S') ADVANCE(34);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(198);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(206);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(238);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(244);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(252);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(106);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(143);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 136:
      if (lookahead == 'U') ADVANCE(127);
      END_STATE();
    case 137:
      if (lookahead == 'U') ADVANCE(117);
      END_STATE();
    case 138:
      if (lookahead == 'U') ADVANCE(20);
      END_STATE();
    case 139:
      if (lookahead == 'V') ADVANCE(79);
      END_STATE();
    case 140:
      if (lookahead == 'V') ADVANCE(44);
      END_STATE();
    case 141:
      if (lookahead == 'Y') ADVANCE(208);
      END_STATE();
    case 142:
      if (lookahead == 'Y') ADVANCE(228);
      END_STATE();
    case 143:
      if (lookahead == 'Y') ADVANCE(260);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead == 'h') ADVANCE(179);
      if (lookahead == 'j') ADVANCE(144);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 157:
      if (lookahead == 'j') ADVANCE(148);
      if (lookahead == 'x') ADVANCE(3);
      END_STATE();
    case 158:
      if (lookahead == 'j') ADVANCE(149);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 184:
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 185:
      if (lookahead == 'v') ADVANCE(146);
      END_STATE();
    case 186:
      if (lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 187:
      if (lookahead == 'x') ADVANCE(165);
      END_STATE();
    case 188:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(519);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 191:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(271);
      END_STATE();
    case 192:
      if (eof) ADVANCE(197);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(520);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '&') ADVANCE(267);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '?') ADVANCE(266);
      if (lookahead == 'A') ADVANCE(21);
      if (lookahead == 'B') ADVANCE(70);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(53);
      if (lookahead == 'G') ADVANCE(41);
      if (lookahead == 'H') ADVANCE(42);
      if (lookahead == 'L') ADVANCE(73);
      if (lookahead == 'M') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(108);
      if (lookahead == 'P') ADVANCE(10);
      if (lookahead == 'R') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead == 'U') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 193:
      if (eof) ADVANCE(197);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 194:
      if (eof) ADVANCE(197);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 195:
      if (eof) ADVANCE(197);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\r') ADVANCE(277);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 196:
      if (eof) ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_ACL);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_ACL);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_MOVE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_MOVE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_BIND);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_BIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_MKCOL);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_MKCOL);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_MERGE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_MERGE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_NOTIFY);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_NOTIFY);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_SEARCH);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SEARCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_REBIND);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_REBIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_UNBIND);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_UNBIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_REPORT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_MSEARCH);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_MSEARCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_CHECKOUT);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_CHECKOUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_PROPPATCH);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_PROPPATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SUBSCRIBE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_SUBSCRIBE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_MKCALENDAR);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_MKCALENDAR);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_MKACTIVITY);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_MKACTIVITY);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_UNSUBSCRIBE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_UNSUBSCRIBE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_SOURCE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_SOURCE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_path_component);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_query_name);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_query_value);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_hash);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_version);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_status);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_status);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_reason_token1);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_reason_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__content_type_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__html_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__css_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__javascript_header_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__javascript_header_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__javascript_header_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__json_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__xml_header_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__xml_header_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(317);
      if (lookahead == 'C') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(419);
      if (lookahead == 'O') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead == 'U') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(376);
      if (lookahead == 'O') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(362);
      if (lookahead == 'P') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(364);
      if (lookahead == 'S') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(396);
      if (lookahead == 'K') ADVANCE(294);
      if (lookahead == 'O') ADVANCE(427);
      if (lookahead == 'S') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(295);
      if (lookahead == 'O') ADVANCE(424);
      if (lookahead == 'U') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'F') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'F') ADVANCE(365);
      if (lookahead == 'P') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'G') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'G') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(344);
      if (lookahead == 'O') ADVANCE(382);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(379);
      if (lookahead == 'O') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(384);
      if (lookahead == 'O') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(387);
      if (lookahead == 'P') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(350);
      if (lookahead == 'T') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'U') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'U') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'U') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'V') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'V') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'Y') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'Y') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'Y') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'c') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'l') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'x') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'y') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '+') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == 'h') ADVANCE(511);
      if (lookahead == 'm') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(513);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(502);
      if (lookahead == 'h') ADVANCE(509);
      if (lookahead == 'j') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'j') ADVANCE(465);
      if (lookahead == 'x') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'j') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'n') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'o') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'r') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'v') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'v') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'v') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'x') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'x') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(519);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(519);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 192},
  [2] = {.lex_state = 193},
  [3] = {.lex_state = 459},
  [4] = {.lex_state = 193},
  [5] = {.lex_state = 193},
  [6] = {.lex_state = 194},
  [7] = {.lex_state = 194},
  [8] = {.lex_state = 194},
  [9] = {.lex_state = 194},
  [10] = {.lex_state = 194},
  [11] = {.lex_state = 194},
  [12] = {.lex_state = 194},
  [13] = {.lex_state = 194},
  [14] = {.lex_state = 194},
  [15] = {.lex_state = 194},
  [16] = {.lex_state = 194},
  [17] = {.lex_state = 194},
  [18] = {.lex_state = 194},
  [19] = {.lex_state = 194},
  [20] = {.lex_state = 194},
  [21] = {.lex_state = 194},
  [22] = {.lex_state = 194},
  [23] = {.lex_state = 194},
  [24] = {.lex_state = 194},
  [25] = {.lex_state = 194},
  [26] = {.lex_state = 194},
  [27] = {.lex_state = 194},
  [28] = {.lex_state = 194},
  [29] = {.lex_state = 192},
  [30] = {.lex_state = 194},
  [31] = {.lex_state = 192},
  [32] = {.lex_state = 194},
  [33] = {.lex_state = 196},
  [34] = {.lex_state = 195},
  [35] = {.lex_state = 192},
  [36] = {.lex_state = 196},
  [37] = {.lex_state = 196},
  [38] = {.lex_state = 196},
  [39] = {.lex_state = 196},
  [40] = {.lex_state = 196},
  [41] = {.lex_state = 196},
  [42] = {.lex_state = 192},
  [43] = {.lex_state = 195},
  [44] = {.lex_state = 193},
  [45] = {.lex_state = 192},
  [46] = {.lex_state = 192},
  [47] = {.lex_state = 195},
  [48] = {.lex_state = 196},
  [49] = {.lex_state = 196},
  [50] = {.lex_state = 196},
  [51] = {.lex_state = 196},
  [52] = {.lex_state = 196},
  [53] = {.lex_state = 196},
  [54] = {.lex_state = 196},
  [55] = {.lex_state = 196},
  [56] = {.lex_state = 196},
  [57] = {.lex_state = 196},
  [58] = {.lex_state = 196},
  [59] = {.lex_state = 196},
  [60] = {.lex_state = 196},
  [61] = {.lex_state = 196},
  [62] = {.lex_state = 196},
  [63] = {.lex_state = 196},
  [64] = {.lex_state = 196},
  [65] = {.lex_state = 196},
  [66] = {.lex_state = 192},
  [67] = {.lex_state = 194},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 194},
  [70] = {.lex_state = 192},
  [71] = {.lex_state = 192},
  [72] = {.lex_state = 194},
  [73] = {.lex_state = 194},
  [74] = {.lex_state = 194},
  [75] = {.lex_state = 194},
  [76] = {.lex_state = 194},
  [77] = {.lex_state = 191},
  [78] = {.lex_state = 193},
  [79] = {.lex_state = 196},
  [80] = {.lex_state = 193},
  [81] = {.lex_state = 191},
  [82] = {.lex_state = 192},
  [83] = {.lex_state = 517},
  [84] = {.lex_state = 192},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 192},
  [87] = {.lex_state = 192},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 192},
  [91] = {.lex_state = 192},
  [92] = {.lex_state = 192},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 192},
  [95] = {.lex_state = 192},
  [96] = {.lex_state = 192},
  [97] = {.lex_state = 188},
  [98] = {.lex_state = 192},
  [99] = {.lex_state = 192},
  [100] = {.lex_state = 192},
  [101] = {.lex_state = 188},
  [102] = {.lex_state = 192},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 192},
  [105] = {.lex_state = 272},
  [106] = {.lex_state = 192},
  [107] = {.lex_state = 192},
  [108] = {.lex_state = 192},
  [109] = {.lex_state = 192},
  [110] = {.lex_state = 192},
  [111] = {.lex_state = 192},
  [112] = {.lex_state = 269},
  [113] = {.lex_state = 192},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 192},
  [116] = {.lex_state = 517},
  [117] = {.lex_state = 188},
  [118] = {.lex_state = 0},
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
    [sym__css_header_value] = ACTIONS(1),
    [aux_sym__javascript_header_value_token1] = ACTIONS(1),
    [aux_sym__javascript_header_value_token2] = ACTIONS(1),
    [aux_sym__javascript_header_value_token3] = ACTIONS(1),
    [sym__json_header_value] = ACTIONS(1),
    [aux_sym__xml_header_value_token1] = ACTIONS(1),
    [aux_sym__xml_header_value_token2] = ACTIONS(1),
    [sym_header_name] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(114),
    [sym__start_line] = STATE(4),
    [sym_request_line] = STATE(4),
    [sym_method] = STATE(86),
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
  [0] = 11,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym__content_type_name,
    ACTIONS(13), 1,
      sym_header_name,
    ACTIONS(15), 1,
      sym__newline,
    STATE(7), 1,
      sym__css_content,
    STATE(9), 1,
      sym__html_content,
    STATE(20), 1,
      sym__javascript_content,
    STATE(21), 1,
      sym__json_content,
    STATE(23), 1,
      sym__xml_content,
    STATE(25), 1,
      sym__other_content,
    STATE(5), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [35] = 8,
    ACTIONS(17), 1,
      sym__html_header_value,
    ACTIONS(19), 1,
      sym__css_header_value,
    ACTIONS(23), 1,
      sym__json_header_value,
    ACTIONS(27), 1,
      sym_header_value,
    STATE(95), 1,
      sym__xml_header_value,
    STATE(96), 1,
      sym__javascript_header_value,
    ACTIONS(25), 2,
      aux_sym__xml_header_value_token1,
      aux_sym__xml_header_value_token2,
    ACTIONS(21), 3,
      aux_sym__javascript_header_value_token1,
      aux_sym__javascript_header_value_token2,
      aux_sym__javascript_header_value_token3,
  [63] = 9,
    ACTIONS(11), 1,
      sym__content_type_name,
    ACTIONS(13), 1,
      sym_header_name,
    STATE(11), 1,
      sym__html_content,
    STATE(12), 1,
      sym__css_content,
    STATE(13), 1,
      sym__javascript_content,
    STATE(14), 1,
      sym__json_content,
    STATE(15), 1,
      sym__xml_content,
    STATE(16), 1,
      sym__other_content,
    STATE(2), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [92] = 4,
    ACTIONS(31), 1,
      sym__content_type_name,
    ACTIONS(33), 1,
      sym_header_name,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(5), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [107] = 4,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(40), 1,
      sym__newline,
    STATE(18), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [121] = 4,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym__newline,
    STATE(10), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [135] = 4,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(46), 1,
      sym__newline,
    STATE(18), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [149] = 4,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      sym__newline,
    STATE(17), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [163] = 4,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(50), 1,
      sym__newline,
    STATE(18), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [177] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(52), 1,
      sym__newline,
    STATE(22), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [191] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(54), 1,
      sym__newline,
    STATE(24), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [205] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(56), 1,
      sym__newline,
    STATE(26), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [219] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(58), 1,
      sym__newline,
    STATE(28), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [233] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(60), 1,
      sym__newline,
    STATE(30), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [247] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(38), 1,
      sym_header_name,
    STATE(32), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [261] = 4,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(62), 1,
      sym__newline,
    STATE(18), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [275] = 3,
    ACTIONS(64), 1,
      sym_header_name,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(18), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [287] = 4,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(67), 1,
      sym__newline,
    STATE(18), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [301] = 4,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym__newline,
    STATE(6), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [315] = 4,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [329] = 4,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      sym__newline,
    STATE(18), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [343] = 4,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym__newline,
    STATE(19), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [357] = 4,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym__newline,
    STATE(18), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [371] = 4,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym__newline,
    STATE(27), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [385] = 4,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym__newline,
    STATE(18), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [399] = 4,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(77), 1,
      sym__newline,
    STATE(18), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [413] = 4,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym__newline,
    STATE(18), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [427] = 5,
    ACTIONS(79), 1,
      anon_sym_QMARK,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(83), 1,
      sym_hash,
    ACTIONS(85), 1,
      sym__space,
    STATE(31), 1,
      aux_sym__path,
  [443] = 4,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym__newline,
    STATE(18), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [457] = 3,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    STATE(31), 1,
      aux_sym__path,
    ACTIONS(87), 3,
      anon_sym_QMARK,
      sym_hash,
      sym__space,
  [469] = 4,
    ACTIONS(38), 1,
      sym_header_name,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym__newline,
    STATE(18), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [483] = 4,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(65), 1,
      aux_sym_body_repeat2,
  [496] = 4,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      aux_sym_reason_token1,
    ACTIONS(100), 1,
      sym__newline,
    STATE(43), 1,
      aux_sym_body_repeat1,
  [509] = 3,
    ACTIONS(102), 1,
      anon_sym_AMP,
    STATE(35), 1,
      aux_sym__target_repeat1,
    ACTIONS(105), 2,
      sym_hash,
      sym__space,
  [520] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(48), 1,
      aux_sym_body_repeat2,
    STATE(93), 1,
      sym_html_body,
  [533] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(50), 1,
      aux_sym_body_repeat2,
    STATE(93), 1,
      sym_css_body,
  [546] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(52), 1,
      aux_sym_body_repeat2,
    STATE(93), 1,
      sym_javascript_body,
  [559] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(54), 1,
      aux_sym_body_repeat2,
    STATE(93), 1,
      sym_json_body,
  [572] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(56), 1,
      aux_sym_body_repeat2,
    STATE(93), 1,
      sym_xml_body,
  [585] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(33), 1,
      aux_sym_body_repeat2,
    STATE(47), 1,
      sym__data,
    STATE(93), 1,
      sym_body,
  [598] = 4,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      sym_hash,
    ACTIONS(111), 1,
      sym__space,
    STATE(35), 1,
      aux_sym__target_repeat1,
  [611] = 4,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      aux_sym_reason_token1,
    ACTIONS(117), 1,
      sym__newline,
    STATE(43), 1,
      aux_sym_body_repeat1,
  [624] = 2,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(122), 2,
      sym__content_type_name,
      sym_header_name,
  [633] = 4,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(124), 1,
      sym_hash,
    ACTIONS(126), 1,
      sym__space,
    STATE(42), 1,
      aux_sym__target_repeat1,
  [646] = 2,
    ACTIONS(130), 1,
      anon_sym_EQ,
    ACTIONS(128), 3,
      anon_sym_AMP,
      sym_hash,
      sym__space,
  [655] = 4,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      aux_sym_reason_token1,
    ACTIONS(136), 1,
      sym__newline,
    STATE(34), 1,
      aux_sym_body_repeat1,
  [668] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym__data,
    STATE(65), 1,
      aux_sym_body_repeat2,
  [681] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(48), 1,
      aux_sym_body_repeat2,
    STATE(85), 1,
      sym_html_body,
  [694] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym__data,
    STATE(65), 1,
      aux_sym_body_repeat2,
  [707] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(50), 1,
      aux_sym_body_repeat2,
    STATE(85), 1,
      sym_css_body,
  [720] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym__data,
    STATE(65), 1,
      aux_sym_body_repeat2,
  [733] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(52), 1,
      aux_sym_body_repeat2,
    STATE(85), 1,
      sym_javascript_body,
  [746] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym__data,
    STATE(65), 1,
      aux_sym_body_repeat2,
  [759] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(54), 1,
      aux_sym_body_repeat2,
    STATE(85), 1,
      sym_json_body,
  [772] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym__data,
    STATE(65), 1,
      aux_sym_body_repeat2,
  [785] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(56), 1,
      aux_sym_body_repeat2,
    STATE(85), 1,
      sym_xml_body,
  [798] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(33), 1,
      aux_sym_body_repeat2,
    STATE(47), 1,
      sym__data,
    STATE(103), 1,
      sym_body,
  [811] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(33), 1,
      aux_sym_body_repeat2,
    STATE(47), 1,
      sym__data,
    STATE(85), 1,
      sym_body,
  [824] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(56), 1,
      aux_sym_body_repeat2,
    STATE(103), 1,
      sym_xml_body,
  [837] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(54), 1,
      aux_sym_body_repeat2,
    STATE(103), 1,
      sym_json_body,
  [850] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(52), 1,
      aux_sym_body_repeat2,
    STATE(103), 1,
      sym_javascript_body,
  [863] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(50), 1,
      aux_sym_body_repeat2,
    STATE(103), 1,
      sym_css_body,
  [876] = 4,
    ACTIONS(94), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(48), 1,
      aux_sym_body_repeat2,
    STATE(103), 1,
      sym_html_body,
  [889] = 4,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      aux_sym_reason_token1,
    STATE(47), 1,
      sym__data,
    STATE(65), 1,
      aux_sym_body_repeat2,
  [902] = 1,
    ACTIONS(87), 4,
      anon_sym_QMARK,
      anon_sym_SLASH,
      sym_hash,
      sym__space,
  [909] = 1,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [915] = 3,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      aux_sym__path,
    STATE(108), 1,
      sym__target,
  [925] = 1,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [931] = 1,
    ACTIONS(105), 3,
      anon_sym_AMP,
      sym_hash,
      sym__space,
  [937] = 1,
    ACTIONS(153), 3,
      anon_sym_AMP,
      sym_hash,
      sym__space,
  [943] = 1,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [949] = 1,
    ACTIONS(157), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [955] = 1,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [961] = 1,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [967] = 1,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [973] = 2,
    ACTIONS(165), 1,
      sym_query_name,
    STATE(70), 1,
      sym_query_item,
  [980] = 1,
    ACTIONS(167), 2,
      sym__content_type_name,
      sym_header_name,
  [985] = 2,
    ACTIONS(169), 1,
      aux_sym_reason_token1,
    STATE(109), 1,
      sym_reason,
  [992] = 1,
    ACTIONS(171), 2,
      sym__content_type_name,
      sym_header_name,
  [997] = 2,
    ACTIONS(165), 1,
      sym_query_name,
    STATE(45), 1,
      sym_query_item,
  [1004] = 1,
    ACTIONS(173), 1,
      sym__space,
  [1008] = 1,
    ACTIONS(175), 1,
      sym_header_value,
  [1012] = 1,
    ACTIONS(177), 1,
      sym_version,
  [1016] = 1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
  [1020] = 1,
    ACTIONS(181), 1,
      sym__space,
  [1024] = 1,
    ACTIONS(183), 1,
      sym_status,
  [1028] = 1,
    ACTIONS(185), 1,
      anon_sym_COLON,
  [1032] = 1,
    ACTIONS(187), 1,
      anon_sym_COLON,
  [1036] = 1,
    ACTIONS(189), 1,
      sym__space,
  [1040] = 1,
    ACTIONS(191), 1,
      sym__newline,
  [1044] = 1,
    ACTIONS(193), 1,
      sym__space,
  [1048] = 1,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
  [1052] = 1,
    ACTIONS(195), 1,
      sym__newline,
  [1056] = 1,
    ACTIONS(197), 1,
      sym__newline,
  [1060] = 1,
    ACTIONS(199), 1,
      sym__newline,
  [1064] = 1,
    ACTIONS(201), 1,
      sym__whitespace,
  [1068] = 1,
    ACTIONS(203), 1,
      sym__newline,
  [1072] = 1,
    ACTIONS(205), 1,
      sym__newline,
  [1076] = 1,
    ACTIONS(207), 1,
      sym__newline,
  [1080] = 1,
    ACTIONS(209), 1,
      sym__whitespace,
  [1084] = 1,
    ACTIONS(211), 1,
      sym__newline,
  [1088] = 1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
  [1092] = 1,
    ACTIONS(215), 1,
      sym__newline,
  [1096] = 1,
    ACTIONS(217), 1,
      sym_query_value,
  [1100] = 1,
    ACTIONS(219), 1,
      sym__newline,
  [1104] = 1,
    ACTIONS(111), 1,
      sym__space,
  [1108] = 1,
    ACTIONS(221), 1,
      sym__space,
  [1112] = 1,
    ACTIONS(223), 1,
      sym__newline,
  [1116] = 1,
    ACTIONS(225), 1,
      sym__newline,
  [1120] = 1,
    ACTIONS(227), 1,
      sym__space,
  [1124] = 1,
    ACTIONS(229), 1,
      sym_path_component,
  [1128] = 1,
    ACTIONS(231), 1,
      sym__space,
  [1132] = 1,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
  [1136] = 1,
    ACTIONS(235), 1,
      sym__newline,
  [1140] = 1,
    ACTIONS(237), 1,
      sym_header_value,
  [1144] = 1,
    ACTIONS(239), 1,
      sym__whitespace,
  [1148] = 1,
    ACTIONS(241), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 63,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 149,
  [SMALL_STATE(10)] = 163,
  [SMALL_STATE(11)] = 177,
  [SMALL_STATE(12)] = 191,
  [SMALL_STATE(13)] = 205,
  [SMALL_STATE(14)] = 219,
  [SMALL_STATE(15)] = 233,
  [SMALL_STATE(16)] = 247,
  [SMALL_STATE(17)] = 261,
  [SMALL_STATE(18)] = 275,
  [SMALL_STATE(19)] = 287,
  [SMALL_STATE(20)] = 301,
  [SMALL_STATE(21)] = 315,
  [SMALL_STATE(22)] = 329,
  [SMALL_STATE(23)] = 343,
  [SMALL_STATE(24)] = 357,
  [SMALL_STATE(25)] = 371,
  [SMALL_STATE(26)] = 385,
  [SMALL_STATE(27)] = 399,
  [SMALL_STATE(28)] = 413,
  [SMALL_STATE(29)] = 427,
  [SMALL_STATE(30)] = 443,
  [SMALL_STATE(31)] = 457,
  [SMALL_STATE(32)] = 469,
  [SMALL_STATE(33)] = 483,
  [SMALL_STATE(34)] = 496,
  [SMALL_STATE(35)] = 509,
  [SMALL_STATE(36)] = 520,
  [SMALL_STATE(37)] = 533,
  [SMALL_STATE(38)] = 546,
  [SMALL_STATE(39)] = 559,
  [SMALL_STATE(40)] = 572,
  [SMALL_STATE(41)] = 585,
  [SMALL_STATE(42)] = 598,
  [SMALL_STATE(43)] = 611,
  [SMALL_STATE(44)] = 624,
  [SMALL_STATE(45)] = 633,
  [SMALL_STATE(46)] = 646,
  [SMALL_STATE(47)] = 655,
  [SMALL_STATE(48)] = 668,
  [SMALL_STATE(49)] = 681,
  [SMALL_STATE(50)] = 694,
  [SMALL_STATE(51)] = 707,
  [SMALL_STATE(52)] = 720,
  [SMALL_STATE(53)] = 733,
  [SMALL_STATE(54)] = 746,
  [SMALL_STATE(55)] = 759,
  [SMALL_STATE(56)] = 772,
  [SMALL_STATE(57)] = 785,
  [SMALL_STATE(58)] = 798,
  [SMALL_STATE(59)] = 811,
  [SMALL_STATE(60)] = 824,
  [SMALL_STATE(61)] = 837,
  [SMALL_STATE(62)] = 850,
  [SMALL_STATE(63)] = 863,
  [SMALL_STATE(64)] = 876,
  [SMALL_STATE(65)] = 889,
  [SMALL_STATE(66)] = 902,
  [SMALL_STATE(67)] = 909,
  [SMALL_STATE(68)] = 915,
  [SMALL_STATE(69)] = 925,
  [SMALL_STATE(70)] = 931,
  [SMALL_STATE(71)] = 937,
  [SMALL_STATE(72)] = 943,
  [SMALL_STATE(73)] = 949,
  [SMALL_STATE(74)] = 955,
  [SMALL_STATE(75)] = 961,
  [SMALL_STATE(76)] = 967,
  [SMALL_STATE(77)] = 973,
  [SMALL_STATE(78)] = 980,
  [SMALL_STATE(79)] = 985,
  [SMALL_STATE(80)] = 992,
  [SMALL_STATE(81)] = 997,
  [SMALL_STATE(82)] = 1004,
  [SMALL_STATE(83)] = 1008,
  [SMALL_STATE(84)] = 1012,
  [SMALL_STATE(85)] = 1016,
  [SMALL_STATE(86)] = 1020,
  [SMALL_STATE(87)] = 1024,
  [SMALL_STATE(88)] = 1028,
  [SMALL_STATE(89)] = 1032,
  [SMALL_STATE(90)] = 1036,
  [SMALL_STATE(91)] = 1040,
  [SMALL_STATE(92)] = 1044,
  [SMALL_STATE(93)] = 1048,
  [SMALL_STATE(94)] = 1052,
  [SMALL_STATE(95)] = 1056,
  [SMALL_STATE(96)] = 1060,
  [SMALL_STATE(97)] = 1064,
  [SMALL_STATE(98)] = 1068,
  [SMALL_STATE(99)] = 1072,
  [SMALL_STATE(100)] = 1076,
  [SMALL_STATE(101)] = 1080,
  [SMALL_STATE(102)] = 1084,
  [SMALL_STATE(103)] = 1088,
  [SMALL_STATE(104)] = 1092,
  [SMALL_STATE(105)] = 1096,
  [SMALL_STATE(106)] = 1100,
  [SMALL_STATE(107)] = 1104,
  [SMALL_STATE(108)] = 1108,
  [SMALL_STATE(109)] = 1112,
  [SMALL_STATE(110)] = 1116,
  [SMALL_STATE(111)] = 1120,
  [SMALL_STATE(112)] = 1124,
  [SMALL_STATE(113)] = 1128,
  [SMALL_STATE(114)] = 1132,
  [SMALL_STATE(115)] = 1136,
  [SMALL_STATE(116)] = 1140,
  [SMALL_STATE(117)] = 1144,
  [SMALL_STATE(118)] = 1148,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__path, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__path, 2), SHIFT_REPEAT(112),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat2, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_repeat1, 2), SHIFT_REPEAT(77),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(43),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_item, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat2, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_body, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_body, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_javascript_body, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 1),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(47),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_content, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_item, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_content, 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__javascript_content, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_content, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_content, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_content, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_line, 6),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 6),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_header_value, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__javascript_header_value, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [233] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
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
