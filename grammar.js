module.exports = grammar({
  name: 'http',

  rules: {
    document: $ => optional(
      seq(
        choice($.request_line, $.status_line),
        repeat1(seq($.header, '\n')),
        optional(seq('\n', $.body)),
      )
    ),

    request_line: $ =>
      seq(field('method', $.method), field('target', $.target), field('version', $.version)),

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
      seq(field('version', $.version), field('status', $.status), field('reason', $.reason)),

    status: _ => /\d+/,

    reason: _ => /.+/,

    header: $ =>
      seq(
        field('header_name', seq($.header_name, ':')),
        field('header_value', $.header_value),
      ),

    header_name: _ => /[A-Za-z-_]+/,

    header_value: _ => /.+/,

    body: $ =>
      field('body', /.+/),
  }
});
