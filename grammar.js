/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'ld',
  // TODO: Add comments.
  rules: {
    script_file: $ => repeat($.ifile_p1),

    extern_name_list: $ => choice(
      $.NAME,
      seq($.extern_name_list, $.NAME),
      seq($.extern_name_list, ",", $.NAME),
    ),

    filename: $ => $.NAME,
    ifile_p1: $ => choice(
      $.memory,
      $.sections,
      $.phdrs,
      $.startup,
      $.high_level_library,
      $.low_level_library,
      $.floating_point_support,
      $.statement_anywhere,
      $.version,
      ';',
      seq("TARGET", '(', $.NAME, ')'),
      seq("SEARCH_DIR", '(', $.filename, ')'),
      seq("OUTPUT", '(', $.filename, ')'),
      seq("OUTPUT_FORMAT", '(', $.NAME, ')'),
      seq("OUTPUT_FORMAT", '(', $.NAME, ',', $.NAME, ',', $.NAME, ')'),
      seq("OUTPUT_ARCH", '(', $.NAME, ')'),
      "FORCE_COMMON_ALLOCATION",
      "FORCE_GROUP_ALLOCATION",
      "INHIBIT_COMMON_ALLOCATION",
      seq("INPUT", '(', $.input_list, ')'),
      seq("GROUP", '(', $.input_list, ')'),
      seq("MAP", '(', $.filename, ')'),
      seq("INCLUDE", $.filename),
      seq("NOCROSSREFS", '(', optional($.nocrossref_list), ')'),
      seq("NOCROSSREFS_TO", '(', optional($.nocrossref_list), ')'),
      seq("EXTERN", '(', $.extern_name_list, ')'),
      seq("INSERT", "AFTER", $.NAME),
      seq("INSERT", "BEFORE", $.NAME),
      seq("REGION_ALIAS", '(', $.NAME, ',', $.NAME, ')'),
      seq("LD_FEATURE", '(', $.NAME, ')'),
    ),
    input_list: $ => $.input_list1,
    input_list1: $ => choice(
      $.NAME,
      seq($.input_list1, ",", $.NAME),
      seq($.input_list1, $.NAME),
      $.LNAME,
      seq($.input_list1, ",", $.LNAME),
      seq($.input_list1, $.LNAME),
      seq("AS_NEEDED", "(", $.input_list1, ")"),
      seq($.input_list1, ",", "AS_NEEDED", "(", $.input_list1, ")"),
      seq($.input_list1, "AS_NEEDED", "(", $.input_list1, ")"),
    ),
    sections: $ => seq("SECTIONS", "{", $.sec_or_group_p1, "}"),
    sec_or_group_p1: $ => choice(
      seq($.sec_or_group_p1, $.section),
      seq($.sec_or_group_p1, $.statement_anywhere),
    ),
    statement_anywhere: $ => choice(
      seq("ENTRY", "(", $.NAME, ")"),
      seq($.assignment, $.separator),
      seq("ASSERT", '(', $.exp, ',', $.NAME, ')'),
    ),
    wildcard_name: _ => /[_a-zA-Z0-9/.\\$~\-+:\[\],=?*^!]+/,
    section_name_spec: $ => choice(
      $.wildcard_maybe_reverse,
      seq(choice("SORT_BY_NAME", "SORT"), '(', $.wildcard_maybe_reverse, ')'),
      seq("SORT_BY_ALIGNMENT", '(', $.wildcard_maybe_reverse, ')'),
      seq("SORT_NONE", '(', $.wildcard_maybe_reverse, ')'),
      seq(choice("SORT_BY_NAME", "SORT"), '(', "SORT_BY_ALIGNMENT", '(', $.wildcard_maybe_reverse, ')', ')'),
      seq(choice("SORT_BY_NAME", "SORT"), '(', choice("SORT_BY_NAME", "SORT"), '(', $.wildcard_maybe_reverse, ')', ')'),
      seq("SORT_BY_ALIGNMENT", '(', choice("SORT_BY_NAME", "SORT"), '(', $.wildcard_maybe_reverse, ')', ')'),
      seq("SORT_BY_ALIGNMENT", '(', "SORT_BY_ALIGNMENT", '(', $.wildcard_maybe_reverse, ')', ')'),
      seq("SORT_BY_INIT_PRIORITY", '(', $.wildcard_maybe_reverse, ')'),
      seq("REVERSE", '(', choice("SORT_BY_NAME", "SORT"), '(', $.wildcard_maybe_exclude, ')', ')'),
      seq("REVERSE", '(', "SORT_BY_INIT_PRIORITY", '(', $.wildcard_maybe_exclude, ')', ')'),
    ),
    wildcard_maybe_exclude: $ => choice(
      $.wildcard_name,
      seq("EXCLUDE_FILE", '(', $.exclude_name_list, ')', $.wildcard_name),
    ),
    wildcard_maybe_reverse: $ => choice($.wildcard_maybe_exclude, seq("REVERSE", '(', $.wildcard_maybe_exclude, ')')),
    filename_spec: $ => choice(
      $.wildcard_maybe_reverse,
      seq(choice("SORT_BY_NAME", "SORT"), '(', $.wildcard_maybe_reverse, ')'),
      seq("SORT_NONE", '(', $.wildcard_maybe_reverse, ')'),
      seq("REVERSE", '(', choice("SORT_BY_NAME", "SORT"), '(', $.wildcard_maybe_exclude, ')', ')'),
    ),
    sect_flag_list: $ => choice(
      $.NAME,
      seq($.sect_flag_list, '&', $.NAME),
    ),
    sect_flags: $ => seq("INPUT_SECTION_FLAGS", '(', $.sect_flag_list, ')'),
    exclude_name_list: $ => choice(
      seq($.exclude_name_list, $.wildcard_name),
      $.wildcard_name,
    ),
    section_name_list: $ => choice(
      seq($.section_name_list, optional(","), $.section_name_spec),
      $.section_name_spec,
    ),
    input_section_spec_no_keep: $ => choice(
      $.NAME,
      seq($.sect_flags, $.NAME),
      seq('[', $.section_name_list, ']'),
      seq($.sect_flags, '[', $.section_name_list, ']'),
      seq($.filename_spec, '(', $.section_name_list, ')'),
      seq($.sect_flags, $.filename_spec, '(', $.section_name_list, ')'),
    ),
    input_section_spec: $ => choice(
      $.input_section_spec_no_keep,
      seq("KEEP", "(", $.input_section_spec_no_keep, ")"),
    ),
    statement: $ => choice(
      ";",
      seq($.assignment, $.separator),
      "CREATE_OBJECT_SYMBOLS",
      "CONSTRUCTORS",
      seq(choice("SORT_BY_NAME", "SORT"), '(', "CONSTRUCTORS", ')'),
      $.input_section_spec,
      seq($.length, '(', $.mustbe_exp, ')'),
      seq("ASCIZ", $.NAME),
      seq("FILL", '(', $.fill_exp, ')'),
      "LINKER_VERSION",
      seq("ASSERT", '(', $.exp, ',', $.NAME, ')', $.separator),
      seq("INCLUDE", $.filename),
    ),
    statement_list: $ => choice(
      seq($.statement_list, $.statement),
      $.statement,
    ),
    length: _ => choice("QUAD", "SQUAD", "LONG", "SHORT", "BYTE"),
    fill_exp: $ => $.mustbe_exp,
    assign_op: _ => choice("+=", "-=", "*=", "/=", "<<=", ">>=", "&=", "|=", "^="),
    separator: _ => choice(";", ","),
    assignment: $ => choice(
      seq($.NAME, '=', $.mustbe_exp),
      seq($.NAME, $.assign_op, $.mustbe_exp),
      seq("HIDDEN", '(', $.NAME, '=', $.mustbe_exp, ')'),
      seq("PROVIDE", '(', $.NAME, '=', $.mustbe_exp, ')'),
      seq("PROVIDE_HIDDEN", '(', $.NAME, '=', $.mustbe_exp, ')'),
    ),
    memory: $ => seq("MEMORY", "{", optional($.memory_spec_list), "}"),
    memory_spec_list: $ => choice(
      seq($.memory_spec_list, optional(","), $.memory_spec),
      $.memory_spec
    ),
    memory_spec: $ => choice(
      seq($.NAME, optional($.attributes), ":", $.origin_spec, optional(","), $.length_spec),
      seq("INCLUDE", $.filename),
    ),
    origin_spec: $ => seq("ORIGIN", "=", $.mustbe_exp),
    length_spec: $ => seq(choice("LENGTH", "l", "len"), "=", $.mustbe_exp),
    attributes: $ => seq("(", $.attributes_list, ")"),
    attributes_list: $ => choice($.attributes_string, seq($.attributes_list, $.attributes_string)),
    attributes_string: $ => choice($.NAME, seq("!", $.NAME)),
    startup: $ => seq("STARTUP", "(", $.filename, ")"),
    high_level_library: $ => choice(
      seq("HLL", "(", $.high_level_library_NAME_list, ")"),
      seq("HLL", "(", ")"),
    ),
    high_level_library_NAME_list: $ => choice(
      seq($.high_level_library_NAME_list, optional(","), $.filename),
      $.filename,
    ),
    low_level_library: $ => seq("SYSLIB", '(', $.low_level_library_NAME_list, ')'),
    low_level_library_NAME_list: $ => seq($.low_level_library_NAME_list, optional(","), $.filename),
    floating_point_support: _ => choice("FLOAT", "NOFLOAT"),
    nocrossref_list: $ => seq(sep1($.NAME, optional(",")), optional(",")),
    paren_script_name: $ => seq("(", $.NAME, ")"),
    mustbe_exp: $ => $.exp,
    exp: $ => prec.left(choice(
      seq("-", $.exp),
      seq("(", $.exp, ")"),
      seq("NEXT", "(", $.exp, ")"),
      seq("!", $.exp),
      seq("+", $.exp),
      seq("~", $.exp),
      seq($.exp, "*", $.exp),
      seq($.exp, "/", $.exp),
      seq($.exp, "%", $.exp),
      seq($.exp, "+", $.exp),
      seq($.exp, "-", $.exp),
      seq($.exp, "<<", $.exp),
      seq($.exp, ">>", $.exp),
      seq($.exp, "==", $.exp),
      seq($.exp, "!=", $.exp),
      seq($.exp, "<=", $.exp),
      seq($.exp, ">=", $.exp),
      seq($.exp, "<", $.exp),
      seq($.exp, ">", $.exp),
      seq($.exp, "&", $.exp),
      seq($.exp, "^", $.exp),
      seq($.exp, "|", $.exp),
      seq($.exp, "?", $.exp, ":", $.exp),
      seq($.exp, "&&", $.exp),
      seq($.exp, "||", $.exp),
      seq("DEFINED", "(", $.NAME, ")"),
      $.INT,
      "SIZEOF_HEADERS",
      seq("ALIGNOF", $.paren_script_name),
      seq("SIZEOF", $.paren_script_name),
      seq("ADDR", $.paren_script_name),
      seq("LOADADDR", $.paren_script_name),
      seq("CONSTANT", '(', $.NAME, ')'),
      seq("ABSOLUTE", '(', $.exp, ')'),
      seq("ALIGN", '(', $.exp, ')'),
      seq("ALIGN", '(', $.exp, ",", $.exp, ')'),
      seq("DATA_SEGMENT_ALIGN", '(', $.exp, ',', $.exp, ')'),
      seq("DATA_SEGMENT_RELRO_END", '(', $.exp, ',', $.exp, ')'),
      seq("DATA_SEGMENT_END", '(', $.exp, ')'),
      seq("SEGMENT_START", "(", $.NAME, ',', $.exp, ')'),
      seq("BLOCK", '(', $.exp, ')'),
      $.NAME,
      seq("MAX", '(', $.exp, ',', $.exp, ')'),
      seq("MIN", '(', $.exp, ',', $.exp, ')'),
      seq("ASSERT", '(', $.exp, ',', $.NAME, ')'),
      seq("ORIGIN", $.paren_script_name),
      seq("LENGTH", $.paren_script_name),
      seq("LOG2CEIL", '(', $.exp, ')'),
    )),
    memspec_at: $ => seq("AT", ">", $.NAME),
    at: $ => seq("AT", '(', $.exp, ')'),
    align: $ => seq("ALIGN", '(', $.exp, ')'),
    subalign: $ => seq("SUBALIGN", '(', $.exp, ')'),
    sect_constraint: _ => choice("ONLY_IF_RO", "ONLY_IF_RW", "SPECIAL"),
    section: $ => choice(
      seq($.NAME, $.opt_exp_with_type, optional($.at), optional($.align), optional("ALIGN_WITH_INPUT"), optional($.subalign), optional($.sect_constraint), "{", optional($.statement_list), "}", optional($.memspec), optional($.memspec_at), optional($.phdr_opt), optional(seq("=", $.fill_exp)), optional(",")),
      seq("OVERLAY", $.opt_exp_without_type, optional("NOCROSSREFS"), optional($.at), optional($.subalign), "{", optional($.overlay_section), "}", optional($.memspec), optional($.memspec_at), optional($.phdr_opt), optional(seq("=", $.fill_exp)), optional(",")),
      seq("GROUP", $.opt_exp_with_type, '{', $.sec_or_group_p1, '}'),
      seq("INCLUDE", $.filename),
    ),
    type: $ => choice(
      "NOLOAD",
      "DSECT",
      "COPY",
      "INFO",
      "OVERLAY",
      seq("READONLY", '(', "TYPE", '=', $.exp, ')'),
      "READONLY",
      seq("TYPE", '=', $.exp),
    ),
    atype: $ => choice(seq("(", $.type, ")"), seq("(", ")")),
    opt_exp_with_type: $ => choice(
      seq($.exp, optional($.atype), ':'),
      seq(optional($.atype), ':'),
      seq("BIND", '(', $.exp, ')', optional($.atype), ':'),
      seq("BIND", '(', $.exp, ')', "BLOCK", '(', $.exp, ')', optional($.atype), ':'),
    ),
    opt_exp_without_type: $ => choice(seq($.exp, ":"), ":"),
    memspec: $ => seq(">", $.NAME),
    phdr_opt: $ => seq(optional($.phdr_opt), ':', $.NAME),
    phdrs: $ => seq("PHDRS", "{", optional($.phdr_list), "}"),
    phdr_list: $ => repeat1($.phdr),
    phdr: $ => seq($.NAME, $.phdr_type, optional($.phdr_qualifiers), ';'),
    phdr_type: $ => $.exp,
    phdr_qualifiers: $ => choice(
      seq($.NAME, optional($.phdr_val), $.phdr_qualifiers),
      seq("AT", '(', $.exp, ')', $.phdr_qualifiers),
    ),
    phdr_val: $ => seq('(', $.exp, ')'),
    overlay_section: $ => repeat1(seq(
      $.NAME,
      '{',
      optional($.statement_list),
      '}',
      optional($.phdr_opt),
      optional(seq("=", $.fill_exp)),
      optional(",")
    )),
    version: $ => seq("VERSION", '{', $.vers_nodes, '}'),
    vers_nodes: $ => choice($.vers_node, seq($.vers_nodes, $.vers_node)),
    vers_node: $ => choice(
      seq('{', optional($.vers_tag), '}', ';'),
      seq($.VERS_TAG, '{', optional($.vers_tag), '}', ';'),
      seq($.VERS_TAG, '{', optional($.vers_tag), '}', $.verdep, ';'),
    ),
    verdep: $ => choice($.VERS_TAG, seq($.verdep, $.VERS_TAG)),
    vers_tag: $ => choice(
      seq($.vers_defns, ';'),
      seq("global", ':', $.vers_defns, ';'),
      seq("local", ':', $.vers_defns, ';'),
      seq("global", ':', $.vers_defns, ';', "local", ':', $.vers_defns, ';'),
    ),
    vers_defns: $ => choice(
      $.VERS_IDENTIFIER,
      $.NAME,
      seq($.vers_defns, ';', $.VERS_IDENTIFIER),
      seq($.vers_defns, ';', $.NAME),
      seq($.vers_defns, ';', "extern", $.NAME, '{', $.vers_defns, optional(";"), '}'),
      seq("extern", $.NAME, '{', $.vers_defns, optional(";"), '}'),
      "global",
      seq($.vers_defns, ';', "global"),
      "local",
      seq($.vers_defns, ';', "local"),
      "extern",
      seq($.vers_defns, ';', "extern"),
    ),

    NAME: _ => choice(
      /=?[_a-zA-Z/.\\$~][_a-zA-Z0-9/.\\$~\-+:\[\],=]*/,
      /[_a-zA-Z.\\$][_a-zA-Z0-9/.\\$~]*/,
      "/DISCARD/",
      /"[^"]*"/
    ),
    LNAME: _ => /-l[_a-zA-Z0-9/.\\$~\-+:\[\],=]+/,
    INT: _ => choice(
      /\$[0-9A-Fa-f]+/,
      /[0-9A-Fa-f]+[HhXxBbOoDd]/,
      /((\$|0[xX])[0-9A-Fa-f]+|[0-9]+)[MKmk]?/,
    ),
    VERS_TAG: _ => /[.$_a-zA-Z][._a-zA-Z0-9]*/,
    VERS_IDENTIFIER: _ => /[*?.$_a-zA-Z\[\]\-!^\\]([*?.$_a-zA-Z0-9\[\]\-!^\\]|::)*/,
  }
})

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 * @param {Rule} sep
 *
 * @return {SeqRule}
 *
 */
function sep1(rule, sep) {
  return seq(rule, repeat(seq(sep, rule)));
}
