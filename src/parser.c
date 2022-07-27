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
#define STATE_COUNT 136
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
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
  sym__form_header_value = 48,
  sym__multipart_header_value = 49,
  sym__html_header_value = 50,
  sym__css_header_value = 51,
  aux_sym__javascript_header_value_token1 = 52,
  aux_sym__javascript_header_value_token2 = 53,
  aux_sym__javascript_header_value_token3 = 54,
  sym__json_header_value = 55,
  aux_sym__xml_header_value_token1 = 56,
  aux_sym__xml_header_value_token2 = 57,
  aux_sym__xml_header_value_token3 = 58,
  aux_sym__xml_header_value_token4 = 59,
  sym_header_name = 60,
  sym_header_value = 61,
  sym__whitespace = 62,
  sym__space = 63,
  sym__newline = 64,
  sym_source_file = 65,
  sym__start_line = 66,
  sym_request_line = 67,
  sym_method = 68,
  sym__target = 69,
  aux_sym__path = 70,
  sym_query_item = 71,
  sym_status_line = 72,
  sym_reason = 73,
  sym__form_content = 74,
  sym__multipart_content = 75,
  sym__html_content = 76,
  sym__css_content = 77,
  sym__javascript_content = 78,
  sym__json_content = 79,
  sym__xml_content = 80,
  sym__other_content = 81,
  sym_header = 82,
  sym__javascript_header_value = 83,
  sym__xml_header_value = 84,
  sym_body = 85,
  sym_form_body = 86,
  sym_multipart_body = 87,
  sym_html_body = 88,
  sym_css_body = 89,
  sym_javascript_body = 90,
  sym_json_body = 91,
  sym_xml_body = 92,
  sym__data = 93,
  aux_sym_source_file_repeat1 = 94,
  aux_sym__target_repeat1 = 95,
  aux_sym_body_repeat1 = 96,
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
  [sym__form_header_value] = "header_value",
  [sym__multipart_header_value] = "header_value",
  [sym__html_header_value] = "header_value",
  [sym__css_header_value] = "header_value",
  [aux_sym__javascript_header_value_token1] = "_javascript_header_value_token1",
  [aux_sym__javascript_header_value_token2] = "_javascript_header_value_token2",
  [aux_sym__javascript_header_value_token3] = "_javascript_header_value_token3",
  [sym__json_header_value] = "header_value",
  [aux_sym__xml_header_value_token1] = "_xml_header_value_token1",
  [aux_sym__xml_header_value_token2] = "_xml_header_value_token2",
  [aux_sym__xml_header_value_token3] = "_xml_header_value_token3",
  [aux_sym__xml_header_value_token4] = "_xml_header_value_token4",
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
  [sym__form_content] = "header",
  [sym__multipart_content] = "header",
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
  [sym_form_body] = "form_body",
  [sym_multipart_body] = "multipart_body",
  [sym_html_body] = "html_body",
  [sym_css_body] = "css_body",
  [sym_javascript_body] = "javascript_body",
  [sym_json_body] = "json_body",
  [sym_xml_body] = "xml_body",
  [sym__data] = "_data",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__target_repeat1] = "_target_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
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
  [sym__form_header_value] = sym_header_value,
  [sym__multipart_header_value] = sym_header_value,
  [sym__html_header_value] = sym_header_value,
  [sym__css_header_value] = sym_header_value,
  [aux_sym__javascript_header_value_token1] = aux_sym__javascript_header_value_token1,
  [aux_sym__javascript_header_value_token2] = aux_sym__javascript_header_value_token2,
  [aux_sym__javascript_header_value_token3] = aux_sym__javascript_header_value_token3,
  [sym__json_header_value] = sym_header_value,
  [aux_sym__xml_header_value_token1] = aux_sym__xml_header_value_token1,
  [aux_sym__xml_header_value_token2] = aux_sym__xml_header_value_token2,
  [aux_sym__xml_header_value_token3] = aux_sym__xml_header_value_token3,
  [aux_sym__xml_header_value_token4] = aux_sym__xml_header_value_token4,
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
  [sym__form_content] = sym_header,
  [sym__multipart_content] = sym_header,
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
  [sym_form_body] = sym_form_body,
  [sym_multipart_body] = sym_multipart_body,
  [sym_html_body] = sym_html_body,
  [sym_css_body] = sym_css_body,
  [sym_javascript_body] = sym_javascript_body,
  [sym_json_body] = sym_json_body,
  [sym_xml_body] = sym_xml_body,
  [sym__data] = sym__data,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__target_repeat1] = aux_sym__target_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
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
  [sym__form_header_value] = {
    .visible = true,
    .named = true,
  },
  [sym__multipart_header_value] = {
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
  [aux_sym__xml_header_value_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__xml_header_value_token4] = {
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
  [sym__form_content] = {
    .visible = true,
    .named = true,
  },
  [sym__multipart_content] = {
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
  [sym_form_body] = {
    .visible = true,
    .named = true,
  },
  [sym_multipart_body] = {
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
      if (eof) ADVANCE(224);
      if (lookahead == '\t') ADVANCE(605);
      if (lookahead == '\n') ADVANCE(605);
      if (lookahead == '\r') ADVANCE(604);
      if (lookahead == ' ') ADVANCE(607);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '&') ADVANCE(294);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == '=') ADVANCE(297);
      if (lookahead == '?') ADVANCE(293);
      if (lookahead == 'A') ADVANCE(341);
      if (lookahead == 'B') ADVANCE(390);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'D') ADVANCE(373);
      if (lookahead == 'G') ADVANCE(361);
      if (lookahead == 'H') ADVANCE(362);
      if (lookahead == 'L') ADVANCE(393);
      if (lookahead == 'M') ADVANCE(372);
      if (lookahead == 'N') ADVANCE(422);
      if (lookahead == 'O') ADVANCE(428);
      if (lookahead == 'P') ADVANCE(330);
      if (lookahead == 'R') ADVANCE(363);
      if (lookahead == 'S') ADVANCE(374);
      if (lookahead == 'T') ADVANCE(431);
      if (lookahead == 'U') ADVANCE(410);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead == 'c') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead == 'm') ADVANCE(495);
      if (lookahead == 't') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (lookahead == '-' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(608);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(213);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(214);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == 'h') ADVANCE(205);
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(162);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(206);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(217);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(216);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(33);
      if (lookahead == 'C') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(116);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(135);
      if (lookahead == 'O') ADVANCE(123);
      if (lookahead == 'R') ADVANCE(104);
      if (lookahead == 'U') ADVANCE(119);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(113);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(137);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(90);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(117);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(124);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(53);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(78);
      if (lookahead == 'P') ADVANCE(107);
      END_STATE();
    case 22:
      if (lookahead == 'B') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(80);
      if (lookahead == 'S') ADVANCE(141);
      END_STATE();
    case 23:
      if (lookahead == 'B') ADVANCE(125);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(89);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(85);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(88);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(115);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(87);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(136);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(129);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(121);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(241);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(231);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(261);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(263);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(277);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(14);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(9);
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(239);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(251);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(253);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(247);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(267);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(291);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(283);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(289);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == 'K') ADVANCE(10);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'S') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(91);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(140);
      if (lookahead == 'U') ADVANCE(18);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(138);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 63:
      if (lookahead == 'F') ADVANCE(145);
      END_STATE();
    case 64:
      if (lookahead == 'F') ADVANCE(81);
      if (lookahead == 'P') ADVANCE(15);
      END_STATE();
    case 65:
      if (lookahead == 'G') ADVANCE(48);
      END_STATE();
    case 66:
      if (lookahead == 'G') ADVANCE(49);
      END_STATE();
    case 67:
      if (lookahead == 'H') ADVANCE(245);
      END_STATE();
    case 68:
      if (lookahead == 'H') ADVANCE(257);
      END_STATE();
    case 69:
      if (lookahead == 'H') ADVANCE(273);
      END_STATE();
    case 70:
      if (lookahead == 'H') ADVANCE(281);
      END_STATE();
    case 71:
      if (lookahead == 'H') ADVANCE(60);
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(63);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(94);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(142);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(19);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(97);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(99);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(102);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(134);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 84:
      if (lookahead == 'K') ADVANCE(243);
      END_STATE();
    case 85:
      if (lookahead == 'K') ADVANCE(237);
      END_STATE();
    case 86:
      if (lookahead == 'K') ADVANCE(269);
      END_STATE();
    case 87:
      if (lookahead == 'K') ADVANCE(259);
      END_STATE();
    case 88:
      if (lookahead == 'K') ADVANCE(106);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(229);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(249);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(58);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(59);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(84);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(122);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead == 'P') ADVANCE(144);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(86);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 104:
      if (lookahead == 'O') ADVANCE(110);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(131);
      END_STATE();
    case 106:
      if (lookahead == 'O') ADVANCE(139);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(118);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 109:
      if (lookahead == 'P') ADVANCE(8);
      END_STATE();
    case 110:
      if (lookahead == 'P') ADVANCE(64);
      END_STATE();
    case 111:
      if (lookahead == 'P') ADVANCE(133);
      END_STATE();
    case 112:
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(285);
      END_STATE();
    case 114:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(75);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(29);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(227);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 122:
      if (lookahead == 'S') ADVANCE(275);
      END_STATE();
    case 123:
      if (lookahead == 'S') ADVANCE(127);
      END_STATE();
    case 124:
      if (lookahead == 'S') ADVANCE(31);
      END_STATE();
    case 125:
      if (lookahead == 'S') ADVANCE(37);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(225);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(233);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(265);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(271);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(279);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(109);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(146);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 139:
      if (lookahead == 'U') ADVANCE(130);
      END_STATE();
    case 140:
      if (lookahead == 'U') ADVANCE(120);
      END_STATE();
    case 141:
      if (lookahead == 'U') ADVANCE(23);
      END_STATE();
    case 142:
      if (lookahead == 'V') ADVANCE(82);
      END_STATE();
    case 143:
      if (lookahead == 'V') ADVANCE(47);
      END_STATE();
    case 144:
      if (lookahead == 'Y') ADVANCE(235);
      END_STATE();
    case 145:
      if (lookahead == 'Y') ADVANCE(255);
      END_STATE();
    case 146:
      if (lookahead == 'Y') ADVANCE(287);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(204);
      if (lookahead == 'j') ADVANCE(147);
      if (lookahead == 'x') ADVANCE(176);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(308);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 162:
      if (lookahead == 'f') ADVANCE(186);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(2);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 167:
      if (lookahead == 'j') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(4);
      END_STATE();
    case 168:
      if (lookahead == 'j') ADVANCE(152);
      if (lookahead == 'w') ADVANCE(212);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(6);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 207:
      if (lookahead == 'v') ADVANCE(163);
      END_STATE();
    case 208:
      if (lookahead == 'v') ADVANCE(148);
      END_STATE();
    case 209:
      if (lookahead == 'v') ADVANCE(149);
      END_STATE();
    case 210:
      if (lookahead == 'v') ADVANCE(150);
      END_STATE();
    case 211:
      if (lookahead == 'w') ADVANCE(5);
      END_STATE();
    case 212:
      if (lookahead == 'w') ADVANCE(211);
      END_STATE();
    case 213:
      if (lookahead == 'x') ADVANCE(179);
      END_STATE();
    case 214:
      if (lookahead == 'x') ADVANCE(181);
      END_STATE();
    case 215:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(605);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 218:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(298);
      END_STATE();
    case 219:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 220:
      if (eof) ADVANCE(224);
      if (lookahead == '\n') ADVANCE(608);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(606);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '&') ADVANCE(294);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == '=') ADVANCE(297);
      if (lookahead == '?') ADVANCE(293);
      if (lookahead == 'A') ADVANCE(24);
      if (lookahead == 'B') ADVANCE(73);
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'G') ADVANCE(44);
      if (lookahead == 'H') ADVANCE(45);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'M') ADVANCE(55);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(46);
      if (lookahead == 'S') ADVANCE(57);
      if (lookahead == 'T') ADVANCE(114);
      if (lookahead == 'U') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 221:
      if (eof) ADVANCE(224);
      if (lookahead == '\n') ADVANCE(608);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 222:
      if (eof) ADVANCE(224);
      if (lookahead == '\n') ADVANCE(608);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 223:
      if (eof) ADVANCE(224);
      if (lookahead == '\n') ADVANCE(608);
      if (lookahead == '\r') ADVANCE(304);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_ACL);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_ACL);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_MOVE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_MOVE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_BIND);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_BIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_MKCOL);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_MKCOL);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_MERGE);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_MERGE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_NOTIFY);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_NOTIFY);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_SEARCH);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_SEARCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_REBIND);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_REBIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_UNBIND);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_UNBIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_REPORT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_MSEARCH);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_MSEARCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_CHECKOUT);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_CHECKOUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_PROPPATCH);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_PROPPATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_SUBSCRIBE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_SUBSCRIBE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_MKCALENDAR);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_MKCALENDAR);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_MKACTIVITY);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_MKACTIVITY);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_UNSUBSCRIBE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_UNSUBSCRIBE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_SOURCE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_SOURCE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_path_component);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_query_name);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_query_value);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_hash);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_version);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_status);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_status);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_reason_token1);
      if (lookahead == '\n') ADVANCE(608);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_reason_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__content_type_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__form_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__multipart_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__html_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__css_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__javascript_header_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__javascript_header_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__javascript_header_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__json_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__xml_header_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__xml_header_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__xml_header_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__xml_header_value_token4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '/') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(350);
      if (lookahead == 'C') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(452);
      if (lookahead == 'O') ADVANCE(440);
      if (lookahead == 'R') ADVANCE(421);
      if (lookahead == 'U') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(409);
      if (lookahead == 'O') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(395);
      if (lookahead == 'P') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(396);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'S') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(326);
      if (lookahead == 'T') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(429);
      if (lookahead == 'K') ADVANCE(327);
      if (lookahead == 'O') ADVANCE(460);
      if (lookahead == 'S') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(328);
      if (lookahead == 'O') ADVANCE(457);
      if (lookahead == 'U') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'F') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'F') ADVANCE(398);
      if (lookahead == 'P') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'G') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'G') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(377);
      if (lookahead == 'O') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(412);
      if (lookahead == 'O') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(417);
      if (lookahead == 'O') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(420);
      if (lookahead == 'P') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(383);
      if (lookahead == 'T') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'U') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'U') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'U') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'V') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'V') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'Y') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'Y') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'Y') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'g') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'l') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'm') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'u') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'x') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'y') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '+') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '+') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == 'h') ADVANCE(591);
      if (lookahead == 'm') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '-') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '-') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '/') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '/') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '/') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 'm') ADVANCE(592);
      if (lookahead == 't') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(596);
      if (lookahead == 's') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(580);
      if (lookahead == 'h') ADVANCE(590);
      if (lookahead == 'j') ADVANCE(512);
      if (lookahead == 'x') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'd') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'e') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'g') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'g') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'j') ADVANCE(517);
      if (lookahead == 'x') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'j') ADVANCE(518);
      if (lookahead == 'w') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'n') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'n') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'o') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'o') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'o') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'r') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'r') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'r') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'r') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'r') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'r') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'u') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'u') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'v') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'v') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'v') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'v') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'w') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'w') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'x') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'x') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'x') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(603);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(605);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(605);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(605);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(605);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 220},
  [2] = {.lex_state = 509},
  [3] = {.lex_state = 221},
  [4] = {.lex_state = 221},
  [5] = {.lex_state = 221},
  [6] = {.lex_state = 223},
  [7] = {.lex_state = 223},
  [8] = {.lex_state = 222},
  [9] = {.lex_state = 222},
  [10] = {.lex_state = 223},
  [11] = {.lex_state = 222},
  [12] = {.lex_state = 222},
  [13] = {.lex_state = 222},
  [14] = {.lex_state = 222},
  [15] = {.lex_state = 223},
  [16] = {.lex_state = 223},
  [17] = {.lex_state = 223},
  [18] = {.lex_state = 223},
  [19] = {.lex_state = 223},
  [20] = {.lex_state = 223},
  [21] = {.lex_state = 222},
  [22] = {.lex_state = 223},
  [23] = {.lex_state = 223},
  [24] = {.lex_state = 222},
  [25] = {.lex_state = 223},
  [26] = {.lex_state = 222},
  [27] = {.lex_state = 223},
  [28] = {.lex_state = 222},
  [29] = {.lex_state = 223},
  [30] = {.lex_state = 222},
  [31] = {.lex_state = 223},
  [32] = {.lex_state = 222},
  [33] = {.lex_state = 223},
  [34] = {.lex_state = 222},
  [35] = {.lex_state = 223},
  [36] = {.lex_state = 222},
  [37] = {.lex_state = 223},
  [38] = {.lex_state = 222},
  [39] = {.lex_state = 222},
  [40] = {.lex_state = 222},
  [41] = {.lex_state = 222},
  [42] = {.lex_state = 222},
  [43] = {.lex_state = 222},
  [44] = {.lex_state = 222},
  [45] = {.lex_state = 222},
  [46] = {.lex_state = 222},
  [47] = {.lex_state = 222},
  [48] = {.lex_state = 220},
  [49] = {.lex_state = 222},
  [50] = {.lex_state = 220},
  [51] = {.lex_state = 222},
  [52] = {.lex_state = 222},
  [53] = {.lex_state = 222},
  [54] = {.lex_state = 222},
  [55] = {.lex_state = 223},
  [56] = {.lex_state = 223},
  [57] = {.lex_state = 223},
  [58] = {.lex_state = 223},
  [59] = {.lex_state = 223},
  [60] = {.lex_state = 223},
  [61] = {.lex_state = 223},
  [62] = {.lex_state = 223},
  [63] = {.lex_state = 223},
  [64] = {.lex_state = 223},
  [65] = {.lex_state = 223},
  [66] = {.lex_state = 223},
  [67] = {.lex_state = 223},
  [68] = {.lex_state = 222},
  [69] = {.lex_state = 223},
  [70] = {.lex_state = 223},
  [71] = {.lex_state = 222},
  [72] = {.lex_state = 222},
  [73] = {.lex_state = 222},
  [74] = {.lex_state = 220},
  [75] = {.lex_state = 220},
  [76] = {.lex_state = 220},
  [77] = {.lex_state = 220},
  [78] = {.lex_state = 221},
  [79] = {.lex_state = 220},
  [80] = {.lex_state = 222},
  [81] = {.lex_state = 220},
  [82] = {.lex_state = 220},
  [83] = {.lex_state = 222},
  [84] = {.lex_state = 222},
  [85] = {.lex_state = 222},
  [86] = {.lex_state = 222},
  [87] = {.lex_state = 222},
  [88] = {.lex_state = 222},
  [89] = {.lex_state = 222},
  [90] = {.lex_state = 222},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 218},
  [93] = {.lex_state = 218},
  [94] = {.lex_state = 221},
  [95] = {.lex_state = 221},
  [96] = {.lex_state = 219},
  [97] = {.lex_state = 220},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 215},
  [100] = {.lex_state = 220},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 603},
  [104] = {.lex_state = 220},
  [105] = {.lex_state = 220},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 220},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 215},
  [110] = {.lex_state = 220},
  [111] = {.lex_state = 220},
  [112] = {.lex_state = 220},
  [113] = {.lex_state = 220},
  [114] = {.lex_state = 220},
  [115] = {.lex_state = 220},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 220},
  [118] = {.lex_state = 220},
  [119] = {.lex_state = 220},
  [120] = {.lex_state = 220},
  [121] = {.lex_state = 220},
  [122] = {.lex_state = 299},
  [123] = {.lex_state = 220},
  [124] = {.lex_state = 220},
  [125] = {.lex_state = 296},
  [126] = {.lex_state = 220},
  [127] = {.lex_state = 220},
  [128] = {.lex_state = 220},
  [129] = {.lex_state = 220},
  [130] = {.lex_state = 220},
  [131] = {.lex_state = 603},
  [132] = {.lex_state = 220},
  [133] = {.lex_state = 220},
  [134] = {.lex_state = 215},
  [135] = {.lex_state = 0},
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
    [sym__form_header_value] = ACTIONS(1),
    [sym__multipart_header_value] = ACTIONS(1),
    [sym__html_header_value] = ACTIONS(1),
    [sym__css_header_value] = ACTIONS(1),
    [aux_sym__javascript_header_value_token1] = ACTIONS(1),
    [aux_sym__javascript_header_value_token2] = ACTIONS(1),
    [aux_sym__javascript_header_value_token3] = ACTIONS(1),
    [sym__json_header_value] = ACTIONS(1),
    [aux_sym__xml_header_value_token1] = ACTIONS(1),
    [aux_sym__xml_header_value_token2] = ACTIONS(1),
    [aux_sym__xml_header_value_token3] = ACTIONS(1),
    [aux_sym__xml_header_value_token4] = ACTIONS(1),
    [sym_header_name] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(106),
    [sym__start_line] = STATE(4),
    [sym_request_line] = STATE(4),
    [sym_method] = STATE(110),
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
      sym__form_header_value,
    ACTIONS(11), 1,
      sym__multipart_header_value,
    ACTIONS(13), 1,
      sym__html_header_value,
    ACTIONS(15), 1,
      sym__css_header_value,
    ACTIONS(19), 1,
      sym__json_header_value,
    ACTIONS(23), 1,
      sym_header_value,
    STATE(105), 1,
      sym__xml_header_value,
    STATE(111), 1,
      sym__javascript_header_value,
    ACTIONS(17), 3,
      aux_sym__javascript_header_value_token1,
      aux_sym__javascript_header_value_token2,
      aux_sym__javascript_header_value_token3,
    ACTIONS(21), 4,
      aux_sym__xml_header_value_token1,
      aux_sym__xml_header_value_token2,
      aux_sym__xml_header_value_token3,
      aux_sym__xml_header_value_token4,
  [36] = 13,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym__content_type_name,
    ACTIONS(29), 1,
      sym_header_name,
    ACTIONS(31), 1,
      sym__newline,
    STATE(39), 1,
      sym__form_content,
    STATE(40), 1,
      sym__multipart_content,
    STATE(41), 1,
      sym__html_content,
    STATE(42), 1,
      sym__css_content,
    STATE(43), 1,
      sym__javascript_content,
    STATE(44), 1,
      sym__json_content,
    STATE(45), 1,
      sym__xml_content,
    STATE(46), 1,
      sym__other_content,
    STATE(5), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [77] = 11,
    ACTIONS(27), 1,
      sym__content_type_name,
    ACTIONS(29), 1,
      sym_header_name,
    STATE(11), 1,
      sym__javascript_content,
    STATE(12), 1,
      sym__json_content,
    STATE(13), 1,
      sym__xml_content,
    STATE(14), 1,
      sym__other_content,
    STATE(47), 1,
      sym__form_content,
    STATE(52), 1,
      sym__html_content,
    STATE(68), 1,
      sym__multipart_content,
    STATE(71), 1,
      sym__css_content,
    STATE(3), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [112] = 4,
    ACTIONS(35), 1,
      sym__content_type_name,
    ACTIONS(37), 1,
      sym_header_name,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(5), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [127] = 4,
    ACTIONS(40), 1,
      aux_sym_reason_token1,
    ACTIONS(42), 1,
      sym__newline,
    STATE(116), 1,
      sym_xml_body,
    STATE(67), 2,
      sym__data,
      aux_sym_body_repeat1,
  [141] = 4,
    ACTIONS(44), 1,
      aux_sym_reason_token1,
    ACTIONS(46), 1,
      sym__newline,
    STATE(98), 1,
      sym_form_body,
    STATE(55), 2,
      sym__data,
      aux_sym_body_repeat1,
  [155] = 3,
    ACTIONS(48), 1,
      sym_header_name,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [167] = 4,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(55), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [181] = 4,
    ACTIONS(57), 1,
      aux_sym_reason_token1,
    ACTIONS(59), 1,
      sym__newline,
    STATE(98), 1,
      sym_body,
    STATE(69), 2,
      sym__data,
      aux_sym_body_repeat1,
  [195] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(61), 1,
      sym__newline,
    STATE(32), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [209] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(63), 1,
      sym__newline,
    STATE(34), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [223] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(65), 1,
      sym__newline,
    STATE(36), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [237] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(53), 1,
      sym_header_name,
    STATE(38), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [251] = 4,
    ACTIONS(40), 1,
      aux_sym_reason_token1,
    ACTIONS(42), 1,
      sym__newline,
    STATE(98), 1,
      sym_xml_body,
    STATE(67), 2,
      sym__data,
      aux_sym_body_repeat1,
  [265] = 4,
    ACTIONS(67), 1,
      aux_sym_reason_token1,
    ACTIONS(69), 1,
      sym__newline,
    STATE(98), 1,
      sym_json_body,
    STATE(65), 2,
      sym__data,
      aux_sym_body_repeat1,
  [279] = 4,
    ACTIONS(71), 1,
      aux_sym_reason_token1,
    ACTIONS(73), 1,
      sym__newline,
    STATE(98), 1,
      sym_javascript_body,
    STATE(63), 2,
      sym__data,
      aux_sym_body_repeat1,
  [293] = 4,
    ACTIONS(75), 1,
      aux_sym_reason_token1,
    ACTIONS(77), 1,
      sym__newline,
    STATE(98), 1,
      sym_css_body,
    STATE(61), 2,
      sym__data,
      aux_sym_body_repeat1,
  [307] = 4,
    ACTIONS(79), 1,
      aux_sym_reason_token1,
    ACTIONS(81), 1,
      sym__newline,
    STATE(98), 1,
      sym_html_body,
    STATE(59), 2,
      sym__data,
      aux_sym_body_repeat1,
  [321] = 4,
    ACTIONS(83), 1,
      aux_sym_reason_token1,
    ACTIONS(85), 1,
      sym__newline,
    STATE(98), 1,
      sym_multipart_body,
    STATE(57), 2,
      sym__data,
      aux_sym_body_repeat1,
  [335] = 4,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(87), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [349] = 4,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      aux_sym_reason_token1,
    ACTIONS(94), 1,
      sym__newline,
    STATE(22), 2,
      sym__data,
      aux_sym_body_repeat1,
  [363] = 4,
    ACTIONS(44), 1,
      aux_sym_reason_token1,
    ACTIONS(46), 1,
      sym__newline,
    STATE(108), 1,
      sym_form_body,
    STATE(55), 2,
      sym__data,
      aux_sym_body_repeat1,
  [377] = 4,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [391] = 4,
    ACTIONS(83), 1,
      aux_sym_reason_token1,
    ACTIONS(85), 1,
      sym__newline,
    STATE(108), 1,
      sym_multipart_body,
    STATE(57), 2,
      sym__data,
      aux_sym_body_repeat1,
  [405] = 4,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [419] = 4,
    ACTIONS(79), 1,
      aux_sym_reason_token1,
    ACTIONS(81), 1,
      sym__newline,
    STATE(108), 1,
      sym_html_body,
    STATE(59), 2,
      sym__data,
      aux_sym_body_repeat1,
  [433] = 4,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [447] = 4,
    ACTIONS(75), 1,
      aux_sym_reason_token1,
    ACTIONS(77), 1,
      sym__newline,
    STATE(108), 1,
      sym_css_body,
    STATE(61), 2,
      sym__data,
      aux_sym_body_repeat1,
  [461] = 4,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [475] = 4,
    ACTIONS(57), 1,
      aux_sym_reason_token1,
    ACTIONS(59), 1,
      sym__newline,
    STATE(116), 1,
      sym_body,
    STATE(69), 2,
      sym__data,
      aux_sym_body_repeat1,
  [489] = 4,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [503] = 4,
    ACTIONS(67), 1,
      aux_sym_reason_token1,
    ACTIONS(69), 1,
      sym__newline,
    STATE(108), 1,
      sym_json_body,
    STATE(65), 2,
      sym__data,
      aux_sym_body_repeat1,
  [517] = 4,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [531] = 4,
    ACTIONS(40), 1,
      aux_sym_reason_token1,
    ACTIONS(42), 1,
      sym__newline,
    STATE(108), 1,
      sym_xml_body,
    STATE(67), 2,
      sym__data,
      aux_sym_body_repeat1,
  [545] = 4,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [559] = 4,
    ACTIONS(57), 1,
      aux_sym_reason_token1,
    ACTIONS(59), 1,
      sym__newline,
    STATE(108), 1,
      sym_body,
    STATE(69), 2,
      sym__data,
      aux_sym_body_repeat1,
  [573] = 4,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [587] = 4,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      sym__newline,
    STATE(21), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [601] = 4,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym__newline,
    STATE(9), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [615] = 4,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      sym__newline,
    STATE(73), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [629] = 4,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      sym__newline,
    STATE(72), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [643] = 4,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym__newline,
    STATE(54), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [657] = 4,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      sym__newline,
    STATE(53), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [671] = 4,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      sym__newline,
    STATE(51), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [685] = 4,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      sym__newline,
    STATE(49), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [699] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(115), 1,
      sym__newline,
    STATE(24), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [713] = 3,
    ACTIONS(119), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      aux_sym__path,
    ACTIONS(117), 3,
      anon_sym_QMARK,
      sym_hash,
      sym__space,
  [725] = 4,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(122), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [739] = 5,
    ACTIONS(124), 1,
      anon_sym_QMARK,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    ACTIONS(128), 1,
      sym_hash,
    ACTIONS(130), 1,
      sym__space,
    STATE(48), 1,
      aux_sym__path,
  [755] = 4,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(132), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [769] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(134), 1,
      sym__newline,
    STATE(28), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [783] = 4,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(136), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [797] = 4,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(138), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [811] = 4,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      aux_sym_reason_token1,
    ACTIONS(144), 1,
      sym__newline,
    STATE(22), 2,
      sym__data,
      aux_sym_body_repeat1,
  [825] = 4,
    ACTIONS(44), 1,
      aux_sym_reason_token1,
    ACTIONS(46), 1,
      sym__newline,
    STATE(116), 1,
      sym_form_body,
    STATE(55), 2,
      sym__data,
      aux_sym_body_repeat1,
  [839] = 4,
    ACTIONS(142), 1,
      aux_sym_reason_token1,
    ACTIONS(144), 1,
      sym__newline,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym__data,
      aux_sym_body_repeat1,
  [853] = 4,
    ACTIONS(83), 1,
      aux_sym_reason_token1,
    ACTIONS(85), 1,
      sym__newline,
    STATE(116), 1,
      sym_multipart_body,
    STATE(57), 2,
      sym__data,
      aux_sym_body_repeat1,
  [867] = 4,
    ACTIONS(142), 1,
      aux_sym_reason_token1,
    ACTIONS(144), 1,
      sym__newline,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym__data,
      aux_sym_body_repeat1,
  [881] = 4,
    ACTIONS(79), 1,
      aux_sym_reason_token1,
    ACTIONS(81), 1,
      sym__newline,
    STATE(116), 1,
      sym_html_body,
    STATE(59), 2,
      sym__data,
      aux_sym_body_repeat1,
  [895] = 4,
    ACTIONS(142), 1,
      aux_sym_reason_token1,
    ACTIONS(144), 1,
      sym__newline,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym__data,
      aux_sym_body_repeat1,
  [909] = 4,
    ACTIONS(75), 1,
      aux_sym_reason_token1,
    ACTIONS(77), 1,
      sym__newline,
    STATE(116), 1,
      sym_css_body,
    STATE(61), 2,
      sym__data,
      aux_sym_body_repeat1,
  [923] = 4,
    ACTIONS(142), 1,
      aux_sym_reason_token1,
    ACTIONS(144), 1,
      sym__newline,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym__data,
      aux_sym_body_repeat1,
  [937] = 4,
    ACTIONS(71), 1,
      aux_sym_reason_token1,
    ACTIONS(73), 1,
      sym__newline,
    STATE(116), 1,
      sym_javascript_body,
    STATE(63), 2,
      sym__data,
      aux_sym_body_repeat1,
  [951] = 4,
    ACTIONS(142), 1,
      aux_sym_reason_token1,
    ACTIONS(144), 1,
      sym__newline,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym__data,
      aux_sym_body_repeat1,
  [965] = 4,
    ACTIONS(67), 1,
      aux_sym_reason_token1,
    ACTIONS(69), 1,
      sym__newline,
    STATE(116), 1,
      sym_json_body,
    STATE(65), 2,
      sym__data,
      aux_sym_body_repeat1,
  [979] = 4,
    ACTIONS(142), 1,
      aux_sym_reason_token1,
    ACTIONS(144), 1,
      sym__newline,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym__data,
      aux_sym_body_repeat1,
  [993] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(158), 1,
      sym__newline,
    STATE(26), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [1007] = 4,
    ACTIONS(142), 1,
      aux_sym_reason_token1,
    ACTIONS(144), 1,
      sym__newline,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym__data,
      aux_sym_body_repeat1,
  [1021] = 4,
    ACTIONS(71), 1,
      aux_sym_reason_token1,
    ACTIONS(73), 1,
      sym__newline,
    STATE(108), 1,
      sym_javascript_body,
    STATE(63), 2,
      sym__data,
      aux_sym_body_repeat1,
  [1035] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(162), 1,
      sym__newline,
    STATE(30), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [1049] = 4,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(164), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [1063] = 4,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_header_name,
    ACTIONS(166), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [1077] = 4,
    ACTIONS(168), 1,
      anon_sym_AMP,
    ACTIONS(170), 1,
      sym_hash,
    ACTIONS(172), 1,
      sym__space,
    STATE(76), 1,
      aux_sym__target_repeat1,
  [1090] = 4,
    ACTIONS(168), 1,
      anon_sym_AMP,
    ACTIONS(174), 1,
      sym_hash,
    ACTIONS(176), 1,
      sym__space,
    STATE(74), 1,
      aux_sym__target_repeat1,
  [1103] = 3,
    ACTIONS(178), 1,
      anon_sym_AMP,
    STATE(76), 1,
      aux_sym__target_repeat1,
    ACTIONS(181), 2,
      sym_hash,
      sym__space,
  [1114] = 2,
    ACTIONS(185), 1,
      anon_sym_EQ,
    ACTIONS(183), 3,
      anon_sym_AMP,
      sym_hash,
      sym__space,
  [1123] = 2,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(189), 2,
      sym__content_type_name,
      sym_header_name,
  [1132] = 1,
    ACTIONS(117), 4,
      anon_sym_QMARK,
      anon_sym_SLASH,
      sym_hash,
      sym__space,
  [1139] = 1,
    ACTIONS(191), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1145] = 1,
    ACTIONS(181), 3,
      anon_sym_AMP,
      sym_hash,
      sym__space,
  [1151] = 1,
    ACTIONS(193), 3,
      anon_sym_AMP,
      sym_hash,
      sym__space,
  [1157] = 1,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1163] = 1,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1169] = 1,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1175] = 1,
    ACTIONS(187), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1181] = 1,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1187] = 1,
    ACTIONS(203), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1193] = 1,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1199] = 1,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1205] = 3,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    STATE(50), 1,
      aux_sym__path,
    STATE(129), 1,
      sym__target,
  [1215] = 2,
    ACTIONS(209), 1,
      sym_query_name,
    STATE(75), 1,
      sym_query_item,
  [1222] = 2,
    ACTIONS(209), 1,
      sym_query_name,
    STATE(81), 1,
      sym_query_item,
  [1229] = 1,
    ACTIONS(211), 2,
      sym__content_type_name,
      sym_header_name,
  [1234] = 1,
    ACTIONS(213), 2,
      sym__content_type_name,
      sym_header_name,
  [1239] = 2,
    ACTIONS(215), 1,
      aux_sym_reason_token1,
    STATE(121), 1,
      sym_reason,
  [1246] = 1,
    ACTIONS(217), 1,
      sym__newline,
  [1250] = 1,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
  [1254] = 1,
    ACTIONS(221), 1,
      sym__whitespace,
  [1258] = 1,
    ACTIONS(223), 1,
      sym__space,
  [1262] = 1,
    ACTIONS(225), 1,
      anon_sym_COLON,
  [1266] = 1,
    ACTIONS(227), 1,
      anon_sym_COLON,
  [1270] = 1,
    ACTIONS(229), 1,
      sym_header_value,
  [1274] = 1,
    ACTIONS(231), 1,
      sym__newline,
  [1278] = 1,
    ACTIONS(233), 1,
      sym__newline,
  [1282] = 1,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
  [1286] = 1,
    ACTIONS(237), 1,
      sym__newline,
  [1290] = 1,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
  [1294] = 1,
    ACTIONS(239), 1,
      sym__whitespace,
  [1298] = 1,
    ACTIONS(241), 1,
      sym__space,
  [1302] = 1,
    ACTIONS(243), 1,
      sym__newline,
  [1306] = 1,
    ACTIONS(245), 1,
      sym__newline,
  [1310] = 1,
    ACTIONS(247), 1,
      sym__newline,
  [1314] = 1,
    ACTIONS(249), 1,
      sym__newline,
  [1318] = 1,
    ACTIONS(251), 1,
      sym__newline,
  [1322] = 1,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
  [1326] = 1,
    ACTIONS(255), 1,
      sym__newline,
  [1330] = 1,
    ACTIONS(257), 1,
      sym__newline,
  [1334] = 1,
    ACTIONS(259), 1,
      sym__newline,
  [1338] = 1,
    ACTIONS(261), 1,
      sym__space,
  [1342] = 1,
    ACTIONS(263), 1,
      sym__newline,
  [1346] = 1,
    ACTIONS(265), 1,
      sym_query_value,
  [1350] = 1,
    ACTIONS(267), 1,
      sym__newline,
  [1354] = 1,
    ACTIONS(172), 1,
      sym__space,
  [1358] = 1,
    ACTIONS(269), 1,
      sym_path_component,
  [1362] = 1,
    ACTIONS(271), 1,
      sym__space,
  [1366] = 1,
    ACTIONS(273), 1,
      sym_version,
  [1370] = 1,
    ACTIONS(275), 1,
      sym__space,
  [1374] = 1,
    ACTIONS(277), 1,
      sym__space,
  [1378] = 1,
    ACTIONS(279), 1,
      sym__space,
  [1382] = 1,
    ACTIONS(281), 1,
      sym_header_value,
  [1386] = 1,
    ACTIONS(283), 1,
      sym__newline,
  [1390] = 1,
    ACTIONS(285), 1,
      sym_status,
  [1394] = 1,
    ACTIONS(287), 1,
      sym__whitespace,
  [1398] = 1,
    ACTIONS(289), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 77,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 127,
  [SMALL_STATE(7)] = 141,
  [SMALL_STATE(8)] = 155,
  [SMALL_STATE(9)] = 167,
  [SMALL_STATE(10)] = 181,
  [SMALL_STATE(11)] = 195,
  [SMALL_STATE(12)] = 209,
  [SMALL_STATE(13)] = 223,
  [SMALL_STATE(14)] = 237,
  [SMALL_STATE(15)] = 251,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 279,
  [SMALL_STATE(18)] = 293,
  [SMALL_STATE(19)] = 307,
  [SMALL_STATE(20)] = 321,
  [SMALL_STATE(21)] = 335,
  [SMALL_STATE(22)] = 349,
  [SMALL_STATE(23)] = 363,
  [SMALL_STATE(24)] = 377,
  [SMALL_STATE(25)] = 391,
  [SMALL_STATE(26)] = 405,
  [SMALL_STATE(27)] = 419,
  [SMALL_STATE(28)] = 433,
  [SMALL_STATE(29)] = 447,
  [SMALL_STATE(30)] = 461,
  [SMALL_STATE(31)] = 475,
  [SMALL_STATE(32)] = 489,
  [SMALL_STATE(33)] = 503,
  [SMALL_STATE(34)] = 517,
  [SMALL_STATE(35)] = 531,
  [SMALL_STATE(36)] = 545,
  [SMALL_STATE(37)] = 559,
  [SMALL_STATE(38)] = 573,
  [SMALL_STATE(39)] = 587,
  [SMALL_STATE(40)] = 601,
  [SMALL_STATE(41)] = 615,
  [SMALL_STATE(42)] = 629,
  [SMALL_STATE(43)] = 643,
  [SMALL_STATE(44)] = 657,
  [SMALL_STATE(45)] = 671,
  [SMALL_STATE(46)] = 685,
  [SMALL_STATE(47)] = 699,
  [SMALL_STATE(48)] = 713,
  [SMALL_STATE(49)] = 725,
  [SMALL_STATE(50)] = 739,
  [SMALL_STATE(51)] = 755,
  [SMALL_STATE(52)] = 769,
  [SMALL_STATE(53)] = 783,
  [SMALL_STATE(54)] = 797,
  [SMALL_STATE(55)] = 811,
  [SMALL_STATE(56)] = 825,
  [SMALL_STATE(57)] = 839,
  [SMALL_STATE(58)] = 853,
  [SMALL_STATE(59)] = 867,
  [SMALL_STATE(60)] = 881,
  [SMALL_STATE(61)] = 895,
  [SMALL_STATE(62)] = 909,
  [SMALL_STATE(63)] = 923,
  [SMALL_STATE(64)] = 937,
  [SMALL_STATE(65)] = 951,
  [SMALL_STATE(66)] = 965,
  [SMALL_STATE(67)] = 979,
  [SMALL_STATE(68)] = 993,
  [SMALL_STATE(69)] = 1007,
  [SMALL_STATE(70)] = 1021,
  [SMALL_STATE(71)] = 1035,
  [SMALL_STATE(72)] = 1049,
  [SMALL_STATE(73)] = 1063,
  [SMALL_STATE(74)] = 1077,
  [SMALL_STATE(75)] = 1090,
  [SMALL_STATE(76)] = 1103,
  [SMALL_STATE(77)] = 1114,
  [SMALL_STATE(78)] = 1123,
  [SMALL_STATE(79)] = 1132,
  [SMALL_STATE(80)] = 1139,
  [SMALL_STATE(81)] = 1145,
  [SMALL_STATE(82)] = 1151,
  [SMALL_STATE(83)] = 1157,
  [SMALL_STATE(84)] = 1163,
  [SMALL_STATE(85)] = 1169,
  [SMALL_STATE(86)] = 1175,
  [SMALL_STATE(87)] = 1181,
  [SMALL_STATE(88)] = 1187,
  [SMALL_STATE(89)] = 1193,
  [SMALL_STATE(90)] = 1199,
  [SMALL_STATE(91)] = 1205,
  [SMALL_STATE(92)] = 1215,
  [SMALL_STATE(93)] = 1222,
  [SMALL_STATE(94)] = 1229,
  [SMALL_STATE(95)] = 1234,
  [SMALL_STATE(96)] = 1239,
  [SMALL_STATE(97)] = 1246,
  [SMALL_STATE(98)] = 1250,
  [SMALL_STATE(99)] = 1254,
  [SMALL_STATE(100)] = 1258,
  [SMALL_STATE(101)] = 1262,
  [SMALL_STATE(102)] = 1266,
  [SMALL_STATE(103)] = 1270,
  [SMALL_STATE(104)] = 1274,
  [SMALL_STATE(105)] = 1278,
  [SMALL_STATE(106)] = 1282,
  [SMALL_STATE(107)] = 1286,
  [SMALL_STATE(108)] = 1290,
  [SMALL_STATE(109)] = 1294,
  [SMALL_STATE(110)] = 1298,
  [SMALL_STATE(111)] = 1302,
  [SMALL_STATE(112)] = 1306,
  [SMALL_STATE(113)] = 1310,
  [SMALL_STATE(114)] = 1314,
  [SMALL_STATE(115)] = 1318,
  [SMALL_STATE(116)] = 1322,
  [SMALL_STATE(117)] = 1326,
  [SMALL_STATE(118)] = 1330,
  [SMALL_STATE(119)] = 1334,
  [SMALL_STATE(120)] = 1338,
  [SMALL_STATE(121)] = 1342,
  [SMALL_STATE(122)] = 1346,
  [SMALL_STATE(123)] = 1350,
  [SMALL_STATE(124)] = 1354,
  [SMALL_STATE(125)] = 1358,
  [SMALL_STATE(126)] = 1362,
  [SMALL_STATE(127)] = 1366,
  [SMALL_STATE(128)] = 1370,
  [SMALL_STATE(129)] = 1374,
  [SMALL_STATE(130)] = 1378,
  [SMALL_STATE(131)] = 1382,
  [SMALL_STATE(132)] = 1386,
  [SMALL_STATE(133)] = 1390,
  [SMALL_STATE(134)] = 1394,
  [SMALL_STATE(135)] = 1398,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(22),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(22),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__path, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__path, 2), SHIFT_REPEAT(125),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_body, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_body, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_body, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_body, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_javascript_body, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 3),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_repeat1, 2), SHIFT_REPEAT(93),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_item, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_content, 5),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_item, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_content, 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__javascript_content, 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_content, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_content, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_content, 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multipart_content, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__form_content, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_line, 6),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [235] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_header_value, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__javascript_header_value, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 5),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
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
