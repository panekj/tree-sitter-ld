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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 672
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 232
#define ALIAS_COUNT 0
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 16
#define PRODUCTION_ID_COUNT 1

enum {
  sym_NAME = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_TARGET = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_SEARCH_DIR = 7,
  anon_sym_OUTPUT = 8,
  anon_sym_OUTPUT_FORMAT = 9,
  anon_sym_OUTPUT_ARCH = 10,
  anon_sym_FORCE_COMMON_ALLOCATION = 11,
  anon_sym_FORCE_GROUP_ALLOCATION = 12,
  anon_sym_INHIBIT_COMMON_ALLOCATION = 13,
  anon_sym_INPUT = 14,
  anon_sym_GROUP = 15,
  anon_sym_MAP = 16,
  anon_sym_INCLUDE = 17,
  anon_sym_NOCROSSREFS = 18,
  anon_sym_NOCROSSREFS_TO = 19,
  anon_sym_EXTERN = 20,
  anon_sym_INSERT = 21,
  anon_sym_AFTER = 22,
  anon_sym_BEFORE = 23,
  anon_sym_REGION_ALIAS = 24,
  anon_sym_LD_FEATURE = 25,
  anon_sym_AS_NEEDED = 26,
  anon_sym_SECTIONS = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  anon_sym_ENTRY = 30,
  anon_sym_ASSERT = 31,
  anon_sym_SORT_BY_NAME = 32,
  anon_sym_SORT = 33,
  anon_sym_SORT_BY_ALIGNMENT = 34,
  anon_sym_SORT_NONE = 35,
  anon_sym_SORT_BY_INIT_PRIORITY = 36,
  anon_sym_REVERSE = 37,
  anon_sym_EXCLUDE_FILE = 38,
  anon_sym_AMP = 39,
  anon_sym_INPUT_SECTION_FLAGS = 40,
  anon_sym_LBRACK = 41,
  anon_sym_RBRACK = 42,
  anon_sym_KEEP = 43,
  anon_sym_CREATE_OBJECT_SYMBOLS = 44,
  anon_sym_CONSTRUCTORS = 45,
  anon_sym_ASCIZ = 46,
  anon_sym_FILL = 47,
  anon_sym_LINKER_VERSION = 48,
  anon_sym_QUAD = 49,
  anon_sym_SQUAD = 50,
  anon_sym_LONG = 51,
  anon_sym_SHORT = 52,
  anon_sym_BYTE = 53,
  anon_sym_PLUS_EQ = 54,
  anon_sym_DASH_EQ = 55,
  anon_sym_STAR_EQ = 56,
  anon_sym_SLASH_EQ = 57,
  anon_sym_LT_LT_EQ = 58,
  anon_sym_GT_GT_EQ = 59,
  anon_sym_AMP_EQ = 60,
  anon_sym_PIPE_EQ = 61,
  anon_sym_CARET_EQ = 62,
  anon_sym_EQ = 63,
  anon_sym_HIDDEN = 64,
  anon_sym_PROVIDE = 65,
  anon_sym_PROVIDE_HIDDEN = 66,
  anon_sym_MEMORY = 67,
  anon_sym_COLON = 68,
  anon_sym_ORIGIN = 69,
  anon_sym_o = 70,
  anon_sym_org = 71,
  anon_sym_LENGTH = 72,
  anon_sym_l = 73,
  anon_sym_len = 74,
  anon_sym_BANG = 75,
  anon_sym_STARTUP = 76,
  anon_sym_HLL = 77,
  anon_sym_SYSLIB = 78,
  anon_sym_FLOAT = 79,
  anon_sym_NOFLOAT = 80,
  anon_sym_DASH = 81,
  anon_sym_PLUS = 82,
  anon_sym_TILDE = 83,
  anon_sym_NEXT = 84,
  anon_sym_ABSOLUTE = 85,
  anon_sym_DATA_SEGMENT_END = 86,
  anon_sym_BLOCK = 87,
  anon_sym_LOG2CEIL = 88,
  anon_sym_STAR = 89,
  anon_sym_SLASH = 90,
  anon_sym_PERCENT = 91,
  anon_sym_LT_LT = 92,
  anon_sym_GT_GT = 93,
  anon_sym_EQ_EQ = 94,
  anon_sym_BANG_EQ = 95,
  anon_sym_LT_EQ = 96,
  anon_sym_GT_EQ = 97,
  anon_sym_LT = 98,
  anon_sym_GT = 99,
  anon_sym_CARET = 100,
  anon_sym_PIPE = 101,
  anon_sym_AMP_AMP = 102,
  anon_sym_PIPE_PIPE = 103,
  anon_sym_QMARK = 104,
  anon_sym_DEFINED = 105,
  anon_sym_CONSTANT = 106,
  anon_sym_SIZEOF_HEADERS = 107,
  anon_sym_ALIGNOF = 108,
  anon_sym_SIZEOF = 109,
  anon_sym_ADDR = 110,
  anon_sym_LOADADDR = 111,
  anon_sym_ALIGN = 112,
  anon_sym_DATA_SEGMENT_ALIGN = 113,
  anon_sym_DATA_SEGMENT_RELRO_END = 114,
  anon_sym_MAX = 115,
  anon_sym_MIN = 116,
  anon_sym_SEGMENT_START = 117,
  anon_sym_AT = 118,
  anon_sym_SUBALIGN = 119,
  anon_sym_ONLY_IF_RO = 120,
  anon_sym_ONLY_IF_RW = 121,
  anon_sym_SPECIAL = 122,
  anon_sym_ALIGN_WITH_INPUT = 123,
  anon_sym_OVERLAY = 124,
  anon_sym_NOLOAD = 125,
  anon_sym_DSECT = 126,
  anon_sym_COPY = 127,
  anon_sym_INFO = 128,
  anon_sym_READONLY = 129,
  anon_sym_TYPE = 130,
  anon_sym_BIND = 131,
  anon_sym_PHDRS = 132,
  anon_sym_VERSION = 133,
  anon_sym_global = 134,
  anon_sym_local = 135,
  anon_sym_extern = 136,
  sym_LNAME = 137,
  sym_wildcard_name = 138,
  aux_sym_INT_token1 = 139,
  aux_sym_INT_token2 = 140,
  aux_sym_INT_token3 = 141,
  sym_VERS_TAG = 142,
  sym_VERS_IDENTIFIER = 143,
  sym_comment = 144,
  sym_script_file = 145,
  sym_extern_name_list = 146,
  sym_filename = 147,
  sym_ifile_p1 = 148,
  sym_input_list = 149,
  sym_sections = 150,
  sym_sec_or_group_p1 = 151,
  sym_statement_anywhere = 152,
  sym_section_name_spec = 153,
  sym_wildcard_maybe_exclude = 154,
  sym_wildcard_maybe_reverse = 155,
  sym_filename_spec = 156,
  sym_sect_flag_list = 157,
  sym_sect_flags = 158,
  sym_exclude_name_list = 159,
  sym_section_name_list = 160,
  sym_input_section_spec_no_keep = 161,
  sym_input_section_spec = 162,
  sym_statement = 163,
  sym_statement_list = 164,
  sym_length = 165,
  sym_fill_exp = 166,
  sym_assign_op = 167,
  sym_separator = 168,
  sym_assignment = 169,
  sym_memory = 170,
  sym_memory_spec_list = 171,
  sym_memory_spec = 172,
  sym_origin_spec = 173,
  sym_length_spec = 174,
  sym_attributes = 175,
  sym_attributes_list = 176,
  sym_attributes_string = 177,
  sym_startup = 178,
  sym_high_level_library = 179,
  sym_high_level_library_NAME_list = 180,
  sym_low_level_library = 181,
  sym_low_level_library_NAME_list = 182,
  sym_floating_point_support = 183,
  sym_nocrossref_list = 184,
  sym_paren_script_name = 185,
  sym_mustbe_exp = 186,
  sym_exp = 187,
  sym_memspec_at = 188,
  sym_at = 189,
  sym_align = 190,
  sym_subalign = 191,
  sym_sect_constraint = 192,
  sym_section = 193,
  sym_type = 194,
  sym_atype = 195,
  sym_opt_exp_with_type = 196,
  sym_opt_exp_without_type = 197,
  sym_memspec = 198,
  sym_phdr_opt = 199,
  sym_phdrs = 200,
  sym_phdr_list = 201,
  sym_phdr = 202,
  sym_phdr_type = 203,
  sym_phdr_qualifiers = 204,
  sym_phdr_val = 205,
  sym_overlay_section = 206,
  sym_version = 207,
  sym_vers_nodes = 208,
  sym_vers_node = 209,
  sym_verdep = 210,
  sym_vers_tag = 211,
  sym_vers_defns = 212,
  sym_INT = 213,
  aux_sym_script_file_repeat1 = 214,
  aux_sym_extern_name_list_repeat1 = 215,
  aux_sym_input_list_repeat1 = 216,
  aux_sym_sec_or_group_p1_repeat1 = 217,
  aux_sym_sect_flag_list_repeat1 = 218,
  aux_sym_exclude_name_list_repeat1 = 219,
  aux_sym_section_name_list_repeat1 = 220,
  aux_sym_statement_list_repeat1 = 221,
  aux_sym_memory_spec_list_repeat1 = 222,
  aux_sym_attributes_list_repeat1 = 223,
  aux_sym_high_level_library_NAME_list_repeat1 = 224,
  aux_sym_low_level_library_NAME_list_repeat1 = 225,
  aux_sym_low_level_library_NAME_list_repeat2 = 226,
  aux_sym_phdr_list_repeat1 = 227,
  aux_sym_phdr_qualifiers_repeat1 = 228,
  aux_sym_overlay_section_repeat1 = 229,
  aux_sym_vers_nodes_repeat1 = 230,
  aux_sym_verdep_repeat1 = 231,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_NAME] = "NAME",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_TARGET] = "TARGET",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SEARCH_DIR] = "SEARCH_DIR",
  [anon_sym_OUTPUT] = "OUTPUT",
  [anon_sym_OUTPUT_FORMAT] = "OUTPUT_FORMAT",
  [anon_sym_OUTPUT_ARCH] = "OUTPUT_ARCH",
  [anon_sym_FORCE_COMMON_ALLOCATION] = "FORCE_COMMON_ALLOCATION",
  [anon_sym_FORCE_GROUP_ALLOCATION] = "FORCE_GROUP_ALLOCATION",
  [anon_sym_INHIBIT_COMMON_ALLOCATION] = "INHIBIT_COMMON_ALLOCATION",
  [anon_sym_INPUT] = "INPUT",
  [anon_sym_GROUP] = "GROUP",
  [anon_sym_MAP] = "MAP",
  [anon_sym_INCLUDE] = "INCLUDE",
  [anon_sym_NOCROSSREFS] = "NOCROSSREFS",
  [anon_sym_NOCROSSREFS_TO] = "NOCROSSREFS_TO",
  [anon_sym_EXTERN] = "EXTERN",
  [anon_sym_INSERT] = "INSERT",
  [anon_sym_AFTER] = "AFTER",
  [anon_sym_BEFORE] = "BEFORE",
  [anon_sym_REGION_ALIAS] = "REGION_ALIAS",
  [anon_sym_LD_FEATURE] = "LD_FEATURE",
  [anon_sym_AS_NEEDED] = "AS_NEEDED",
  [anon_sym_SECTIONS] = "SECTIONS",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_ENTRY] = "ENTRY",
  [anon_sym_ASSERT] = "ASSERT",
  [anon_sym_SORT_BY_NAME] = "SORT_BY_NAME",
  [anon_sym_SORT] = "SORT",
  [anon_sym_SORT_BY_ALIGNMENT] = "SORT_BY_ALIGNMENT",
  [anon_sym_SORT_NONE] = "SORT_NONE",
  [anon_sym_SORT_BY_INIT_PRIORITY] = "SORT_BY_INIT_PRIORITY",
  [anon_sym_REVERSE] = "REVERSE",
  [anon_sym_EXCLUDE_FILE] = "EXCLUDE_FILE",
  [anon_sym_AMP] = "&",
  [anon_sym_INPUT_SECTION_FLAGS] = "INPUT_SECTION_FLAGS",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_KEEP] = "KEEP",
  [anon_sym_CREATE_OBJECT_SYMBOLS] = "CREATE_OBJECT_SYMBOLS",
  [anon_sym_CONSTRUCTORS] = "CONSTRUCTORS",
  [anon_sym_ASCIZ] = "ASCIZ",
  [anon_sym_FILL] = "FILL",
  [anon_sym_LINKER_VERSION] = "LINKER_VERSION",
  [anon_sym_QUAD] = "QUAD",
  [anon_sym_SQUAD] = "SQUAD",
  [anon_sym_LONG] = "LONG",
  [anon_sym_SHORT] = "SHORT",
  [anon_sym_BYTE] = "BYTE",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_EQ] = "=",
  [anon_sym_HIDDEN] = "HIDDEN",
  [anon_sym_PROVIDE] = "PROVIDE",
  [anon_sym_PROVIDE_HIDDEN] = "PROVIDE_HIDDEN",
  [anon_sym_MEMORY] = "MEMORY",
  [anon_sym_COLON] = ":",
  [anon_sym_ORIGIN] = "ORIGIN",
  [anon_sym_o] = "o",
  [anon_sym_org] = "org",
  [anon_sym_LENGTH] = "LENGTH",
  [anon_sym_l] = "l",
  [anon_sym_len] = "len",
  [anon_sym_BANG] = "!",
  [anon_sym_STARTUP] = "STARTUP",
  [anon_sym_HLL] = "HLL",
  [anon_sym_SYSLIB] = "SYSLIB",
  [anon_sym_FLOAT] = "FLOAT",
  [anon_sym_NOFLOAT] = "NOFLOAT",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_TILDE] = "~",
  [anon_sym_NEXT] = "NEXT",
  [anon_sym_ABSOLUTE] = "ABSOLUTE",
  [anon_sym_DATA_SEGMENT_END] = "DATA_SEGMENT_END",
  [anon_sym_BLOCK] = "BLOCK",
  [anon_sym_LOG2CEIL] = "LOG2CEIL",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DEFINED] = "DEFINED",
  [anon_sym_CONSTANT] = "CONSTANT",
  [anon_sym_SIZEOF_HEADERS] = "SIZEOF_HEADERS",
  [anon_sym_ALIGNOF] = "ALIGNOF",
  [anon_sym_SIZEOF] = "SIZEOF",
  [anon_sym_ADDR] = "ADDR",
  [anon_sym_LOADADDR] = "LOADADDR",
  [anon_sym_ALIGN] = "ALIGN",
  [anon_sym_DATA_SEGMENT_ALIGN] = "DATA_SEGMENT_ALIGN",
  [anon_sym_DATA_SEGMENT_RELRO_END] = "DATA_SEGMENT_RELRO_END",
  [anon_sym_MAX] = "MAX",
  [anon_sym_MIN] = "MIN",
  [anon_sym_SEGMENT_START] = "SEGMENT_START",
  [anon_sym_AT] = "AT",
  [anon_sym_SUBALIGN] = "SUBALIGN",
  [anon_sym_ONLY_IF_RO] = "ONLY_IF_RO",
  [anon_sym_ONLY_IF_RW] = "ONLY_IF_RW",
  [anon_sym_SPECIAL] = "SPECIAL",
  [anon_sym_ALIGN_WITH_INPUT] = "ALIGN_WITH_INPUT",
  [anon_sym_OVERLAY] = "OVERLAY",
  [anon_sym_NOLOAD] = "NOLOAD",
  [anon_sym_DSECT] = "DSECT",
  [anon_sym_COPY] = "COPY",
  [anon_sym_INFO] = "INFO",
  [anon_sym_READONLY] = "READONLY",
  [anon_sym_TYPE] = "TYPE",
  [anon_sym_BIND] = "BIND",
  [anon_sym_PHDRS] = "PHDRS",
  [anon_sym_VERSION] = "VERSION",
  [anon_sym_global] = "global",
  [anon_sym_local] = "local",
  [anon_sym_extern] = "extern",
  [sym_LNAME] = "LNAME",
  [sym_wildcard_name] = "wildcard_name",
  [aux_sym_INT_token1] = "INT_token1",
  [aux_sym_INT_token2] = "INT_token2",
  [aux_sym_INT_token3] = "INT_token3",
  [sym_VERS_TAG] = "VERS_TAG",
  [sym_VERS_IDENTIFIER] = "VERS_IDENTIFIER",
  [sym_comment] = "comment",
  [sym_script_file] = "script_file",
  [sym_extern_name_list] = "extern_name_list",
  [sym_filename] = "filename",
  [sym_ifile_p1] = "ifile_p1",
  [sym_input_list] = "input_list",
  [sym_sections] = "sections",
  [sym_sec_or_group_p1] = "sec_or_group_p1",
  [sym_statement_anywhere] = "statement_anywhere",
  [sym_section_name_spec] = "section_name_spec",
  [sym_wildcard_maybe_exclude] = "wildcard_maybe_exclude",
  [sym_wildcard_maybe_reverse] = "wildcard_maybe_reverse",
  [sym_filename_spec] = "filename_spec",
  [sym_sect_flag_list] = "sect_flag_list",
  [sym_sect_flags] = "sect_flags",
  [sym_exclude_name_list] = "exclude_name_list",
  [sym_section_name_list] = "section_name_list",
  [sym_input_section_spec_no_keep] = "input_section_spec_no_keep",
  [sym_input_section_spec] = "input_section_spec",
  [sym_statement] = "statement",
  [sym_statement_list] = "statement_list",
  [sym_length] = "length",
  [sym_fill_exp] = "fill_exp",
  [sym_assign_op] = "assign_op",
  [sym_separator] = "separator",
  [sym_assignment] = "assignment",
  [sym_memory] = "memory",
  [sym_memory_spec_list] = "memory_spec_list",
  [sym_memory_spec] = "memory_spec",
  [sym_origin_spec] = "origin_spec",
  [sym_length_spec] = "length_spec",
  [sym_attributes] = "attributes",
  [sym_attributes_list] = "attributes_list",
  [sym_attributes_string] = "attributes_string",
  [sym_startup] = "startup",
  [sym_high_level_library] = "high_level_library",
  [sym_high_level_library_NAME_list] = "high_level_library_NAME_list",
  [sym_low_level_library] = "low_level_library",
  [sym_low_level_library_NAME_list] = "low_level_library_NAME_list",
  [sym_floating_point_support] = "floating_point_support",
  [sym_nocrossref_list] = "nocrossref_list",
  [sym_paren_script_name] = "paren_script_name",
  [sym_mustbe_exp] = "mustbe_exp",
  [sym_exp] = "exp",
  [sym_memspec_at] = "memspec_at",
  [sym_at] = "at",
  [sym_align] = "align",
  [sym_subalign] = "subalign",
  [sym_sect_constraint] = "sect_constraint",
  [sym_section] = "section",
  [sym_type] = "type",
  [sym_atype] = "atype",
  [sym_opt_exp_with_type] = "opt_exp_with_type",
  [sym_opt_exp_without_type] = "opt_exp_without_type",
  [sym_memspec] = "memspec",
  [sym_phdr_opt] = "phdr_opt",
  [sym_phdrs] = "phdrs",
  [sym_phdr_list] = "phdr_list",
  [sym_phdr] = "phdr",
  [sym_phdr_type] = "phdr_type",
  [sym_phdr_qualifiers] = "phdr_qualifiers",
  [sym_phdr_val] = "phdr_val",
  [sym_overlay_section] = "overlay_section",
  [sym_version] = "version",
  [sym_vers_nodes] = "vers_nodes",
  [sym_vers_node] = "vers_node",
  [sym_verdep] = "verdep",
  [sym_vers_tag] = "vers_tag",
  [sym_vers_defns] = "vers_defns",
  [sym_INT] = "INT",
  [aux_sym_script_file_repeat1] = "script_file_repeat1",
  [aux_sym_extern_name_list_repeat1] = "extern_name_list_repeat1",
  [aux_sym_input_list_repeat1] = "input_list_repeat1",
  [aux_sym_sec_or_group_p1_repeat1] = "sec_or_group_p1_repeat1",
  [aux_sym_sect_flag_list_repeat1] = "sect_flag_list_repeat1",
  [aux_sym_exclude_name_list_repeat1] = "exclude_name_list_repeat1",
  [aux_sym_section_name_list_repeat1] = "section_name_list_repeat1",
  [aux_sym_statement_list_repeat1] = "statement_list_repeat1",
  [aux_sym_memory_spec_list_repeat1] = "memory_spec_list_repeat1",
  [aux_sym_attributes_list_repeat1] = "attributes_list_repeat1",
  [aux_sym_high_level_library_NAME_list_repeat1] = "high_level_library_NAME_list_repeat1",
  [aux_sym_low_level_library_NAME_list_repeat1] = "low_level_library_NAME_list_repeat1",
  [aux_sym_low_level_library_NAME_list_repeat2] = "low_level_library_NAME_list_repeat2",
  [aux_sym_phdr_list_repeat1] = "phdr_list_repeat1",
  [aux_sym_phdr_qualifiers_repeat1] = "phdr_qualifiers_repeat1",
  [aux_sym_overlay_section_repeat1] = "overlay_section_repeat1",
  [aux_sym_vers_nodes_repeat1] = "vers_nodes_repeat1",
  [aux_sym_verdep_repeat1] = "verdep_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_NAME] = sym_NAME,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_TARGET] = anon_sym_TARGET,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SEARCH_DIR] = anon_sym_SEARCH_DIR,
  [anon_sym_OUTPUT] = anon_sym_OUTPUT,
  [anon_sym_OUTPUT_FORMAT] = anon_sym_OUTPUT_FORMAT,
  [anon_sym_OUTPUT_ARCH] = anon_sym_OUTPUT_ARCH,
  [anon_sym_FORCE_COMMON_ALLOCATION] = anon_sym_FORCE_COMMON_ALLOCATION,
  [anon_sym_FORCE_GROUP_ALLOCATION] = anon_sym_FORCE_GROUP_ALLOCATION,
  [anon_sym_INHIBIT_COMMON_ALLOCATION] = anon_sym_INHIBIT_COMMON_ALLOCATION,
  [anon_sym_INPUT] = anon_sym_INPUT,
  [anon_sym_GROUP] = anon_sym_GROUP,
  [anon_sym_MAP] = anon_sym_MAP,
  [anon_sym_INCLUDE] = anon_sym_INCLUDE,
  [anon_sym_NOCROSSREFS] = anon_sym_NOCROSSREFS,
  [anon_sym_NOCROSSREFS_TO] = anon_sym_NOCROSSREFS_TO,
  [anon_sym_EXTERN] = anon_sym_EXTERN,
  [anon_sym_INSERT] = anon_sym_INSERT,
  [anon_sym_AFTER] = anon_sym_AFTER,
  [anon_sym_BEFORE] = anon_sym_BEFORE,
  [anon_sym_REGION_ALIAS] = anon_sym_REGION_ALIAS,
  [anon_sym_LD_FEATURE] = anon_sym_LD_FEATURE,
  [anon_sym_AS_NEEDED] = anon_sym_AS_NEEDED,
  [anon_sym_SECTIONS] = anon_sym_SECTIONS,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_ENTRY] = anon_sym_ENTRY,
  [anon_sym_ASSERT] = anon_sym_ASSERT,
  [anon_sym_SORT_BY_NAME] = anon_sym_SORT_BY_NAME,
  [anon_sym_SORT] = anon_sym_SORT,
  [anon_sym_SORT_BY_ALIGNMENT] = anon_sym_SORT_BY_ALIGNMENT,
  [anon_sym_SORT_NONE] = anon_sym_SORT_NONE,
  [anon_sym_SORT_BY_INIT_PRIORITY] = anon_sym_SORT_BY_INIT_PRIORITY,
  [anon_sym_REVERSE] = anon_sym_REVERSE,
  [anon_sym_EXCLUDE_FILE] = anon_sym_EXCLUDE_FILE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_INPUT_SECTION_FLAGS] = anon_sym_INPUT_SECTION_FLAGS,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_KEEP] = anon_sym_KEEP,
  [anon_sym_CREATE_OBJECT_SYMBOLS] = anon_sym_CREATE_OBJECT_SYMBOLS,
  [anon_sym_CONSTRUCTORS] = anon_sym_CONSTRUCTORS,
  [anon_sym_ASCIZ] = anon_sym_ASCIZ,
  [anon_sym_FILL] = anon_sym_FILL,
  [anon_sym_LINKER_VERSION] = anon_sym_LINKER_VERSION,
  [anon_sym_QUAD] = anon_sym_QUAD,
  [anon_sym_SQUAD] = anon_sym_SQUAD,
  [anon_sym_LONG] = anon_sym_LONG,
  [anon_sym_SHORT] = anon_sym_SHORT,
  [anon_sym_BYTE] = anon_sym_BYTE,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_HIDDEN] = anon_sym_HIDDEN,
  [anon_sym_PROVIDE] = anon_sym_PROVIDE,
  [anon_sym_PROVIDE_HIDDEN] = anon_sym_PROVIDE_HIDDEN,
  [anon_sym_MEMORY] = anon_sym_MEMORY,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ORIGIN] = anon_sym_ORIGIN,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_org] = anon_sym_org,
  [anon_sym_LENGTH] = anon_sym_LENGTH,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_len] = anon_sym_len,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STARTUP] = anon_sym_STARTUP,
  [anon_sym_HLL] = anon_sym_HLL,
  [anon_sym_SYSLIB] = anon_sym_SYSLIB,
  [anon_sym_FLOAT] = anon_sym_FLOAT,
  [anon_sym_NOFLOAT] = anon_sym_NOFLOAT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_NEXT] = anon_sym_NEXT,
  [anon_sym_ABSOLUTE] = anon_sym_ABSOLUTE,
  [anon_sym_DATA_SEGMENT_END] = anon_sym_DATA_SEGMENT_END,
  [anon_sym_BLOCK] = anon_sym_BLOCK,
  [anon_sym_LOG2CEIL] = anon_sym_LOG2CEIL,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DEFINED] = anon_sym_DEFINED,
  [anon_sym_CONSTANT] = anon_sym_CONSTANT,
  [anon_sym_SIZEOF_HEADERS] = anon_sym_SIZEOF_HEADERS,
  [anon_sym_ALIGNOF] = anon_sym_ALIGNOF,
  [anon_sym_SIZEOF] = anon_sym_SIZEOF,
  [anon_sym_ADDR] = anon_sym_ADDR,
  [anon_sym_LOADADDR] = anon_sym_LOADADDR,
  [anon_sym_ALIGN] = anon_sym_ALIGN,
  [anon_sym_DATA_SEGMENT_ALIGN] = anon_sym_DATA_SEGMENT_ALIGN,
  [anon_sym_DATA_SEGMENT_RELRO_END] = anon_sym_DATA_SEGMENT_RELRO_END,
  [anon_sym_MAX] = anon_sym_MAX,
  [anon_sym_MIN] = anon_sym_MIN,
  [anon_sym_SEGMENT_START] = anon_sym_SEGMENT_START,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_SUBALIGN] = anon_sym_SUBALIGN,
  [anon_sym_ONLY_IF_RO] = anon_sym_ONLY_IF_RO,
  [anon_sym_ONLY_IF_RW] = anon_sym_ONLY_IF_RW,
  [anon_sym_SPECIAL] = anon_sym_SPECIAL,
  [anon_sym_ALIGN_WITH_INPUT] = anon_sym_ALIGN_WITH_INPUT,
  [anon_sym_OVERLAY] = anon_sym_OVERLAY,
  [anon_sym_NOLOAD] = anon_sym_NOLOAD,
  [anon_sym_DSECT] = anon_sym_DSECT,
  [anon_sym_COPY] = anon_sym_COPY,
  [anon_sym_INFO] = anon_sym_INFO,
  [anon_sym_READONLY] = anon_sym_READONLY,
  [anon_sym_TYPE] = anon_sym_TYPE,
  [anon_sym_BIND] = anon_sym_BIND,
  [anon_sym_PHDRS] = anon_sym_PHDRS,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_extern] = anon_sym_extern,
  [sym_LNAME] = sym_LNAME,
  [sym_wildcard_name] = sym_wildcard_name,
  [aux_sym_INT_token1] = aux_sym_INT_token1,
  [aux_sym_INT_token2] = aux_sym_INT_token2,
  [aux_sym_INT_token3] = aux_sym_INT_token3,
  [sym_VERS_TAG] = sym_VERS_TAG,
  [sym_VERS_IDENTIFIER] = sym_VERS_IDENTIFIER,
  [sym_comment] = sym_comment,
  [sym_script_file] = sym_script_file,
  [sym_extern_name_list] = sym_extern_name_list,
  [sym_filename] = sym_filename,
  [sym_ifile_p1] = sym_ifile_p1,
  [sym_input_list] = sym_input_list,
  [sym_sections] = sym_sections,
  [sym_sec_or_group_p1] = sym_sec_or_group_p1,
  [sym_statement_anywhere] = sym_statement_anywhere,
  [sym_section_name_spec] = sym_section_name_spec,
  [sym_wildcard_maybe_exclude] = sym_wildcard_maybe_exclude,
  [sym_wildcard_maybe_reverse] = sym_wildcard_maybe_reverse,
  [sym_filename_spec] = sym_filename_spec,
  [sym_sect_flag_list] = sym_sect_flag_list,
  [sym_sect_flags] = sym_sect_flags,
  [sym_exclude_name_list] = sym_exclude_name_list,
  [sym_section_name_list] = sym_section_name_list,
  [sym_input_section_spec_no_keep] = sym_input_section_spec_no_keep,
  [sym_input_section_spec] = sym_input_section_spec,
  [sym_statement] = sym_statement,
  [sym_statement_list] = sym_statement_list,
  [sym_length] = sym_length,
  [sym_fill_exp] = sym_fill_exp,
  [sym_assign_op] = sym_assign_op,
  [sym_separator] = sym_separator,
  [sym_assignment] = sym_assignment,
  [sym_memory] = sym_memory,
  [sym_memory_spec_list] = sym_memory_spec_list,
  [sym_memory_spec] = sym_memory_spec,
  [sym_origin_spec] = sym_origin_spec,
  [sym_length_spec] = sym_length_spec,
  [sym_attributes] = sym_attributes,
  [sym_attributes_list] = sym_attributes_list,
  [sym_attributes_string] = sym_attributes_string,
  [sym_startup] = sym_startup,
  [sym_high_level_library] = sym_high_level_library,
  [sym_high_level_library_NAME_list] = sym_high_level_library_NAME_list,
  [sym_low_level_library] = sym_low_level_library,
  [sym_low_level_library_NAME_list] = sym_low_level_library_NAME_list,
  [sym_floating_point_support] = sym_floating_point_support,
  [sym_nocrossref_list] = sym_nocrossref_list,
  [sym_paren_script_name] = sym_paren_script_name,
  [sym_mustbe_exp] = sym_mustbe_exp,
  [sym_exp] = sym_exp,
  [sym_memspec_at] = sym_memspec_at,
  [sym_at] = sym_at,
  [sym_align] = sym_align,
  [sym_subalign] = sym_subalign,
  [sym_sect_constraint] = sym_sect_constraint,
  [sym_section] = sym_section,
  [sym_type] = sym_type,
  [sym_atype] = sym_atype,
  [sym_opt_exp_with_type] = sym_opt_exp_with_type,
  [sym_opt_exp_without_type] = sym_opt_exp_without_type,
  [sym_memspec] = sym_memspec,
  [sym_phdr_opt] = sym_phdr_opt,
  [sym_phdrs] = sym_phdrs,
  [sym_phdr_list] = sym_phdr_list,
  [sym_phdr] = sym_phdr,
  [sym_phdr_type] = sym_phdr_type,
  [sym_phdr_qualifiers] = sym_phdr_qualifiers,
  [sym_phdr_val] = sym_phdr_val,
  [sym_overlay_section] = sym_overlay_section,
  [sym_version] = sym_version,
  [sym_vers_nodes] = sym_vers_nodes,
  [sym_vers_node] = sym_vers_node,
  [sym_verdep] = sym_verdep,
  [sym_vers_tag] = sym_vers_tag,
  [sym_vers_defns] = sym_vers_defns,
  [sym_INT] = sym_INT,
  [aux_sym_script_file_repeat1] = aux_sym_script_file_repeat1,
  [aux_sym_extern_name_list_repeat1] = aux_sym_extern_name_list_repeat1,
  [aux_sym_input_list_repeat1] = aux_sym_input_list_repeat1,
  [aux_sym_sec_or_group_p1_repeat1] = aux_sym_sec_or_group_p1_repeat1,
  [aux_sym_sect_flag_list_repeat1] = aux_sym_sect_flag_list_repeat1,
  [aux_sym_exclude_name_list_repeat1] = aux_sym_exclude_name_list_repeat1,
  [aux_sym_section_name_list_repeat1] = aux_sym_section_name_list_repeat1,
  [aux_sym_statement_list_repeat1] = aux_sym_statement_list_repeat1,
  [aux_sym_memory_spec_list_repeat1] = aux_sym_memory_spec_list_repeat1,
  [aux_sym_attributes_list_repeat1] = aux_sym_attributes_list_repeat1,
  [aux_sym_high_level_library_NAME_list_repeat1] = aux_sym_high_level_library_NAME_list_repeat1,
  [aux_sym_low_level_library_NAME_list_repeat1] = aux_sym_low_level_library_NAME_list_repeat1,
  [aux_sym_low_level_library_NAME_list_repeat2] = aux_sym_low_level_library_NAME_list_repeat2,
  [aux_sym_phdr_list_repeat1] = aux_sym_phdr_list_repeat1,
  [aux_sym_phdr_qualifiers_repeat1] = aux_sym_phdr_qualifiers_repeat1,
  [aux_sym_overlay_section_repeat1] = aux_sym_overlay_section_repeat1,
  [aux_sym_vers_nodes_repeat1] = aux_sym_vers_nodes_repeat1,
  [aux_sym_verdep_repeat1] = aux_sym_verdep_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_NAME] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TARGET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEARCH_DIR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OUTPUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OUTPUT_FORMAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OUTPUT_ARCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FORCE_COMMON_ALLOCATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FORCE_GROUP_ALLOCATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INHIBIT_COMMON_ALLOCATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INPUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GROUP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MAP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INCLUDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOCROSSREFS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOCROSSREFS_TO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXTERN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INSERT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AFTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEFORE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REGION_ALIAS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LD_FEATURE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AS_NEEDED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SECTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENTRY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ASSERT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SORT_BY_NAME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SORT_BY_ALIGNMENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SORT_NONE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SORT_BY_INIT_PRIORITY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REVERSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXCLUDE_FILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INPUT_SECTION_FLAGS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KEEP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CREATE_OBJECT_SYMBOLS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONSTRUCTORS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ASCIZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FILL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LINKER_VERSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QUAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LONG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SHORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HIDDEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROVIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROVIDE_HIDDEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MEMORY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ORIGIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_org] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LENGTH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_len] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STARTUP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HLL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYSLIB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FLOAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOFLOAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NEXT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ABSOLUTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATA_SEGMENT_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BLOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOG2CEIL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFINED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONSTANT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIZEOF_HEADERS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALIGNOF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIZEOF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADDR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOADADDR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALIGN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATA_SEGMENT_ALIGN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATA_SEGMENT_RELRO_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MAX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEGMENT_START] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUBALIGN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ONLY_IF_RO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ONLY_IF_RW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPECIAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALIGN_WITH_INPUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OVERLAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOLOAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DSECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COPY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INFO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_READONLY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BIND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PHDRS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VERSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [sym_LNAME] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_INT_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_INT_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_INT_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_VERS_TAG] = {
    .visible = true,
    .named = true,
  },
  [sym_VERS_IDENTIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_script_file] = {
    .visible = true,
    .named = true,
  },
  [sym_extern_name_list] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_ifile_p1] = {
    .visible = true,
    .named = true,
  },
  [sym_input_list] = {
    .visible = true,
    .named = true,
  },
  [sym_sections] = {
    .visible = true,
    .named = true,
  },
  [sym_sec_or_group_p1] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_anywhere] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_maybe_exclude] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_maybe_reverse] = {
    .visible = true,
    .named = true,
  },
  [sym_filename_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_sect_flag_list] = {
    .visible = true,
    .named = true,
  },
  [sym_sect_flags] = {
    .visible = true,
    .named = true,
  },
  [sym_exclude_name_list] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name_list] = {
    .visible = true,
    .named = true,
  },
  [sym_input_section_spec_no_keep] = {
    .visible = true,
    .named = true,
  },
  [sym_input_section_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_list] = {
    .visible = true,
    .named = true,
  },
  [sym_length] = {
    .visible = true,
    .named = true,
  },
  [sym_fill_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_op] = {
    .visible = true,
    .named = true,
  },
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_memory] = {
    .visible = true,
    .named = true,
  },
  [sym_memory_spec_list] = {
    .visible = true,
    .named = true,
  },
  [sym_memory_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_origin_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_length_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes_list] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes_string] = {
    .visible = true,
    .named = true,
  },
  [sym_startup] = {
    .visible = true,
    .named = true,
  },
  [sym_high_level_library] = {
    .visible = true,
    .named = true,
  },
  [sym_high_level_library_NAME_list] = {
    .visible = true,
    .named = true,
  },
  [sym_low_level_library] = {
    .visible = true,
    .named = true,
  },
  [sym_low_level_library_NAME_list] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point_support] = {
    .visible = true,
    .named = true,
  },
  [sym_nocrossref_list] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_script_name] = {
    .visible = true,
    .named = true,
  },
  [sym_mustbe_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_memspec_at] = {
    .visible = true,
    .named = true,
  },
  [sym_at] = {
    .visible = true,
    .named = true,
  },
  [sym_align] = {
    .visible = true,
    .named = true,
  },
  [sym_subalign] = {
    .visible = true,
    .named = true,
  },
  [sym_sect_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_atype] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_exp_with_type] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_exp_without_type] = {
    .visible = true,
    .named = true,
  },
  [sym_memspec] = {
    .visible = true,
    .named = true,
  },
  [sym_phdr_opt] = {
    .visible = true,
    .named = true,
  },
  [sym_phdrs] = {
    .visible = true,
    .named = true,
  },
  [sym_phdr_list] = {
    .visible = true,
    .named = true,
  },
  [sym_phdr] = {
    .visible = true,
    .named = true,
  },
  [sym_phdr_type] = {
    .visible = true,
    .named = true,
  },
  [sym_phdr_qualifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_phdr_val] = {
    .visible = true,
    .named = true,
  },
  [sym_overlay_section] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_vers_nodes] = {
    .visible = true,
    .named = true,
  },
  [sym_vers_node] = {
    .visible = true,
    .named = true,
  },
  [sym_verdep] = {
    .visible = true,
    .named = true,
  },
  [sym_vers_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_vers_defns] = {
    .visible = true,
    .named = true,
  },
  [sym_INT] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_script_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extern_name_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_input_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sec_or_group_p1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sect_flag_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exclude_name_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_name_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_memory_spec_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_high_level_library_NAME_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_low_level_library_NAME_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_low_level_library_NAME_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_phdr_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_phdr_qualifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_overlay_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vers_nodes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verdep_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 65,
  [69] = 69,
  [70] = 70,
  [71] = 70,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 75,
  [80] = 77,
  [81] = 73,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 69,
  [90] = 90,
  [91] = 91,
  [92] = 82,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 72,
  [98] = 76,
  [99] = 99,
  [100] = 96,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 6,
  [106] = 106,
  [107] = 94,
  [108] = 108,
  [109] = 78,
  [110] = 110,
  [111] = 87,
  [112] = 112,
  [113] = 20,
  [114] = 83,
  [115] = 115,
  [116] = 84,
  [117] = 117,
  [118] = 85,
  [119] = 119,
  [120] = 74,
  [121] = 63,
  [122] = 122,
  [123] = 123,
  [124] = 67,
  [125] = 99,
  [126] = 126,
  [127] = 103,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 130,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 137,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 132,
  [149] = 142,
  [150] = 150,
  [151] = 147,
  [152] = 152,
  [153] = 133,
  [154] = 146,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 174,
  [181] = 181,
  [182] = 172,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 175,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 203,
  [207] = 205,
  [208] = 204,
  [209] = 209,
  [210] = 210,
  [211] = 209,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 216,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 220,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 235,
  [242] = 230,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 236,
  [247] = 238,
  [248] = 232,
  [249] = 249,
  [250] = 245,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 240,
  [255] = 252,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 261,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 283,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 300,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 326,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 380,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 397,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 397,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 232,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 230,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 421,
  [452] = 452,
  [453] = 453,
  [454] = 240,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 235,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 119,
  [591] = 591,
  [592] = 592,
  [593] = 126,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 106,
  [599] = 599,
  [600] = 600,
  [601] = 117,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 559,
  [611] = 611,
  [612] = 558,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 498,
  [617] = 495,
  [618] = 618,
  [619] = 484,
  [620] = 620,
  [621] = 464,
  [622] = 465,
  [623] = 473,
  [624] = 479,
  [625] = 485,
  [626] = 546,
  [627] = 484,
  [628] = 473,
  [629] = 629,
  [630] = 539,
  [631] = 631,
  [632] = 581,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 518,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 466,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 530,
  [646] = 466,
  [647] = 606,
  [648] = 605,
  [649] = 604,
  [650] = 650,
  [651] = 651,
  [652] = 557,
  [653] = 521,
  [654] = 654,
  [655] = 501,
  [656] = 500,
  [657] = 499,
  [658] = 497,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 580,
  [665] = 528,
  [666] = 478,
  [667] = 480,
  [668] = 528,
  [669] = 607,
  [670] = 603,
  [671] = 602,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '!') ADVANCE(111);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '$') ADVANCE(257);
      if (lookahead == '%') ADVANCE(120);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '0') ADVANCE(356);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '?') ADVANCE(134);
      if (lookahead == 'L') ADVANCE(161);
      if (lookahead == 'R') ADVANCE(162);
      if (lookahead == 'S') ADVANCE(200);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '^') ADVANCE(130);
      if (lookahead == 'g') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= '_') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(111);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '$') ADVANCE(257);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '0') ADVANCE(356);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == 'L') ADVANCE(161);
      if (lookahead == '^') ADVANCE(31);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(111);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '$') ADVANCE(257);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '0') ADVANCE(356);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == 'L') ADVANCE(161);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(120);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '?') ADVANCE(134);
      if (lookahead == '^') ADVANCE(130);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '%') ADVANCE(120);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '?') ADVANCE(134);
      if (lookahead == 'L') ADVANCE(39);
      if (lookahead == '^') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '*') ADVANCE(264);
      if (lookahead == '+') ADVANCE(265);
      if (lookahead == '-') ADVANCE(266);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == 'C') ADVANCE(201);
      if (lookahead == 'E') ADVANCE(236);
      if (lookahead == 'R') ADVANCE(166);
      if (lookahead == 'S') ADVANCE(202);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '^') ADVANCE(267);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '~') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '!' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '?') ||
          lookahead == ']') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == 'C') ADVANCE(201);
      if (lookahead == 'E') ADVANCE(236);
      if (lookahead == 'R') ADVANCE(166);
      if (lookahead == 'S') ADVANCE(202);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '~') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '!' ||
          ('*' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          lookahead == ']' ||
          lookahead == '^') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == 'E') ADVANCE(236);
      if (lookahead == 'R') ADVANCE(166);
      if (lookahead == 'S') ADVANCE(202);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '~') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '!' ||
          ('*' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          lookahead == ']' ||
          lookahead == '^') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(140);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '^') ADVANCE(31);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(338);
      if (lookahead == 'R') ADVANCE(278);
      if (lookahead == 'S') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '=') ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(338);
      if (lookahead == 'R') ADVANCE(278);
      if (lookahead == 'S') ADVANCE(305);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(375);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(308);
      if (lookahead == 'E') ADVANCE(338);
      if (lookahead == 'R') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(338);
      if (lookahead == 'R') ADVANCE(278);
      if (lookahead == 'S') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(338);
      if (lookahead == 'R') ADVANCE(278);
      if (lookahead == 'S') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(338);
      if (lookahead == 'R') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(338);
      if (lookahead == 'S') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(338);
      if (lookahead == 'S') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == 'g') ADVANCE(367);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(374);
      END_STATE();
    case 26:
      if (lookahead == '<') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 37:
      if (lookahead == '=') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(259);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'G') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'H') ADVANCE(105);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 46:
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'b' ||
          lookahead == 'd') ADVANCE(353);
      if (lookahead == 'H' ||
          lookahead == 'O' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(259);
      END_STATE();
    case 48:
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(260);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '!') ADVANCE(111);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SORT_BY_NAME);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SORT_BY_NAME);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SORT_BY_NAME);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SORT);
      if (lookahead == '_') ADVANCE(152);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SORT);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SORT);
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SORT);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SORT);
      if (lookahead == '_') ADVANCE(273);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SORT);
      if (lookahead == '_') ADVANCE(274);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SORT_BY_ALIGNMENT);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SORT_BY_ALIGNMENT);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SORT_NONE);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SORT_NONE);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SORT_NONE);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SORT_BY_INIT_PRIORITY);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SORT_BY_INIT_PRIORITY);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_REVERSE);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_REVERSE);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_REVERSE);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EXCLUDE_FILE);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EXCLUDE_FILE);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(132);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_CONSTRUCTORS);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_CONSTRUCTORS);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(254);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(259);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '!' ||
          ('*' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(254);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(259);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LENGTH);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LENGTH);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(247);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_len);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_len);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(259);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(14);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == 'D') ADVANCE(179);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(259);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(121);
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '>') ADVANCE(122);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(133);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_global);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_local);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_NAME);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == 'D') ADVANCE(179);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(259);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == 'D') ADVANCE(179);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(259);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '*') ADVANCE(262);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(180);
      if (lookahead == '!' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(254);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '*') ADVANCE(262);
      if (lookahead == 'D') ADVANCE(180);
      if (lookahead == '!' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(254);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(259);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(254);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'A') ADVANCE(210);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('B' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(259);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'A') ADVANCE(186);
      if (lookahead == 'I') ADVANCE(195);
      if (lookahead == 'N') ADVANCE(149);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'A') ADVANCE(189);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'A') ADVANCE(212);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('B' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(254);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'A') ADVANCE(190);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'B') ADVANCE(237);
      if (lookahead == 'N') ADVANCE(203);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'B') ADVANCE(239);
      if (lookahead == 'N') ADVANCE(204);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'C') ADVANCE(147);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(259);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'C') ADVANCE(187);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'C') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(254);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'C') ADVANCE(230);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'D') ADVANCE(145);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(259);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'D') ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(254);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'D') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(192);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(235);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(75);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(70);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(59);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(234);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(242);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(69);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(77);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(209);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(213);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(197);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'F') ADVANCE(182);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'G') ADVANCE(225);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'G') ADVANCE(196);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'H') ADVANCE(106);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'I') ADVANCE(218);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(259);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'I') ADVANCE(219);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(254);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'I') ADVANCE(177);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'I') ADVANCE(188);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'I') ADVANCE(229);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'I') ADVANCE(228);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'I') ADVANCE(205);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'L') ADVANCE(181);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'L') ADVANCE(232);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'L') ADVANCE(170);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'M') ADVANCE(165);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'M') ADVANCE(171);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'M') ADVANCE(174);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'N') ADVANCE(176);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'N') ADVANCE(221);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'N') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'N') ADVANCE(183);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'N') ADVANCE(191);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'N') ADVANCE(226);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'N') ADVANCE(164);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'N') ADVANCE(169);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'O') ADVANCE(208);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'O') ADVANCE(193);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'O') ADVANCE(211);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'O') ADVANCE(198);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'O') ADVANCE(199);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'O') ADVANCE(217);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'O') ADVANCE(216);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'P') ADVANCE(215);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(224);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(222);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(158);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(259);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(227);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(254);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(223);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(233);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(185);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(220);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(184);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'S') ADVANCE(154);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(259);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'S') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(254);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'S') ADVANCE(231);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'S') ADVANCE(163);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'S') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'T') ADVANCE(61);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'T') ADVANCE(178);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'T') ADVANCE(67);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'T') ADVANCE(238);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'T') ADVANCE(241);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'T') ADVANCE(206);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'T') ADVANCE(214);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'U') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'U') ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'V') ADVANCE(173);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'V') ADVANCE(172);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'X') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'Y') ADVANCE(240);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'Y') ADVANCE(72);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'Y') ADVANCE(243);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '_') ADVANCE(148);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '_') ADVANCE(207);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '_') ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '_') ADVANCE(194);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(249);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(250);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'b') ADVANCE(245);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'c') ADVANCE(244);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(252);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(138);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(136);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'n') ADVANCE(110);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(246);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(351);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'b' ||
          lookahead == 'd') ADVANCE(255);
      if (lookahead == 'H' ||
          lookahead == 'O' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(258);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('G' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(258);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('G' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_NAME);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('G' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_NAME);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(259);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_LNAME);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '*') ADVANCE(262);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '*') ADVANCE(263);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(262);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '/') ADVANCE(351);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(262);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'A') ADVANCE(297);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'A') ADVANCE(295);
      if (lookahead == 'I') ADVANCE(302);
      if (lookahead == 'N') ADVANCE(268);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'A') ADVANCE(295);
      if (lookahead == 'N') ADVANCE(268);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'B') ADVANCE(340);
      if (lookahead == 'N') ADVANCE(306);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'B') ADVANCE(341);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'B') ADVANCE(342);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'B') ADVANCE(343);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'C') ADVANCE(294);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'C') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'D') ADVANCE(279);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'E') ADVANCE(337);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'E') ADVANCE(344);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'E') ADVANCE(78);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'E') ADVANCE(60);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'E') ADVANCE(315);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'E') ADVANCE(301);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'F') ADVANCE(291);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'I') ADVANCE(287);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'I') ADVANCE(330);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'I') ADVANCE(302);
      if (lookahead == 'N') ADVANCE(268);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'I') ADVANCE(296);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'I') ADVANCE(329);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'L') ADVANCE(335);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'L') ADVANCE(288);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'L') ADVANCE(282);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'M') ADVANCE(283);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'M') ADVANCE(285);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'N') ADVANCE(268);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'N') ADVANCE(325);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'N') ADVANCE(327);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'N') ADVANCE(289);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'N') ADVANCE(298);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'O') ADVANCE(314);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'O') ADVANCE(303);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'O') ADVANCE(317);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'O') ADVANCE(300);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'O') ADVANCE(319);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'O') ADVANCE(320);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'O') ADVANCE(321);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'O') ADVANCE(322);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'P') ADVANCE(318);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(326);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(324);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(323);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(293);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(328);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(333);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(334);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'S') ADVANCE(280);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'S') ADVANCE(331);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(63);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(68);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(339);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(346);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(316);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(307);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(66);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'U') ADVANCE(277);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'U') ADVANCE(276);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'V') ADVANCE(284);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'X') ADVANCE(275);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'Y') ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'Y') ADVANCE(345);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'Y') ADVANCE(347);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'Y') ADVANCE(348);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'Y') ADVANCE(349);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '_') ADVANCE(286);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '_') ADVANCE(269);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '_') ADVANCE(313);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '_') ADVANCE(270);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '_') ADVANCE(299);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '!' ||
          ('*' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(254);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_INT_token2);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_INT_token2);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'b' ||
          lookahead == 'd') ADVANCE(353);
      if (lookahead == 'H' ||
          lookahead == 'O' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_INT_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_INT_token3);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_INT_token3);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'b' ||
          lookahead == 'd') ADVANCE(353);
      if (lookahead == 'H' ||
          lookahead == 'O' ||
          lookahead == 'h' ||
          lookahead == 'o') ADVANCE(352);
      if (lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_INT_token3);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'b' ||
          lookahead == 'd') ADVANCE(353);
      if (lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(355);
      if (lookahead == 'H' ||
          lookahead == 'O' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_INT_token3);
      if (lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_VERS_TAG);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_VERS_IDENTIFIER);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_VERS_IDENTIFIER);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_VERS_IDENTIFIER);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_VERS_IDENTIFIER);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_VERS_IDENTIFIER);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_VERS_IDENTIFIER);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_VERS_IDENTIFIER);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_VERS_IDENTIFIER);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(370);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_VERS_IDENTIFIER);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_VERS_IDENTIFIER);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(363);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_VERS_IDENTIFIER);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_VERS_IDENTIFIER);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(368);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_VERS_IDENTIFIER);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_VERS_IDENTIFIER);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(372);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_VERS_IDENTIFIER);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'A') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(2);
      if (lookahead == 'C') ADVANCE(3);
      if (lookahead == 'D') ADVANCE(4);
      if (lookahead == 'E') ADVANCE(5);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == 'G') ADVANCE(7);
      if (lookahead == 'H') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(9);
      if (lookahead == 'K') ADVANCE(10);
      if (lookahead == 'L') ADVANCE(11);
      if (lookahead == 'M') ADVANCE(12);
      if (lookahead == 'N') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(14);
      if (lookahead == 'P') ADVANCE(15);
      if (lookahead == 'Q') ADVANCE(16);
      if (lookahead == 'R') ADVANCE(17);
      if (lookahead == 'S') ADVANCE(18);
      if (lookahead == 'T') ADVANCE(19);
      if (lookahead == 'V') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'B') ADVANCE(22);
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == 'E') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(29);
      if (lookahead == 'L') ADVANCE(30);
      if (lookahead == 'Y') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(35);
      if (lookahead == 'S') ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == 'X') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'L') ADVANCE(40);
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 7:
      if (lookahead == 'R') ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == 'I') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(47);
      if (lookahead == 'I') ADVANCE(48);
      if (lookahead == 'O') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead == 'I') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(54);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(55);
      if (lookahead == 'R') ADVANCE(56);
      if (lookahead == 'U') ADVANCE(57);
      if (lookahead == 'V') ADVANCE(58);
      END_STATE();
    case 15:
      if (lookahead == 'H') ADVANCE(59);
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 16:
      if (lookahead == 'U') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(63);
      if (lookahead == 'H') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'P') ADVANCE(66);
      if (lookahead == 'Q') ADVANCE(67);
      if (lookahead == 'T') ADVANCE(68);
      if (lookahead == 'U') ADVANCE(69);
      if (lookahead == 'Y') ADVANCE(70);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(71);
      if (lookahead == 'Y') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(73);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(75);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 28:
      if (lookahead == 'F') ADVANCE(82);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(84);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'P') ADVANCE(87);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 35:
      if (lookahead == 'F') ADVANCE(90);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(91);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(92);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(93);
      END_STATE();
    case 39:
      if (lookahead == 'L') ADVANCE(94);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(95);
      END_STATE();
    case 41:
      if (lookahead == 'R') ADVANCE(96);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == 'L') ADVANCE(99);
      END_STATE();
    case 45:
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'F') ADVANCE(101);
      if (lookahead == 'H') ADVANCE(102);
      if (lookahead == 'P') ADVANCE(103);
      if (lookahead == 'S') ADVANCE(104);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(105);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(106);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(107);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'G') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(110);
      END_STATE();
    case 50:
      if (lookahead == 'P') ADVANCE(111);
      if (lookahead == 'X') ADVANCE(112);
      END_STATE();
    case 51:
      if (lookahead == 'M') ADVANCE(113);
      END_STATE();
    case 52:
      if (lookahead == 'N') ADVANCE(114);
      END_STATE();
    case 53:
      if (lookahead == 'X') ADVANCE(115);
      END_STATE();
    case 54:
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'F') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 55:
      if (lookahead == 'L') ADVANCE(119);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(120);
      END_STATE();
    case 57:
      if (lookahead == 'T') ADVANCE(121);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(122);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(123);
      END_STATE();
    case 60:
      if (lookahead == 'O') ADVANCE(124);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(125);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'G') ADVANCE(127);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(128);
      if (lookahead == 'C') ADVANCE(129);
      if (lookahead == 'G') ADVANCE(130);
      END_STATE();
    case 64:
      if (lookahead == 'O') ADVANCE(131);
      END_STATE();
    case 65:
      if (lookahead == 'Z') ADVANCE(132);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(133);
      END_STATE();
    case 67:
      if (lookahead == 'U') ADVANCE(134);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(135);
      END_STATE();
    case 69:
      if (lookahead == 'B') ADVANCE(136);
      END_STATE();
    case 70:
      if (lookahead == 'S') ADVANCE(137);
      END_STATE();
    case 71:
      if (lookahead == 'R') ADVANCE(138);
      END_STATE();
    case 72:
      if (lookahead == 'P') ADVANCE(139);
      END_STATE();
    case 73:
      if (lookahead == 'R') ADVANCE(140);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 75:
      if (lookahead == 'O') ADVANCE(142);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(143);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(145);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(147);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(148);
      END_STATE();
    case 82:
      if (lookahead == 'O') ADVANCE(149);
      END_STATE();
    case 83:
      if (lookahead == 'D') ADVANCE(150);
      END_STATE();
    case 84:
      if (lookahead == 'C') ADVANCE(151);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(152);
      END_STATE();
    case 86:
      if (lookahead == 'S') ADVANCE(153);
      END_STATE();
    case 87:
      if (lookahead == 'Y') ADVANCE(154);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(155);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(156);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(157);
      END_STATE();
    case 91:
      if (lookahead == 'C') ADVANCE(158);
      END_STATE();
    case 92:
      if (lookahead == 'R') ADVANCE(159);
      END_STATE();
    case 93:
      if (lookahead == 'E') ADVANCE(160);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(161);
      END_STATE();
    case 95:
      if (lookahead == 'A') ADVANCE(162);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(163);
      END_STATE();
    case 97:
      if (lookahead == 'U') ADVANCE(164);
      END_STATE();
    case 98:
      if (lookahead == 'D') ADVANCE(165);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_HLL);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(166);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(167);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(168);
      END_STATE();
    case 103:
      if (lookahead == 'U') ADVANCE(169);
      END_STATE();
    case 104:
      if (lookahead == 'E') ADVANCE(170);
      END_STATE();
    case 105:
      if (lookahead == 'P') ADVANCE(171);
      END_STATE();
    case 106:
      if (lookahead == 'F') ADVANCE(172);
      END_STATE();
    case 107:
      if (lookahead == 'K') ADVANCE(173);
      END_STATE();
    case 108:
      if (lookahead == 'D') ADVANCE(174);
      END_STATE();
    case 109:
      if (lookahead == '2') ADVANCE(175);
      END_STATE();
    case 110:
      if (lookahead == 'G') ADVANCE(176);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_MAP);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_MAX);
      END_STATE();
    case 113:
      if (lookahead == 'O') ADVANCE(177);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_MIN);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(178);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(179);
      END_STATE();
    case 117:
      if (lookahead == 'L') ADVANCE(180);
      END_STATE();
    case 118:
      if (lookahead == 'O') ADVANCE(181);
      END_STATE();
    case 119:
      if (lookahead == 'Y') ADVANCE(182);
      END_STATE();
    case 120:
      if (lookahead == 'G') ADVANCE(183);
      END_STATE();
    case 121:
      if (lookahead == 'P') ADVANCE(184);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(185);
      END_STATE();
    case 123:
      if (lookahead == 'R') ADVANCE(186);
      END_STATE();
    case 124:
      if (lookahead == 'V') ADVANCE(187);
      END_STATE();
    case 125:
      if (lookahead == 'D') ADVANCE(188);
      END_STATE();
    case 126:
      if (lookahead == 'D') ADVANCE(189);
      END_STATE();
    case 127:
      if (lookahead == 'I') ADVANCE(190);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(191);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(192);
      END_STATE();
    case 130:
      if (lookahead == 'M') ADVANCE(193);
      END_STATE();
    case 131:
      if (lookahead == 'R') ADVANCE(194);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(195);
      END_STATE();
    case 133:
      if (lookahead == 'C') ADVANCE(196);
      END_STATE();
    case 134:
      if (lookahead == 'A') ADVANCE(197);
      END_STATE();
    case 135:
      if (lookahead == 'R') ADVANCE(198);
      END_STATE();
    case 136:
      if (lookahead == 'A') ADVANCE(199);
      END_STATE();
    case 137:
      if (lookahead == 'L') ADVANCE(200);
      END_STATE();
    case 138:
      if (lookahead == 'G') ADVANCE(201);
      END_STATE();
    case 139:
      if (lookahead == 'E') ADVANCE(202);
      END_STATE();
    case 140:
      if (lookahead == 'S') ADVANCE(203);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_org);
      END_STATE();
    case 142:
      if (lookahead == 'L') ADVANCE(204);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ADDR);
      END_STATE();
    case 144:
      if (lookahead == 'R') ADVANCE(205);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(206);
      END_STATE();
    case 146:
      if (lookahead == 'Z') ADVANCE(207);
      END_STATE();
    case 147:
      if (lookahead == 'R') ADVANCE(208);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(209);
      END_STATE();
    case 149:
      if (lookahead == 'R') ADVANCE(210);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_BIND);
      END_STATE();
    case 151:
      if (lookahead == 'K') ADVANCE(211);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(212);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 155:
      if (lookahead == 'T') ADVANCE(213);
      END_STATE();
    case 156:
      if (lookahead == '_') ADVANCE(214);
      END_STATE();
    case 157:
      if (lookahead == 'N') ADVANCE(215);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(216);
      END_STATE();
    case 159:
      if (lookahead == 'Y') ADVANCE(217);
      END_STATE();
    case 160:
      if (lookahead == 'R') ADVANCE(218);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_FILL);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(219);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(220);
      END_STATE();
    case 164:
      if (lookahead == 'P') ADVANCE(221);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(222);
      END_STATE();
    case 166:
      if (lookahead == 'U') ADVANCE(223);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 168:
      if (lookahead == 'B') ADVANCE(224);
      END_STATE();
    case 169:
      if (lookahead == 'T') ADVANCE(225);
      END_STATE();
    case 170:
      if (lookahead == 'R') ADVANCE(226);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_KEEP);
      END_STATE();
    case 172:
      if (lookahead == 'E') ADVANCE(227);
      END_STATE();
    case 173:
      if (lookahead == 'E') ADVANCE(228);
      END_STATE();
    case 174:
      if (lookahead == 'A') ADVANCE(229);
      END_STATE();
    case 175:
      if (lookahead == 'C') ADVANCE(230);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LONG);
      END_STATE();
    case 177:
      if (lookahead == 'R') ADVANCE(231);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_NEXT);
      END_STATE();
    case 179:
      if (lookahead == 'O') ADVANCE(232);
      END_STATE();
    case 180:
      if (lookahead == 'O') ADVANCE(233);
      END_STATE();
    case 181:
      if (lookahead == 'A') ADVANCE(234);
      END_STATE();
    case 182:
      if (lookahead == '_') ADVANCE(235);
      END_STATE();
    case 183:
      if (lookahead == 'I') ADVANCE(236);
      END_STATE();
    case 184:
      if (lookahead == 'U') ADVANCE(237);
      END_STATE();
    case 185:
      if (lookahead == 'L') ADVANCE(238);
      END_STATE();
    case 186:
      if (lookahead == 'S') ADVANCE(239);
      END_STATE();
    case 187:
      if (lookahead == 'I') ADVANCE(240);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_QUAD);
      END_STATE();
    case 189:
      if (lookahead == 'O') ADVANCE(241);
      END_STATE();
    case 190:
      if (lookahead == 'O') ADVANCE(242);
      END_STATE();
    case 191:
      if (lookahead == 'C') ADVANCE(243);
      END_STATE();
    case 192:
      if (lookahead == 'I') ADVANCE(244);
      END_STATE();
    case 193:
      if (lookahead == 'E') ADVANCE(245);
      END_STATE();
    case 194:
      if (lookahead == 'T') ADVANCE(246);
      END_STATE();
    case 195:
      if (lookahead == 'O') ADVANCE(247);
      END_STATE();
    case 196:
      if (lookahead == 'I') ADVANCE(248);
      END_STATE();
    case 197:
      if (lookahead == 'D') ADVANCE(249);
      END_STATE();
    case 198:
      if (lookahead == 'T') ADVANCE(250);
      END_STATE();
    case 199:
      if (lookahead == 'L') ADVANCE(251);
      END_STATE();
    case 200:
      if (lookahead == 'I') ADVANCE(252);
      END_STATE();
    case 201:
      if (lookahead == 'E') ADVANCE(253);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_TYPE);
      END_STATE();
    case 203:
      if (lookahead == 'I') ADVANCE(254);
      END_STATE();
    case 204:
      if (lookahead == 'U') ADVANCE(255);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_AFTER);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_ALIGN);
      if (lookahead == 'O') ADVANCE(256);
      if (lookahead == '_') ADVANCE(257);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_ASCIZ);
      END_STATE();
    case 208:
      if (lookahead == 'T') ADVANCE(258);
      END_STATE();
    case 209:
      if (lookahead == 'E') ADVANCE(259);
      END_STATE();
    case 210:
      if (lookahead == 'E') ADVANCE(260);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_BLOCK);
      END_STATE();
    case 212:
      if (lookahead == 'A') ADVANCE(261);
      END_STATE();
    case 213:
      if (lookahead == 'E') ADVANCE(262);
      END_STATE();
    case 214:
      if (lookahead == 'S') ADVANCE(263);
      END_STATE();
    case 215:
      if (lookahead == 'E') ADVANCE(264);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DSECT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_ENTRY);
      END_STATE();
    case 218:
      if (lookahead == 'N') ADVANCE(265);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 220:
      if (lookahead == '_') ADVANCE(266);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_GROUP);
      END_STATE();
    case 222:
      if (lookahead == 'N') ADVANCE(267);
      END_STATE();
    case 223:
      if (lookahead == 'D') ADVANCE(268);
      END_STATE();
    case 224:
      if (lookahead == 'I') ADVANCE(269);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_INPUT);
      if (lookahead == '_') ADVANCE(270);
      END_STATE();
    case 226:
      if (lookahead == 'T') ADVANCE(271);
      END_STATE();
    case 227:
      if (lookahead == 'A') ADVANCE(272);
      END_STATE();
    case 228:
      if (lookahead == 'R') ADVANCE(273);
      END_STATE();
    case 229:
      if (lookahead == 'D') ADVANCE(274);
      END_STATE();
    case 230:
      if (lookahead == 'E') ADVANCE(275);
      END_STATE();
    case 231:
      if (lookahead == 'Y') ADVANCE(276);
      END_STATE();
    case 232:
      if (lookahead == 'S') ADVANCE(277);
      END_STATE();
    case 233:
      if (lookahead == 'A') ADVANCE(278);
      END_STATE();
    case 234:
      if (lookahead == 'D') ADVANCE(279);
      END_STATE();
    case 235:
      if (lookahead == 'I') ADVANCE(280);
      END_STATE();
    case 236:
      if (lookahead == 'N') ADVANCE(281);
      END_STATE();
    case 237:
      if (lookahead == 'T') ADVANCE(282);
      END_STATE();
    case 238:
      if (lookahead == 'A') ADVANCE(283);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_PHDRS);
      END_STATE();
    case 240:
      if (lookahead == 'D') ADVANCE(284);
      END_STATE();
    case 241:
      if (lookahead == 'N') ADVANCE(285);
      END_STATE();
    case 242:
      if (lookahead == 'N') ADVANCE(286);
      END_STATE();
    case 243:
      if (lookahead == 'H') ADVANCE(287);
      END_STATE();
    case 244:
      if (lookahead == 'O') ADVANCE(288);
      END_STATE();
    case 245:
      if (lookahead == 'N') ADVANCE(289);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_SHORT);
      END_STATE();
    case 247:
      if (lookahead == 'F') ADVANCE(290);
      END_STATE();
    case 248:
      if (lookahead == 'A') ADVANCE(291);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SQUAD);
      END_STATE();
    case 250:
      if (lookahead == 'U') ADVANCE(292);
      END_STATE();
    case 251:
      if (lookahead == 'I') ADVANCE(293);
      END_STATE();
    case 252:
      if (lookahead == 'B') ADVANCE(294);
      END_STATE();
    case 253:
      if (lookahead == 'T') ADVANCE(295);
      END_STATE();
    case 254:
      if (lookahead == 'O') ADVANCE(296);
      END_STATE();
    case 255:
      if (lookahead == 'T') ADVANCE(297);
      END_STATE();
    case 256:
      if (lookahead == 'F') ADVANCE(298);
      END_STATE();
    case 257:
      if (lookahead == 'W') ADVANCE(299);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_ASSERT);
      END_STATE();
    case 259:
      if (lookahead == 'D') ADVANCE(300);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_BEFORE);
      END_STATE();
    case 261:
      if (lookahead == 'N') ADVANCE(301);
      END_STATE();
    case 262:
      if (lookahead == '_') ADVANCE(302);
      END_STATE();
    case 263:
      if (lookahead == 'E') ADVANCE(303);
      END_STATE();
    case 264:
      if (lookahead == 'D') ADVANCE(304);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_EXTERN);
      END_STATE();
    case 266:
      if (lookahead == 'C') ADVANCE(305);
      if (lookahead == 'G') ADVANCE(306);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_HIDDEN);
      END_STATE();
    case 268:
      if (lookahead == 'E') ADVANCE(307);
      END_STATE();
    case 269:
      if (lookahead == 'T') ADVANCE(308);
      END_STATE();
    case 270:
      if (lookahead == 'S') ADVANCE(309);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_INSERT);
      END_STATE();
    case 272:
      if (lookahead == 'T') ADVANCE(310);
      END_STATE();
    case 273:
      if (lookahead == '_') ADVANCE(311);
      END_STATE();
    case 274:
      if (lookahead == 'D') ADVANCE(312);
      END_STATE();
    case 275:
      if (lookahead == 'I') ADVANCE(313);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_MEMORY);
      END_STATE();
    case 277:
      if (lookahead == 'S') ADVANCE(314);
      END_STATE();
    case 278:
      if (lookahead == 'T') ADVANCE(315);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_NOLOAD);
      END_STATE();
    case 280:
      if (lookahead == 'F') ADVANCE(316);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_ORIGIN);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_OUTPUT);
      if (lookahead == '_') ADVANCE(317);
      END_STATE();
    case 283:
      if (lookahead == 'Y') ADVANCE(318);
      END_STATE();
    case 284:
      if (lookahead == 'E') ADVANCE(319);
      END_STATE();
    case 285:
      if (lookahead == 'L') ADVANCE(320);
      END_STATE();
    case 286:
      if (lookahead == '_') ADVANCE(321);
      END_STATE();
    case 287:
      if (lookahead == '_') ADVANCE(322);
      END_STATE();
    case 288:
      if (lookahead == 'N') ADVANCE(323);
      END_STATE();
    case 289:
      if (lookahead == 'T') ADVANCE(324);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_SIZEOF);
      if (lookahead == '_') ADVANCE(325);
      END_STATE();
    case 291:
      if (lookahead == 'L') ADVANCE(326);
      END_STATE();
    case 292:
      if (lookahead == 'P') ADVANCE(327);
      END_STATE();
    case 293:
      if (lookahead == 'G') ADVANCE(328);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_SYSLIB);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_TARGET);
      END_STATE();
    case 296:
      if (lookahead == 'N') ADVANCE(329);
      END_STATE();
    case 297:
      if (lookahead == 'E') ADVANCE(330);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_ALIGNOF);
      END_STATE();
    case 299:
      if (lookahead == 'I') ADVANCE(331);
      END_STATE();
    case 300:
      if (lookahead == 'E') ADVANCE(332);
      END_STATE();
    case 301:
      if (lookahead == 'T') ADVANCE(333);
      END_STATE();
    case 302:
      if (lookahead == 'O') ADVANCE(334);
      END_STATE();
    case 303:
      if (lookahead == 'G') ADVANCE(335);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DEFINED);
      END_STATE();
    case 305:
      if (lookahead == 'O') ADVANCE(336);
      END_STATE();
    case 306:
      if (lookahead == 'R') ADVANCE(337);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 308:
      if (lookahead == '_') ADVANCE(338);
      END_STATE();
    case 309:
      if (lookahead == 'E') ADVANCE(339);
      END_STATE();
    case 310:
      if (lookahead == 'U') ADVANCE(340);
      END_STATE();
    case 311:
      if (lookahead == 'V') ADVANCE(341);
      END_STATE();
    case 312:
      if (lookahead == 'R') ADVANCE(342);
      END_STATE();
    case 313:
      if (lookahead == 'L') ADVANCE(343);
      END_STATE();
    case 314:
      if (lookahead == 'R') ADVANCE(344);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_NOFLOAT);
      END_STATE();
    case 316:
      if (lookahead == '_') ADVANCE(345);
      END_STATE();
    case 317:
      if (lookahead == 'A') ADVANCE(346);
      if (lookahead == 'F') ADVANCE(347);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_OVERLAY);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_PROVIDE);
      if (lookahead == '_') ADVANCE(348);
      END_STATE();
    case 320:
      if (lookahead == 'Y') ADVANCE(349);
      END_STATE();
    case 321:
      if (lookahead == 'A') ADVANCE(350);
      END_STATE();
    case 322:
      if (lookahead == 'D') ADVANCE(351);
      END_STATE();
    case 323:
      if (lookahead == 'S') ADVANCE(352);
      END_STATE();
    case 324:
      if (lookahead == '_') ADVANCE(353);
      END_STATE();
    case 325:
      if (lookahead == 'H') ADVANCE(354);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_SPECIAL);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_STARTUP);
      END_STATE();
    case 328:
      if (lookahead == 'N') ADVANCE(355);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_ABSOLUTE);
      END_STATE();
    case 331:
      if (lookahead == 'T') ADVANCE(356);
      END_STATE();
    case 332:
      if (lookahead == 'D') ADVANCE(357);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_CONSTANT);
      END_STATE();
    case 334:
      if (lookahead == 'B') ADVANCE(358);
      END_STATE();
    case 335:
      if (lookahead == 'M') ADVANCE(359);
      END_STATE();
    case 336:
      if (lookahead == 'M') ADVANCE(360);
      END_STATE();
    case 337:
      if (lookahead == 'O') ADVANCE(361);
      END_STATE();
    case 338:
      if (lookahead == 'C') ADVANCE(362);
      END_STATE();
    case 339:
      if (lookahead == 'C') ADVANCE(363);
      END_STATE();
    case 340:
      if (lookahead == 'R') ADVANCE(364);
      END_STATE();
    case 341:
      if (lookahead == 'E') ADVANCE(365);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LOADADDR);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LOG2CEIL);
      END_STATE();
    case 344:
      if (lookahead == 'E') ADVANCE(366);
      END_STATE();
    case 345:
      if (lookahead == 'R') ADVANCE(367);
      END_STATE();
    case 346:
      if (lookahead == 'R') ADVANCE(368);
      END_STATE();
    case 347:
      if (lookahead == 'O') ADVANCE(369);
      END_STATE();
    case 348:
      if (lookahead == 'H') ADVANCE(370);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_READONLY);
      END_STATE();
    case 350:
      if (lookahead == 'L') ADVANCE(371);
      END_STATE();
    case 351:
      if (lookahead == 'I') ADVANCE(372);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_SECTIONS);
      END_STATE();
    case 353:
      if (lookahead == 'S') ADVANCE(373);
      END_STATE();
    case 354:
      if (lookahead == 'E') ADVANCE(374);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_SUBALIGN);
      END_STATE();
    case 356:
      if (lookahead == 'H') ADVANCE(375);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_AS_NEEDED);
      END_STATE();
    case 358:
      if (lookahead == 'J') ADVANCE(376);
      END_STATE();
    case 359:
      if (lookahead == 'E') ADVANCE(377);
      END_STATE();
    case 360:
      if (lookahead == 'M') ADVANCE(378);
      END_STATE();
    case 361:
      if (lookahead == 'U') ADVANCE(379);
      END_STATE();
    case 362:
      if (lookahead == 'O') ADVANCE(380);
      END_STATE();
    case 363:
      if (lookahead == 'T') ADVANCE(381);
      END_STATE();
    case 364:
      if (lookahead == 'E') ADVANCE(382);
      END_STATE();
    case 365:
      if (lookahead == 'R') ADVANCE(383);
      END_STATE();
    case 366:
      if (lookahead == 'F') ADVANCE(384);
      END_STATE();
    case 367:
      if (lookahead == 'O') ADVANCE(385);
      if (lookahead == 'W') ADVANCE(386);
      END_STATE();
    case 368:
      if (lookahead == 'C') ADVANCE(387);
      END_STATE();
    case 369:
      if (lookahead == 'R') ADVANCE(388);
      END_STATE();
    case 370:
      if (lookahead == 'I') ADVANCE(389);
      END_STATE();
    case 371:
      if (lookahead == 'I') ADVANCE(390);
      END_STATE();
    case 372:
      if (lookahead == 'R') ADVANCE(391);
      END_STATE();
    case 373:
      if (lookahead == 'T') ADVANCE(392);
      END_STATE();
    case 374:
      if (lookahead == 'A') ADVANCE(393);
      END_STATE();
    case 375:
      if (lookahead == '_') ADVANCE(394);
      END_STATE();
    case 376:
      if (lookahead == 'E') ADVANCE(395);
      END_STATE();
    case 377:
      if (lookahead == 'N') ADVANCE(396);
      END_STATE();
    case 378:
      if (lookahead == 'O') ADVANCE(397);
      END_STATE();
    case 379:
      if (lookahead == 'P') ADVANCE(398);
      END_STATE();
    case 380:
      if (lookahead == 'M') ADVANCE(399);
      END_STATE();
    case 381:
      if (lookahead == 'I') ADVANCE(400);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_LD_FEATURE);
      END_STATE();
    case 383:
      if (lookahead == 'S') ADVANCE(401);
      END_STATE();
    case 384:
      if (lookahead == 'S') ADVANCE(402);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_ONLY_IF_RO);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_ONLY_IF_RW);
      END_STATE();
    case 387:
      if (lookahead == 'H') ADVANCE(403);
      END_STATE();
    case 388:
      if (lookahead == 'M') ADVANCE(404);
      END_STATE();
    case 389:
      if (lookahead == 'D') ADVANCE(405);
      END_STATE();
    case 390:
      if (lookahead == 'A') ADVANCE(406);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_SEARCH_DIR);
      END_STATE();
    case 392:
      if (lookahead == 'A') ADVANCE(407);
      END_STATE();
    case 393:
      if (lookahead == 'D') ADVANCE(408);
      END_STATE();
    case 394:
      if (lookahead == 'I') ADVANCE(409);
      END_STATE();
    case 395:
      if (lookahead == 'C') ADVANCE(410);
      END_STATE();
    case 396:
      if (lookahead == 'T') ADVANCE(411);
      END_STATE();
    case 397:
      if (lookahead == 'N') ADVANCE(412);
      END_STATE();
    case 398:
      if (lookahead == '_') ADVANCE(413);
      END_STATE();
    case 399:
      if (lookahead == 'M') ADVANCE(414);
      END_STATE();
    case 400:
      if (lookahead == 'O') ADVANCE(415);
      END_STATE();
    case 401:
      if (lookahead == 'I') ADVANCE(416);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_NOCROSSREFS);
      if (lookahead == '_') ADVANCE(417);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_OUTPUT_ARCH);
      END_STATE();
    case 404:
      if (lookahead == 'A') ADVANCE(418);
      END_STATE();
    case 405:
      if (lookahead == 'D') ADVANCE(419);
      END_STATE();
    case 406:
      if (lookahead == 'S') ADVANCE(420);
      END_STATE();
    case 407:
      if (lookahead == 'R') ADVANCE(421);
      END_STATE();
    case 408:
      if (lookahead == 'E') ADVANCE(422);
      END_STATE();
    case 409:
      if (lookahead == 'N') ADVANCE(423);
      END_STATE();
    case 410:
      if (lookahead == 'T') ADVANCE(424);
      END_STATE();
    case 411:
      if (lookahead == '_') ADVANCE(425);
      END_STATE();
    case 412:
      if (lookahead == '_') ADVANCE(426);
      END_STATE();
    case 413:
      if (lookahead == 'A') ADVANCE(427);
      END_STATE();
    case 414:
      if (lookahead == 'O') ADVANCE(428);
      END_STATE();
    case 415:
      if (lookahead == 'N') ADVANCE(429);
      END_STATE();
    case 416:
      if (lookahead == 'O') ADVANCE(430);
      END_STATE();
    case 417:
      if (lookahead == 'T') ADVANCE(431);
      END_STATE();
    case 418:
      if (lookahead == 'T') ADVANCE(432);
      END_STATE();
    case 419:
      if (lookahead == 'E') ADVANCE(433);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_REGION_ALIAS);
      END_STATE();
    case 421:
      if (lookahead == 'T') ADVANCE(434);
      END_STATE();
    case 422:
      if (lookahead == 'R') ADVANCE(435);
      END_STATE();
    case 423:
      if (lookahead == 'P') ADVANCE(436);
      END_STATE();
    case 424:
      if (lookahead == '_') ADVANCE(437);
      END_STATE();
    case 425:
      if (lookahead == 'A') ADVANCE(438);
      if (lookahead == 'E') ADVANCE(439);
      if (lookahead == 'R') ADVANCE(440);
      END_STATE();
    case 426:
      if (lookahead == 'A') ADVANCE(441);
      END_STATE();
    case 427:
      if (lookahead == 'L') ADVANCE(442);
      END_STATE();
    case 428:
      if (lookahead == 'N') ADVANCE(443);
      END_STATE();
    case 429:
      if (lookahead == '_') ADVANCE(444);
      END_STATE();
    case 430:
      if (lookahead == 'N') ADVANCE(445);
      END_STATE();
    case 431:
      if (lookahead == 'O') ADVANCE(446);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_OUTPUT_FORMAT);
      END_STATE();
    case 433:
      if (lookahead == 'N') ADVANCE(447);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_SEGMENT_START);
      END_STATE();
    case 435:
      if (lookahead == 'S') ADVANCE(448);
      END_STATE();
    case 436:
      if (lookahead == 'U') ADVANCE(449);
      END_STATE();
    case 437:
      if (lookahead == 'S') ADVANCE(450);
      END_STATE();
    case 438:
      if (lookahead == 'L') ADVANCE(451);
      END_STATE();
    case 439:
      if (lookahead == 'N') ADVANCE(452);
      END_STATE();
    case 440:
      if (lookahead == 'E') ADVANCE(453);
      END_STATE();
    case 441:
      if (lookahead == 'L') ADVANCE(454);
      END_STATE();
    case 442:
      if (lookahead == 'L') ADVANCE(455);
      END_STATE();
    case 443:
      if (lookahead == '_') ADVANCE(456);
      END_STATE();
    case 444:
      if (lookahead == 'F') ADVANCE(457);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_LINKER_VERSION);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_NOCROSSREFS_TO);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_PROVIDE_HIDDEN);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_SIZEOF_HEADERS);
      END_STATE();
    case 449:
      if (lookahead == 'T') ADVANCE(458);
      END_STATE();
    case 450:
      if (lookahead == 'Y') ADVANCE(459);
      END_STATE();
    case 451:
      if (lookahead == 'I') ADVANCE(460);
      END_STATE();
    case 452:
      if (lookahead == 'D') ADVANCE(461);
      END_STATE();
    case 453:
      if (lookahead == 'L') ADVANCE(462);
      END_STATE();
    case 454:
      if (lookahead == 'L') ADVANCE(463);
      END_STATE();
    case 455:
      if (lookahead == 'O') ADVANCE(464);
      END_STATE();
    case 456:
      if (lookahead == 'A') ADVANCE(465);
      END_STATE();
    case 457:
      if (lookahead == 'L') ADVANCE(466);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_ALIGN_WITH_INPUT);
      END_STATE();
    case 459:
      if (lookahead == 'M') ADVANCE(467);
      END_STATE();
    case 460:
      if (lookahead == 'G') ADVANCE(468);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_DATA_SEGMENT_END);
      END_STATE();
    case 462:
      if (lookahead == 'R') ADVANCE(469);
      END_STATE();
    case 463:
      if (lookahead == 'O') ADVANCE(470);
      END_STATE();
    case 464:
      if (lookahead == 'C') ADVANCE(471);
      END_STATE();
    case 465:
      if (lookahead == 'L') ADVANCE(472);
      END_STATE();
    case 466:
      if (lookahead == 'A') ADVANCE(473);
      END_STATE();
    case 467:
      if (lookahead == 'B') ADVANCE(474);
      END_STATE();
    case 468:
      if (lookahead == 'N') ADVANCE(475);
      END_STATE();
    case 469:
      if (lookahead == 'O') ADVANCE(476);
      END_STATE();
    case 470:
      if (lookahead == 'C') ADVANCE(477);
      END_STATE();
    case 471:
      if (lookahead == 'A') ADVANCE(478);
      END_STATE();
    case 472:
      if (lookahead == 'L') ADVANCE(479);
      END_STATE();
    case 473:
      if (lookahead == 'G') ADVANCE(480);
      END_STATE();
    case 474:
      if (lookahead == 'O') ADVANCE(481);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_DATA_SEGMENT_ALIGN);
      END_STATE();
    case 476:
      if (lookahead == '_') ADVANCE(482);
      END_STATE();
    case 477:
      if (lookahead == 'A') ADVANCE(483);
      END_STATE();
    case 478:
      if (lookahead == 'T') ADVANCE(484);
      END_STATE();
    case 479:
      if (lookahead == 'O') ADVANCE(485);
      END_STATE();
    case 480:
      if (lookahead == 'S') ADVANCE(486);
      END_STATE();
    case 481:
      if (lookahead == 'L') ADVANCE(487);
      END_STATE();
    case 482:
      if (lookahead == 'E') ADVANCE(488);
      END_STATE();
    case 483:
      if (lookahead == 'T') ADVANCE(489);
      END_STATE();
    case 484:
      if (lookahead == 'I') ADVANCE(490);
      END_STATE();
    case 485:
      if (lookahead == 'C') ADVANCE(491);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_INPUT_SECTION_FLAGS);
      END_STATE();
    case 487:
      if (lookahead == 'S') ADVANCE(492);
      END_STATE();
    case 488:
      if (lookahead == 'N') ADVANCE(493);
      END_STATE();
    case 489:
      if (lookahead == 'I') ADVANCE(494);
      END_STATE();
    case 490:
      if (lookahead == 'O') ADVANCE(495);
      END_STATE();
    case 491:
      if (lookahead == 'A') ADVANCE(496);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_CREATE_OBJECT_SYMBOLS);
      END_STATE();
    case 493:
      if (lookahead == 'D') ADVANCE(497);
      END_STATE();
    case 494:
      if (lookahead == 'O') ADVANCE(498);
      END_STATE();
    case 495:
      if (lookahead == 'N') ADVANCE(499);
      END_STATE();
    case 496:
      if (lookahead == 'T') ADVANCE(500);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_DATA_SEGMENT_RELRO_END);
      END_STATE();
    case 498:
      if (lookahead == 'N') ADVANCE(501);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_FORCE_GROUP_ALLOCATION);
      END_STATE();
    case 500:
      if (lookahead == 'I') ADVANCE(502);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_FORCE_COMMON_ALLOCATION);
      END_STATE();
    case 502:
      if (lookahead == 'O') ADVANCE(503);
      END_STATE();
    case 503:
      if (lookahead == 'N') ADVANCE(504);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_INHIBIT_COMMON_ALLOCATION);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 49},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 49},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 49},
  [23] = {.lex_state = 49},
  [24] = {.lex_state = 49},
  [25] = {.lex_state = 49},
  [26] = {.lex_state = 49},
  [27] = {.lex_state = 49},
  [28] = {.lex_state = 49},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 49},
  [32] = {.lex_state = 49},
  [33] = {.lex_state = 49},
  [34] = {.lex_state = 49},
  [35] = {.lex_state = 49},
  [36] = {.lex_state = 49},
  [37] = {.lex_state = 49},
  [38] = {.lex_state = 49},
  [39] = {.lex_state = 49},
  [40] = {.lex_state = 49},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 49},
  [157] = {.lex_state = 49},
  [158] = {.lex_state = 49},
  [159] = {.lex_state = 49},
  [160] = {.lex_state = 49},
  [161] = {.lex_state = 49},
  [162] = {.lex_state = 49},
  [163] = {.lex_state = 49},
  [164] = {.lex_state = 49},
  [165] = {.lex_state = 49},
  [166] = {.lex_state = 49},
  [167] = {.lex_state = 49},
  [168] = {.lex_state = 49},
  [169] = {.lex_state = 49},
  [170] = {.lex_state = 49},
  [171] = {.lex_state = 49},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 15},
  [175] = {.lex_state = 15},
  [176] = {.lex_state = 49},
  [177] = {.lex_state = 49},
  [178] = {.lex_state = 49},
  [179] = {.lex_state = 49},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 49},
  [182] = {.lex_state = 15},
  [183] = {.lex_state = 49},
  [184] = {.lex_state = 49},
  [185] = {.lex_state = 49},
  [186] = {.lex_state = 49},
  [187] = {.lex_state = 49},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 49},
  [190] = {.lex_state = 49},
  [191] = {.lex_state = 49},
  [192] = {.lex_state = 49},
  [193] = {.lex_state = 49},
  [194] = {.lex_state = 49},
  [195] = {.lex_state = 49},
  [196] = {.lex_state = 49},
  [197] = {.lex_state = 49},
  [198] = {.lex_state = 49},
  [199] = {.lex_state = 49},
  [200] = {.lex_state = 49},
  [201] = {.lex_state = 49},
  [202] = {.lex_state = 49},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 18},
  [205] = {.lex_state = 18},
  [206] = {.lex_state = 18},
  [207] = {.lex_state = 18},
  [208] = {.lex_state = 18},
  [209] = {.lex_state = 18},
  [210] = {.lex_state = 49},
  [211] = {.lex_state = 18},
  [212] = {.lex_state = 49},
  [213] = {.lex_state = 49},
  [214] = {.lex_state = 49},
  [215] = {.lex_state = 49},
  [216] = {.lex_state = 18},
  [217] = {.lex_state = 49},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 18},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 49},
  [222] = {.lex_state = 49},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 49},
  [225] = {.lex_state = 49},
  [226] = {.lex_state = 49},
  [227] = {.lex_state = 49},
  [228] = {.lex_state = 49},
  [229] = {.lex_state = 49},
  [230] = {.lex_state = 15},
  [231] = {.lex_state = 49},
  [232] = {.lex_state = 15},
  [233] = {.lex_state = 49},
  [234] = {.lex_state = 49},
  [235] = {.lex_state = 10},
  [236] = {.lex_state = 15},
  [237] = {.lex_state = 49},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 49},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 15},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 49},
  [244] = {.lex_state = 49},
  [245] = {.lex_state = 15},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 15},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 49},
  [250] = {.lex_state = 10},
  [251] = {.lex_state = 49},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 49},
  [254] = {.lex_state = 15},
  [255] = {.lex_state = 15},
  [256] = {.lex_state = 49},
  [257] = {.lex_state = 49},
  [258] = {.lex_state = 49},
  [259] = {.lex_state = 49},
  [260] = {.lex_state = 49},
  [261] = {.lex_state = 19},
  [262] = {.lex_state = 7},
  [263] = {.lex_state = 49},
  [264] = {.lex_state = 49},
  [265] = {.lex_state = 49},
  [266] = {.lex_state = 49},
  [267] = {.lex_state = 19},
  [268] = {.lex_state = 49},
  [269] = {.lex_state = 49},
  [270] = {.lex_state = 49},
  [271] = {.lex_state = 24},
  [272] = {.lex_state = 49},
  [273] = {.lex_state = 24},
  [274] = {.lex_state = 49},
  [275] = {.lex_state = 49},
  [276] = {.lex_state = 49},
  [277] = {.lex_state = 49},
  [278] = {.lex_state = 49},
  [279] = {.lex_state = 49},
  [280] = {.lex_state = 49},
  [281] = {.lex_state = 49},
  [282] = {.lex_state = 49},
  [283] = {.lex_state = 21},
  [284] = {.lex_state = 49},
  [285] = {.lex_state = 49},
  [286] = {.lex_state = 49},
  [287] = {.lex_state = 49},
  [288] = {.lex_state = 49},
  [289] = {.lex_state = 49},
  [290] = {.lex_state = 17},
  [291] = {.lex_state = 49},
  [292] = {.lex_state = 49},
  [293] = {.lex_state = 21},
  [294] = {.lex_state = 49},
  [295] = {.lex_state = 49},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 49},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 49},
  [300] = {.lex_state = 20},
  [301] = {.lex_state = 49},
  [302] = {.lex_state = 49},
  [303] = {.lex_state = 24},
  [304] = {.lex_state = 49},
  [305] = {.lex_state = 24},
  [306] = {.lex_state = 49},
  [307] = {.lex_state = 24},
  [308] = {.lex_state = 49},
  [309] = {.lex_state = 24},
  [310] = {.lex_state = 49},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 24},
  [314] = {.lex_state = 49},
  [315] = {.lex_state = 20},
  [316] = {.lex_state = 24},
  [317] = {.lex_state = 49},
  [318] = {.lex_state = 49},
  [319] = {.lex_state = 24},
  [320] = {.lex_state = 49},
  [321] = {.lex_state = 24},
  [322] = {.lex_state = 49},
  [323] = {.lex_state = 24},
  [324] = {.lex_state = 22},
  [325] = {.lex_state = 20},
  [326] = {.lex_state = 20},
  [327] = {.lex_state = 49},
  [328] = {.lex_state = 49},
  [329] = {.lex_state = 49},
  [330] = {.lex_state = 24},
  [331] = {.lex_state = 24},
  [332] = {.lex_state = 49},
  [333] = {.lex_state = 9},
  [334] = {.lex_state = 49},
  [335] = {.lex_state = 49},
  [336] = {.lex_state = 49},
  [337] = {.lex_state = 49},
  [338] = {.lex_state = 20},
  [339] = {.lex_state = 9},
  [340] = {.lex_state = 4},
  [341] = {.lex_state = 49},
  [342] = {.lex_state = 49},
  [343] = {.lex_state = 49},
  [344] = {.lex_state = 49},
  [345] = {.lex_state = 49},
  [346] = {.lex_state = 49},
  [347] = {.lex_state = 49},
  [348] = {.lex_state = 49},
  [349] = {.lex_state = 49},
  [350] = {.lex_state = 49},
  [351] = {.lex_state = 49},
  [352] = {.lex_state = 49},
  [353] = {.lex_state = 49},
  [354] = {.lex_state = 9},
  [355] = {.lex_state = 49},
  [356] = {.lex_state = 49},
  [357] = {.lex_state = 49},
  [358] = {.lex_state = 49},
  [359] = {.lex_state = 49},
  [360] = {.lex_state = 49},
  [361] = {.lex_state = 49},
  [362] = {.lex_state = 4},
  [363] = {.lex_state = 49},
  [364] = {.lex_state = 49},
  [365] = {.lex_state = 49},
  [366] = {.lex_state = 49},
  [367] = {.lex_state = 49},
  [368] = {.lex_state = 49},
  [369] = {.lex_state = 49},
  [370] = {.lex_state = 49},
  [371] = {.lex_state = 4},
  [372] = {.lex_state = 49},
  [373] = {.lex_state = 49},
  [374] = {.lex_state = 23},
  [375] = {.lex_state = 9},
  [376] = {.lex_state = 49},
  [377] = {.lex_state = 23},
  [378] = {.lex_state = 49},
  [379] = {.lex_state = 49},
  [380] = {.lex_state = 23},
  [381] = {.lex_state = 49},
  [382] = {.lex_state = 49},
  [383] = {.lex_state = 23},
  [384] = {.lex_state = 9},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 49},
  [387] = {.lex_state = 49},
  [388] = {.lex_state = 9},
  [389] = {.lex_state = 9},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 49},
  [392] = {.lex_state = 11},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 49},
  [396] = {.lex_state = 9},
  [397] = {.lex_state = 11},
  [398] = {.lex_state = 49},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 49},
  [401] = {.lex_state = 49},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 11},
  [404] = {.lex_state = 49},
  [405] = {.lex_state = 49},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 49},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 49},
  [410] = {.lex_state = 11},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 49},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 9},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 49},
  [417] = {.lex_state = 49},
  [418] = {.lex_state = 11},
  [419] = {.lex_state = 49},
  [420] = {.lex_state = 49},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 49},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 49},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 49},
  [428] = {.lex_state = 49},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 49},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 49},
  [434] = {.lex_state = 49},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 49},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 49},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 49},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 49},
  [448] = {.lex_state = 49},
  [449] = {.lex_state = 49},
  [450] = {.lex_state = 49},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 49},
  [453] = {.lex_state = 49},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 49},
  [457] = {.lex_state = 11},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 49},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 49},
  [468] = {.lex_state = 49},
  [469] = {.lex_state = 49},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 11},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 11},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 49},
  [503] = {.lex_state = 49},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 49},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 9},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 9},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 49},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 49},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 49},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 49},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 49},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 9},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 49},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 9},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 49},
  [580] = {.lex_state = 49},
  [581] = {.lex_state = 49},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 49},
  [587] = {.lex_state = 49},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 49},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 9},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 49},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 49},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 49},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 11},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 11},
  [629] = {.lex_state = 49},
  [630] = {.lex_state = 49},
  [631] = {.lex_state = 49},
  [632] = {.lex_state = 49},
  [633] = {.lex_state = 49},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 49},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 49},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_NAME] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_TARGET] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEARCH_DIR] = ACTIONS(1),
    [anon_sym_OUTPUT] = ACTIONS(1),
    [anon_sym_OUTPUT_FORMAT] = ACTIONS(1),
    [anon_sym_OUTPUT_ARCH] = ACTIONS(1),
    [anon_sym_FORCE_COMMON_ALLOCATION] = ACTIONS(1),
    [anon_sym_FORCE_GROUP_ALLOCATION] = ACTIONS(1),
    [anon_sym_INHIBIT_COMMON_ALLOCATION] = ACTIONS(1),
    [anon_sym_INPUT] = ACTIONS(1),
    [anon_sym_GROUP] = ACTIONS(1),
    [anon_sym_MAP] = ACTIONS(1),
    [anon_sym_INCLUDE] = ACTIONS(1),
    [anon_sym_NOCROSSREFS] = ACTIONS(1),
    [anon_sym_NOCROSSREFS_TO] = ACTIONS(1),
    [anon_sym_EXTERN] = ACTIONS(1),
    [anon_sym_INSERT] = ACTIONS(1),
    [anon_sym_AFTER] = ACTIONS(1),
    [anon_sym_BEFORE] = ACTIONS(1),
    [anon_sym_REGION_ALIAS] = ACTIONS(1),
    [anon_sym_LD_FEATURE] = ACTIONS(1),
    [anon_sym_AS_NEEDED] = ACTIONS(1),
    [anon_sym_SECTIONS] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_ENTRY] = ACTIONS(1),
    [anon_sym_ASSERT] = ACTIONS(1),
    [anon_sym_SORT_BY_NAME] = ACTIONS(1),
    [anon_sym_SORT] = ACTIONS(1),
    [anon_sym_SORT_BY_ALIGNMENT] = ACTIONS(1),
    [anon_sym_SORT_NONE] = ACTIONS(1),
    [anon_sym_SORT_BY_INIT_PRIORITY] = ACTIONS(1),
    [anon_sym_REVERSE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_INPUT_SECTION_FLAGS] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_KEEP] = ACTIONS(1),
    [anon_sym_CREATE_OBJECT_SYMBOLS] = ACTIONS(1),
    [anon_sym_ASCIZ] = ACTIONS(1),
    [anon_sym_FILL] = ACTIONS(1),
    [anon_sym_LINKER_VERSION] = ACTIONS(1),
    [anon_sym_QUAD] = ACTIONS(1),
    [anon_sym_SQUAD] = ACTIONS(1),
    [anon_sym_LONG] = ACTIONS(1),
    [anon_sym_SHORT] = ACTIONS(1),
    [anon_sym_BYTE] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_HIDDEN] = ACTIONS(1),
    [anon_sym_PROVIDE] = ACTIONS(1),
    [anon_sym_PROVIDE_HIDDEN] = ACTIONS(1),
    [anon_sym_MEMORY] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_ORIGIN] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_org] = ACTIONS(1),
    [anon_sym_LENGTH] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_len] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STARTUP] = ACTIONS(1),
    [anon_sym_HLL] = ACTIONS(1),
    [anon_sym_SYSLIB] = ACTIONS(1),
    [anon_sym_FLOAT] = ACTIONS(1),
    [anon_sym_NOFLOAT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_NEXT] = ACTIONS(1),
    [anon_sym_ABSOLUTE] = ACTIONS(1),
    [anon_sym_DATA_SEGMENT_END] = ACTIONS(1),
    [anon_sym_BLOCK] = ACTIONS(1),
    [anon_sym_LOG2CEIL] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DEFINED] = ACTIONS(1),
    [anon_sym_CONSTANT] = ACTIONS(1),
    [anon_sym_SIZEOF_HEADERS] = ACTIONS(1),
    [anon_sym_ALIGNOF] = ACTIONS(1),
    [anon_sym_SIZEOF] = ACTIONS(1),
    [anon_sym_ADDR] = ACTIONS(1),
    [anon_sym_LOADADDR] = ACTIONS(1),
    [anon_sym_ALIGN] = ACTIONS(1),
    [anon_sym_DATA_SEGMENT_ALIGN] = ACTIONS(1),
    [anon_sym_DATA_SEGMENT_RELRO_END] = ACTIONS(1),
    [anon_sym_MAX] = ACTIONS(1),
    [anon_sym_MIN] = ACTIONS(1),
    [anon_sym_SEGMENT_START] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SUBALIGN] = ACTIONS(1),
    [anon_sym_ONLY_IF_RO] = ACTIONS(1),
    [anon_sym_ONLY_IF_RW] = ACTIONS(1),
    [anon_sym_SPECIAL] = ACTIONS(1),
    [anon_sym_ALIGN_WITH_INPUT] = ACTIONS(1),
    [anon_sym_OVERLAY] = ACTIONS(1),
    [anon_sym_NOLOAD] = ACTIONS(1),
    [anon_sym_DSECT] = ACTIONS(1),
    [anon_sym_COPY] = ACTIONS(1),
    [anon_sym_INFO] = ACTIONS(1),
    [anon_sym_READONLY] = ACTIONS(1),
    [anon_sym_TYPE] = ACTIONS(1),
    [anon_sym_BIND] = ACTIONS(1),
    [anon_sym_PHDRS] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [aux_sym_INT_token1] = ACTIONS(1),
    [aux_sym_INT_token2] = ACTIONS(1),
    [aux_sym_INT_token3] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_script_file] = STATE(634),
    [sym_ifile_p1] = STATE(4),
    [sym_sections] = STATE(27),
    [sym_statement_anywhere] = STATE(27),
    [sym_assignment] = STATE(415),
    [sym_memory] = STATE(27),
    [sym_startup] = STATE(27),
    [sym_high_level_library] = STATE(27),
    [sym_low_level_library] = STATE(27),
    [sym_floating_point_support] = STATE(27),
    [sym_phdrs] = STATE(27),
    [sym_version] = STATE(27),
    [aux_sym_script_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_NAME] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_TARGET] = ACTIONS(11),
    [anon_sym_SEARCH_DIR] = ACTIONS(13),
    [anon_sym_OUTPUT] = ACTIONS(13),
    [anon_sym_OUTPUT_FORMAT] = ACTIONS(15),
    [anon_sym_OUTPUT_ARCH] = ACTIONS(11),
    [anon_sym_FORCE_COMMON_ALLOCATION] = ACTIONS(17),
    [anon_sym_FORCE_GROUP_ALLOCATION] = ACTIONS(17),
    [anon_sym_INHIBIT_COMMON_ALLOCATION] = ACTIONS(17),
    [anon_sym_INPUT] = ACTIONS(19),
    [anon_sym_GROUP] = ACTIONS(19),
    [anon_sym_MAP] = ACTIONS(13),
    [anon_sym_INCLUDE] = ACTIONS(21),
    [anon_sym_NOCROSSREFS] = ACTIONS(23),
    [anon_sym_NOCROSSREFS_TO] = ACTIONS(23),
    [anon_sym_EXTERN] = ACTIONS(25),
    [anon_sym_INSERT] = ACTIONS(27),
    [anon_sym_REGION_ALIAS] = ACTIONS(29),
    [anon_sym_LD_FEATURE] = ACTIONS(11),
    [anon_sym_SECTIONS] = ACTIONS(31),
    [anon_sym_ENTRY] = ACTIONS(33),
    [anon_sym_ASSERT] = ACTIONS(35),
    [anon_sym_HIDDEN] = ACTIONS(37),
    [anon_sym_PROVIDE] = ACTIONS(37),
    [anon_sym_PROVIDE_HIDDEN] = ACTIONS(37),
    [anon_sym_MEMORY] = ACTIONS(39),
    [anon_sym_STARTUP] = ACTIONS(41),
    [anon_sym_HLL] = ACTIONS(43),
    [anon_sym_SYSLIB] = ACTIONS(45),
    [anon_sym_FLOAT] = ACTIONS(47),
    [anon_sym_NOFLOAT] = ACTIONS(47),
    [anon_sym_PHDRS] = ACTIONS(49),
    [anon_sym_VERSION] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_NAME,
    ACTIONS(58), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      anon_sym_OUTPUT_FORMAT,
    ACTIONS(76), 1,
      anon_sym_INCLUDE,
    ACTIONS(82), 1,
      anon_sym_EXTERN,
    ACTIONS(85), 1,
      anon_sym_INSERT,
    ACTIONS(88), 1,
      anon_sym_REGION_ALIAS,
    ACTIONS(91), 1,
      anon_sym_SECTIONS,
    ACTIONS(94), 1,
      anon_sym_ENTRY,
    ACTIONS(97), 1,
      anon_sym_ASSERT,
    ACTIONS(103), 1,
      anon_sym_MEMORY,
    ACTIONS(106), 1,
      anon_sym_STARTUP,
    ACTIONS(109), 1,
      anon_sym_HLL,
    ACTIONS(112), 1,
      anon_sym_SYSLIB,
    ACTIONS(118), 1,
      anon_sym_PHDRS,
    ACTIONS(121), 1,
      anon_sym_VERSION,
    STATE(415), 1,
      sym_assignment,
    ACTIONS(73), 2,
      anon_sym_INPUT,
      anon_sym_GROUP,
    ACTIONS(79), 2,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
    ACTIONS(115), 2,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
    STATE(2), 2,
      sym_ifile_p1,
      aux_sym_script_file_repeat1,
    ACTIONS(61), 3,
      anon_sym_TARGET,
      anon_sym_OUTPUT_ARCH,
      anon_sym_LD_FEATURE,
    ACTIONS(64), 3,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_MAP,
    ACTIONS(70), 3,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
    ACTIONS(100), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    STATE(27), 9,
      sym_sections,
      sym_statement_anywhere,
      sym_memory,
      sym_startup,
      sym_high_level_library,
      sym_low_level_library,
      sym_floating_point_support,
      sym_phdrs,
      sym_version,
  [105] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(132), 1,
      anon_sym_SLASH_EQ,
    ACTIONS(134), 1,
      anon_sym_EQ,
    ACTIONS(136), 1,
      anon_sym_COLON,
    ACTIONS(140), 1,
      anon_sym_BANG,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(154), 1,
      anon_sym_BIND,
    STATE(61), 1,
      sym_assign_op,
    STATE(114), 1,
      sym_INT,
    STATE(128), 1,
      sym_exp,
    STATE(202), 1,
      sym_opt_exp_with_type,
    STATE(584), 1,
      sym_atype,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(142), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_TILDE,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
    ACTIONS(130), 8,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
  [200] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_NAME,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_OUTPUT_FORMAT,
    ACTIONS(21), 1,
      anon_sym_INCLUDE,
    ACTIONS(25), 1,
      anon_sym_EXTERN,
    ACTIONS(27), 1,
      anon_sym_INSERT,
    ACTIONS(29), 1,
      anon_sym_REGION_ALIAS,
    ACTIONS(31), 1,
      anon_sym_SECTIONS,
    ACTIONS(33), 1,
      anon_sym_ENTRY,
    ACTIONS(35), 1,
      anon_sym_ASSERT,
    ACTIONS(39), 1,
      anon_sym_MEMORY,
    ACTIONS(41), 1,
      anon_sym_STARTUP,
    ACTIONS(43), 1,
      anon_sym_HLL,
    ACTIONS(45), 1,
      anon_sym_SYSLIB,
    ACTIONS(49), 1,
      anon_sym_PHDRS,
    ACTIONS(51), 1,
      anon_sym_VERSION,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    STATE(415), 1,
      sym_assignment,
    ACTIONS(19), 2,
      anon_sym_INPUT,
      anon_sym_GROUP,
    ACTIONS(23), 2,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
    ACTIONS(47), 2,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
    STATE(2), 2,
      sym_ifile_p1,
      aux_sym_script_file_repeat1,
    ACTIONS(11), 3,
      anon_sym_TARGET,
      anon_sym_OUTPUT_ARCH,
      anon_sym_LD_FEATURE,
    ACTIONS(13), 3,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_MAP,
    ACTIONS(17), 3,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
    ACTIONS(37), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    STATE(27), 9,
      sym_sections,
      sym_statement_anywhere,
      sym_memory,
      sym_startup,
      sym_high_level_library,
      sym_low_level_library,
      sym_floating_point_support,
      sym_phdrs,
      sym_version,
  [305] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(166), 1,
      anon_sym_READONLY,
    ACTIONS(168), 1,
      anon_sym_TYPE,
    STATE(114), 1,
      sym_INT,
    STATE(147), 1,
      sym_exp,
    STATE(567), 1,
      sym_type,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(164), 5,
      anon_sym_OVERLAY,
      anon_sym_NOLOAD,
      anon_sym_DSECT,
      anon_sym_COPY,
      anon_sym_INFO,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(172), 34,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_OVERLAY,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [435] = 29,
    ACTIONS(174), 1,
      sym_NAME,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_INCLUDE,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 1,
      anon_sym_ASSERT,
    ACTIONS(186), 1,
      anon_sym_SORT_NONE,
    ACTIONS(188), 1,
      anon_sym_REVERSE,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(192), 1,
      anon_sym_INPUT_SECTION_FLAGS,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_KEEP,
    ACTIONS(200), 1,
      anon_sym_ASCIZ,
    ACTIONS(202), 1,
      anon_sym_FILL,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    STATE(108), 1,
      sym_input_section_spec,
    STATE(122), 1,
      sym_input_section_spec_no_keep,
    STATE(223), 1,
      sym_sect_flags,
    STATE(390), 1,
      sym_assignment,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(513), 1,
      sym_statement_list,
    STATE(520), 1,
      sym_length,
    STATE(521), 1,
      sym_filename_spec,
    STATE(522), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(184), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(18), 2,
      sym_statement,
      aux_sym_statement_list_repeat1,
    ACTIONS(37), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    ACTIONS(198), 3,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_LINKER_VERSION,
    ACTIONS(204), 5,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
  [533] = 29,
    ACTIONS(174), 1,
      sym_NAME,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_INCLUDE,
    ACTIONS(182), 1,
      anon_sym_ASSERT,
    ACTIONS(186), 1,
      anon_sym_SORT_NONE,
    ACTIONS(188), 1,
      anon_sym_REVERSE,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(192), 1,
      anon_sym_INPUT_SECTION_FLAGS,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_KEEP,
    ACTIONS(200), 1,
      anon_sym_ASCIZ,
    ACTIONS(202), 1,
      anon_sym_FILL,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_input_section_spec,
    STATE(122), 1,
      sym_input_section_spec_no_keep,
    STATE(223), 1,
      sym_sect_flags,
    STATE(390), 1,
      sym_assignment,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(494), 1,
      sym_statement_list,
    STATE(520), 1,
      sym_length,
    STATE(521), 1,
      sym_filename_spec,
    STATE(522), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(184), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(18), 2,
      sym_statement,
      aux_sym_statement_list_repeat1,
    ACTIONS(37), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    ACTIONS(198), 3,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_LINKER_VERSION,
    ACTIONS(204), 5,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
  [631] = 29,
    ACTIONS(174), 1,
      sym_NAME,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_INCLUDE,
    ACTIONS(182), 1,
      anon_sym_ASSERT,
    ACTIONS(186), 1,
      anon_sym_SORT_NONE,
    ACTIONS(188), 1,
      anon_sym_REVERSE,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(192), 1,
      anon_sym_INPUT_SECTION_FLAGS,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_KEEP,
    ACTIONS(200), 1,
      anon_sym_ASCIZ,
    ACTIONS(202), 1,
      anon_sym_FILL,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_input_section_spec,
    STATE(122), 1,
      sym_input_section_spec_no_keep,
    STATE(223), 1,
      sym_sect_flags,
    STATE(390), 1,
      sym_assignment,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(483), 1,
      sym_statement_list,
    STATE(520), 1,
      sym_length,
    STATE(521), 1,
      sym_filename_spec,
    STATE(522), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(184), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(18), 2,
      sym_statement,
      aux_sym_statement_list_repeat1,
    ACTIONS(37), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    ACTIONS(198), 3,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_LINKER_VERSION,
    ACTIONS(204), 5,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
  [729] = 29,
    ACTIONS(174), 1,
      sym_NAME,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_INCLUDE,
    ACTIONS(182), 1,
      anon_sym_ASSERT,
    ACTIONS(186), 1,
      anon_sym_SORT_NONE,
    ACTIONS(188), 1,
      anon_sym_REVERSE,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(192), 1,
      anon_sym_INPUT_SECTION_FLAGS,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_KEEP,
    ACTIONS(200), 1,
      anon_sym_ASCIZ,
    ACTIONS(202), 1,
      anon_sym_FILL,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_input_section_spec,
    STATE(122), 1,
      sym_input_section_spec_no_keep,
    STATE(223), 1,
      sym_sect_flags,
    STATE(390), 1,
      sym_assignment,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(462), 1,
      sym_statement_list,
    STATE(520), 1,
      sym_length,
    STATE(521), 1,
      sym_filename_spec,
    STATE(522), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(184), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(18), 2,
      sym_statement,
      aux_sym_statement_list_repeat1,
    ACTIONS(37), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    ACTIONS(198), 3,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_LINKER_VERSION,
    ACTIONS(204), 5,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
  [827] = 7,
    ACTIONS(134), 1,
      anon_sym_EQ,
    ACTIONS(208), 1,
      sym_comment,
    STATE(61), 1,
      sym_assign_op,
    ACTIONS(218), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(130), 4,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(132), 5,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_CARET_EQ,
    ACTIONS(216), 25,
      anon_sym_INCLUDE,
      anon_sym_ASSERT,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_INPUT_SECTION_FLAGS,
      anon_sym_LBRACK,
      anon_sym_KEEP,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_ASCIZ,
      anon_sym_FILL,
      anon_sym_LINKER_VERSION,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      sym_NAME,
      sym_wildcard_name,
  [881] = 29,
    ACTIONS(174), 1,
      sym_NAME,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_INCLUDE,
    ACTIONS(182), 1,
      anon_sym_ASSERT,
    ACTIONS(186), 1,
      anon_sym_SORT_NONE,
    ACTIONS(188), 1,
      anon_sym_REVERSE,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(192), 1,
      anon_sym_INPUT_SECTION_FLAGS,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_KEEP,
    ACTIONS(200), 1,
      anon_sym_ASCIZ,
    ACTIONS(202), 1,
      anon_sym_FILL,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_input_section_spec,
    STATE(122), 1,
      sym_input_section_spec_no_keep,
    STATE(223), 1,
      sym_sect_flags,
    STATE(390), 1,
      sym_assignment,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(474), 1,
      sym_statement_list,
    STATE(520), 1,
      sym_length,
    STATE(521), 1,
      sym_filename_spec,
    STATE(522), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(184), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(18), 2,
      sym_statement,
      aux_sym_statement_list_repeat1,
    ACTIONS(37), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    ACTIONS(198), 3,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_LINKER_VERSION,
    ACTIONS(204), 5,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
  [979] = 29,
    ACTIONS(174), 1,
      sym_NAME,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_INCLUDE,
    ACTIONS(182), 1,
      anon_sym_ASSERT,
    ACTIONS(186), 1,
      anon_sym_SORT_NONE,
    ACTIONS(188), 1,
      anon_sym_REVERSE,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(192), 1,
      anon_sym_INPUT_SECTION_FLAGS,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_KEEP,
    ACTIONS(200), 1,
      anon_sym_ASCIZ,
    ACTIONS(202), 1,
      anon_sym_FILL,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_input_section_spec,
    STATE(122), 1,
      sym_input_section_spec_no_keep,
    STATE(223), 1,
      sym_sect_flags,
    STATE(390), 1,
      sym_assignment,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(489), 1,
      sym_statement_list,
    STATE(520), 1,
      sym_length,
    STATE(521), 1,
      sym_filename_spec,
    STATE(522), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(184), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(18), 2,
      sym_statement,
      aux_sym_statement_list_repeat1,
    ACTIONS(37), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    ACTIONS(198), 3,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_LINKER_VERSION,
    ACTIONS(204), 5,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
  [1077] = 29,
    ACTIONS(174), 1,
      sym_NAME,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_INCLUDE,
    ACTIONS(182), 1,
      anon_sym_ASSERT,
    ACTIONS(186), 1,
      anon_sym_SORT_NONE,
    ACTIONS(188), 1,
      anon_sym_REVERSE,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(192), 1,
      anon_sym_INPUT_SECTION_FLAGS,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_KEEP,
    ACTIONS(200), 1,
      anon_sym_ASCIZ,
    ACTIONS(202), 1,
      anon_sym_FILL,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_input_section_spec,
    STATE(122), 1,
      sym_input_section_spec_no_keep,
    STATE(223), 1,
      sym_sect_flags,
    STATE(390), 1,
      sym_assignment,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(520), 1,
      sym_length,
    STATE(521), 1,
      sym_filename_spec,
    STATE(522), 1,
      sym_wildcard_maybe_reverse,
    STATE(532), 1,
      sym_statement_list,
    ACTIONS(184), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(18), 2,
      sym_statement,
      aux_sym_statement_list_repeat1,
    ACTIONS(37), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    ACTIONS(198), 3,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_LINKER_VERSION,
    ACTIONS(204), 5,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
  [1175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(228), 34,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_OVERLAY,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [1220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(232), 34,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_OVERLAY,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [1265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(236), 34,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_OVERLAY,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [1310] = 28,
    ACTIONS(174), 1,
      sym_NAME,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_INCLUDE,
    ACTIONS(182), 1,
      anon_sym_ASSERT,
    ACTIONS(186), 1,
      anon_sym_SORT_NONE,
    ACTIONS(188), 1,
      anon_sym_REVERSE,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(192), 1,
      anon_sym_INPUT_SECTION_FLAGS,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_KEEP,
    ACTIONS(200), 1,
      anon_sym_ASCIZ,
    ACTIONS(202), 1,
      anon_sym_FILL,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_input_section_spec,
    STATE(122), 1,
      sym_input_section_spec_no_keep,
    STATE(223), 1,
      sym_sect_flags,
    STATE(390), 1,
      sym_assignment,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(520), 1,
      sym_length,
    STATE(521), 1,
      sym_filename_spec,
    STATE(522), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(184), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(19), 2,
      sym_statement,
      aux_sym_statement_list_repeat1,
    ACTIONS(37), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    ACTIONS(198), 3,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_LINKER_VERSION,
    ACTIONS(204), 5,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
  [1405] = 28,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_NAME,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(246), 1,
      anon_sym_INCLUDE,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      anon_sym_ASSERT,
    ACTIONS(257), 1,
      anon_sym_SORT_NONE,
    ACTIONS(260), 1,
      anon_sym_REVERSE,
    ACTIONS(263), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(266), 1,
      anon_sym_INPUT_SECTION_FLAGS,
    ACTIONS(269), 1,
      anon_sym_LBRACK,
    ACTIONS(272), 1,
      anon_sym_KEEP,
    ACTIONS(278), 1,
      anon_sym_ASCIZ,
    ACTIONS(281), 1,
      anon_sym_FILL,
    ACTIONS(290), 1,
      sym_wildcard_name,
    STATE(108), 1,
      sym_input_section_spec,
    STATE(122), 1,
      sym_input_section_spec_no_keep,
    STATE(223), 1,
      sym_sect_flags,
    STATE(390), 1,
      sym_assignment,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(520), 1,
      sym_length,
    STATE(521), 1,
      sym_filename_spec,
    STATE(522), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(254), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(19), 2,
      sym_statement,
      aux_sym_statement_list_repeat1,
    ACTIONS(275), 3,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_LINKER_VERSION,
    ACTIONS(287), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    ACTIONS(284), 5,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
  [1500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(295), 34,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_OVERLAY,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [1545] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(136), 1,
      anon_sym_COLON,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(154), 1,
      anon_sym_BIND,
    STATE(114), 1,
      sym_INT,
    STATE(128), 1,
      sym_exp,
    STATE(583), 1,
      sym_opt_exp_with_type,
    STATE(584), 1,
      sym_atype,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [1621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(299), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [1664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(303), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [1707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(307), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [1750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(311), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [1793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(315), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [1836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(319), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [1879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(323), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [1922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(327), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [1965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(331), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [2008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(335), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [2051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(339), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [2094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(343), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [2137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(347), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [2180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(351), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [2223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(355), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [2266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(359), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [2309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(363), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [2352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(367), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [2395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(371), 33,
      anon_sym_TARGET,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_OUTPUT_FORMAT,
      anon_sym_OUTPUT_ARCH,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
      anon_sym_INPUT,
      anon_sym_GROUP,
      anon_sym_MAP,
      anon_sym_INCLUDE,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
      anon_sym_EXTERN,
      anon_sym_INSERT,
      anon_sym_REGION_ALIAS,
      anon_sym_LD_FEATURE,
      anon_sym_SECTIONS,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_MEMORY,
      anon_sym_STARTUP,
      anon_sym_HLL,
      anon_sym_SYSLIB,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
      anon_sym_PHDRS,
      anon_sym_VERSION,
      sym_NAME,
  [2438] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(83), 1,
      sym_INT,
    STATE(103), 1,
      sym_exp,
    STATE(210), 1,
      sym_mustbe_exp,
    STATE(400), 1,
      sym_fill_exp,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [2508] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(83), 1,
      sym_INT,
    STATE(103), 1,
      sym_exp,
    STATE(210), 1,
      sym_mustbe_exp,
    STATE(224), 1,
      sym_fill_exp,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [2578] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(83), 1,
      sym_INT,
    STATE(103), 1,
      sym_exp,
    STATE(210), 1,
      sym_mustbe_exp,
    STATE(215), 1,
      sym_fill_exp,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [2648] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_COLON,
    STATE(114), 1,
      sym_INT,
    STATE(138), 1,
      sym_exp,
    STATE(292), 1,
      sym_opt_exp_without_type,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [2718] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(127), 1,
      sym_exp,
    STATE(210), 1,
      sym_mustbe_exp,
    STATE(477), 1,
      sym_fill_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [2788] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(83), 1,
      sym_INT,
    STATE(103), 1,
      sym_exp,
    STATE(210), 1,
      sym_mustbe_exp,
    STATE(395), 1,
      sym_fill_exp,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [2858] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(83), 1,
      sym_INT,
    STATE(103), 1,
      sym_exp,
    STATE(210), 1,
      sym_mustbe_exp,
    STATE(225), 1,
      sym_fill_exp,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [2928] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(83), 1,
      sym_INT,
    STATE(103), 1,
      sym_exp,
    STATE(210), 1,
      sym_mustbe_exp,
    STATE(221), 1,
      sym_fill_exp,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [2998] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(83), 1,
      sym_INT,
    STATE(103), 1,
      sym_exp,
    STATE(210), 1,
      sym_mustbe_exp,
    STATE(401), 1,
      sym_fill_exp,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3068] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(83), 1,
      sym_INT,
    STATE(103), 1,
      sym_exp,
    STATE(210), 1,
      sym_mustbe_exp,
    STATE(214), 1,
      sym_fill_exp,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3138] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(83), 1,
      sym_INT,
    STATE(103), 1,
      sym_exp,
    STATE(210), 1,
      sym_mustbe_exp,
    STATE(222), 1,
      sym_fill_exp,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3208] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(83), 1,
      sym_INT,
    STATE(103), 1,
      sym_exp,
    STATE(210), 1,
      sym_mustbe_exp,
    STATE(212), 1,
      sym_fill_exp,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3278] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(83), 1,
      sym_INT,
    STATE(103), 1,
      sym_exp,
    STATE(210), 1,
      sym_mustbe_exp,
    STATE(213), 1,
      sym_fill_exp,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3348] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(83), 1,
      sym_INT,
    STATE(103), 1,
      sym_exp,
    STATE(210), 1,
      sym_mustbe_exp,
    STATE(217), 1,
      sym_fill_exp,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3418] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(83), 1,
      sym_INT,
    STATE(103), 1,
      sym_exp,
    STATE(210), 1,
      sym_mustbe_exp,
    STATE(226), 1,
      sym_fill_exp,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3488] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(83), 1,
      sym_INT,
    STATE(129), 1,
      sym_exp,
    STATE(337), 1,
      sym_phdr_type,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3555] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(83), 1,
      sym_INT,
    STATE(103), 1,
      sym_exp,
    STATE(344), 1,
      sym_mustbe_exp,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3622] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(127), 1,
      sym_exp,
    STATE(555), 1,
      sym_mustbe_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3689] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(127), 1,
      sym_exp,
    STATE(371), 1,
      sym_mustbe_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3756] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(127), 1,
      sym_exp,
    STATE(477), 1,
      sym_mustbe_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3823] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(127), 1,
      sym_exp,
    STATE(441), 1,
      sym_mustbe_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3890] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(155), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 15,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_AMP,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_OVERLAY,
      sym_NAME,
    ACTIONS(401), 17,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [3994] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(150), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4058] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(133), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4122] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(145), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 15,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_AMP,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_OVERLAY,
      sym_NAME,
    ACTIONS(405), 17,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [4226] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(153), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4290] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(74), 1,
      sym_exp,
    STATE(83), 1,
      sym_INT,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4354] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(131), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4418] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(130), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4482] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(142), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4546] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(146), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 15,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_AMP,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_OVERLAY,
      sym_NAME,
    ACTIONS(405), 17,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [4650] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(78), 1,
      sym_exp,
    STATE(83), 1,
      sym_INT,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4714] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(148), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4778] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(147), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 15,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_AMP,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_OVERLAY,
      sym_NAME,
    ACTIONS(409), 17,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [4882] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_exp,
    STATE(114), 1,
      sym_INT,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4946] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(151), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5010] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(154), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5074] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(125), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 15,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_AMP,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_OVERLAY,
      sym_NAME,
    ACTIONS(413), 17,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [5178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 15,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_AMP,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_OVERLAY,
      sym_NAME,
    ACTIONS(417), 17,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [5218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 15,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_AMP,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_OVERLAY,
      sym_NAME,
    ACTIONS(409), 17,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [5258] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(136), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 15,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_AMP,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_OVERLAY,
      sym_NAME,
    ACTIONS(421), 17,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [5362] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(139), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5426] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(120), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5490] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(141), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5554] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(152), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5618] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_ASSERT,
    ACTIONS(383), 1,
      anon_sym_TILDE,
    ACTIONS(389), 1,
      anon_sym_ALIGN,
    ACTIONS(393), 1,
      anon_sym_SEGMENT_START,
    STATE(83), 1,
      sym_INT,
    STATE(99), 1,
      sym_exp,
    ACTIONS(373), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(387), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(381), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(391), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(385), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(379), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5682] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(135), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 15,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_AMP,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_OVERLAY,
      sym_NAME,
    ACTIONS(425), 17,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [5786] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(134), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5850] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(143), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5914] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(149), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5978] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(132), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [6042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 15,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_AMP,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_OVERLAY,
      sym_NAME,
    ACTIONS(429), 17,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6082] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(137), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [6146] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(144), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [6210] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_ASSERT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_ALIGN,
    ACTIONS(152), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_INT,
    STATE(140), 1,
      sym_exp,
    ACTIONS(124), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(146), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(140), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(156), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(150), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(144), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(138), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [6274] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_QMARK,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(435), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(431), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
    ACTIONS(437), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 26,
      anon_sym_ASSERT,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_TILDE,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
      anon_sym_SIZEOF_HEADERS,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
      anon_sym_ALIGN,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
      anon_sym_SEGMENT_START,
      sym_NAME,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
  [6356] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(172), 25,
      anon_sym_INCLUDE,
      anon_sym_ASSERT,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_INPUT_SECTION_FLAGS,
      anon_sym_LBRACK,
      anon_sym_KEEP,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_ASCIZ,
      anon_sym_FILL,
      anon_sym_LINKER_VERSION,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      sym_NAME,
      sym_wildcard_name,
  [6391] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(445), 25,
      anon_sym_INCLUDE,
      anon_sym_ASSERT,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_INPUT_SECTION_FLAGS,
      anon_sym_LBRACK,
      anon_sym_KEEP,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_ASCIZ,
      anon_sym_FILL,
      anon_sym_LINKER_VERSION,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      sym_NAME,
      sym_wildcard_name,
  [6426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 6,
      anon_sym_AMP,
      anon_sym_l,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(425), 21,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LENGTH,
      anon_sym_len,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6461] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(449), 25,
      anon_sym_INCLUDE,
      anon_sym_ASSERT,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_INPUT_SECTION_FLAGS,
      anon_sym_LBRACK,
      anon_sym_KEEP,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_ASCIZ,
      anon_sym_FILL,
      anon_sym_LINKER_VERSION,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      sym_NAME,
      sym_wildcard_name,
  [6496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 6,
      anon_sym_AMP,
      anon_sym_l,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(409), 21,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LENGTH,
      anon_sym_len,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6531] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(453), 25,
      anon_sym_INCLUDE,
      anon_sym_ASSERT,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_INPUT_SECTION_FLAGS,
      anon_sym_LBRACK,
      anon_sym_KEEP,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_ASCIZ,
      anon_sym_FILL,
      anon_sym_LINKER_VERSION,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      sym_NAME,
      sym_wildcard_name,
  [6566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 6,
      anon_sym_AMP,
      anon_sym_l,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(421), 21,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LENGTH,
      anon_sym_len,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6601] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(457), 25,
      anon_sym_INCLUDE,
      anon_sym_ASSERT,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_INPUT_SECTION_FLAGS,
      anon_sym_LBRACK,
      anon_sym_KEEP,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_ASCIZ,
      anon_sym_FILL,
      anon_sym_LINKER_VERSION,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      sym_NAME,
      sym_wildcard_name,
  [6636] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(295), 25,
      anon_sym_INCLUDE,
      anon_sym_ASSERT,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_INPUT_SECTION_FLAGS,
      anon_sym_LBRACK,
      anon_sym_KEEP,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_ASCIZ,
      anon_sym_FILL,
      anon_sym_LINKER_VERSION,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      sym_NAME,
      sym_wildcard_name,
  [6671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 6,
      anon_sym_AMP,
      anon_sym_l,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(413), 21,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LENGTH,
      anon_sym_len,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6706] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(461), 25,
      anon_sym_INCLUDE,
      anon_sym_ASSERT,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_INPUT_SECTION_FLAGS,
      anon_sym_LBRACK,
      anon_sym_KEEP,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_ASCIZ,
      anon_sym_FILL,
      anon_sym_LINKER_VERSION,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      sym_NAME,
      sym_wildcard_name,
  [6741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 6,
      anon_sym_AMP,
      anon_sym_l,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(417), 21,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LENGTH,
      anon_sym_len,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6776] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(465), 25,
      anon_sym_INCLUDE,
      anon_sym_ASSERT,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_INPUT_SECTION_FLAGS,
      anon_sym_LBRACK,
      anon_sym_KEEP,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_ASCIZ,
      anon_sym_FILL,
      anon_sym_LINKER_VERSION,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      sym_NAME,
      sym_wildcard_name,
  [6811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 6,
      anon_sym_AMP,
      anon_sym_l,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(409), 21,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LENGTH,
      anon_sym_len,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6846] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(469), 25,
      anon_sym_INCLUDE,
      anon_sym_ASSERT,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_INPUT_SECTION_FLAGS,
      anon_sym_LBRACK,
      anon_sym_KEEP,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_ASCIZ,
      anon_sym_FILL,
      anon_sym_LINKER_VERSION,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      sym_NAME,
      sym_wildcard_name,
  [6881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 6,
      anon_sym_AMP,
      anon_sym_l,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(405), 21,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LENGTH,
      anon_sym_len,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 6,
      anon_sym_AMP,
      anon_sym_l,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(401), 21,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LENGTH,
      anon_sym_len,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6951] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(475), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(473), 25,
      anon_sym_INCLUDE,
      anon_sym_ASSERT,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_INPUT_SECTION_FLAGS,
      anon_sym_LBRACK,
      anon_sym_KEEP,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_ASCIZ,
      anon_sym_FILL,
      anon_sym_LINKER_VERSION,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      sym_NAME,
      sym_wildcard_name,
  [6986] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(477), 25,
      anon_sym_INCLUDE,
      anon_sym_ASSERT,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_INPUT_SECTION_FLAGS,
      anon_sym_LBRACK,
      anon_sym_KEEP,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_ASCIZ,
      anon_sym_FILL,
      anon_sym_LINKER_VERSION,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      sym_NAME,
      sym_wildcard_name,
  [7021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 6,
      anon_sym_AMP,
      anon_sym_l,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(405), 21,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LENGTH,
      anon_sym_len,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [7056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 6,
      anon_sym_AMP,
      anon_sym_l,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(429), 21,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LENGTH,
      anon_sym_len,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [7091] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(481), 25,
      anon_sym_INCLUDE,
      anon_sym_ASSERT,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_INPUT_SECTION_FLAGS,
      anon_sym_LBRACK,
      anon_sym_KEEP,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_ASCIZ,
      anon_sym_FILL,
      anon_sym_LINKER_VERSION,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      sym_NAME,
      sym_wildcard_name,
  [7126] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_l,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(433), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LENGTH,
      anon_sym_len,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7165] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_COLON,
    STATE(566), 1,
      sym_atype,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7203] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_QMARK,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(495), 2,
      anon_sym_AT,
      sym_NAME,
    ACTIONS(435), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(437), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7239] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7274] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7309] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7341] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7373] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7405] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7437] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7469] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(517), 1,
      anon_sym_COLON,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7501] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(519), 1,
      anon_sym_COLON,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7533] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7565] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7597] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7629] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(527), 1,
      anon_sym_COLON,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7693] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7725] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7789] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7853] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7885] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7917] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7949] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7981] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8045] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(487), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8077] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      anon_sym_EQ,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_GT,
    ACTIONS(559), 1,
      anon_sym_AT,
    STATE(164), 1,
      sym_memspec,
    STATE(184), 1,
      sym_memspec_at,
    STATE(190), 1,
      sym_phdr_opt,
    ACTIONS(547), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8119] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_GT,
    ACTIONS(559), 1,
      anon_sym_AT,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    ACTIONS(567), 1,
      anon_sym_EQ,
    STATE(169), 1,
      sym_memspec,
    STATE(178), 1,
      sym_memspec_at,
    STATE(194), 1,
      sym_phdr_opt,
    ACTIONS(561), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8161] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_GT,
    ACTIONS(559), 1,
      anon_sym_AT,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    ACTIONS(575), 1,
      anon_sym_EQ,
    STATE(166), 1,
      sym_memspec,
    STATE(185), 1,
      sym_memspec_at,
    STATE(199), 1,
      sym_phdr_opt,
    ACTIONS(569), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8203] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_GT,
    ACTIONS(559), 1,
      anon_sym_AT,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    ACTIONS(583), 1,
      anon_sym_EQ,
    STATE(168), 1,
      sym_memspec,
    STATE(179), 1,
      sym_memspec_at,
    STATE(198), 1,
      sym_phdr_opt,
    ACTIONS(577), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8245] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_GT,
    ACTIONS(559), 1,
      anon_sym_AT,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_EQ,
    STATE(167), 1,
      sym_memspec,
    STATE(186), 1,
      sym_memspec_at,
    STATE(196), 1,
      sym_phdr_opt,
    ACTIONS(585), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8287] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_GT,
    ACTIONS(559), 1,
      anon_sym_AT,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    ACTIONS(599), 1,
      anon_sym_EQ,
    STATE(165), 1,
      sym_memspec,
    STATE(177), 1,
      sym_memspec_at,
    STATE(192), 1,
      sym_phdr_opt,
    ACTIONS(593), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8329] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_GT,
    ACTIONS(559), 1,
      anon_sym_AT,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 1,
      anon_sym_EQ,
    STATE(163), 1,
      sym_memspec,
    STATE(183), 1,
      sym_memspec_at,
    STATE(200), 1,
      sym_phdr_opt,
    ACTIONS(601), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8371] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(559), 1,
      anon_sym_AT,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    ACTIONS(583), 1,
      anon_sym_EQ,
    STATE(179), 1,
      sym_memspec_at,
    STATE(198), 1,
      sym_phdr_opt,
    ACTIONS(577), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8407] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(559), 1,
      anon_sym_AT,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_EQ,
    STATE(186), 1,
      sym_memspec_at,
    STATE(196), 1,
      sym_phdr_opt,
    ACTIONS(585), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8443] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(559), 1,
      anon_sym_AT,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    ACTIONS(615), 1,
      anon_sym_EQ,
    STATE(187), 1,
      sym_memspec_at,
    STATE(201), 1,
      sym_phdr_opt,
    ACTIONS(609), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8479] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(559), 1,
      anon_sym_AT,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    ACTIONS(567), 1,
      anon_sym_EQ,
    STATE(178), 1,
      sym_memspec_at,
    STATE(194), 1,
      sym_phdr_opt,
    ACTIONS(561), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8515] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(559), 1,
      anon_sym_AT,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 1,
      anon_sym_EQ,
    STATE(183), 1,
      sym_memspec_at,
    STATE(200), 1,
      sym_phdr_opt,
    ACTIONS(601), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8551] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(559), 1,
      anon_sym_AT,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    ACTIONS(575), 1,
      anon_sym_EQ,
    STATE(185), 1,
      sym_memspec_at,
    STATE(199), 1,
      sym_phdr_opt,
    ACTIONS(569), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8587] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(559), 1,
      anon_sym_AT,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    ACTIONS(599), 1,
      anon_sym_EQ,
    STATE(177), 1,
      sym_memspec_at,
    STATE(192), 1,
      sym_phdr_opt,
    ACTIONS(593), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8623] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_ENTRY,
    ACTIONS(35), 1,
      anon_sym_ASSERT,
    ACTIONS(617), 1,
      sym_NAME,
    ACTIONS(619), 1,
      anon_sym_GROUP,
    ACTIONS(621), 1,
      anon_sym_INCLUDE,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    ACTIONS(625), 1,
      anon_sym_OVERLAY,
    STATE(415), 1,
      sym_assignment,
    STATE(540), 1,
      sym_sec_or_group_p1,
    ACTIONS(37), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    STATE(176), 3,
      sym_statement_anywhere,
      sym_section,
      aux_sym_sec_or_group_p1_repeat1,
  [8664] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_ENTRY,
    ACTIONS(35), 1,
      anon_sym_ASSERT,
    ACTIONS(617), 1,
      sym_NAME,
    ACTIONS(619), 1,
      anon_sym_GROUP,
    ACTIONS(621), 1,
      anon_sym_INCLUDE,
    ACTIONS(625), 1,
      anon_sym_OVERLAY,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    STATE(415), 1,
      sym_assignment,
    STATE(609), 1,
      sym_sec_or_group_p1,
    ACTIONS(37), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    STATE(176), 3,
      sym_statement_anywhere,
      sym_section,
      aux_sym_sec_or_group_p1_repeat1,
  [8705] = 11,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    ACTIONS(637), 1,
      anon_sym_REVERSE,
    ACTIONS(639), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(641), 1,
      sym_wildcard_name,
    STATE(242), 1,
      sym_wildcard_maybe_exclude,
    STATE(252), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(635), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    STATE(180), 2,
      sym_section_name_spec,
      aux_sym_section_name_list_repeat1,
    ACTIONS(633), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [8743] = 13,
    ACTIONS(188), 1,
      anon_sym_REVERSE,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(192), 1,
      anon_sym_INPUT_SECTION_FLAGS,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_NAME,
    ACTIONS(645), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_sect_flags,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(463), 1,
      sym_input_section_spec_no_keep,
    STATE(522), 1,
      sym_wildcard_maybe_reverse,
    STATE(653), 1,
      sym_filename_spec,
    ACTIONS(186), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
  [8785] = 11,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    ACTIONS(656), 1,
      anon_sym_REVERSE,
    ACTIONS(659), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(662), 1,
      anon_sym_RBRACK,
    ACTIONS(664), 1,
      sym_wildcard_name,
    STATE(230), 1,
      sym_wildcard_maybe_exclude,
    STATE(255), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(653), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    STATE(174), 2,
      sym_section_name_spec,
      aux_sym_section_name_list_repeat1,
    ACTIONS(650), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [8823] = 11,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(673), 1,
      anon_sym_REVERSE,
    ACTIONS(675), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(677), 1,
      anon_sym_RBRACK,
    ACTIONS(679), 1,
      sym_wildcard_name,
    STATE(230), 1,
      sym_wildcard_maybe_exclude,
    STATE(255), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(671), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    STATE(182), 2,
      sym_section_name_spec,
      aux_sym_section_name_list_repeat1,
    ACTIONS(669), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [8861] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_ENTRY,
    ACTIONS(35), 1,
      anon_sym_ASSERT,
    ACTIONS(617), 1,
      sym_NAME,
    ACTIONS(619), 1,
      anon_sym_GROUP,
    ACTIONS(621), 1,
      anon_sym_INCLUDE,
    ACTIONS(625), 1,
      anon_sym_OVERLAY,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    STATE(415), 1,
      sym_assignment,
    ACTIONS(37), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    STATE(181), 3,
      sym_statement_anywhere,
      sym_section,
      aux_sym_sec_or_group_p1_repeat1,
  [8899] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    ACTIONS(615), 1,
      anon_sym_EQ,
    STATE(201), 1,
      sym_phdr_opt,
    ACTIONS(609), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8929] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    ACTIONS(599), 1,
      anon_sym_EQ,
    STATE(192), 1,
      sym_phdr_opt,
    ACTIONS(593), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8959] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    ACTIONS(575), 1,
      anon_sym_EQ,
    STATE(199), 1,
      sym_phdr_opt,
    ACTIONS(569), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8989] = 11,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    ACTIONS(694), 1,
      anon_sym_REVERSE,
    ACTIONS(697), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(700), 1,
      sym_wildcard_name,
    STATE(242), 1,
      sym_wildcard_maybe_exclude,
    STATE(252), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(691), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    STATE(180), 2,
      sym_section_name_spec,
      aux_sym_section_name_list_repeat1,
    ACTIONS(688), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9027] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym_NAME,
    ACTIONS(706), 1,
      anon_sym_GROUP,
    ACTIONS(709), 1,
      anon_sym_INCLUDE,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
    ACTIONS(714), 1,
      anon_sym_ENTRY,
    ACTIONS(717), 1,
      anon_sym_ASSERT,
    ACTIONS(723), 1,
      anon_sym_OVERLAY,
    STATE(415), 1,
      sym_assignment,
    ACTIONS(720), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    STATE(181), 3,
      sym_statement_anywhere,
      sym_section,
      aux_sym_sec_or_group_p1_repeat1,
  [9065] = 11,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(673), 1,
      anon_sym_REVERSE,
    ACTIONS(675), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(679), 1,
      sym_wildcard_name,
    ACTIONS(726), 1,
      anon_sym_RBRACK,
    STATE(230), 1,
      sym_wildcard_maybe_exclude,
    STATE(255), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(671), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    STATE(174), 2,
      sym_section_name_spec,
      aux_sym_section_name_list_repeat1,
    ACTIONS(669), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9103] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    ACTIONS(583), 1,
      anon_sym_EQ,
    STATE(198), 1,
      sym_phdr_opt,
    ACTIONS(577), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9133] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_EQ,
    STATE(196), 1,
      sym_phdr_opt,
    ACTIONS(585), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9163] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    ACTIONS(567), 1,
      anon_sym_EQ,
    STATE(194), 1,
      sym_phdr_opt,
    ACTIONS(561), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9193] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 1,
      anon_sym_EQ,
    STATE(200), 1,
      sym_phdr_opt,
    ACTIONS(601), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9223] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    ACTIONS(734), 1,
      anon_sym_EQ,
    STATE(193), 1,
      sym_phdr_opt,
    ACTIONS(728), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9253] = 11,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_REVERSE,
    ACTIONS(639), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(641), 1,
      sym_wildcard_name,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      sym_wildcard_maybe_exclude,
    STATE(252), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(635), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    STATE(172), 2,
      sym_section_name_spec,
      aux_sym_section_name_list_repeat1,
    ACTIONS(633), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(738), 11,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_EQ,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_AT,
      anon_sym_OVERLAY,
      sym_NAME,
  [9313] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_EQ,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(585), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(744), 10,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_EQ,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9361] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    ACTIONS(615), 1,
      anon_sym_EQ,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(609), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9388] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    ACTIONS(754), 1,
      anon_sym_EQ,
    ACTIONS(748), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9415] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    ACTIONS(599), 1,
      anon_sym_EQ,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(593), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(756), 10,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_EQ,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9463] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 1,
      anon_sym_EQ,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(601), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(760), 10,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_EQ,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9511] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    ACTIONS(575), 1,
      anon_sym_EQ,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(569), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9538] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    ACTIONS(567), 1,
      anon_sym_EQ,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(561), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9565] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    ACTIONS(583), 1,
      anon_sym_EQ,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(577), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9592] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    ACTIONS(734), 1,
      anon_sym_EQ,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(728), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9619] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    ACTIONS(766), 1,
      anon_sym_ALIGN,
    ACTIONS(768), 1,
      anon_sym_AT,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(774), 1,
      anon_sym_ALIGN_WITH_INPUT,
    STATE(234), 1,
      sym_at,
    STATE(270), 1,
      sym_align,
    STATE(322), 1,
      sym_subalign,
    STATE(560), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [9655] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_REVERSE,
    ACTIONS(675), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(679), 1,
      sym_wildcard_name,
    STATE(175), 1,
      sym_section_name_spec,
    STATE(230), 1,
      sym_wildcard_maybe_exclude,
    STATE(255), 1,
      sym_wildcard_maybe_reverse,
    STATE(622), 1,
      sym_section_name_list,
    ACTIONS(671), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(669), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9689] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_REVERSE,
    ACTIONS(639), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(641), 1,
      sym_wildcard_name,
    STATE(188), 1,
      sym_section_name_spec,
    STATE(242), 1,
      sym_wildcard_maybe_exclude,
    STATE(252), 1,
      sym_wildcard_maybe_reverse,
    STATE(621), 1,
      sym_section_name_list,
    ACTIONS(635), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(633), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9723] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_REVERSE,
    ACTIONS(675), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(679), 1,
      sym_wildcard_name,
    STATE(175), 1,
      sym_section_name_spec,
    STATE(230), 1,
      sym_wildcard_maybe_exclude,
    STATE(255), 1,
      sym_wildcard_maybe_reverse,
    STATE(498), 1,
      sym_section_name_list,
    ACTIONS(671), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(669), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9757] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_REVERSE,
    ACTIONS(675), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(679), 1,
      sym_wildcard_name,
    STATE(175), 1,
      sym_section_name_spec,
    STATE(230), 1,
      sym_wildcard_maybe_exclude,
    STATE(255), 1,
      sym_wildcard_maybe_reverse,
    STATE(465), 1,
      sym_section_name_list,
    ACTIONS(671), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(669), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9791] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_REVERSE,
    ACTIONS(675), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(679), 1,
      sym_wildcard_name,
    STATE(175), 1,
      sym_section_name_spec,
    STATE(230), 1,
      sym_wildcard_maybe_exclude,
    STATE(255), 1,
      sym_wildcard_maybe_reverse,
    STATE(616), 1,
      sym_section_name_list,
    ACTIONS(671), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(669), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9825] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_REVERSE,
    ACTIONS(639), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(641), 1,
      sym_wildcard_name,
    STATE(188), 1,
      sym_section_name_spec,
    STATE(242), 1,
      sym_wildcard_maybe_exclude,
    STATE(252), 1,
      sym_wildcard_maybe_reverse,
    STATE(464), 1,
      sym_section_name_list,
    ACTIONS(635), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(633), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9859] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_REVERSE,
    ACTIONS(639), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(641), 1,
      sym_wildcard_name,
    STATE(188), 1,
      sym_section_name_spec,
    STATE(242), 1,
      sym_wildcard_maybe_exclude,
    STATE(252), 1,
      sym_wildcard_maybe_reverse,
    STATE(485), 1,
      sym_section_name_list,
    ACTIONS(635), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(633), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(776), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9913] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_REVERSE,
    ACTIONS(639), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(641), 1,
      sym_wildcard_name,
    STATE(188), 1,
      sym_section_name_spec,
    STATE(242), 1,
      sym_wildcard_maybe_exclude,
    STATE(252), 1,
      sym_wildcard_maybe_reverse,
    STATE(625), 1,
      sym_section_name_list,
    ACTIONS(635), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(633), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    ACTIONS(780), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    ACTIONS(748), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    ACTIONS(728), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10010] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    ACTIONS(593), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10031] = 9,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_REVERSE,
    ACTIONS(675), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(679), 1,
      sym_wildcard_name,
    STATE(230), 1,
      sym_wildcard_maybe_exclude,
    STATE(247), 1,
      sym_section_name_spec,
    STATE(255), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(671), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(669), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [10062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(601), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_EQ,
    STATE(61), 1,
      sym_assign_op,
    ACTIONS(130), 9,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
  [10104] = 9,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_REVERSE,
    ACTIONS(639), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(641), 1,
      sym_wildcard_name,
    STATE(238), 1,
      sym_section_name_spec,
    STATE(242), 1,
      sym_wildcard_maybe_exclude,
    STATE(252), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(635), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(633), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [10135] = 10,
    ACTIONS(188), 1,
      anon_sym_REVERSE,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_NAME,
    ACTIONS(790), 1,
      anon_sym_LBRACK,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(522), 1,
      sym_wildcard_maybe_reverse,
    STATE(658), 1,
      sym_filename_spec,
    ACTIONS(186), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
  [10168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    ACTIONS(561), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    ACTIONS(796), 1,
      anon_sym_RBRACE,
    ACTIONS(792), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10210] = 10,
    ACTIONS(188), 1,
      anon_sym_REVERSE,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym_NAME,
    ACTIONS(800), 1,
      anon_sym_LBRACK,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(497), 1,
      sym_filename_spec,
    STATE(522), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(186), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
  [10243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    ACTIONS(609), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    ACTIONS(577), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    ACTIONS(569), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(601), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    ACTIONS(748), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    ACTIONS(577), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10360] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(802), 10,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_RBRACK,
      sym_wildcard_name,
  [10376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    ACTIONS(780), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10394] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(804), 10,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_RBRACK,
      sym_wildcard_name,
  [10410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_RBRACE,
    ACTIONS(806), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10428] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_ALIGN,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    ACTIONS(812), 1,
      anon_sym_ALIGN_WITH_INPUT,
    STATE(260), 1,
      sym_align,
    STATE(302), 1,
      sym_subalign,
    STATE(519), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [10458] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    ACTIONS(814), 9,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      sym_wildcard_name,
  [10476] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(818), 10,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_RBRACK,
      sym_wildcard_name,
  [10492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    ACTIONS(569), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10510] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    ACTIONS(662), 9,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      sym_wildcard_name,
  [10528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    ACTIONS(561), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10546] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
    ACTIONS(820), 9,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      sym_wildcard_name,
  [10564] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(814), 10,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_RBRACK,
      sym_wildcard_name,
  [10580] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    ACTIONS(802), 9,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      sym_wildcard_name,
  [10598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    ACTIONS(609), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_RBRACE,
    ACTIONS(826), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10634] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(830), 10,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_RBRACK,
      sym_wildcard_name,
  [10650] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    ACTIONS(818), 9,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      sym_wildcard_name,
  [10668] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(662), 10,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_RBRACK,
      sym_wildcard_name,
  [10684] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
    ACTIONS(804), 9,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      sym_wildcard_name,
  [10702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
    ACTIONS(585), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10720] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
    ACTIONS(830), 9,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      sym_wildcard_name,
  [10738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_RBRACE,
    ACTIONS(792), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10756] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    ACTIONS(838), 9,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      sym_wildcard_name,
  [10774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    ACTIONS(728), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10792] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(820), 10,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_RBRACK,
      sym_wildcard_name,
  [10808] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(838), 10,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_RBRACK,
      sym_wildcard_name,
  [10824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    ACTIONS(593), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(547), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10860] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(844), 1,
      anon_sym_READONLY,
    ACTIONS(846), 1,
      anon_sym_TYPE,
    STATE(567), 1,
      sym_type,
    ACTIONS(842), 5,
      anon_sym_OVERLAY,
      anon_sym_NOLOAD,
      anon_sym_DSECT,
      anon_sym_COPY,
      anon_sym_INFO,
  [10883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_ALIGN,
    ACTIONS(848), 7,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_SUBALIGN,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
      anon_sym_ALIGN_WITH_INPUT,
  [10899] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      anon_sym_ALIGN_WITH_INPUT,
    STATE(308), 1,
      sym_subalign,
    STATE(496), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [10923] = 7,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_REVERSE,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(479), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(856), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [10947] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(860), 8,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_LBRACK,
      sym_NAME,
      sym_wildcard_name,
  [10961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_ALIGN,
    ACTIONS(862), 7,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_SUBALIGN,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
      anon_sym_ALIGN_WITH_INPUT,
  [10977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_ALIGN,
    ACTIONS(866), 7,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_SUBALIGN,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
      anon_sym_ALIGN_WITH_INPUT,
  [10993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_ALIGN,
    ACTIONS(870), 7,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_SUBALIGN,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
      anon_sym_ALIGN_WITH_INPUT,
  [11009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_ALIGN,
    ACTIONS(874), 7,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_SUBALIGN,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
      anon_sym_ALIGN_WITH_INPUT,
  [11025] = 7,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_REVERSE,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(624), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(878), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [11049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_ALIGN,
    ACTIONS(880), 7,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_SUBALIGN,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
      anon_sym_ALIGN_WITH_INPUT,
  [11065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_ALIGN,
    ACTIONS(884), 7,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_SUBALIGN,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
      anon_sym_ALIGN_WITH_INPUT,
  [11081] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    ACTIONS(812), 1,
      anon_sym_ALIGN_WITH_INPUT,
    STATE(302), 1,
      sym_subalign,
    STATE(519), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [11105] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
    ACTIONS(890), 1,
      anon_sym_global,
    ACTIONS(892), 1,
      anon_sym_local,
    ACTIONS(894), 1,
      anon_sym_extern,
    ACTIONS(896), 1,
      sym_VERS_IDENTIFIER,
    STATE(547), 1,
      sym_vers_tag,
    STATE(575), 1,
      sym_vers_defns,
  [11130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_ALIGN,
    ACTIONS(898), 6,
      anon_sym_LBRACE,
      anon_sym_SUBALIGN,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
      anon_sym_ALIGN_WITH_INPUT,
  [11145] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_global,
    ACTIONS(892), 1,
      anon_sym_local,
    ACTIONS(894), 1,
      anon_sym_extern,
    ACTIONS(896), 1,
      sym_VERS_IDENTIFIER,
    ACTIONS(902), 1,
      anon_sym_RBRACE,
    STATE(575), 1,
      sym_vers_defns,
    STATE(576), 1,
      sym_vers_tag,
  [11170] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    STATE(302), 1,
      sym_subalign,
    STATE(519), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [11191] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(904), 1,
      anon_sym_LBRACE,
    STATE(327), 1,
      sym_subalign,
    STATE(471), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [11212] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    STATE(308), 1,
      sym_subalign,
    STATE(496), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [11233] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_NAME,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    ACTIONS(912), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(914), 1,
      sym_LNAME,
    STATE(282), 1,
      aux_sym_input_list_repeat1,
  [11255] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_NAME,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    ACTIONS(920), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_low_level_library_NAME_list_repeat2,
    STATE(332), 2,
      sym_filename,
      aux_sym_low_level_library_NAME_list_repeat1,
  [11275] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym_NAME,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      anon_sym_INCLUDE,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
    STATE(287), 2,
      sym_memory_spec,
      aux_sym_memory_spec_list_repeat1,
  [11295] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(930), 1,
      sym_NAME,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    ACTIONS(934), 1,
      anon_sym_RBRACE,
    ACTIONS(936), 1,
      anon_sym_EQ,
    STATE(335), 1,
      sym_phdr_opt,
  [11317] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      sym_NAME,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    ACTIONS(946), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(949), 1,
      sym_LNAME,
    STATE(281), 1,
      aux_sym_input_list_repeat1,
  [11339] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    ACTIONS(912), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(952), 1,
      sym_NAME,
    ACTIONS(954), 1,
      anon_sym_RPAREN,
    ACTIONS(956), 1,
      sym_LNAME,
    STATE(281), 1,
      aux_sym_input_list_repeat1,
  [11361] = 5,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    STATE(627), 1,
      sym_wildcard_maybe_exclude,
    ACTIONS(958), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_INIT_PRIORITY,
  [11379] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_NAME,
    ACTIONS(960), 1,
      anon_sym_COMMA,
    ACTIONS(962), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      sym_low_level_library_NAME_list,
    STATE(278), 2,
      sym_filename,
      aux_sym_low_level_library_NAME_list_repeat1,
  [11399] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    ACTIONS(912), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(952), 1,
      sym_NAME,
    ACTIONS(956), 1,
      sym_LNAME,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
    STATE(281), 1,
      aux_sym_input_list_repeat1,
  [11421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 6,
      anon_sym_LBRACE,
      anon_sym_SUBALIGN,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
      anon_sym_ALIGN_WITH_INPUT,
  [11433] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      sym_NAME,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    ACTIONS(974), 1,
      anon_sym_INCLUDE,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
    STATE(287), 2,
      sym_memory_spec,
      aux_sym_memory_spec_list_repeat1,
  [11453] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_NAME,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      aux_sym_low_level_library_NAME_list_repeat2,
    STATE(332), 2,
      sym_filename,
      aux_sym_low_level_library_NAME_list_repeat1,
  [11473] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    ACTIONS(912), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(981), 1,
      sym_NAME,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
    ACTIONS(985), 1,
      sym_LNAME,
    STATE(285), 1,
      aux_sym_input_list_repeat1,
  [11495] = 7,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_REVERSE,
    ACTIONS(987), 1,
      anon_sym_CONSTRUCTORS,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(481), 1,
      sym_wildcard_maybe_reverse,
  [11517] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym_NAME,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      anon_sym_INCLUDE,
    ACTIONS(989), 1,
      anon_sym_RBRACE,
    STATE(279), 2,
      sym_memory_spec,
      aux_sym_memory_spec_list_repeat1,
  [11537] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_AT,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(991), 1,
      anon_sym_NOCROSSREFS,
    ACTIONS(993), 1,
      anon_sym_LBRACE,
    STATE(409), 1,
      sym_at,
    STATE(563), 1,
      sym_subalign,
  [11559] = 5,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    STATE(619), 1,
      sym_wildcard_maybe_exclude,
    ACTIONS(995), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_INIT_PRIORITY,
  [11577] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(997), 1,
      sym_NAME,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1001), 1,
      anon_sym_RBRACE,
    ACTIONS(1003), 1,
      anon_sym_EQ,
    STATE(320), 1,
      sym_phdr_opt,
  [11599] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym_NAME,
    ACTIONS(926), 1,
      anon_sym_INCLUDE,
    ACTIONS(1005), 1,
      anon_sym_RBRACE,
    STATE(291), 1,
      sym_memory_spec,
    STATE(599), 1,
      sym_memory_spec_list,
  [11618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_LBRACE,
    ACTIONS(1010), 1,
      anon_sym_RBRACE,
    ACTIONS(1012), 1,
      sym_VERS_TAG,
    STATE(296), 2,
      sym_vers_node,
      aux_sym_vers_nodes_repeat1,
  [11635] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      sym_NAME,
    ACTIONS(1017), 1,
      anon_sym_RBRACE,
    STATE(594), 1,
      sym_phdr_list,
    STATE(342), 2,
      sym_phdr,
      aux_sym_phdr_list_repeat1,
  [11652] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_LBRACE,
    ACTIONS(1021), 1,
      sym_VERS_TAG,
    STATE(591), 1,
      sym_vers_nodes,
    STATE(333), 2,
      sym_vers_node,
      aux_sym_vers_nodes_repeat1,
  [11669] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_SEMI,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    STATE(376), 1,
      sym_phdr_val,
    ACTIONS(1023), 2,
      anon_sym_AT,
      sym_NAME,
  [11686] = 6,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_REVERSE,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(479), 1,
      sym_wildcard_maybe_reverse,
  [11705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_NAME,
    ACTIONS(1029), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(332), 2,
      sym_filename,
      aux_sym_low_level_library_NAME_list_repeat1,
  [11720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    STATE(496), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [11735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_RBRACE,
    ACTIONS(1035), 1,
      anon_sym_extern,
    ACTIONS(1033), 3,
      anon_sym_global,
      anon_sym_local,
      sym_VERS_IDENTIFIER,
  [11750] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym_NAME,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    STATE(304), 2,
      sym_filename,
      aux_sym_high_level_library_NAME_list_repeat1,
  [11767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_extern,
    ACTIONS(1045), 1,
      anon_sym_RBRACE,
    ACTIONS(1033), 3,
      anon_sym_global,
      anon_sym_local,
      sym_VERS_IDENTIFIER,
  [11782] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      sym_NAME,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    ACTIONS(1052), 1,
      anon_sym_BANG,
    STATE(306), 2,
      sym_attributes_string,
      aux_sym_attributes_list_repeat1,
  [11799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_extern,
    STATE(438), 1,
      sym_vers_defns,
    ACTIONS(896), 3,
      anon_sym_global,
      anon_sym_local,
      sym_VERS_IDENTIFIER,
  [11814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LBRACE,
    STATE(471), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [11829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_extern,
    STATE(514), 1,
      sym_vers_defns,
    ACTIONS(896), 3,
      anon_sym_global,
      anon_sym_local,
      sym_VERS_IDENTIFIER,
  [11844] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym_NAME,
    ACTIONS(1057), 1,
      anon_sym_BANG,
    STATE(553), 1,
      sym_attributes_list,
    STATE(314), 2,
      sym_attributes_string,
      aux_sym_attributes_list_repeat1,
  [11861] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    ACTIONS(1063), 1,
      anon_sym_l,
    STATE(367), 1,
      sym_length_spec,
    ACTIONS(1061), 2,
      anon_sym_LENGTH,
      anon_sym_len,
  [11878] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_l,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      sym_length_spec,
    ACTIONS(1061), 2,
      anon_sym_LENGTH,
      anon_sym_len,
  [11895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_extern,
    STATE(512), 1,
      sym_vers_defns,
    ACTIONS(896), 3,
      anon_sym_global,
      anon_sym_local,
      sym_VERS_IDENTIFIER,
  [11910] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym_NAME,
    ACTIONS(1057), 1,
      anon_sym_BANG,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    STATE(306), 2,
      sym_attributes_string,
      aux_sym_attributes_list_repeat1,
  [11927] = 6,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_REVERSE,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(624), 1,
      sym_wildcard_maybe_reverse,
  [11946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_RBRACE,
    ACTIONS(1035), 1,
      anon_sym_extern,
    ACTIONS(1069), 1,
      anon_sym_local,
    ACTIONS(1033), 2,
      anon_sym_global,
      sym_VERS_IDENTIFIER,
  [11963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 2,
      anon_sym_AS_NEEDED,
      sym_NAME,
    ACTIONS(944), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_LNAME,
  [11976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 2,
      anon_sym_AS_NEEDED,
      sym_NAME,
    ACTIONS(1075), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_LNAME,
  [11989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_extern,
    STATE(442), 1,
      sym_vers_defns,
    ACTIONS(896), 3,
      anon_sym_global,
      anon_sym_local,
      sym_VERS_IDENTIFIER,
  [12004] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(930), 1,
      sym_NAME,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    ACTIONS(934), 1,
      anon_sym_RBRACE,
    ACTIONS(936), 1,
      anon_sym_EQ,
  [12023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_extern,
    ACTIONS(1077), 1,
      anon_sym_RBRACE,
    ACTIONS(1033), 3,
      anon_sym_global,
      anon_sym_local,
      sym_VERS_IDENTIFIER,
  [12038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    STATE(519), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [12053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_extern,
    ACTIONS(1079), 1,
      anon_sym_RBRACE,
    ACTIONS(1033), 3,
      anon_sym_global,
      anon_sym_local,
      sym_VERS_IDENTIFIER,
  [12068] = 5,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    STATE(484), 1,
      sym_wildcard_maybe_exclude,
    ACTIONS(1081), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
  [12085] = 6,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_REVERSE,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(481), 1,
      sym_wildcard_maybe_reverse,
  [12104] = 6,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_REVERSE,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(530), 1,
      sym_wildcard_maybe_reverse,
  [12123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_LBRACE,
    STATE(487), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [12138] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_NAME,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
    STATE(304), 2,
      sym_filename,
      aux_sym_high_level_library_NAME_list_repeat1,
  [12155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 2,
      anon_sym_AS_NEEDED,
      sym_NAME,
    ACTIONS(1091), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_LNAME,
  [12168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_extern,
    ACTIONS(1093), 1,
      anon_sym_RBRACE,
    ACTIONS(1033), 3,
      anon_sym_global,
      anon_sym_local,
      sym_VERS_IDENTIFIER,
  [12183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_extern,
    STATE(515), 1,
      sym_vers_defns,
    ACTIONS(896), 3,
      anon_sym_global,
      anon_sym_local,
      sym_VERS_IDENTIFIER,
  [12198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      sym_NAME,
    ACTIONS(1098), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(332), 2,
      sym_filename,
      aux_sym_low_level_library_NAME_list_repeat1,
  [12213] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_LBRACE,
    ACTIONS(1021), 1,
      sym_VERS_TAG,
    ACTIONS(1100), 1,
      anon_sym_RBRACE,
    STATE(296), 2,
      sym_vers_node,
      aux_sym_vers_nodes_repeat1,
  [12230] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_AT,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(1102), 1,
      anon_sym_LBRACE,
    STATE(412), 1,
      sym_at,
    STATE(537), 1,
      sym_subalign,
  [12249] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(1104), 1,
      sym_NAME,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    ACTIONS(1108), 1,
      anon_sym_RBRACE,
    ACTIONS(1110), 1,
      anon_sym_EQ,
  [12268] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_NAME,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
    STATE(328), 2,
      sym_filename,
      aux_sym_high_level_library_NAME_list_repeat1,
  [12285] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      sym_NAME,
    ACTIONS(1116), 1,
      anon_sym_SEMI,
    ACTIONS(1118), 1,
      anon_sym_AT,
    STATE(355), 1,
      aux_sym_phdr_qualifiers_repeat1,
    STATE(550), 1,
      sym_phdr_qualifiers,
  [12304] = 6,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_REVERSE,
    STATE(439), 1,
      sym_wildcard_maybe_exclude,
    STATE(645), 1,
      sym_wildcard_maybe_reverse,
  [12323] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_SEMI,
    ACTIONS(1122), 1,
      sym_VERS_TAG,
    STATE(414), 1,
      aux_sym_verdep_repeat1,
    STATE(493), 1,
      sym_verdep,
  [12339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_l,
    STATE(367), 1,
      sym_length_spec,
    ACTIONS(1061), 2,
      anon_sym_LENGTH,
      anon_sym_len,
  [12353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 2,
      anon_sym_INCLUDE,
      sym_NAME,
    ACTIONS(1126), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      sym_NAME,
    ACTIONS(1128), 1,
      anon_sym_RBRACE,
    STATE(346), 2,
      sym_phdr,
      aux_sym_phdr_list_repeat1,
  [12379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    ACTIONS(1130), 1,
      sym_NAME,
    STATE(407), 1,
      aux_sym_overlay_section_repeat1,
    STATE(494), 1,
      sym_overlay_section,
  [12395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 2,
      anon_sym_INCLUDE,
      sym_NAME,
    ACTIONS(1134), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      sym_NAME,
    ACTIONS(1138), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(1140), 1,
      sym_LNAME,
    STATE(509), 1,
      sym_input_list,
  [12423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      sym_NAME,
    ACTIONS(1145), 1,
      anon_sym_RBRACE,
    STATE(346), 2,
      sym_phdr,
      aux_sym_phdr_list_repeat1,
  [12437] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    ACTIONS(1147), 1,
      anon_sym_COLON,
    ACTIONS(1149), 1,
      anon_sym_BLOCK,
    STATE(490), 1,
      sym_atype,
  [12453] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    ACTIONS(1130), 1,
      sym_NAME,
    STATE(407), 1,
      aux_sym_overlay_section_repeat1,
    STATE(462), 1,
      sym_overlay_section,
  [12469] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      sym_NAME,
    ACTIONS(1138), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(1140), 1,
      sym_LNAME,
    STATE(573), 1,
      sym_input_list,
  [12485] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      sym_NAME,
    ACTIONS(1138), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(1140), 1,
      sym_LNAME,
    STATE(614), 1,
      sym_input_list,
  [12501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 4,
      anon_sym_LBRACE,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [12511] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    ACTIONS(1130), 1,
      sym_NAME,
    STATE(407), 1,
      aux_sym_overlay_section_repeat1,
    STATE(483), 1,
      sym_overlay_section,
  [12527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 2,
      anon_sym_INCLUDE,
      sym_NAME,
    ACTIONS(1155), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12539] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym_VERS_TAG,
    ACTIONS(1157), 1,
      anon_sym_SEMI,
    STATE(414), 1,
      aux_sym_verdep_repeat1,
    STATE(511), 1,
      sym_verdep,
  [12555] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      sym_NAME,
    ACTIONS(1118), 1,
      anon_sym_AT,
    ACTIONS(1159), 1,
      anon_sym_SEMI,
    STATE(364), 1,
      aux_sym_phdr_qualifiers_repeat1,
  [12571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_o,
    STATE(312), 1,
      sym_origin_spec,
    ACTIONS(1161), 2,
      anon_sym_ORIGIN,
      anon_sym_org,
  [12585] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_NAME,
    ACTIONS(1165), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym_filename,
    STATE(596), 1,
      sym_high_level_library_NAME_list,
  [12601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 4,
      anon_sym_NOCROSSREFS,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_SUBALIGN,
  [12611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(1169), 2,
      anon_sym_INCLUDE,
      sym_NAME,
  [12623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_o,
    STATE(311), 1,
      sym_origin_spec,
    ACTIONS(1161), 2,
      anon_sym_ORIGIN,
      anon_sym_org,
  [12637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 4,
      anon_sym_NOCROSSREFS,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_SUBALIGN,
  [12647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_l,
    STATE(341), 1,
      sym_length_spec,
    ACTIONS(1061), 2,
      anon_sym_LENGTH,
      anon_sym_len,
  [12661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      sym_NAME,
    ACTIONS(1138), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(1140), 1,
      sym_LNAME,
    STATE(543), 1,
      sym_input_list,
  [12677] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      sym_NAME,
    ACTIONS(1176), 1,
      anon_sym_SEMI,
    ACTIONS(1178), 1,
      anon_sym_AT,
    STATE(364), 1,
      aux_sym_phdr_qualifiers_repeat1,
  [12693] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_NAME,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      aux_sym_extern_name_list_repeat1,
  [12709] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      sym_NAME,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      aux_sym_extern_name_list_repeat1,
  [12725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 2,
      anon_sym_INCLUDE,
      sym_NAME,
    ACTIONS(1195), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12737] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      sym_NAME,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1203), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      aux_sym_extern_name_list_repeat1,
  [12753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 2,
      anon_sym_INCLUDE,
      sym_NAME,
    ACTIONS(1207), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12765] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(1130), 1,
      sym_NAME,
    STATE(407), 1,
      aux_sym_overlay_section_repeat1,
    STATE(489), 1,
      sym_overlay_section,
  [12781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_l,
    ACTIONS(1209), 3,
      anon_sym_COMMA,
      anon_sym_LENGTH,
      anon_sym_len,
  [12793] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    ACTIONS(1213), 1,
      sym_NAME,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_extern_name_list_repeat1,
  [12809] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_NAME,
    ACTIONS(1217), 1,
      anon_sym_COMMA,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      aux_sym_extern_name_list_repeat1,
  [12825] = 4,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    STATE(505), 1,
      sym_wildcard_maybe_exclude,
  [12838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_VERS_TAG,
  [12847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_SEMI,
    ACTIONS(1223), 2,
      anon_sym_AT,
      sym_NAME,
  [12858] = 4,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    STATE(484), 1,
      sym_wildcard_maybe_exclude,
  [12871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      sym_NAME,
    ACTIONS(1203), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      sym_NAME,
    ACTIONS(1229), 2,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [12893] = 4,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    STATE(645), 1,
      sym_wildcard_maybe_exclude,
  [12906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      sym_NAME,
    ACTIONS(1233), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(1235), 1,
      sym_LNAME,
  [12919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      sym_NAME,
    ACTIONS(1239), 2,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [12930] = 4,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    STATE(530), 1,
      sym_wildcard_maybe_exclude,
  [12943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_VERS_TAG,
  [12952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    ACTIONS(1243), 1,
      anon_sym_COLON,
    STATE(536), 1,
      sym_atype,
  [12965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 1,
      anon_sym_SEMI,
    ACTIONS(1245), 2,
      anon_sym_AT,
      sym_NAME,
  [12976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      sym_NAME,
    ACTIONS(1043), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_VERS_TAG,
  [12996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      anon_sym_SEMI,
    ACTIONS(1255), 1,
      sym_VERS_TAG,
    STATE(389), 1,
      aux_sym_verdep_repeat1,
  [13009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(110), 1,
      sym_separator,
    ACTIONS(1258), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      sym_NAME,
    ACTIONS(1262), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13031] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
    ACTIONS(1266), 1,
      sym_wildcard_name,
    STATE(392), 1,
      aux_sym_exclude_name_list_repeat1,
  [13044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
    STATE(394), 1,
      aux_sym_low_level_library_NAME_list_repeat2,
  [13057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    ACTIONS(1271), 1,
      anon_sym_COMMA,
    STATE(394), 1,
      aux_sym_low_level_library_NAME_list_repeat2,
  [13070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      sym_NAME,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    ACTIONS(1108), 1,
      anon_sym_RBRACE,
  [13083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_VERS_TAG,
  [13092] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1276), 1,
      sym_wildcard_name,
    STATE(410), 1,
      aux_sym_exclude_name_list_repeat1,
    STATE(640), 1,
      sym_exclude_name_list,
  [13105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym_NAME,
    ACTIONS(926), 1,
      anon_sym_INCLUDE,
    STATE(359), 1,
      sym_memory_spec,
  [13118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
    ACTIONS(1280), 1,
      anon_sym_AMP,
    STATE(408), 1,
      aux_sym_sect_flag_list_repeat1,
  [13131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      sym_NAME,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1286), 1,
      anon_sym_RBRACE,
  [13144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      sym_NAME,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    ACTIONS(1292), 1,
      anon_sym_RBRACE,
  [13157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(112), 1,
      sym_separator,
    ACTIONS(1258), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13168] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1276), 1,
      sym_wildcard_name,
    STATE(410), 1,
      aux_sym_exclude_name_list_repeat1,
    STATE(466), 1,
      sym_exclude_name_list,
  [13181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_NAME,
    STATE(301), 2,
      sym_filename,
      aux_sym_low_level_library_NAME_list_repeat1,
  [13192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      sym_NAME,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
    STATE(614), 1,
      sym_nocrossref_list,
  [13205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
    STATE(394), 1,
      aux_sym_low_level_library_NAME_list_repeat2,
  [13218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      sym_NAME,
    ACTIONS(1298), 1,
      anon_sym_RBRACE,
    STATE(417), 1,
      aux_sym_overlay_section_repeat1,
  [13231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
    ACTIONS(1302), 1,
      anon_sym_AMP,
    STATE(408), 1,
      aux_sym_sect_flag_list_repeat1,
  [13244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(1102), 1,
      anon_sym_LBRACE,
    STATE(537), 1,
      sym_subalign,
  [13257] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
    ACTIONS(1307), 1,
      sym_wildcard_name,
    STATE(392), 1,
      aux_sym_exclude_name_list_repeat1,
  [13270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 1,
      anon_sym_AMP,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      aux_sym_sect_flag_list_repeat1,
  [13283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(1311), 1,
      anon_sym_LBRACE,
    STATE(507), 1,
      sym_subalign,
  [13296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 1,
      anon_sym_LPAREN,
    ACTIONS(1315), 1,
      anon_sym_COLON,
    STATE(578), 1,
      sym_attributes,
  [13309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_SEMI,
    ACTIONS(1319), 1,
      sym_VERS_TAG,
    STATE(389), 1,
      aux_sym_verdep_repeat1,
  [13322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_separator,
    ACTIONS(1321), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 1,
      sym_NAME,
    ACTIONS(1325), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      sym_NAME,
    ACTIONS(1330), 1,
      anon_sym_RBRACE,
    STATE(417), 1,
      aux_sym_overlay_section_repeat1,
  [13357] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1276), 1,
      sym_wildcard_name,
    STATE(410), 1,
      aux_sym_exclude_name_list_repeat1,
    STATE(646), 1,
      sym_exclude_name_list,
  [13370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_NAME,
    STATE(288), 2,
      sym_filename,
      aux_sym_low_level_library_NAME_list_repeat1,
  [13381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_SEMI,
    ACTIONS(1332), 2,
      anon_sym_AT,
      sym_NAME,
  [13392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_paren_script_name,
  [13402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      sym_NAME,
    STATE(614), 1,
      sym_extern_name_list,
  [13412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      sym_NAME,
    ACTIONS(1286), 1,
      anon_sym_RBRACE,
  [13430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 1,
      anon_sym_SEMI,
    ACTIONS(1342), 1,
      anon_sym_COLON,
  [13448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_NAME,
    STATE(614), 1,
      sym_filename,
  [13458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      sym_NAME,
    STATE(110), 1,
      sym_filename,
  [13468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 1,
      anon_sym_SEMI,
    ACTIONS(1346), 1,
      anon_sym_COLON,
  [13478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_SEMI,
    ACTIONS(1348), 1,
      anon_sym_COLON,
  [13488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      sym_NAME,
    ACTIONS(1108), 1,
      anon_sym_RBRACE,
  [13498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1350), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      sym_NAME,
    ACTIONS(1292), 1,
      anon_sym_RBRACE,
  [13516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_NAME,
    STATE(387), 1,
      sym_filename,
  [13526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      sym_NAME,
    ACTIONS(1356), 1,
      anon_sym_RBRACE,
  [13552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_SEMI,
    ACTIONS(1360), 1,
      anon_sym_RBRACE,
  [13562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_NAME,
    STATE(597), 1,
      sym_filename,
  [13580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1362), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1364), 1,
      anon_sym_SEMI,
    ACTIONS(1366), 1,
      anon_sym_RBRACE,
  [13598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1370), 1,
      sym_NAME,
    ACTIONS(1372), 1,
      anon_sym_RBRACE,
  [13616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1374), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 1,
      anon_sym_COMMA,
    ACTIONS(1378), 1,
      anon_sym_RPAREN,
  [13634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      sym_NAME,
    ACTIONS(934), 1,
      anon_sym_RBRACE,
  [13644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1380), 2,
      anon_sym_AFTER,
      anon_sym_BEFORE,
  [13652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      sym_NAME,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
  [13662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_NAME,
    STATE(233), 1,
      sym_filename,
  [13672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym_paren_script_name,
  [13682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
    ACTIONS(1382), 1,
      sym_NAME,
  [13692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      sym_NAME,
    ACTIONS(1390), 1,
      anon_sym_RBRACE,
  [13702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_NAME,
    STATE(353), 1,
      sym_filename,
  [13728] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1392), 1,
      sym_wildcard_name,
    STATE(472), 1,
      sym_sect_flag_list,
  [13738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1394), 1,
      anon_sym_LPAREN,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
  [13748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 2,
      anon_sym_RPAREN,
      anon_sym_AMP,
  [13756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_NAME,
    STATE(32), 1,
      sym_filename,
  [13766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
  [13781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1398), 1,
      anon_sym_RPAREN,
  [13788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_RPAREN,
  [13795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_RBRACK,
  [13802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1402), 1,
      anon_sym_RPAREN,
  [13809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      sym_NAME,
  [13816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1406), 1,
      sym_NAME,
  [13823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1408), 1,
      sym_NAME,
  [13830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_LPAREN,
  [13837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_LBRACE,
  [13844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1412), 1,
      anon_sym_RPAREN,
  [13851] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1414), 1,
      sym_wildcard_name,
  [13858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      anon_sym_RBRACE,
  [13865] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1418), 1,
      sym_wildcard_name,
  [13872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 1,
      anon_sym_LPAREN,
  [13879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1422), 1,
      anon_sym_RPAREN,
  [13886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1424), 1,
      anon_sym_LPAREN,
  [13893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1426), 1,
      anon_sym_RPAREN,
  [13900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1428), 1,
      anon_sym_LPAREN,
  [13907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1430), 1,
      anon_sym_RPAREN,
  [13914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1432), 1,
      anon_sym_LPAREN,
  [13921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
  [13928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1434), 1,
      anon_sym_RPAREN,
  [13935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1436), 1,
      anon_sym_RPAREN,
  [13942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
  [13949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1438), 1,
      anon_sym_LBRACE,
  [13956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1440), 1,
      anon_sym_LBRACE,
  [13963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
  [13970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1442), 1,
      anon_sym_COLON,
  [13977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1444), 1,
      anon_sym_RPAREN,
  [13984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1446), 1,
      anon_sym_LPAREN,
  [13991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      anon_sym_SEMI,
  [13998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
  [14005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
  [14012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LBRACE,
  [14019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1450), 1,
      anon_sym_LPAREN,
  [14026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1452), 1,
      anon_sym_RBRACK,
  [14033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1454), 1,
      anon_sym_LPAREN,
  [14040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1456), 1,
      anon_sym_LPAREN,
  [14047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1458), 1,
      anon_sym_LPAREN,
  [14054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1460), 1,
      anon_sym_GT,
  [14061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1462), 1,
      sym_NAME,
  [14068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      anon_sym_RPAREN,
  [14075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1466), 1,
      anon_sym_RPAREN,
  [14082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1468), 1,
      sym_NAME,
  [14089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1470), 1,
      anon_sym_LBRACE,
  [14096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1472), 1,
      anon_sym_EQ,
  [14103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      anon_sym_RPAREN,
  [14110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1476), 1,
      anon_sym_RPAREN,
  [14117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_SEMI,
  [14124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1478), 1,
      anon_sym_SEMI,
  [14131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
  [14138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1480), 1,
      anon_sym_SEMI,
  [14145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 1,
      anon_sym_SEMI,
  [14152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      anon_sym_EQ,
  [14159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1486), 1,
      anon_sym_COLON,
  [14166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1488), 1,
      sym_NAME,
  [14173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
  [14180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1490), 1,
      anon_sym_LPAREN,
  [14187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1492), 1,
      anon_sym_LPAREN,
  [14194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1494), 1,
      anon_sym_LPAREN,
  [14201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1496), 1,
      anon_sym_LPAREN,
  [14208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1498), 1,
      anon_sym_LPAREN,
  [14215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1500), 1,
      sym_NAME,
  [14222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1502), 1,
      anon_sym_LPAREN,
  [14229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1504), 1,
      anon_sym_LPAREN,
  [14236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1506), 1,
      anon_sym_LPAREN,
  [14243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1508), 1,
      anon_sym_RPAREN,
  [14250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1510), 1,
      anon_sym_RPAREN,
  [14257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1512), 1,
      anon_sym_LPAREN,
  [14264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1514), 1,
      anon_sym_RBRACE,
  [14271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1516), 1,
      anon_sym_LPAREN,
  [14278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1518), 1,
      anon_sym_LPAREN,
  [14285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1520), 1,
      anon_sym_LPAREN,
  [14292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1522), 1,
      anon_sym_COLON,
  [14299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_LBRACE,
  [14306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1524), 1,
      anon_sym_LBRACE,
  [14313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1526), 1,
      sym_NAME,
  [14320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
  [14327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1528), 1,
      anon_sym_COLON,
  [14334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1530), 1,
      anon_sym_TYPE,
  [14341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1532), 1,
      anon_sym_RPAREN,
  [14348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1534), 1,
      sym_NAME,
  [14355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1536), 1,
      anon_sym_LPAREN,
  [14362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1538), 1,
      anon_sym_RPAREN,
  [14369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1540), 1,
      anon_sym_RBRACE,
  [14376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_SEMI,
  [14383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1542), 1,
      anon_sym_LBRACE,
  [14390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1544), 1,
      anon_sym_SEMI,
  [14397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1546), 1,
      anon_sym_LPAREN,
  [14404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1548), 1,
      anon_sym_EQ,
  [14411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1550), 1,
      anon_sym_RPAREN,
  [14418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1552), 1,
      sym_NAME,
  [14425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 1,
      anon_sym_RPAREN,
  [14432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1556), 1,
      anon_sym_RPAREN,
  [14439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_COMMA,
  [14446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
  [14453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1558), 1,
      anon_sym_RPAREN,
  [14460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
  [14467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1560), 1,
      anon_sym_LBRACE,
  [14474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1562), 1,
      anon_sym_LPAREN,
  [14481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_LBRACE,
  [14488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1564), 1,
      anon_sym_LPAREN,
  [14495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1566), 1,
      anon_sym_LPAREN,
  [14502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_COLON,
  [14509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      anon_sym_RPAREN,
  [14516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_EQ,
  [14523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
  [14530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1574), 1,
      anon_sym_COLON,
  [14537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1576), 1,
      anon_sym_RPAREN,
  [14544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_LPAREN,
  [14551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1580), 1,
      anon_sym_RPAREN,
  [14558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1582), 1,
      anon_sym_COMMA,
  [14565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1584), 1,
      anon_sym_SEMI,
  [14572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1586), 1,
      anon_sym_RBRACE,
  [14579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 1,
      anon_sym_SEMI,
  [14586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1590), 1,
      anon_sym_COLON,
  [14593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1592), 1,
      sym_NAME,
  [14600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1594), 1,
      sym_NAME,
  [14607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1596), 1,
      sym_NAME,
  [14614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1598), 1,
      anon_sym_LPAREN,
  [14621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1600), 1,
      anon_sym_LBRACE,
  [14628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_COLON,
  [14635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1602), 1,
      anon_sym_LPAREN,
  [14642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1604), 1,
      sym_NAME,
  [14649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      sym_NAME,
  [14656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1606), 1,
      anon_sym_LPAREN,
  [14663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1608), 1,
      sym_NAME,
  [14670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
  [14677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1610), 1,
      anon_sym_RBRACE,
  [14684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1612), 1,
      anon_sym_LBRACE,
  [14691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
  [14698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1614), 1,
      anon_sym_RBRACE,
  [14705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_RPAREN,
  [14712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1618), 1,
      anon_sym_RPAREN,
  [14719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1620), 1,
      anon_sym_RPAREN,
  [14726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
  [14733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1622), 1,
      anon_sym_RBRACE,
  [14740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1624), 1,
      anon_sym_EQ,
  [14747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
  [14754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1626), 1,
      anon_sym_LPAREN,
  [14761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1628), 1,
      anon_sym_LPAREN,
  [14768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1630), 1,
      anon_sym_LPAREN,
  [14775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1632), 1,
      anon_sym_LPAREN,
  [14782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1634), 1,
      anon_sym_LPAREN,
  [14789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      anon_sym_LPAREN,
  [14796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_RPAREN,
  [14803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      anon_sym_RBRACE,
  [14810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1642), 1,
      anon_sym_RPAREN,
  [14817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1644), 1,
      anon_sym_COMMA,
  [14824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
  [14831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1646), 1,
      anon_sym_LPAREN,
  [14838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      anon_sym_RPAREN,
  [14845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1648), 1,
      sym_NAME,
  [14852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1650), 1,
      anon_sym_RBRACK,
  [14859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
  [14866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1652), 1,
      sym_NAME,
  [14873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1654), 1,
      anon_sym_RPAREN,
  [14880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1656), 1,
      sym_NAME,
  [14887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1658), 1,
      anon_sym_RPAREN,
  [14894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1658), 1,
      anon_sym_RBRACK,
  [14901] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1660), 1,
      sym_wildcard_name,
  [14908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1662), 1,
      anon_sym_RPAREN,
  [14915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1664), 1,
      anon_sym_RPAREN,
  [14922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_RPAREN,
  [14929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      anon_sym_RPAREN,
  [14936] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1670), 1,
      sym_wildcard_name,
  [14943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1672), 1,
      sym_NAME,
  [14950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1674), 1,
      sym_NAME,
  [14957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1676), 1,
      sym_NAME,
  [14964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1678), 1,
      sym_NAME,
  [14971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1680), 1,
      sym_NAME,
  [14978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1682), 1,
      ts_builtin_sym_end,
  [14985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1684), 1,
      anon_sym_LBRACE,
  [14992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      sym_NAME,
  [14999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1688), 1,
      anon_sym_LBRACE,
  [15006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1690), 1,
      anon_sym_LPAREN,
  [15013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1692), 1,
      anon_sym_LPAREN,
  [15020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1694), 1,
      anon_sym_RPAREN,
  [15027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1696), 1,
      anon_sym_LPAREN,
  [15034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1698), 1,
      anon_sym_LBRACE,
  [15041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1700), 1,
      anon_sym_LPAREN,
  [15048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1702), 1,
      anon_sym_LPAREN,
  [15055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1704), 1,
      anon_sym_RPAREN,
  [15062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1706), 1,
      anon_sym_RPAREN,
  [15069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1708), 1,
      anon_sym_LPAREN,
  [15076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1710), 1,
      anon_sym_LPAREN,
  [15083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1712), 1,
      anon_sym_LPAREN,
  [15090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1714), 1,
      anon_sym_LPAREN,
  [15097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1716), 1,
      anon_sym_LBRACE,
  [15104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_COMMA,
  [15111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1718), 1,
      anon_sym_LPAREN,
  [15118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1720), 1,
      anon_sym_LPAREN,
  [15125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1722), 1,
      anon_sym_LPAREN,
  [15132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1724), 1,
      anon_sym_LPAREN,
  [15139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1726), 1,
      anon_sym_LPAREN,
  [15146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1728), 1,
      anon_sym_LPAREN,
  [15153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1730), 1,
      anon_sym_LPAREN,
  [15160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1732), 1,
      anon_sym_LPAREN,
  [15167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1734), 1,
      anon_sym_LPAREN,
  [15174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1736), 1,
      anon_sym_LPAREN,
  [15181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1738), 1,
      anon_sym_LPAREN,
  [15188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1740), 1,
      sym_NAME,
  [15195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1742), 1,
      anon_sym_LPAREN,
  [15202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1744), 1,
      anon_sym_LPAREN,
  [15209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1746), 1,
      anon_sym_LPAREN,
  [15216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1748), 1,
      anon_sym_LPAREN,
  [15223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1750), 1,
      anon_sym_LPAREN,
  [15230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1752), 1,
      anon_sym_LPAREN,
  [15237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1754), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 200,
  [SMALL_STATE(5)] = 305,
  [SMALL_STATE(6)] = 388,
  [SMALL_STATE(7)] = 435,
  [SMALL_STATE(8)] = 533,
  [SMALL_STATE(9)] = 631,
  [SMALL_STATE(10)] = 729,
  [SMALL_STATE(11)] = 827,
  [SMALL_STATE(12)] = 881,
  [SMALL_STATE(13)] = 979,
  [SMALL_STATE(14)] = 1077,
  [SMALL_STATE(15)] = 1175,
  [SMALL_STATE(16)] = 1220,
  [SMALL_STATE(17)] = 1265,
  [SMALL_STATE(18)] = 1310,
  [SMALL_STATE(19)] = 1405,
  [SMALL_STATE(20)] = 1500,
  [SMALL_STATE(21)] = 1545,
  [SMALL_STATE(22)] = 1621,
  [SMALL_STATE(23)] = 1664,
  [SMALL_STATE(24)] = 1707,
  [SMALL_STATE(25)] = 1750,
  [SMALL_STATE(26)] = 1793,
  [SMALL_STATE(27)] = 1836,
  [SMALL_STATE(28)] = 1879,
  [SMALL_STATE(29)] = 1922,
  [SMALL_STATE(30)] = 1965,
  [SMALL_STATE(31)] = 2008,
  [SMALL_STATE(32)] = 2051,
  [SMALL_STATE(33)] = 2094,
  [SMALL_STATE(34)] = 2137,
  [SMALL_STATE(35)] = 2180,
  [SMALL_STATE(36)] = 2223,
  [SMALL_STATE(37)] = 2266,
  [SMALL_STATE(38)] = 2309,
  [SMALL_STATE(39)] = 2352,
  [SMALL_STATE(40)] = 2395,
  [SMALL_STATE(41)] = 2438,
  [SMALL_STATE(42)] = 2508,
  [SMALL_STATE(43)] = 2578,
  [SMALL_STATE(44)] = 2648,
  [SMALL_STATE(45)] = 2718,
  [SMALL_STATE(46)] = 2788,
  [SMALL_STATE(47)] = 2858,
  [SMALL_STATE(48)] = 2928,
  [SMALL_STATE(49)] = 2998,
  [SMALL_STATE(50)] = 3068,
  [SMALL_STATE(51)] = 3138,
  [SMALL_STATE(52)] = 3208,
  [SMALL_STATE(53)] = 3278,
  [SMALL_STATE(54)] = 3348,
  [SMALL_STATE(55)] = 3418,
  [SMALL_STATE(56)] = 3488,
  [SMALL_STATE(57)] = 3555,
  [SMALL_STATE(58)] = 3622,
  [SMALL_STATE(59)] = 3689,
  [SMALL_STATE(60)] = 3756,
  [SMALL_STATE(61)] = 3823,
  [SMALL_STATE(62)] = 3890,
  [SMALL_STATE(63)] = 3954,
  [SMALL_STATE(64)] = 3994,
  [SMALL_STATE(65)] = 4058,
  [SMALL_STATE(66)] = 4122,
  [SMALL_STATE(67)] = 4186,
  [SMALL_STATE(68)] = 4226,
  [SMALL_STATE(69)] = 4290,
  [SMALL_STATE(70)] = 4354,
  [SMALL_STATE(71)] = 4418,
  [SMALL_STATE(72)] = 4482,
  [SMALL_STATE(73)] = 4546,
  [SMALL_STATE(74)] = 4610,
  [SMALL_STATE(75)] = 4650,
  [SMALL_STATE(76)] = 4714,
  [SMALL_STATE(77)] = 4778,
  [SMALL_STATE(78)] = 4842,
  [SMALL_STATE(79)] = 4882,
  [SMALL_STATE(80)] = 4946,
  [SMALL_STATE(81)] = 5010,
  [SMALL_STATE(82)] = 5074,
  [SMALL_STATE(83)] = 5138,
  [SMALL_STATE(84)] = 5178,
  [SMALL_STATE(85)] = 5218,
  [SMALL_STATE(86)] = 5258,
  [SMALL_STATE(87)] = 5322,
  [SMALL_STATE(88)] = 5362,
  [SMALL_STATE(89)] = 5426,
  [SMALL_STATE(90)] = 5490,
  [SMALL_STATE(91)] = 5554,
  [SMALL_STATE(92)] = 5618,
  [SMALL_STATE(93)] = 5682,
  [SMALL_STATE(94)] = 5746,
  [SMALL_STATE(95)] = 5786,
  [SMALL_STATE(96)] = 5850,
  [SMALL_STATE(97)] = 5914,
  [SMALL_STATE(98)] = 5978,
  [SMALL_STATE(99)] = 6042,
  [SMALL_STATE(100)] = 6082,
  [SMALL_STATE(101)] = 6146,
  [SMALL_STATE(102)] = 6210,
  [SMALL_STATE(103)] = 6274,
  [SMALL_STATE(104)] = 6318,
  [SMALL_STATE(105)] = 6356,
  [SMALL_STATE(106)] = 6391,
  [SMALL_STATE(107)] = 6426,
  [SMALL_STATE(108)] = 6461,
  [SMALL_STATE(109)] = 6496,
  [SMALL_STATE(110)] = 6531,
  [SMALL_STATE(111)] = 6566,
  [SMALL_STATE(112)] = 6601,
  [SMALL_STATE(113)] = 6636,
  [SMALL_STATE(114)] = 6671,
  [SMALL_STATE(115)] = 6706,
  [SMALL_STATE(116)] = 6741,
  [SMALL_STATE(117)] = 6776,
  [SMALL_STATE(118)] = 6811,
  [SMALL_STATE(119)] = 6846,
  [SMALL_STATE(120)] = 6881,
  [SMALL_STATE(121)] = 6916,
  [SMALL_STATE(122)] = 6951,
  [SMALL_STATE(123)] = 6986,
  [SMALL_STATE(124)] = 7021,
  [SMALL_STATE(125)] = 7056,
  [SMALL_STATE(126)] = 7091,
  [SMALL_STATE(127)] = 7126,
  [SMALL_STATE(128)] = 7165,
  [SMALL_STATE(129)] = 7203,
  [SMALL_STATE(130)] = 7239,
  [SMALL_STATE(131)] = 7274,
  [SMALL_STATE(132)] = 7309,
  [SMALL_STATE(133)] = 7341,
  [SMALL_STATE(134)] = 7373,
  [SMALL_STATE(135)] = 7405,
  [SMALL_STATE(136)] = 7437,
  [SMALL_STATE(137)] = 7469,
  [SMALL_STATE(138)] = 7501,
  [SMALL_STATE(139)] = 7533,
  [SMALL_STATE(140)] = 7565,
  [SMALL_STATE(141)] = 7597,
  [SMALL_STATE(142)] = 7629,
  [SMALL_STATE(143)] = 7661,
  [SMALL_STATE(144)] = 7693,
  [SMALL_STATE(145)] = 7725,
  [SMALL_STATE(146)] = 7757,
  [SMALL_STATE(147)] = 7789,
  [SMALL_STATE(148)] = 7821,
  [SMALL_STATE(149)] = 7853,
  [SMALL_STATE(150)] = 7885,
  [SMALL_STATE(151)] = 7917,
  [SMALL_STATE(152)] = 7949,
  [SMALL_STATE(153)] = 7981,
  [SMALL_STATE(154)] = 8013,
  [SMALL_STATE(155)] = 8045,
  [SMALL_STATE(156)] = 8077,
  [SMALL_STATE(157)] = 8119,
  [SMALL_STATE(158)] = 8161,
  [SMALL_STATE(159)] = 8203,
  [SMALL_STATE(160)] = 8245,
  [SMALL_STATE(161)] = 8287,
  [SMALL_STATE(162)] = 8329,
  [SMALL_STATE(163)] = 8371,
  [SMALL_STATE(164)] = 8407,
  [SMALL_STATE(165)] = 8443,
  [SMALL_STATE(166)] = 8479,
  [SMALL_STATE(167)] = 8515,
  [SMALL_STATE(168)] = 8551,
  [SMALL_STATE(169)] = 8587,
  [SMALL_STATE(170)] = 8623,
  [SMALL_STATE(171)] = 8664,
  [SMALL_STATE(172)] = 8705,
  [SMALL_STATE(173)] = 8743,
  [SMALL_STATE(174)] = 8785,
  [SMALL_STATE(175)] = 8823,
  [SMALL_STATE(176)] = 8861,
  [SMALL_STATE(177)] = 8899,
  [SMALL_STATE(178)] = 8929,
  [SMALL_STATE(179)] = 8959,
  [SMALL_STATE(180)] = 8989,
  [SMALL_STATE(181)] = 9027,
  [SMALL_STATE(182)] = 9065,
  [SMALL_STATE(183)] = 9103,
  [SMALL_STATE(184)] = 9133,
  [SMALL_STATE(185)] = 9163,
  [SMALL_STATE(186)] = 9193,
  [SMALL_STATE(187)] = 9223,
  [SMALL_STATE(188)] = 9253,
  [SMALL_STATE(189)] = 9291,
  [SMALL_STATE(190)] = 9313,
  [SMALL_STATE(191)] = 9340,
  [SMALL_STATE(192)] = 9361,
  [SMALL_STATE(193)] = 9388,
  [SMALL_STATE(194)] = 9415,
  [SMALL_STATE(195)] = 9442,
  [SMALL_STATE(196)] = 9463,
  [SMALL_STATE(197)] = 9490,
  [SMALL_STATE(198)] = 9511,
  [SMALL_STATE(199)] = 9538,
  [SMALL_STATE(200)] = 9565,
  [SMALL_STATE(201)] = 9592,
  [SMALL_STATE(202)] = 9619,
  [SMALL_STATE(203)] = 9655,
  [SMALL_STATE(204)] = 9689,
  [SMALL_STATE(205)] = 9723,
  [SMALL_STATE(206)] = 9757,
  [SMALL_STATE(207)] = 9791,
  [SMALL_STATE(208)] = 9825,
  [SMALL_STATE(209)] = 9859,
  [SMALL_STATE(210)] = 9893,
  [SMALL_STATE(211)] = 9913,
  [SMALL_STATE(212)] = 9947,
  [SMALL_STATE(213)] = 9968,
  [SMALL_STATE(214)] = 9989,
  [SMALL_STATE(215)] = 10010,
  [SMALL_STATE(216)] = 10031,
  [SMALL_STATE(217)] = 10062,
  [SMALL_STATE(218)] = 10083,
  [SMALL_STATE(219)] = 10104,
  [SMALL_STATE(220)] = 10135,
  [SMALL_STATE(221)] = 10168,
  [SMALL_STATE(222)] = 10189,
  [SMALL_STATE(223)] = 10210,
  [SMALL_STATE(224)] = 10243,
  [SMALL_STATE(225)] = 10264,
  [SMALL_STATE(226)] = 10285,
  [SMALL_STATE(227)] = 10306,
  [SMALL_STATE(228)] = 10324,
  [SMALL_STATE(229)] = 10342,
  [SMALL_STATE(230)] = 10360,
  [SMALL_STATE(231)] = 10376,
  [SMALL_STATE(232)] = 10394,
  [SMALL_STATE(233)] = 10410,
  [SMALL_STATE(234)] = 10428,
  [SMALL_STATE(235)] = 10458,
  [SMALL_STATE(236)] = 10476,
  [SMALL_STATE(237)] = 10492,
  [SMALL_STATE(238)] = 10510,
  [SMALL_STATE(239)] = 10528,
  [SMALL_STATE(240)] = 10546,
  [SMALL_STATE(241)] = 10564,
  [SMALL_STATE(242)] = 10580,
  [SMALL_STATE(243)] = 10598,
  [SMALL_STATE(244)] = 10616,
  [SMALL_STATE(245)] = 10634,
  [SMALL_STATE(246)] = 10650,
  [SMALL_STATE(247)] = 10668,
  [SMALL_STATE(248)] = 10684,
  [SMALL_STATE(249)] = 10702,
  [SMALL_STATE(250)] = 10720,
  [SMALL_STATE(251)] = 10738,
  [SMALL_STATE(252)] = 10756,
  [SMALL_STATE(253)] = 10774,
  [SMALL_STATE(254)] = 10792,
  [SMALL_STATE(255)] = 10808,
  [SMALL_STATE(256)] = 10824,
  [SMALL_STATE(257)] = 10842,
  [SMALL_STATE(258)] = 10860,
  [SMALL_STATE(259)] = 10883,
  [SMALL_STATE(260)] = 10899,
  [SMALL_STATE(261)] = 10923,
  [SMALL_STATE(262)] = 10947,
  [SMALL_STATE(263)] = 10961,
  [SMALL_STATE(264)] = 10977,
  [SMALL_STATE(265)] = 10993,
  [SMALL_STATE(266)] = 11009,
  [SMALL_STATE(267)] = 11025,
  [SMALL_STATE(268)] = 11049,
  [SMALL_STATE(269)] = 11065,
  [SMALL_STATE(270)] = 11081,
  [SMALL_STATE(271)] = 11105,
  [SMALL_STATE(272)] = 11130,
  [SMALL_STATE(273)] = 11145,
  [SMALL_STATE(274)] = 11170,
  [SMALL_STATE(275)] = 11191,
  [SMALL_STATE(276)] = 11212,
  [SMALL_STATE(277)] = 11233,
  [SMALL_STATE(278)] = 11255,
  [SMALL_STATE(279)] = 11275,
  [SMALL_STATE(280)] = 11295,
  [SMALL_STATE(281)] = 11317,
  [SMALL_STATE(282)] = 11339,
  [SMALL_STATE(283)] = 11361,
  [SMALL_STATE(284)] = 11379,
  [SMALL_STATE(285)] = 11399,
  [SMALL_STATE(286)] = 11421,
  [SMALL_STATE(287)] = 11433,
  [SMALL_STATE(288)] = 11453,
  [SMALL_STATE(289)] = 11473,
  [SMALL_STATE(290)] = 11495,
  [SMALL_STATE(291)] = 11517,
  [SMALL_STATE(292)] = 11537,
  [SMALL_STATE(293)] = 11559,
  [SMALL_STATE(294)] = 11577,
  [SMALL_STATE(295)] = 11599,
  [SMALL_STATE(296)] = 11618,
  [SMALL_STATE(297)] = 11635,
  [SMALL_STATE(298)] = 11652,
  [SMALL_STATE(299)] = 11669,
  [SMALL_STATE(300)] = 11686,
  [SMALL_STATE(301)] = 11705,
  [SMALL_STATE(302)] = 11720,
  [SMALL_STATE(303)] = 11735,
  [SMALL_STATE(304)] = 11750,
  [SMALL_STATE(305)] = 11767,
  [SMALL_STATE(306)] = 11782,
  [SMALL_STATE(307)] = 11799,
  [SMALL_STATE(308)] = 11814,
  [SMALL_STATE(309)] = 11829,
  [SMALL_STATE(310)] = 11844,
  [SMALL_STATE(311)] = 11861,
  [SMALL_STATE(312)] = 11878,
  [SMALL_STATE(313)] = 11895,
  [SMALL_STATE(314)] = 11910,
  [SMALL_STATE(315)] = 11927,
  [SMALL_STATE(316)] = 11946,
  [SMALL_STATE(317)] = 11963,
  [SMALL_STATE(318)] = 11976,
  [SMALL_STATE(319)] = 11989,
  [SMALL_STATE(320)] = 12004,
  [SMALL_STATE(321)] = 12023,
  [SMALL_STATE(322)] = 12038,
  [SMALL_STATE(323)] = 12053,
  [SMALL_STATE(324)] = 12068,
  [SMALL_STATE(325)] = 12085,
  [SMALL_STATE(326)] = 12104,
  [SMALL_STATE(327)] = 12123,
  [SMALL_STATE(328)] = 12138,
  [SMALL_STATE(329)] = 12155,
  [SMALL_STATE(330)] = 12168,
  [SMALL_STATE(331)] = 12183,
  [SMALL_STATE(332)] = 12198,
  [SMALL_STATE(333)] = 12213,
  [SMALL_STATE(334)] = 12230,
  [SMALL_STATE(335)] = 12249,
  [SMALL_STATE(336)] = 12268,
  [SMALL_STATE(337)] = 12285,
  [SMALL_STATE(338)] = 12304,
  [SMALL_STATE(339)] = 12323,
  [SMALL_STATE(340)] = 12339,
  [SMALL_STATE(341)] = 12353,
  [SMALL_STATE(342)] = 12365,
  [SMALL_STATE(343)] = 12379,
  [SMALL_STATE(344)] = 12395,
  [SMALL_STATE(345)] = 12407,
  [SMALL_STATE(346)] = 12423,
  [SMALL_STATE(347)] = 12437,
  [SMALL_STATE(348)] = 12453,
  [SMALL_STATE(349)] = 12469,
  [SMALL_STATE(350)] = 12485,
  [SMALL_STATE(351)] = 12501,
  [SMALL_STATE(352)] = 12511,
  [SMALL_STATE(353)] = 12527,
  [SMALL_STATE(354)] = 12539,
  [SMALL_STATE(355)] = 12555,
  [SMALL_STATE(356)] = 12571,
  [SMALL_STATE(357)] = 12585,
  [SMALL_STATE(358)] = 12601,
  [SMALL_STATE(359)] = 12611,
  [SMALL_STATE(360)] = 12623,
  [SMALL_STATE(361)] = 12637,
  [SMALL_STATE(362)] = 12647,
  [SMALL_STATE(363)] = 12661,
  [SMALL_STATE(364)] = 12677,
  [SMALL_STATE(365)] = 12693,
  [SMALL_STATE(366)] = 12709,
  [SMALL_STATE(367)] = 12725,
  [SMALL_STATE(368)] = 12737,
  [SMALL_STATE(369)] = 12753,
  [SMALL_STATE(370)] = 12765,
  [SMALL_STATE(371)] = 12781,
  [SMALL_STATE(372)] = 12793,
  [SMALL_STATE(373)] = 12809,
  [SMALL_STATE(374)] = 12825,
  [SMALL_STATE(375)] = 12838,
  [SMALL_STATE(376)] = 12847,
  [SMALL_STATE(377)] = 12858,
  [SMALL_STATE(378)] = 12871,
  [SMALL_STATE(379)] = 12882,
  [SMALL_STATE(380)] = 12893,
  [SMALL_STATE(381)] = 12906,
  [SMALL_STATE(382)] = 12919,
  [SMALL_STATE(383)] = 12930,
  [SMALL_STATE(384)] = 12943,
  [SMALL_STATE(385)] = 12952,
  [SMALL_STATE(386)] = 12965,
  [SMALL_STATE(387)] = 12976,
  [SMALL_STATE(388)] = 12987,
  [SMALL_STATE(389)] = 12996,
  [SMALL_STATE(390)] = 13009,
  [SMALL_STATE(391)] = 13020,
  [SMALL_STATE(392)] = 13031,
  [SMALL_STATE(393)] = 13044,
  [SMALL_STATE(394)] = 13057,
  [SMALL_STATE(395)] = 13070,
  [SMALL_STATE(396)] = 13083,
  [SMALL_STATE(397)] = 13092,
  [SMALL_STATE(398)] = 13105,
  [SMALL_STATE(399)] = 13118,
  [SMALL_STATE(400)] = 13131,
  [SMALL_STATE(401)] = 13144,
  [SMALL_STATE(402)] = 13157,
  [SMALL_STATE(403)] = 13168,
  [SMALL_STATE(404)] = 13181,
  [SMALL_STATE(405)] = 13192,
  [SMALL_STATE(406)] = 13205,
  [SMALL_STATE(407)] = 13218,
  [SMALL_STATE(408)] = 13231,
  [SMALL_STATE(409)] = 13244,
  [SMALL_STATE(410)] = 13257,
  [SMALL_STATE(411)] = 13270,
  [SMALL_STATE(412)] = 13283,
  [SMALL_STATE(413)] = 13296,
  [SMALL_STATE(414)] = 13309,
  [SMALL_STATE(415)] = 13322,
  [SMALL_STATE(416)] = 13333,
  [SMALL_STATE(417)] = 13344,
  [SMALL_STATE(418)] = 13357,
  [SMALL_STATE(419)] = 13370,
  [SMALL_STATE(420)] = 13381,
  [SMALL_STATE(421)] = 13392,
  [SMALL_STATE(422)] = 13402,
  [SMALL_STATE(423)] = 13412,
  [SMALL_STATE(424)] = 13420,
  [SMALL_STATE(425)] = 13430,
  [SMALL_STATE(426)] = 13438,
  [SMALL_STATE(427)] = 13448,
  [SMALL_STATE(428)] = 13458,
  [SMALL_STATE(429)] = 13468,
  [SMALL_STATE(430)] = 13478,
  [SMALL_STATE(431)] = 13488,
  [SMALL_STATE(432)] = 13498,
  [SMALL_STATE(433)] = 13506,
  [SMALL_STATE(434)] = 13516,
  [SMALL_STATE(435)] = 13526,
  [SMALL_STATE(436)] = 13534,
  [SMALL_STATE(437)] = 13542,
  [SMALL_STATE(438)] = 13552,
  [SMALL_STATE(439)] = 13562,
  [SMALL_STATE(440)] = 13570,
  [SMALL_STATE(441)] = 13580,
  [SMALL_STATE(442)] = 13588,
  [SMALL_STATE(443)] = 13598,
  [SMALL_STATE(444)] = 13606,
  [SMALL_STATE(445)] = 13616,
  [SMALL_STATE(446)] = 13624,
  [SMALL_STATE(447)] = 13634,
  [SMALL_STATE(448)] = 13644,
  [SMALL_STATE(449)] = 13652,
  [SMALL_STATE(450)] = 13662,
  [SMALL_STATE(451)] = 13672,
  [SMALL_STATE(452)] = 13682,
  [SMALL_STATE(453)] = 13692,
  [SMALL_STATE(454)] = 13702,
  [SMALL_STATE(455)] = 13710,
  [SMALL_STATE(456)] = 13718,
  [SMALL_STATE(457)] = 13728,
  [SMALL_STATE(458)] = 13738,
  [SMALL_STATE(459)] = 13748,
  [SMALL_STATE(460)] = 13756,
  [SMALL_STATE(461)] = 13766,
  [SMALL_STATE(462)] = 13774,
  [SMALL_STATE(463)] = 13781,
  [SMALL_STATE(464)] = 13788,
  [SMALL_STATE(465)] = 13795,
  [SMALL_STATE(466)] = 13802,
  [SMALL_STATE(467)] = 13809,
  [SMALL_STATE(468)] = 13816,
  [SMALL_STATE(469)] = 13823,
  [SMALL_STATE(470)] = 13830,
  [SMALL_STATE(471)] = 13837,
  [SMALL_STATE(472)] = 13844,
  [SMALL_STATE(473)] = 13851,
  [SMALL_STATE(474)] = 13858,
  [SMALL_STATE(475)] = 13865,
  [SMALL_STATE(476)] = 13872,
  [SMALL_STATE(477)] = 13879,
  [SMALL_STATE(478)] = 13886,
  [SMALL_STATE(479)] = 13893,
  [SMALL_STATE(480)] = 13900,
  [SMALL_STATE(481)] = 13907,
  [SMALL_STATE(482)] = 13914,
  [SMALL_STATE(483)] = 13921,
  [SMALL_STATE(484)] = 13928,
  [SMALL_STATE(485)] = 13935,
  [SMALL_STATE(486)] = 13942,
  [SMALL_STATE(487)] = 13949,
  [SMALL_STATE(488)] = 13956,
  [SMALL_STATE(489)] = 13963,
  [SMALL_STATE(490)] = 13970,
  [SMALL_STATE(491)] = 13977,
  [SMALL_STATE(492)] = 13984,
  [SMALL_STATE(493)] = 13991,
  [SMALL_STATE(494)] = 13998,
  [SMALL_STATE(495)] = 14005,
  [SMALL_STATE(496)] = 14012,
  [SMALL_STATE(497)] = 14019,
  [SMALL_STATE(498)] = 14026,
  [SMALL_STATE(499)] = 14033,
  [SMALL_STATE(500)] = 14040,
  [SMALL_STATE(501)] = 14047,
  [SMALL_STATE(502)] = 14054,
  [SMALL_STATE(503)] = 14061,
  [SMALL_STATE(504)] = 14068,
  [SMALL_STATE(505)] = 14075,
  [SMALL_STATE(506)] = 14082,
  [SMALL_STATE(507)] = 14089,
  [SMALL_STATE(508)] = 14096,
  [SMALL_STATE(509)] = 14103,
  [SMALL_STATE(510)] = 14110,
  [SMALL_STATE(511)] = 14117,
  [SMALL_STATE(512)] = 14124,
  [SMALL_STATE(513)] = 14131,
  [SMALL_STATE(514)] = 14138,
  [SMALL_STATE(515)] = 14145,
  [SMALL_STATE(516)] = 14152,
  [SMALL_STATE(517)] = 14159,
  [SMALL_STATE(518)] = 14166,
  [SMALL_STATE(519)] = 14173,
  [SMALL_STATE(520)] = 14180,
  [SMALL_STATE(521)] = 14187,
  [SMALL_STATE(522)] = 14194,
  [SMALL_STATE(523)] = 14201,
  [SMALL_STATE(524)] = 14208,
  [SMALL_STATE(525)] = 14215,
  [SMALL_STATE(526)] = 14222,
  [SMALL_STATE(527)] = 14229,
  [SMALL_STATE(528)] = 14236,
  [SMALL_STATE(529)] = 14243,
  [SMALL_STATE(530)] = 14250,
  [SMALL_STATE(531)] = 14257,
  [SMALL_STATE(532)] = 14264,
  [SMALL_STATE(533)] = 14271,
  [SMALL_STATE(534)] = 14278,
  [SMALL_STATE(535)] = 14285,
  [SMALL_STATE(536)] = 14292,
  [SMALL_STATE(537)] = 14299,
  [SMALL_STATE(538)] = 14306,
  [SMALL_STATE(539)] = 14313,
  [SMALL_STATE(540)] = 14320,
  [SMALL_STATE(541)] = 14327,
  [SMALL_STATE(542)] = 14334,
  [SMALL_STATE(543)] = 14341,
  [SMALL_STATE(544)] = 14348,
  [SMALL_STATE(545)] = 14355,
  [SMALL_STATE(546)] = 14362,
  [SMALL_STATE(547)] = 14369,
  [SMALL_STATE(548)] = 14376,
  [SMALL_STATE(549)] = 14383,
  [SMALL_STATE(550)] = 14390,
  [SMALL_STATE(551)] = 14397,
  [SMALL_STATE(552)] = 14404,
  [SMALL_STATE(553)] = 14411,
  [SMALL_STATE(554)] = 14418,
  [SMALL_STATE(555)] = 14425,
  [SMALL_STATE(556)] = 14432,
  [SMALL_STATE(557)] = 14439,
  [SMALL_STATE(558)] = 14446,
  [SMALL_STATE(559)] = 14453,
  [SMALL_STATE(560)] = 14460,
  [SMALL_STATE(561)] = 14467,
  [SMALL_STATE(562)] = 14474,
  [SMALL_STATE(563)] = 14481,
  [SMALL_STATE(564)] = 14488,
  [SMALL_STATE(565)] = 14495,
  [SMALL_STATE(566)] = 14502,
  [SMALL_STATE(567)] = 14509,
  [SMALL_STATE(568)] = 14516,
  [SMALL_STATE(569)] = 14523,
  [SMALL_STATE(570)] = 14530,
  [SMALL_STATE(571)] = 14537,
  [SMALL_STATE(572)] = 14544,
  [SMALL_STATE(573)] = 14551,
  [SMALL_STATE(574)] = 14558,
  [SMALL_STATE(575)] = 14565,
  [SMALL_STATE(576)] = 14572,
  [SMALL_STATE(577)] = 14579,
  [SMALL_STATE(578)] = 14586,
  [SMALL_STATE(579)] = 14593,
  [SMALL_STATE(580)] = 14600,
  [SMALL_STATE(581)] = 14607,
  [SMALL_STATE(582)] = 14614,
  [SMALL_STATE(583)] = 14621,
  [SMALL_STATE(584)] = 14628,
  [SMALL_STATE(585)] = 14635,
  [SMALL_STATE(586)] = 14642,
  [SMALL_STATE(587)] = 14649,
  [SMALL_STATE(588)] = 14656,
  [SMALL_STATE(589)] = 14663,
  [SMALL_STATE(590)] = 14670,
  [SMALL_STATE(591)] = 14677,
  [SMALL_STATE(592)] = 14684,
  [SMALL_STATE(593)] = 14691,
  [SMALL_STATE(594)] = 14698,
  [SMALL_STATE(595)] = 14705,
  [SMALL_STATE(596)] = 14712,
  [SMALL_STATE(597)] = 14719,
  [SMALL_STATE(598)] = 14726,
  [SMALL_STATE(599)] = 14733,
  [SMALL_STATE(600)] = 14740,
  [SMALL_STATE(601)] = 14747,
  [SMALL_STATE(602)] = 14754,
  [SMALL_STATE(603)] = 14761,
  [SMALL_STATE(604)] = 14768,
  [SMALL_STATE(605)] = 14775,
  [SMALL_STATE(606)] = 14782,
  [SMALL_STATE(607)] = 14789,
  [SMALL_STATE(608)] = 14796,
  [SMALL_STATE(609)] = 14803,
  [SMALL_STATE(610)] = 14810,
  [SMALL_STATE(611)] = 14817,
  [SMALL_STATE(612)] = 14824,
  [SMALL_STATE(613)] = 14831,
  [SMALL_STATE(614)] = 14838,
  [SMALL_STATE(615)] = 14845,
  [SMALL_STATE(616)] = 14852,
  [SMALL_STATE(617)] = 14859,
  [SMALL_STATE(618)] = 14866,
  [SMALL_STATE(619)] = 14873,
  [SMALL_STATE(620)] = 14880,
  [SMALL_STATE(621)] = 14887,
  [SMALL_STATE(622)] = 14894,
  [SMALL_STATE(623)] = 14901,
  [SMALL_STATE(624)] = 14908,
  [SMALL_STATE(625)] = 14915,
  [SMALL_STATE(626)] = 14922,
  [SMALL_STATE(627)] = 14929,
  [SMALL_STATE(628)] = 14936,
  [SMALL_STATE(629)] = 14943,
  [SMALL_STATE(630)] = 14950,
  [SMALL_STATE(631)] = 14957,
  [SMALL_STATE(632)] = 14964,
  [SMALL_STATE(633)] = 14971,
  [SMALL_STATE(634)] = 14978,
  [SMALL_STATE(635)] = 14985,
  [SMALL_STATE(636)] = 14992,
  [SMALL_STATE(637)] = 14999,
  [SMALL_STATE(638)] = 15006,
  [SMALL_STATE(639)] = 15013,
  [SMALL_STATE(640)] = 15020,
  [SMALL_STATE(641)] = 15027,
  [SMALL_STATE(642)] = 15034,
  [SMALL_STATE(643)] = 15041,
  [SMALL_STATE(644)] = 15048,
  [SMALL_STATE(645)] = 15055,
  [SMALL_STATE(646)] = 15062,
  [SMALL_STATE(647)] = 15069,
  [SMALL_STATE(648)] = 15076,
  [SMALL_STATE(649)] = 15083,
  [SMALL_STATE(650)] = 15090,
  [SMALL_STATE(651)] = 15097,
  [SMALL_STATE(652)] = 15104,
  [SMALL_STATE(653)] = 15111,
  [SMALL_STATE(654)] = 15118,
  [SMALL_STATE(655)] = 15125,
  [SMALL_STATE(656)] = 15132,
  [SMALL_STATE(657)] = 15139,
  [SMALL_STATE(658)] = 15146,
  [SMALL_STATE(659)] = 15153,
  [SMALL_STATE(660)] = 15160,
  [SMALL_STATE(661)] = 15167,
  [SMALL_STATE(662)] = 15174,
  [SMALL_STATE(663)] = 15181,
  [SMALL_STATE(664)] = 15188,
  [SMALL_STATE(665)] = 15195,
  [SMALL_STATE(666)] = 15202,
  [SMALL_STATE(667)] = 15209,
  [SMALL_STATE(668)] = 15216,
  [SMALL_STATE(669)] = 15223,
  [SMALL_STATE(670)] = 15230,
  [SMALL_STATE(671)] = 15237,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(218),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(27),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(582),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(663),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(662),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(27),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(661),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(460),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(660),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(659),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(448),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(654),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(651),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(650),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(644),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(643),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(642),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(641),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(639),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(638),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(25),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(637),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(635),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_section_spec_no_keep, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_section_spec_no_keep, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_anywhere, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_anywhere, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_anywhere, 6),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_anywhere, 6),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_anywhere, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_anywhere, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 1),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(11),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(108),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(428),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(535),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(534),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(533),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(531),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(528),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(527),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(205),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(526),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(108),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(525),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(524),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(523),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(643),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(435),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_separator, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_separator, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifile_p1, 8),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifile_p1, 8),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifile_p1, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifile_p1, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdrs, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phdrs, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_support, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_support, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sections, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifile_p1, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifile_p1, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_startup, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_startup, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_low_level_library, 3),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_low_level_library, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifile_p1, 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifile_p1, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifile_p1, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifile_p1, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_high_level_library, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_high_level_library, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifile_p1, 6),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifile_p1, 6),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_low_level_library, 4),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_low_level_library, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdrs, 4),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phdrs, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sections, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_high_level_library, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_high_level_library, 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_script_name, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_script_name, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 4),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_INT, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_INT, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 6),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 6),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 5),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustbe_exp, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustbe_exp, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_op, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_op, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_section_spec_no_keep, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_section_spec_no_keep, 4),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 7),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 7),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_section_spec_no_keep, 5),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_section_spec_no_keep, 5),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_section_spec_no_keep, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_section_spec_no_keep, 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_section_spec, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_section_spec, 1),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_section_spec, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_section_spec, 4),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_section_spec_no_keep, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_section_spec_no_keep, 3),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phdr_type, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdr_type, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 9),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 9),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 8),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 8),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 7),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 7),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 5),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 5),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 10),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 10),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 6),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 6),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 11),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 11),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name_list, 2),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [647] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(216),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(501),
  [653] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(500),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(499),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(665),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2),
  [664] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(232),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_name_list, 1),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sec_or_group_p1, 1),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(219),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_name_list_repeat1, 2),
  [688] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(655),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(656),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(657),
  [697] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(668),
  [700] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(248),
  [703] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sec_or_group_p1_repeat1, 2), SHIFT_REPEAT(3),
  [706] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sec_or_group_p1_repeat1, 2), SHIFT_REPEAT(21),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sec_or_group_p1_repeat1, 2), SHIFT_REPEAT(450),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sec_or_group_p1_repeat1, 2),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sec_or_group_p1_repeat1, 2), SHIFT_REPEAT(650),
  [717] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sec_or_group_p1_repeat1, 2), SHIFT_REPEAT(644),
  [720] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sec_or_group_p1_repeat1, 2), SHIFT_REPEAT(643),
  [723] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sec_or_group_p1_repeat1, 2), SHIFT_REPEAT(44),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_name_list, 2),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 12),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 12),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name_list, 1),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memspec, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memspec, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phdr_opt, 3),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdr_opt, 3),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 13),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 13),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phdr_opt, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdr_opt, 2),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memspec_at, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memspec_at, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_exp, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_exp, 1),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 14),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 14),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 15),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 15),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_maybe_reverse, 1),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_maybe_exclude, 1),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_maybe_exclude, 5),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_maybe_exclude, 5),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_name_spec, 4),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_maybe_reverse, 4),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_maybe_reverse, 4),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_maybe_reverse, 1),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 16),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 16),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_name_spec, 7),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name_spec, 4),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_maybe_exclude, 1),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name_spec, 7),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_name_spec, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name_spec, 1),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_with_type, 9),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_exp_with_type, 9),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sect_flags, 4),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_with_type, 6),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_exp_with_type, 6),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_with_type, 2),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_exp_with_type, 2),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_with_type, 10),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_exp_with_type, 10),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_with_type, 1),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_exp_with_type, 1),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_with_type, 5),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_exp_with_type, 5),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_with_type, 3),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_exp_with_type, 3),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at, 4),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at, 4),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_list, 4),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_low_level_library_NAME_list, 1),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_spec_list, 2),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_overlay_section_repeat1, 4),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_section_repeat1, 4),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [938] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_list_repeat1, 2), SHIFT_REPEAT(281),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_list_repeat1, 2), SHIFT_REPEAT(381),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_list_repeat1, 2),
  [946] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_list_repeat1, 2), SHIFT_REPEAT(588),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_list_repeat1, 2), SHIFT_REPEAT(281),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_list, 5),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_list, 2),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align, 4),
  [968] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_memory_spec_list_repeat1, 2), SHIFT_REPEAT(413),
  [971] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_memory_spec_list_repeat1, 2), SHIFT_REPEAT(398),
  [974] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_memory_spec_list_repeat1, 2), SHIFT_REPEAT(456),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_memory_spec_list_repeat1, 2),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_low_level_library_NAME_list, 2),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_list, 1),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_spec_list, 1),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_overlay_section_repeat1, 3),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_section_repeat1, 3),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1007] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vers_nodes_repeat1, 2), SHIFT_REPEAT(273),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vers_nodes_repeat1, 2),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vers_nodes_repeat1, 2), SHIFT_REPEAT(592),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phdr_qualifiers_repeat1, 1),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phdr_qualifiers_repeat1, 1),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_low_level_library_NAME_list_repeat2, 2),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_tag, 4),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1037] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_high_level_library_NAME_list_repeat1, 2), SHIFT_REPEAT(6),
  [1040] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_high_level_library_NAME_list_repeat1, 2), SHIFT_REPEAT(434),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_high_level_library_NAME_list_repeat1, 2),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1047] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributes_list_repeat1, 2), SHIFT_REPEAT(382),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_list_repeat1, 2),
  [1052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_list_repeat1, 2), SHIFT_REPEAT(554),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes_list, 1),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1071] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_input_list_repeat1, 2),
  [1073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_input_list_repeat1, 5),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_list_repeat1, 5),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_tag, 2),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_high_level_library_NAME_list, 2),
  [1089] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_input_list_repeat1, 4),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_list_repeat1, 4),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_tag, 8),
  [1095] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_low_level_library_NAME_list_repeat1, 2), SHIFT_REPEAT(6),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_low_level_library_NAME_list_repeat1, 2),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_nodes, 1),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_overlay_section_repeat1, 5),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_section_repeat1, 5),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_high_level_library_NAME_list, 1),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_spec, 6),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_spec, 6),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdr_list, 1),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_length_spec, 3),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_length_spec, 3),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phdr_list_repeat1, 2), SHIFT_REPEAT(56),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phdr_list_repeat1, 2),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subalign, 4),
  [1153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_spec, 2),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_spec, 2),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdr_qualifiers, 1),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_without_type, 2),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_memory_spec_list_repeat1, 2),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_without_type, 1),
  [1173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phdr_qualifiers_repeat1, 2), SHIFT_REPEAT(299),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phdr_qualifiers_repeat1, 2),
  [1178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phdr_qualifiers_repeat1, 2), SHIFT_REPEAT(551),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_name_list, 2),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nocrossref_list, 1),
  [1193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_spec, 5),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_spec, 5),
  [1197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_extern_name_list_repeat1, 2), SHIFT_REPEAT(368),
  [1200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extern_name_list_repeat1, 2), SHIFT_REPEAT(587),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extern_name_list_repeat1, 2),
  [1205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_spec, 4),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_spec, 4),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin_spec, 3),
  [1211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_origin_spec, 3),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_name_list, 1),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nocrossref_list, 2),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_node, 6),
  [1223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phdr_qualifiers_repeat1, 2),
  [1225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extern_name_list_repeat1, 2),
  [1227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes_string, 2),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes_string, 2),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes_string, 1),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes_string, 1),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_node, 4),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phdr_val, 3),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdr_val, 3),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_high_level_library_NAME_list_repeat1, 2),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_node, 5),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verdep_repeat1, 2),
  [1255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verdep_repeat1, 2), SHIFT_REPEAT(389),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_defns, 3),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_name_list_repeat1, 2),
  [1266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_name_list_repeat1, 2), SHIFT_REPEAT(392),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_low_level_library_NAME_list, 3),
  [1271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_low_level_library_NAME_list_repeat2, 2), SHIFT_REPEAT(404),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_node, 3),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sect_flag_list, 2),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_overlay_section_repeat1, 7),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_section_repeat1, 7),
  [1288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_overlay_section_repeat1, 6),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_section_repeat1, 6),
  [1294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overlay_section, 1),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sect_flag_list_repeat1, 2),
  [1302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sect_flag_list_repeat1, 2), SHIFT_REPEAT(475),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_name_list, 1),
  [1307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sect_flag_list, 1),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verdep, 1),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_defns, 1),
  [1327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_overlay_section_repeat1, 2), SHIFT_REPEAT(538),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_section_repeat1, 2),
  [1332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phdr_qualifiers_repeat1, 4),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phdr_qualifiers_repeat1, 4),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_defns, 8),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_defns, 5),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_defns, 6),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phdr, 3),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdr, 3),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_defns, 7),
  [1370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_overlay_section_repeat1, 8),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_section_repeat1, 8),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nocrossref_list, 3),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phdr, 4),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdr, 4),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_spec, 4),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [1488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_spec, 1),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_length, 1),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atype, 3),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_spec, 7),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sect_constraint, 1),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atype, 2),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [1594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [1596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [1674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [1676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [1680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [1682] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ld(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_NAME,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
