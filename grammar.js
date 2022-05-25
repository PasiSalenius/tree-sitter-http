module.exports = grammar({
  name: 'http',

  extras: $ => [],

  rules: {
    source_file: $ => optional(
      choice(
        seq(
          $._start_line,
          repeat($.header),
          alias($._html_content, $.header),
          repeat($.header),
          optional(seq($._newline, $.html_body)),
        ),
        seq(
          $._start_line,
          repeat($.header),
          alias($._javascript_content, $.header),
          repeat($.header),
          optional(seq($._newline, $.javascript_body)),
        ),
        seq(
          $._start_line,
          repeat($.header),
          alias($._json_content, $.header),
          repeat($.header),
          optional(seq($._newline, $.json_body)),
        ),
        seq(
          $._start_line,
          repeat($.header),
          alias($._xml_content, $.header),
          repeat($.header),
          optional(seq($._newline, $.xml_body)),
        ),
        seq(
          $._start_line,
          repeat($.header),
          alias($._other_content, $.header),
          repeat($.header),
          optional(seq($._newline, $.body)),
        ),
        seq(
          $._start_line,
          repeat1($.header),
          optional(seq($._newline, $.body)),
        ),
      )
    ),

    _start_line: $ => choice($.request_line, $.status_line),

    request_line: $ =>
      seq($.method, $._space, $._target, $._space, $.version, $._newline),

    method: _ => choice('GET','PUT','ACL','HEAD','POST','COPY','LOCK','MOVE','BIND','LINK','PATCH','TRACE','MKCOL','MERGE','PURGE','NOTIFY','SEARCH','UNLOCK','REBIND','UNBIND','REPORT','DELETE','UNLINK','CONNECT','MSEARCH','OPTIONS','PROPFIND','CHECKOUT','PROPPATCH','SUBSCRIBE','MKCALENDAR','MKACTIVITY','UNSUBSCRIBE','SOURCE'),

    _target: $ =>
      seq($._path, optional(seq('?', $.query_item, repeat(seq('&', $.query_item)))), optional($.hash)),

    _path: $ =>
      repeat1(seq('/', $.path_component)),

    path_component: _ => /[^ /?#]*/,

    query_item: $ =>
      seq($.query_name, optional(seq('=', $.query_value))),

    query_name: _ => /[^ =&#]+/,
    query_value: _ => /[^ &#]*/,

    hash: _ => /#\w*/,

    version: _ => /HTTP\/\d\.\d/,

    status_line: $ =>
      seq($.version, $._space, $.status, $._space, $.reason, $._newline),

    status: _ => /\d+/,

    reason: _ => /.+/,

    _html_content: $ =>
      seq(alias($._content_type_name, $.header_name), ':', $._whitespace, alias($._html_header_value, $.header_value), $._newline),

    _javascript_content: $ =>
      seq(alias($._content_type_name, $.header_name), ':', $._whitespace, alias($._javascript_header_value, $.header_value), $._newline),

    _json_content: $ =>
      seq(alias($._content_type_name, $.header_name), ':', $._whitespace, alias($._json_header_value, $.header_value), $._newline),

    _xml_content: $ =>
      seq(alias($._content_type_name, $.header_name), ':', $._whitespace, alias($._xml_header_value, $.header_value), $._newline),

    _other_content: $ =>
      seq(alias($._content_type_name, $.header_name), ':', $._whitespace, $.header_value, $._newline),

    header: $ =>
      seq($.header_name, ':', $._whitespace, $.header_value, $._newline),

    _content_type_name: _ => /[Cc]ontent-[Tt]ype/,

    _html_header_value: _ => /text\/html.*/,
    _javascript_header_value: _ => choice(/application\/javascript.*/, /text\/javascript.*/),
    _json_header_value: _ => /application\/json.*/,
    _xml_header_value: _ => choice(/application\/xml.*/, /application\/xhtml\+xml.*/),

    header_name: _ => /[A-Za-z-_]+/,
    header_value: _ => /.*/,

    body: $ => repeat1(seq($._data, repeat($._newline))),
    html_body: $ => repeat1(seq($._data, repeat($._newline))),
    javascript_body: $ => repeat1(seq($._data, repeat($._newline))),
    json_body: $ => repeat1(seq($._data, repeat($._newline))),
    xml_body: $ => repeat1(seq($._data, repeat($._newline))),

    _whitespace: _ => /\s+/,
    _space: _ => ' ',
    _newline: _ => /\r?\n/,
    _data: _ => /.+/,
  }
});
