module.exports = grammar({
  name: 'http',

  extras: $ => [],

  rules: {
    source_file: $ => optional(
      choice(
        seq(
          $._start_line,
          repeat($.header),
          alias($._form_content, $.header),
          repeat($.header),
          optional(seq($._newline, $.form_body)),
        ),
        seq(
          $._start_line,
          repeat($.header),
          alias($._multipart_content, $.header),
          repeat($.header),
          optional(seq($._newline, $.multipart_body)),
        ),
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
          alias($._css_content, $.header),
          repeat($.header),
          optional(seq($._newline, $.css_body)),
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
      seq($.method, ' ', $._target, ' ', $.version, $._newline),

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
      seq($.version, ' ', $.status, ' ', $.reason, $._newline),

    status: _ => /\d+/,

    reason: _ => /.+/,

    _form_content: $ =>
      seq(alias($._content_type_name, $.header_name), ':', $._whitespace, alias($._form_header_value, $.header_value), $._newline),

    _multipart_content: $ =>
      seq(alias($._content_type_name, $.header_name), ':', $._whitespace, alias($._multipart_header_value, $.header_value), $._newline),

    _html_content: $ =>
      seq(alias($._content_type_name, $.header_name), ':', $._whitespace, alias($._html_header_value, $.header_value), $._newline),

    _css_content: $ =>
      seq(alias($._content_type_name, $.header_name), ':', $._whitespace, alias($._css_header_value, $.header_value), $._newline),

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

    _form_header_value: _ => /application\/x-www-form-urlencoded.*/,
    _multipart_header_value: _ => /multipart\/.*/,
    _html_header_value: _ => /text\/html.*/,
    _css_header_value: _ => /text\/css.*/,
    _javascript_header_value: _ => choice(/application\/javascript.*/, /application\/x-javascript.*/, /text\/javascript.*/),
    _json_header_value: _ => choice(/application\/json.*/, /application\/x-amz-json-.*/),
    _xml_header_value: _ => choice(/text\/xml.*/, /application\/xml.*/, /application\/xhtml\+xml.*/, /image\/svg\+xml.*/),

    header_name: _ => /[A-Za-z0-9-_]+/,
    header_value: _ => /.*/,

    body: $ => repeat1(choice($._data, $._newline)),
    form_body: $ => repeat1(choice($._data, $._newline)),
    multipart_body: $ => repeat1(choice($._data, $._newline)),
    html_body: $ => repeat1(choice($._data, $._newline)),
    css_body: $ => repeat1(choice($._data, $._newline)),
    javascript_body: $ => repeat1(choice($._data, $._newline)),
    json_body: $ => repeat1(choice($._data, $._newline)),
    xml_body: $ => repeat1(choice($._data, $._newline)),

    _whitespace: _ => /[ \t]+/,
    _newline: _ => choice('\n', '\r', '\r\n', '\0'),
    _data: _ => /.+/,
  }
});
