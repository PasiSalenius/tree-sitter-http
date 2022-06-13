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
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
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
  sym__html_header_value = 49,
  sym__css_header_value = 50,
  aux_sym__javascript_header_value_token1 = 51,
  aux_sym__javascript_header_value_token2 = 52,
  aux_sym__javascript_header_value_token3 = 53,
  sym__json_header_value = 54,
  aux_sym__xml_header_value_token1 = 55,
  aux_sym__xml_header_value_token2 = 56,
  aux_sym__xml_header_value_token3 = 57,
  sym_header_name = 58,
  sym_header_value = 59,
  sym__whitespace = 60,
  sym__space = 61,
  sym__newline = 62,
  sym_source_file = 63,
  sym__start_line = 64,
  sym_request_line = 65,
  sym_method = 66,
  sym__target = 67,
  aux_sym__path = 68,
  sym_query_item = 69,
  sym_status_line = 70,
  sym_reason = 71,
  sym__form_content = 72,
  sym__html_content = 73,
  sym__css_content = 74,
  sym__javascript_content = 75,
  sym__json_content = 76,
  sym__xml_content = 77,
  sym__other_content = 78,
  sym_header = 79,
  sym__javascript_header_value = 80,
  sym__xml_header_value = 81,
  sym_body = 82,
  sym_form_body = 83,
  sym_html_body = 84,
  sym_css_body = 85,
  sym_javascript_body = 86,
  sym_json_body = 87,
  sym_xml_body = 88,
  sym__data = 89,
  aux_sym_source_file_repeat1 = 90,
  aux_sym__target_repeat1 = 91,
  aux_sym_body_repeat1 = 92,
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
  [sym__html_header_value] = "header_value",
  [sym__css_header_value] = "header_value",
  [aux_sym__javascript_header_value_token1] = "_javascript_header_value_token1",
  [aux_sym__javascript_header_value_token2] = "_javascript_header_value_token2",
  [aux_sym__javascript_header_value_token3] = "_javascript_header_value_token3",
  [sym__json_header_value] = "header_value",
  [aux_sym__xml_header_value_token1] = "_xml_header_value_token1",
  [aux_sym__xml_header_value_token2] = "_xml_header_value_token2",
  [aux_sym__xml_header_value_token3] = "_xml_header_value_token3",
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
  [sym__html_header_value] = sym_header_value,
  [sym__css_header_value] = sym_header_value,
  [aux_sym__javascript_header_value_token1] = aux_sym__javascript_header_value_token1,
  [aux_sym__javascript_header_value_token2] = aux_sym__javascript_header_value_token2,
  [aux_sym__javascript_header_value_token3] = aux_sym__javascript_header_value_token3,
  [sym__json_header_value] = sym_header_value,
  [aux_sym__xml_header_value_token1] = aux_sym__xml_header_value_token1,
  [aux_sym__xml_header_value_token2] = aux_sym__xml_header_value_token2,
  [aux_sym__xml_header_value_token3] = aux_sym__xml_header_value_token3,
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
      if (eof) ADVANCE(217);
      if (lookahead == '\t') ADVANCE(561);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '\r') ADVANCE(560);
      if (lookahead == ' ') ADVANCE(563);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '&') ADVANCE(287);
      if (lookahead == '/') ADVANCE(288);
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == '=') ADVANCE(290);
      if (lookahead == '?') ADVANCE(286);
      if (lookahead == 'A') ADVANCE(330);
      if (lookahead == 'B') ADVANCE(379);
      if (lookahead == 'C') ADVANCE(377);
      if (lookahead == 'D') ADVANCE(362);
      if (lookahead == 'G') ADVANCE(350);
      if (lookahead == 'H') ADVANCE(351);
      if (lookahead == 'L') ADVANCE(382);
      if (lookahead == 'M') ADVANCE(361);
      if (lookahead == 'N') ADVANCE(411);
      if (lookahead == 'O') ADVANCE(417);
      if (lookahead == 'P') ADVANCE(319);
      if (lookahead == 'R') ADVANCE(352);
      if (lookahead == 'S') ADVANCE(363);
      if (lookahead == 'T') ADVANCE(420);
      if (lookahead == 'U') ADVANCE(399);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == 'c') ADVANCE(464);
      if (lookahead == 't') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (lookahead == '-' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(564);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(207);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == 'h') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(201);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(210);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(209);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'C') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'O') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(103);
      if (lookahead == 'U') ADVANCE(118);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(112);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(136);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(89);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(116);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(123);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(52);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(53);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(77);
      if (lookahead == 'P') ADVANCE(106);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(78);
      if (lookahead == 'L') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(140);
      END_STATE();
    case 22:
      if (lookahead == 'B') ADVANCE(124);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(88);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(84);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(114);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(86);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(135);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(128);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(120);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(234);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(224);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(254);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(256);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(270);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(13);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(125);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead == 'T') ADVANCE(131);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(232);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(244);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(246);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(240);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(260);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(284);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(276);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(282);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == 'K') ADVANCE(9);
      if (lookahead == 'O') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(10);
      if (lookahead == 'O') ADVANCE(139);
      if (lookahead == 'U') ADVANCE(17);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(137);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 62:
      if (lookahead == 'F') ADVANCE(144);
      END_STATE();
    case 63:
      if (lookahead == 'F') ADVANCE(80);
      if (lookahead == 'P') ADVANCE(14);
      END_STATE();
    case 64:
      if (lookahead == 'G') ADVANCE(47);
      END_STATE();
    case 65:
      if (lookahead == 'G') ADVANCE(48);
      END_STATE();
    case 66:
      if (lookahead == 'H') ADVANCE(238);
      END_STATE();
    case 67:
      if (lookahead == 'H') ADVANCE(250);
      END_STATE();
    case 68:
      if (lookahead == 'H') ADVANCE(266);
      END_STATE();
    case 69:
      if (lookahead == 'H') ADVANCE(274);
      END_STATE();
    case 70:
      if (lookahead == 'H') ADVANCE(59);
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(62);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(141);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(18);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(96);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(31);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(133);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(19);
      END_STATE();
    case 83:
      if (lookahead == 'K') ADVANCE(236);
      END_STATE();
    case 84:
      if (lookahead == 'K') ADVANCE(230);
      END_STATE();
    case 85:
      if (lookahead == 'K') ADVANCE(262);
      END_STATE();
    case 86:
      if (lookahead == 'K') ADVANCE(252);
      END_STATE();
    case 87:
      if (lookahead == 'K') ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(222);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(242);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(57);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(58);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(121);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == 'P') ADVANCE(143);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 104:
      if (lookahead == 'O') ADVANCE(130);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(138);
      END_STATE();
    case 106:
      if (lookahead == 'O') ADVANCE(117);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(95);
      END_STATE();
    case 108:
      if (lookahead == 'P') ADVANCE(7);
      END_STATE();
    case 109:
      if (lookahead == 'P') ADVANCE(63);
      END_STATE();
    case 110:
      if (lookahead == 'P') ADVANCE(132);
      END_STATE();
    case 111:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 112:
      if (lookahead == 'R') ADVANCE(278);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 114:
      if (lookahead == 'R') ADVANCE(74);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(127);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(220);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(82);
      END_STATE();
    case 121:
      if (lookahead == 'S') ADVANCE(268);
      END_STATE();
    case 122:
      if (lookahead == 'S') ADVANCE(126);
      END_STATE();
    case 123:
      if (lookahead == 'S') ADVANCE(30);
      END_STATE();
    case 124:
      if (lookahead == 'S') ADVANCE(36);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(218);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(226);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(258);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(264);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(272);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(108);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(76);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(145);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 138:
      if (lookahead == 'U') ADVANCE(129);
      END_STATE();
    case 139:
      if (lookahead == 'U') ADVANCE(119);
      END_STATE();
    case 140:
      if (lookahead == 'U') ADVANCE(22);
      END_STATE();
    case 141:
      if (lookahead == 'V') ADVANCE(81);
      END_STATE();
    case 142:
      if (lookahead == 'V') ADVANCE(46);
      END_STATE();
    case 143:
      if (lookahead == 'Y') ADVANCE(228);
      END_STATE();
    case 144:
      if (lookahead == 'Y') ADVANCE(248);
      END_STATE();
    case 145:
      if (lookahead == 'Y') ADVANCE(280);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(199);
      if (lookahead == 'j') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(173);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 161:
      if (lookahead == 'f') ADVANCE(182);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 165:
      if (lookahead == 'j') ADVANCE(150);
      if (lookahead == 'x') ADVANCE(3);
      END_STATE();
    case 166:
      if (lookahead == 'j') ADVANCE(151);
      if (lookahead == 'w') ADVANCE(206);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(5);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 202:
      if (lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 203:
      if (lookahead == 'v') ADVANCE(148);
      END_STATE();
    case 204:
      if (lookahead == 'v') ADVANCE(149);
      END_STATE();
    case 205:
      if (lookahead == 'w') ADVANCE(4);
      END_STATE();
    case 206:
      if (lookahead == 'w') ADVANCE(205);
      END_STATE();
    case 207:
      if (lookahead == 'x') ADVANCE(177);
      END_STATE();
    case 208:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(561);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 211:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(291);
      END_STATE();
    case 212:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(298);
      END_STATE();
    case 213:
      if (eof) ADVANCE(217);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(562);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '&') ADVANCE(287);
      if (lookahead == '/') ADVANCE(288);
      if (lookahead == '=') ADVANCE(290);
      if (lookahead == '?') ADVANCE(286);
      if (lookahead == 'A') ADVANCE(23);
      if (lookahead == 'B') ADVANCE(72);
      if (lookahead == 'C') ADVANCE(70);
      if (lookahead == 'D') ADVANCE(55);
      if (lookahead == 'G') ADVANCE(43);
      if (lookahead == 'H') ADVANCE(44);
      if (lookahead == 'L') ADVANCE(75);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(104);
      if (lookahead == 'O') ADVANCE(110);
      if (lookahead == 'P') ADVANCE(12);
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 214:
      if (eof) ADVANCE(217);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 215:
      if (eof) ADVANCE(217);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 216:
      if (eof) ADVANCE(217);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(297);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_ACL);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_ACL);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_MOVE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_MOVE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BIND);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_BIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_MKCOL);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_MKCOL);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_MERGE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_MERGE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_NOTIFY);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_NOTIFY);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_SEARCH);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_SEARCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_REBIND);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_REBIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_UNBIND);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_UNBIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_REPORT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_MSEARCH);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_MSEARCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_CHECKOUT);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_CHECKOUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_PROPPATCH);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_PROPPATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_SUBSCRIBE);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_SUBSCRIBE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_MKCALENDAR);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_MKCALENDAR);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_MKACTIVITY);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_MKACTIVITY);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_UNSUBSCRIBE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_UNSUBSCRIBE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_SOURCE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_SOURCE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_path_component);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_query_name);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_query_value);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_hash);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_version);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_status);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_status);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_reason_token1);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_reason_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__content_type_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__form_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__html_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__css_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__javascript_header_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__javascript_header_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__javascript_header_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__json_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__xml_header_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__xml_header_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__xml_header_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(339);
      if (lookahead == 'C') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'O') ADVANCE(429);
      if (lookahead == 'R') ADVANCE(410);
      if (lookahead == 'U') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(398);
      if (lookahead == 'O') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(384);
      if (lookahead == 'P') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(385);
      if (lookahead == 'L') ADVANCE(386);
      if (lookahead == 'S') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'B') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(315);
      if (lookahead == 'T') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(418);
      if (lookahead == 'K') ADVANCE(316);
      if (lookahead == 'O') ADVANCE(449);
      if (lookahead == 'S') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(317);
      if (lookahead == 'O') ADVANCE(446);
      if (lookahead == 'U') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'F') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'P') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'G') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'G') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(366);
      if (lookahead == 'O') ADVANCE(404);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(401);
      if (lookahead == 'O') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(406);
      if (lookahead == 'O') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(409);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(372);
      if (lookahead == 'T') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'U') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'U') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'U') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'V') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'V') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'Y') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'Y') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'Y') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'c') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'x') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'y') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '+') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '-') ADVANCE(509);
      if (lookahead == 'h') ADVANCE(550);
      if (lookahead == 'm') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '-') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '-') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '/') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '/') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(530);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(553);
      if (lookahead == 's') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(541);
      if (lookahead == 'h') ADVANCE(549);
      if (lookahead == 'j') ADVANCE(484);
      if (lookahead == 'x') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'c') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'd') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'd') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'e') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'f') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'j') ADVANCE(489);
      if (lookahead == 'x') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'j') ADVANCE(490);
      if (lookahead == 'w') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'm') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'n') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'o') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'o') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'o') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'p') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'r') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'r') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'r') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'r') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 's') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'u') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'v') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'v') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'v') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'w') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'w') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'x') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == 'x') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(561);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(561);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 213},
  [2] = {.lex_state = 214},
  [3] = {.lex_state = 483},
  [4] = {.lex_state = 214},
  [5] = {.lex_state = 214},
  [6] = {.lex_state = 216},
  [7] = {.lex_state = 216},
  [8] = {.lex_state = 215},
  [9] = {.lex_state = 215},
  [10] = {.lex_state = 216},
  [11] = {.lex_state = 215},
  [12] = {.lex_state = 215},
  [13] = {.lex_state = 215},
  [14] = {.lex_state = 216},
  [15] = {.lex_state = 216},
  [16] = {.lex_state = 215},
  [17] = {.lex_state = 216},
  [18] = {.lex_state = 216},
  [19] = {.lex_state = 216},
  [20] = {.lex_state = 216},
  [21] = {.lex_state = 215},
  [22] = {.lex_state = 216},
  [23] = {.lex_state = 215},
  [24] = {.lex_state = 216},
  [25] = {.lex_state = 215},
  [26] = {.lex_state = 216},
  [27] = {.lex_state = 215},
  [28] = {.lex_state = 216},
  [29] = {.lex_state = 215},
  [30] = {.lex_state = 216},
  [31] = {.lex_state = 215},
  [32] = {.lex_state = 216},
  [33] = {.lex_state = 215},
  [34] = {.lex_state = 216},
  [35] = {.lex_state = 215},
  [36] = {.lex_state = 215},
  [37] = {.lex_state = 215},
  [38] = {.lex_state = 215},
  [39] = {.lex_state = 215},
  [40] = {.lex_state = 215},
  [41] = {.lex_state = 215},
  [42] = {.lex_state = 215},
  [43] = {.lex_state = 215},
  [44] = {.lex_state = 213},
  [45] = {.lex_state = 215},
  [46] = {.lex_state = 213},
  [47] = {.lex_state = 215},
  [48] = {.lex_state = 215},
  [49] = {.lex_state = 216},
  [50] = {.lex_state = 215},
  [51] = {.lex_state = 216},
  [52] = {.lex_state = 216},
  [53] = {.lex_state = 216},
  [54] = {.lex_state = 216},
  [55] = {.lex_state = 216},
  [56] = {.lex_state = 216},
  [57] = {.lex_state = 216},
  [58] = {.lex_state = 216},
  [59] = {.lex_state = 216},
  [60] = {.lex_state = 216},
  [61] = {.lex_state = 216},
  [62] = {.lex_state = 215},
  [63] = {.lex_state = 216},
  [64] = {.lex_state = 215},
  [65] = {.lex_state = 215},
  [66] = {.lex_state = 213},
  [67] = {.lex_state = 213},
  [68] = {.lex_state = 213},
  [69] = {.lex_state = 213},
  [70] = {.lex_state = 214},
  [71] = {.lex_state = 213},
  [72] = {.lex_state = 215},
  [73] = {.lex_state = 213},
  [74] = {.lex_state = 213},
  [75] = {.lex_state = 215},
  [76] = {.lex_state = 215},
  [77] = {.lex_state = 215},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 215},
  [80] = {.lex_state = 215},
  [81] = {.lex_state = 215},
  [82] = {.lex_state = 215},
  [83] = {.lex_state = 211},
  [84] = {.lex_state = 214},
  [85] = {.lex_state = 211},
  [86] = {.lex_state = 212},
  [87] = {.lex_state = 214},
  [88] = {.lex_state = 213},
  [89] = {.lex_state = 213},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 213},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 213},
  [95] = {.lex_state = 559},
  [96] = {.lex_state = 213},
  [97] = {.lex_state = 213},
  [98] = {.lex_state = 213},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 213},
  [101] = {.lex_state = 213},
  [102] = {.lex_state = 213},
  [103] = {.lex_state = 213},
  [104] = {.lex_state = 208},
  [105] = {.lex_state = 213},
  [106] = {.lex_state = 213},
  [107] = {.lex_state = 208},
  [108] = {.lex_state = 213},
  [109] = {.lex_state = 213},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 213},
  [112] = {.lex_state = 292},
  [113] = {.lex_state = 213},
  [114] = {.lex_state = 213},
  [115] = {.lex_state = 289},
  [116] = {.lex_state = 213},
  [117] = {.lex_state = 213},
  [118] = {.lex_state = 213},
  [119] = {.lex_state = 213},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 559},
  [122] = {.lex_state = 213},
  [123] = {.lex_state = 213},
  [124] = {.lex_state = 208},
  [125] = {.lex_state = 0},
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
    [sym__html_header_value] = ACTIONS(1),
    [sym__css_header_value] = ACTIONS(1),
    [aux_sym__javascript_header_value_token1] = ACTIONS(1),
    [aux_sym__javascript_header_value_token2] = ACTIONS(1),
    [aux_sym__javascript_header_value_token3] = ACTIONS(1),
    [sym__json_header_value] = ACTIONS(1),
    [aux_sym__xml_header_value_token1] = ACTIONS(1),
    [aux_sym__xml_header_value_token2] = ACTIONS(1),
    [aux_sym__xml_header_value_token3] = ACTIONS(1),
    [sym_header_name] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(120),
    [sym__start_line] = STATE(4),
    [sym_request_line] = STATE(4),
    [sym_method] = STATE(123),
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
  [0] = 12,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym__content_type_name,
    ACTIONS(13), 1,
      sym_header_name,
    ACTIONS(15), 1,
      sym__newline,
    STATE(36), 1,
      sym__form_content,
    STATE(37), 1,
      sym__html_content,
    STATE(38), 1,
      sym__css_content,
    STATE(39), 1,
      sym__javascript_content,
    STATE(40), 1,
      sym__json_content,
    STATE(41), 1,
      sym__xml_content,
    STATE(42), 1,
      sym__other_content,
    STATE(5), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [38] = 9,
    ACTIONS(17), 1,
      sym__form_header_value,
    ACTIONS(19), 1,
      sym__html_header_value,
    ACTIONS(21), 1,
      sym__css_header_value,
    ACTIONS(25), 1,
      sym__json_header_value,
    ACTIONS(29), 1,
      sym_header_value,
    STATE(101), 1,
      sym__xml_header_value,
    STATE(102), 1,
      sym__javascript_header_value,
    ACTIONS(23), 3,
      aux_sym__javascript_header_value_token1,
      aux_sym__javascript_header_value_token2,
      aux_sym__javascript_header_value_token3,
    ACTIONS(27), 3,
      aux_sym__xml_header_value_token1,
      aux_sym__xml_header_value_token2,
      aux_sym__xml_header_value_token3,
  [70] = 10,
    ACTIONS(11), 1,
      sym__content_type_name,
    ACTIONS(13), 1,
      sym_header_name,
    STATE(11), 1,
      sym__json_content,
    STATE(12), 1,
      sym__xml_content,
    STATE(13), 1,
      sym__other_content,
    STATE(16), 1,
      sym__javascript_content,
    STATE(43), 1,
      sym__form_content,
    STATE(48), 1,
      sym__css_content,
    STATE(62), 1,
      sym__html_content,
    STATE(2), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [102] = 4,
    ACTIONS(33), 1,
      sym__content_type_name,
    ACTIONS(35), 1,
      sym_header_name,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(5), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [117] = 4,
    ACTIONS(38), 1,
      aux_sym_reason_token1,
    ACTIONS(40), 1,
      sym__newline,
    STATE(90), 1,
      sym_xml_body,
    STATE(61), 2,
      sym__data,
      aux_sym_body_repeat1,
  [131] = 4,
    ACTIONS(42), 1,
      aux_sym_reason_token1,
    ACTIONS(44), 1,
      sym__newline,
    STATE(110), 1,
      sym_javascript_body,
    STATE(57), 2,
      sym__data,
      aux_sym_body_repeat1,
  [145] = 3,
    ACTIONS(46), 1,
      sym_header_name,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [157] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(53), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [171] = 4,
    ACTIONS(55), 1,
      aux_sym_reason_token1,
    ACTIONS(57), 1,
      sym__newline,
    STATE(110), 1,
      sym_body,
    STATE(63), 2,
      sym__data,
      aux_sym_body_repeat1,
  [185] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(59), 1,
      sym__newline,
    STATE(31), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [199] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(61), 1,
      sym__newline,
    STATE(33), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [213] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(51), 1,
      sym_header_name,
    STATE(35), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [227] = 4,
    ACTIONS(38), 1,
      aux_sym_reason_token1,
    ACTIONS(40), 1,
      sym__newline,
    STATE(110), 1,
      sym_xml_body,
    STATE(61), 2,
      sym__data,
      aux_sym_body_repeat1,
  [241] = 4,
    ACTIONS(63), 1,
      aux_sym_reason_token1,
    ACTIONS(65), 1,
      sym__newline,
    STATE(110), 1,
      sym_json_body,
    STATE(59), 2,
      sym__data,
      aux_sym_body_repeat1,
  [255] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(67), 1,
      sym__newline,
    STATE(29), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [269] = 4,
    ACTIONS(69), 1,
      aux_sym_reason_token1,
    ACTIONS(71), 1,
      sym__newline,
    STATE(110), 1,
      sym_css_body,
    STATE(55), 2,
      sym__data,
      aux_sym_body_repeat1,
  [283] = 4,
    ACTIONS(73), 1,
      aux_sym_reason_token1,
    ACTIONS(75), 1,
      sym__newline,
    STATE(110), 1,
      sym_html_body,
    STATE(53), 2,
      sym__data,
      aux_sym_body_repeat1,
  [297] = 4,
    ACTIONS(77), 1,
      aux_sym_reason_token1,
    ACTIONS(79), 1,
      sym__newline,
    STATE(110), 1,
      sym_form_body,
    STATE(51), 2,
      sym__data,
      aux_sym_body_repeat1,
  [311] = 4,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      aux_sym_reason_token1,
    ACTIONS(86), 1,
      sym__newline,
    STATE(20), 2,
      sym__data,
      aux_sym_body_repeat1,
  [325] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(89), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [339] = 4,
    ACTIONS(77), 1,
      aux_sym_reason_token1,
    ACTIONS(79), 1,
      sym__newline,
    STATE(99), 1,
      sym_form_body,
    STATE(51), 2,
      sym__data,
      aux_sym_body_repeat1,
  [353] = 4,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [367] = 4,
    ACTIONS(73), 1,
      aux_sym_reason_token1,
    ACTIONS(75), 1,
      sym__newline,
    STATE(99), 1,
      sym_html_body,
    STATE(53), 2,
      sym__data,
      aux_sym_body_repeat1,
  [381] = 4,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [395] = 4,
    ACTIONS(69), 1,
      aux_sym_reason_token1,
    ACTIONS(71), 1,
      sym__newline,
    STATE(99), 1,
      sym_css_body,
    STATE(55), 2,
      sym__data,
      aux_sym_body_repeat1,
  [409] = 4,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [423] = 4,
    ACTIONS(42), 1,
      aux_sym_reason_token1,
    ACTIONS(44), 1,
      sym__newline,
    STATE(99), 1,
      sym_javascript_body,
    STATE(57), 2,
      sym__data,
      aux_sym_body_repeat1,
  [437] = 4,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [451] = 4,
    ACTIONS(63), 1,
      aux_sym_reason_token1,
    ACTIONS(65), 1,
      sym__newline,
    STATE(99), 1,
      sym_json_body,
    STATE(59), 2,
      sym__data,
      aux_sym_body_repeat1,
  [465] = 4,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [479] = 4,
    ACTIONS(38), 1,
      aux_sym_reason_token1,
    ACTIONS(40), 1,
      sym__newline,
    STATE(99), 1,
      sym_xml_body,
    STATE(61), 2,
      sym__data,
      aux_sym_body_repeat1,
  [493] = 4,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [507] = 4,
    ACTIONS(55), 1,
      aux_sym_reason_token1,
    ACTIONS(57), 1,
      sym__newline,
    STATE(99), 1,
      sym_body,
    STATE(63), 2,
      sym__data,
      aux_sym_body_repeat1,
  [521] = 4,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [535] = 4,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym__newline,
    STATE(9), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [549] = 4,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym__newline,
    STATE(21), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [563] = 4,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      sym__newline,
    STATE(65), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [577] = 4,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      sym__newline,
    STATE(50), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [591] = 4,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym__newline,
    STATE(64), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [605] = 4,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      sym__newline,
    STATE(47), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [619] = 4,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      sym__newline,
    STATE(45), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [633] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(107), 1,
      sym__newline,
    STATE(23), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [647] = 3,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    STATE(44), 1,
      aux_sym__path,
    ACTIONS(109), 3,
      anon_sym_QMARK,
      sym_hash,
      sym__space,
  [659] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(114), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [673] = 5,
    ACTIONS(116), 1,
      anon_sym_QMARK,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      sym_hash,
    ACTIONS(122), 1,
      sym__space,
    STATE(44), 1,
      aux_sym__path,
  [689] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(124), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [703] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(126), 1,
      sym__newline,
    STATE(27), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [717] = 4,
    ACTIONS(55), 1,
      aux_sym_reason_token1,
    ACTIONS(57), 1,
      sym__newline,
    STATE(90), 1,
      sym_body,
    STATE(63), 2,
      sym__data,
      aux_sym_body_repeat1,
  [731] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(128), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [745] = 4,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      aux_sym_reason_token1,
    ACTIONS(134), 1,
      sym__newline,
    STATE(20), 2,
      sym__data,
      aux_sym_body_repeat1,
  [759] = 4,
    ACTIONS(77), 1,
      aux_sym_reason_token1,
    ACTIONS(79), 1,
      sym__newline,
    STATE(90), 1,
      sym_form_body,
    STATE(51), 2,
      sym__data,
      aux_sym_body_repeat1,
  [773] = 4,
    ACTIONS(132), 1,
      aux_sym_reason_token1,
    ACTIONS(134), 1,
      sym__newline,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym__data,
      aux_sym_body_repeat1,
  [787] = 4,
    ACTIONS(73), 1,
      aux_sym_reason_token1,
    ACTIONS(75), 1,
      sym__newline,
    STATE(90), 1,
      sym_html_body,
    STATE(53), 2,
      sym__data,
      aux_sym_body_repeat1,
  [801] = 4,
    ACTIONS(132), 1,
      aux_sym_reason_token1,
    ACTIONS(134), 1,
      sym__newline,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym__data,
      aux_sym_body_repeat1,
  [815] = 4,
    ACTIONS(69), 1,
      aux_sym_reason_token1,
    ACTIONS(71), 1,
      sym__newline,
    STATE(90), 1,
      sym_css_body,
    STATE(55), 2,
      sym__data,
      aux_sym_body_repeat1,
  [829] = 4,
    ACTIONS(132), 1,
      aux_sym_reason_token1,
    ACTIONS(134), 1,
      sym__newline,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym__data,
      aux_sym_body_repeat1,
  [843] = 4,
    ACTIONS(42), 1,
      aux_sym_reason_token1,
    ACTIONS(44), 1,
      sym__newline,
    STATE(90), 1,
      sym_javascript_body,
    STATE(57), 2,
      sym__data,
      aux_sym_body_repeat1,
  [857] = 4,
    ACTIONS(132), 1,
      aux_sym_reason_token1,
    ACTIONS(134), 1,
      sym__newline,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym__data,
      aux_sym_body_repeat1,
  [871] = 4,
    ACTIONS(63), 1,
      aux_sym_reason_token1,
    ACTIONS(65), 1,
      sym__newline,
    STATE(90), 1,
      sym_json_body,
    STATE(59), 2,
      sym__data,
      aux_sym_body_repeat1,
  [885] = 4,
    ACTIONS(132), 1,
      aux_sym_reason_token1,
    ACTIONS(134), 1,
      sym__newline,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym__data,
      aux_sym_body_repeat1,
  [899] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(146), 1,
      sym__newline,
    STATE(25), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [913] = 4,
    ACTIONS(132), 1,
      aux_sym_reason_token1,
    ACTIONS(134), 1,
      sym__newline,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym__data,
      aux_sym_body_repeat1,
  [927] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(150), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [941] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_header_name,
    ACTIONS(152), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [955] = 1,
    ACTIONS(109), 4,
      anon_sym_QMARK,
      anon_sym_SLASH,
      sym_hash,
      sym__space,
  [962] = 4,
    ACTIONS(154), 1,
      anon_sym_AMP,
    ACTIONS(156), 1,
      sym_hash,
    ACTIONS(158), 1,
      sym__space,
    STATE(71), 1,
      aux_sym__target_repeat1,
  [975] = 2,
    ACTIONS(162), 1,
      anon_sym_EQ,
    ACTIONS(160), 3,
      anon_sym_AMP,
      sym_hash,
      sym__space,
  [984] = 3,
    ACTIONS(164), 1,
      anon_sym_AMP,
    STATE(69), 1,
      aux_sym__target_repeat1,
    ACTIONS(167), 2,
      sym_hash,
      sym__space,
  [995] = 2,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(171), 2,
      sym__content_type_name,
      sym_header_name,
  [1004] = 4,
    ACTIONS(154), 1,
      anon_sym_AMP,
    ACTIONS(173), 1,
      sym_hash,
    ACTIONS(175), 1,
      sym__space,
    STATE(69), 1,
      aux_sym__target_repeat1,
  [1017] = 1,
    ACTIONS(177), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1023] = 1,
    ACTIONS(167), 3,
      anon_sym_AMP,
      sym_hash,
      sym__space,
  [1029] = 1,
    ACTIONS(179), 3,
      anon_sym_AMP,
      sym_hash,
      sym__space,
  [1035] = 1,
    ACTIONS(181), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1041] = 1,
    ACTIONS(183), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1047] = 1,
    ACTIONS(185), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1053] = 3,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    STATE(46), 1,
      aux_sym__path,
    STATE(119), 1,
      sym__target,
  [1063] = 1,
    ACTIONS(187), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1069] = 1,
    ACTIONS(189), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1075] = 1,
    ACTIONS(191), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1081] = 1,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [1087] = 2,
    ACTIONS(193), 1,
      sym_query_name,
    STATE(67), 1,
      sym_query_item,
  [1094] = 1,
    ACTIONS(195), 2,
      sym__content_type_name,
      sym_header_name,
  [1099] = 2,
    ACTIONS(193), 1,
      sym_query_name,
    STATE(73), 1,
      sym_query_item,
  [1106] = 2,
    ACTIONS(197), 1,
      aux_sym_reason_token1,
    STATE(109), 1,
      sym_reason,
  [1113] = 1,
    ACTIONS(199), 2,
      sym__content_type_name,
      sym_header_name,
  [1118] = 1,
    ACTIONS(201), 1,
      sym__newline,
  [1122] = 1,
    ACTIONS(203), 1,
      sym__newline,
  [1126] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
  [1130] = 1,
    ACTIONS(207), 1,
      sym__space,
  [1134] = 1,
    ACTIONS(209), 1,
      anon_sym_COLON,
  [1138] = 1,
    ACTIONS(211), 1,
      anon_sym_COLON,
  [1142] = 1,
    ACTIONS(213), 1,
      sym_status,
  [1146] = 1,
    ACTIONS(215), 1,
      sym_header_value,
  [1150] = 1,
    ACTIONS(217), 1,
      sym__newline,
  [1154] = 1,
    ACTIONS(219), 1,
      sym__space,
  [1158] = 1,
    ACTIONS(221), 1,
      sym__newline,
  [1162] = 1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
  [1166] = 1,
    ACTIONS(223), 1,
      sym__newline,
  [1170] = 1,
    ACTIONS(225), 1,
      sym__newline,
  [1174] = 1,
    ACTIONS(227), 1,
      sym__newline,
  [1178] = 1,
    ACTIONS(229), 1,
      sym__newline,
  [1182] = 1,
    ACTIONS(231), 1,
      sym__whitespace,
  [1186] = 1,
    ACTIONS(233), 1,
      sym__newline,
  [1190] = 1,
    ACTIONS(235), 1,
      sym__newline,
  [1194] = 1,
    ACTIONS(237), 1,
      sym__whitespace,
  [1198] = 1,
    ACTIONS(239), 1,
      sym__newline,
  [1202] = 1,
    ACTIONS(241), 1,
      sym__newline,
  [1206] = 1,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
  [1210] = 1,
    ACTIONS(245), 1,
      sym__newline,
  [1214] = 1,
    ACTIONS(247), 1,
      sym_query_value,
  [1218] = 1,
    ACTIONS(249), 1,
      sym__space,
  [1222] = 1,
    ACTIONS(175), 1,
      sym__space,
  [1226] = 1,
    ACTIONS(251), 1,
      sym_path_component,
  [1230] = 1,
    ACTIONS(253), 1,
      sym__space,
  [1234] = 1,
    ACTIONS(255), 1,
      sym_version,
  [1238] = 1,
    ACTIONS(257), 1,
      sym__space,
  [1242] = 1,
    ACTIONS(259), 1,
      sym__space,
  [1246] = 1,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
  [1250] = 1,
    ACTIONS(263), 1,
      sym_header_value,
  [1254] = 1,
    ACTIONS(265), 1,
      sym__newline,
  [1258] = 1,
    ACTIONS(267), 1,
      sym__space,
  [1262] = 1,
    ACTIONS(269), 1,
      sym__whitespace,
  [1266] = 1,
    ACTIONS(271), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 117,
  [SMALL_STATE(7)] = 131,
  [SMALL_STATE(8)] = 145,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 185,
  [SMALL_STATE(12)] = 199,
  [SMALL_STATE(13)] = 213,
  [SMALL_STATE(14)] = 227,
  [SMALL_STATE(15)] = 241,
  [SMALL_STATE(16)] = 255,
  [SMALL_STATE(17)] = 269,
  [SMALL_STATE(18)] = 283,
  [SMALL_STATE(19)] = 297,
  [SMALL_STATE(20)] = 311,
  [SMALL_STATE(21)] = 325,
  [SMALL_STATE(22)] = 339,
  [SMALL_STATE(23)] = 353,
  [SMALL_STATE(24)] = 367,
  [SMALL_STATE(25)] = 381,
  [SMALL_STATE(26)] = 395,
  [SMALL_STATE(27)] = 409,
  [SMALL_STATE(28)] = 423,
  [SMALL_STATE(29)] = 437,
  [SMALL_STATE(30)] = 451,
  [SMALL_STATE(31)] = 465,
  [SMALL_STATE(32)] = 479,
  [SMALL_STATE(33)] = 493,
  [SMALL_STATE(34)] = 507,
  [SMALL_STATE(35)] = 521,
  [SMALL_STATE(36)] = 535,
  [SMALL_STATE(37)] = 549,
  [SMALL_STATE(38)] = 563,
  [SMALL_STATE(39)] = 577,
  [SMALL_STATE(40)] = 591,
  [SMALL_STATE(41)] = 605,
  [SMALL_STATE(42)] = 619,
  [SMALL_STATE(43)] = 633,
  [SMALL_STATE(44)] = 647,
  [SMALL_STATE(45)] = 659,
  [SMALL_STATE(46)] = 673,
  [SMALL_STATE(47)] = 689,
  [SMALL_STATE(48)] = 703,
  [SMALL_STATE(49)] = 717,
  [SMALL_STATE(50)] = 731,
  [SMALL_STATE(51)] = 745,
  [SMALL_STATE(52)] = 759,
  [SMALL_STATE(53)] = 773,
  [SMALL_STATE(54)] = 787,
  [SMALL_STATE(55)] = 801,
  [SMALL_STATE(56)] = 815,
  [SMALL_STATE(57)] = 829,
  [SMALL_STATE(58)] = 843,
  [SMALL_STATE(59)] = 857,
  [SMALL_STATE(60)] = 871,
  [SMALL_STATE(61)] = 885,
  [SMALL_STATE(62)] = 899,
  [SMALL_STATE(63)] = 913,
  [SMALL_STATE(64)] = 927,
  [SMALL_STATE(65)] = 941,
  [SMALL_STATE(66)] = 955,
  [SMALL_STATE(67)] = 962,
  [SMALL_STATE(68)] = 975,
  [SMALL_STATE(69)] = 984,
  [SMALL_STATE(70)] = 995,
  [SMALL_STATE(71)] = 1004,
  [SMALL_STATE(72)] = 1017,
  [SMALL_STATE(73)] = 1023,
  [SMALL_STATE(74)] = 1029,
  [SMALL_STATE(75)] = 1035,
  [SMALL_STATE(76)] = 1041,
  [SMALL_STATE(77)] = 1047,
  [SMALL_STATE(78)] = 1053,
  [SMALL_STATE(79)] = 1063,
  [SMALL_STATE(80)] = 1069,
  [SMALL_STATE(81)] = 1075,
  [SMALL_STATE(82)] = 1081,
  [SMALL_STATE(83)] = 1087,
  [SMALL_STATE(84)] = 1094,
  [SMALL_STATE(85)] = 1099,
  [SMALL_STATE(86)] = 1106,
  [SMALL_STATE(87)] = 1113,
  [SMALL_STATE(88)] = 1118,
  [SMALL_STATE(89)] = 1122,
  [SMALL_STATE(90)] = 1126,
  [SMALL_STATE(91)] = 1130,
  [SMALL_STATE(92)] = 1134,
  [SMALL_STATE(93)] = 1138,
  [SMALL_STATE(94)] = 1142,
  [SMALL_STATE(95)] = 1146,
  [SMALL_STATE(96)] = 1150,
  [SMALL_STATE(97)] = 1154,
  [SMALL_STATE(98)] = 1158,
  [SMALL_STATE(99)] = 1162,
  [SMALL_STATE(100)] = 1166,
  [SMALL_STATE(101)] = 1170,
  [SMALL_STATE(102)] = 1174,
  [SMALL_STATE(103)] = 1178,
  [SMALL_STATE(104)] = 1182,
  [SMALL_STATE(105)] = 1186,
  [SMALL_STATE(106)] = 1190,
  [SMALL_STATE(107)] = 1194,
  [SMALL_STATE(108)] = 1198,
  [SMALL_STATE(109)] = 1202,
  [SMALL_STATE(110)] = 1206,
  [SMALL_STATE(111)] = 1210,
  [SMALL_STATE(112)] = 1214,
  [SMALL_STATE(113)] = 1218,
  [SMALL_STATE(114)] = 1222,
  [SMALL_STATE(115)] = 1226,
  [SMALL_STATE(116)] = 1230,
  [SMALL_STATE(117)] = 1234,
  [SMALL_STATE(118)] = 1238,
  [SMALL_STATE(119)] = 1242,
  [SMALL_STATE(120)] = 1246,
  [SMALL_STATE(121)] = 1250,
  [SMALL_STATE(122)] = 1254,
  [SMALL_STATE(123)] = 1258,
  [SMALL_STATE(124)] = 1262,
  [SMALL_STATE(125)] = 1266,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(20),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(20),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__path, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__path, 2), SHIFT_REPEAT(115),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_body, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_body, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_body, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_javascript_body, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_item, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_repeat1, 2), SHIFT_REPEAT(85),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_content, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_item, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_content, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__javascript_content, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_content, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_content, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_content, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__form_content, 5),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_line, 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__javascript_header_value, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_header_value, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [261] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
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
