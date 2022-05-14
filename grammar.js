module.exports = grammar({
  name: 'http',

  rules: {
    source_file: $ => optional($._definition),

    _definition: $ =>
      seq(
        $.start_line,
        $.newline,
        repeat($.header)
      ),

    start_line: $ => choice($.request_line, $.status_line),

    request_line: $ =>
      seq(
        field('method', $.method),
        ' ',
        field('target', $.target),
        ' ',
        field('version', $.version)
      ),

    method: _ => choice('GET','PUT','ACL','HEAD','POST','COPY','LOCK','MOVE','BIND','LINK','PATCH','TRACE','MKCOL','MERGE','PURGE','NOTIFY','SEARCH','UNLOCK','REBIND','UNBIND','REPORT','DELETE','UNLINK','CONNECT','MSEARCH','OPTIONS','PROPFIND','CHECKOUT','PROPPATCH','SUBSCRIBE','MKCALENDAR','MKACTIVITY','UNSUBSCRIBE','SOURCE'),

    target: $ =>
      seq(
        field('path', $.path),
        optional(seq('?', repeat(seq($.query_item, optional('&'))))),
        optional($.hash)
      ),

    path: _ => /[^ ?#]+/,

    query_item: $ =>
      seq(
        field('query_name', $.query_name),
        '=',
        field('query_value', $.query_value)
      ),

    query_name: _ => /[^ =&#]+/,

    query_value: _ => /[^ =&#]+/,

    hash: _ => /#[^ ]*/,

    version: _ => /HTTP\/\d\.\d/,

    status_line: $ =>
      seq(
        field('version', $.version),
        ' ',
        field('status', $.status),
        ' ',
        field('reason', $.reason)
      ),

    status: _ => /\d+/,

    reason: _ => /[^\n]+/,

    header: $ =>
      seq(
        field('header_name', $.header_name),
        ':',
        repeat1(' '),
        field('header_value', $.header_value),
        $.newline
      ),

    header_name: _ => /[^:]+/,

    header_value: _ => /[^\n]+/,

    newline: _ => choice('\n', '\r\n'),
  }
});
