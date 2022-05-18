module.exports = grammar({
  name: 'http',

  extras: $ => [],

  rules: {
    source_file: $ => optional(
      seq(
        choice($.request_line, $.status_line),
        repeat1($.header),
        optional(seq($._newline, field('body', $.body))),
      )
    ),

    request_line: $ =>
      seq(field('method', $.method), $._space, field('target', $.target), $._space, field('version', $.version), $._newline),

    method: _ => choice('GET','PUT','ACL','HEAD','POST','COPY','LOCK','MOVE','BIND','LINK','PATCH','TRACE','MKCOL','MERGE','PURGE','NOTIFY','SEARCH','UNLOCK','REBIND','UNBIND','REPORT','DELETE','UNLINK','CONNECT','MSEARCH','OPTIONS','PROPFIND','CHECKOUT','PROPPATCH','SUBSCRIBE','MKCALENDAR','MKACTIVITY','UNSUBSCRIBE','SOURCE'),

    target: $ =>
      seq(
        field('path', $.path),
        optional(seq('?', $.query_item, repeat(seq('&', $.query_item)))),
        optional(field('hash', $.hash)),
      ),

    path: _ => /[^ ?#]+/,

    query_item: $ =>
      seq(
        field('query_name', $.query_name),
        optional(seq('=', field('query_value', $.query_value))),
      ),

    query_name: _ => /[^ =&#]+/,

    query_value: _ => /[^ &#]+/,

    hash: _ => /#\w*/,

    version: _ => /HTTP\/\d\.\d/,

    status_line: $ =>
      seq(field('version', $.version), $._space, field('status', $.status), $._space, field('reason', $.reason), $._newline),

    status: _ => /\d+/,

    reason: _ => /.+/,

    header: $ =>
      seq(
        field('header_name', seq($.header_name, ':')),
        $._whitespace,
        field('header_value', $.header_value),
        $._newline,
      ),

    header_name: _ => /[A-Za-z-_]+/,

    header_value: _ => /.+/,

    body: $ => repeat1(seq($._data, repeat($._newline))),

    _whitespace: _ => /\s+/,

    _space: _ => ' ',

    _newline: _ => /\r?\n/,

    _data: _ => /.+/,
  }
});
