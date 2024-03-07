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
#define STATE_COUNT 677
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 233
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
  aux_sym_vers_defns_repeat1 = 232,
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
  [aux_sym_vers_defns_repeat1] = "vers_defns_repeat1",
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
  [aux_sym_vers_defns_repeat1] = aux_sym_vers_defns_repeat1,
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
  [aux_sym_vers_defns_repeat1] = {
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
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 71,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 69,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 67,
  [83] = 83,
  [84] = 84,
  [85] = 83,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 86,
  [92] = 92,
  [93] = 93,
  [94] = 76,
  [95] = 95,
  [96] = 96,
  [97] = 87,
  [98] = 89,
  [99] = 99,
  [100] = 100,
  [101] = 66,
  [102] = 74,
  [103] = 103,
  [104] = 104,
  [105] = 70,
  [106] = 77,
  [107] = 6,
  [108] = 64,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 79,
  [114] = 63,
  [115] = 84,
  [116] = 116,
  [117] = 75,
  [118] = 118,
  [119] = 119,
  [120] = 68,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 80,
  [125] = 73,
  [126] = 16,
  [127] = 104,
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
  [139] = 136,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 141,
  [147] = 147,
  [148] = 143,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 135,
  [153] = 132,
  [154] = 154,
  [155] = 151,
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
  [180] = 180,
  [181] = 181,
  [182] = 174,
  [183] = 183,
  [184] = 180,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 176,
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
  [206] = 202,
  [207] = 207,
  [208] = 208,
  [209] = 207,
  [210] = 205,
  [211] = 203,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 218,
  [221] = 221,
  [222] = 222,
  [223] = 222,
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
  [241] = 241,
  [242] = 231,
  [243] = 232,
  [244] = 244,
  [245] = 241,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 234,
  [250] = 250,
  [251] = 247,
  [252] = 235,
  [253] = 253,
  [254] = 227,
  [255] = 255,
  [256] = 256,
  [257] = 248,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 259,
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
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 293,
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
  [314] = 309,
  [315] = 315,
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
  [334] = 328,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
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
  [382] = 381,
  [383] = 383,
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
  [394] = 386,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 386,
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
  [418] = 418,
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
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 241,
  [447] = 447,
  [448] = 448,
  [449] = 235,
  [450] = 450,
  [451] = 231,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 232,
  [460] = 437,
  [461] = 461,
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
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 118,
  [596] = 596,
  [597] = 597,
  [598] = 110,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 123,
  [604] = 604,
  [605] = 605,
  [606] = 112,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 480,
  [616] = 616,
  [617] = 472,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 572,
  [622] = 567,
  [623] = 623,
  [624] = 514,
  [625] = 625,
  [626] = 497,
  [627] = 494,
  [628] = 476,
  [629] = 482,
  [630] = 488,
  [631] = 551,
  [632] = 514,
  [633] = 476,
  [634] = 634,
  [635] = 542,
  [636] = 636,
  [637] = 556,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 620,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 513,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 535,
  [651] = 513,
  [652] = 589,
  [653] = 588,
  [654] = 587,
  [655] = 655,
  [656] = 656,
  [657] = 469,
  [658] = 658,
  [659] = 658,
  [660] = 582,
  [661] = 578,
  [662] = 575,
  [663] = 570,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 555,
  [670] = 552,
  [671] = 481,
  [672] = 483,
  [673] = 552,
  [674] = 591,
  [675] = 586,
  [676] = 585,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      if (lookahead == '!') ADVANCE(110);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '$') ADVANCE(246);
      if (lookahead == '%') ADVANCE(119);
      if (lookahead == '&') ADVANCE(78);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == '0') ADVANCE(345);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '?') ADVANCE(133);
      if (lookahead == 'L') ADVANCE(158);
      if (lookahead == 'R') ADVANCE(159);
      if (lookahead == 'S') ADVANCE(197);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '|') ADVANCE(130);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '~') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= '_') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(110);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '$') ADVANCE(246);
      if (lookahead == '&') ADVANCE(28);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '0') ADVANCE(345);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == 'L') ADVANCE(158);
      if (lookahead == '^') ADVANCE(30);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '~') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(110);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '$') ADVANCE(246);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '0') ADVANCE(345);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == 'L') ADVANCE(158);
      if (lookahead == '~') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '%') ADVANCE(119);
      if (lookahead == '&') ADVANCE(78);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '?') ADVANCE(133);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == '|') ADVANCE(130);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '~') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '%') ADVANCE(119);
      if (lookahead == '&') ADVANCE(78);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '?') ADVANCE(133);
      if (lookahead == 'L') ADVANCE(38);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '|') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '&') ADVANCE(28);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '+') ADVANCE(254);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == 'C') ADVANCE(198);
      if (lookahead == 'E') ADVANCE(233);
      if (lookahead == 'R') ADVANCE(163);
      if (lookahead == 'S') ADVANCE(199);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '~') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '!' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '?') ||
          lookahead == ']') ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '~') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '?' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^') ADVANCE(349);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == 'C') ADVANCE(198);
      if (lookahead == 'E') ADVANCE(233);
      if (lookahead == 'R') ADVANCE(163);
      if (lookahead == 'S') ADVANCE(199);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '~') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '!' ||
          ('*' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          lookahead == ']' ||
          lookahead == '^') ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(233);
      if (lookahead == 'R') ADVANCE(163);
      if (lookahead == 'S') ADVANCE(199);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '~') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '!' ||
          ('*' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          lookahead == ']' ||
          lookahead == '^') ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(134);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(28);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '^') ADVANCE(30);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == 'E') ADVANCE(327);
      if (lookahead == 'R') ADVANCE(267);
      if (lookahead == 'S') ADVANCE(294);
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
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == 'E') ADVANCE(327);
      if (lookahead == 'R') ADVANCE(267);
      if (lookahead == 'S') ADVANCE(294);
      if (lookahead == ']') ADVANCE(82);
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
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(350);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == 'C') ADVANCE(297);
      if (lookahead == 'E') ADVANCE(327);
      if (lookahead == 'R') ADVANCE(267);
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
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == 'E') ADVANCE(327);
      if (lookahead == 'R') ADVANCE(267);
      if (lookahead == 'S') ADVANCE(294);
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
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == 'E') ADVANCE(327);
      if (lookahead == 'R') ADVANCE(267);
      if (lookahead == 'S') ADVANCE(299);
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
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == 'E') ADVANCE(327);
      if (lookahead == 'R') ADVANCE(267);
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
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == 'E') ADVANCE(327);
      if (lookahead == 'S') ADVANCE(300);
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
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == 'E') ADVANCE(327);
      if (lookahead == 'S') ADVANCE(301);
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
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == 'E') ADVANCE(327);
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
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(349);
      END_STATE();
    case 25:
      if (lookahead == '<') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'G') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'H') ADVANCE(104);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 45:
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'b' ||
          lookahead == 'd') ADVANCE(342);
      if (lookahead == 'H' ||
          lookahead == 'O' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 47:
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(249);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '!') ADVANCE(110);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '~') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SORT_BY_NAME);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SORT_BY_NAME);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SORT_BY_NAME);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SORT);
      if (lookahead == '_') ADVANCE(149);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SORT);
      if (lookahead == '_') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SORT);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SORT);
      if (lookahead == '_') ADVANCE(261);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SORT);
      if (lookahead == '_') ADVANCE(262);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SORT);
      if (lookahead == '_') ADVANCE(263);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SORT_BY_ALIGNMENT);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SORT_BY_ALIGNMENT);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SORT_NONE);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SORT_NONE);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SORT_NONE);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SORT_BY_INIT_PRIORITY);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SORT_BY_INIT_PRIORITY);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_REVERSE);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_REVERSE);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_REVERSE);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EXCLUDE_FILE);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EXCLUDE_FILE);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(131);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_CONSTRUCTORS);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_CONSTRUCTORS);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(243);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '!' ||
          ('*' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^') ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(243);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LENGTH);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LENGTH);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(241);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_len);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_len);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(14);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == 'D') ADVANCE(176);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(120);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '>') ADVANCE(121);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_NAME);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(176);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == 'D') ADVANCE(176);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == 'D') ADVANCE(177);
      if (lookahead == '!' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(243);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == 'D') ADVANCE(177);
      if (lookahead == '!' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(243);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(243);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '/' ||
          lookahead == '~') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(142);
      if (lookahead == '+' ||
          lookahead == ',' ||
          lookahead == '=') ADVANCE(248);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(349);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(349);
      if (lookahead == '+' ||
          lookahead == ',' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(248);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'A') ADVANCE(207);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('B' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'A') ADVANCE(183);
      if (lookahead == 'I') ADVANCE(192);
      if (lookahead == 'N') ADVANCE(146);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'A') ADVANCE(186);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'A') ADVANCE(209);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('B' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(243);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'A') ADVANCE(187);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'B') ADVANCE(234);
      if (lookahead == 'N') ADVANCE(200);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'B') ADVANCE(236);
      if (lookahead == 'N') ADVANCE(201);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'C') ADVANCE(144);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'C') ADVANCE(184);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'C') ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(243);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'C') ADVANCE(227);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'D') ADVANCE(139);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'D') ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(243);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'D') ADVANCE(164);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(189);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(232);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(74);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(69);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(58);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(231);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(239);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(68);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(206);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(210);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'E') ADVANCE(194);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'F') ADVANCE(179);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'G') ADVANCE(222);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'G') ADVANCE(193);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'H') ADVANCE(105);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'I') ADVANCE(216);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(243);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'I') ADVANCE(174);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'I') ADVANCE(185);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'I') ADVANCE(226);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'I') ADVANCE(225);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'I') ADVANCE(202);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'L') ADVANCE(178);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'L') ADVANCE(229);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'L') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'M') ADVANCE(162);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'M') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'M') ADVANCE(171);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'N') ADVANCE(173);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'N') ADVANCE(218);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'N') ADVANCE(148);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'N') ADVANCE(180);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'N') ADVANCE(188);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'N') ADVANCE(223);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'N') ADVANCE(161);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'N') ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'O') ADVANCE(205);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'O') ADVANCE(190);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'O') ADVANCE(208);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'O') ADVANCE(195);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'O') ADVANCE(196);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'O') ADVANCE(214);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'O') ADVANCE(213);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'P') ADVANCE(212);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(221);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(219);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(155);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(243);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(220);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(230);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(182);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(217);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'R') ADVANCE(181);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'S') ADVANCE(151);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'S') ADVANCE(153);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(243);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'S') ADVANCE(228);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'S') ADVANCE(160);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'S') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'T') ADVANCE(60);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'T') ADVANCE(175);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'T') ADVANCE(66);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'T') ADVANCE(61);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'T') ADVANCE(235);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'T') ADVANCE(238);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'T') ADVANCE(203);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'T') ADVANCE(211);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'U') ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'U') ADVANCE(154);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'V') ADVANCE(170);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'V') ADVANCE(169);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'X') ADVANCE(152);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'Y') ADVANCE(237);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'Y') ADVANCE(71);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'Y') ADVANCE(240);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '_') ADVANCE(145);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '_') ADVANCE(204);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '_') ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'n') ADVANCE(109);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(340);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'b' ||
          lookahead == 'd') ADVANCE(244);
      if (lookahead == 'H' ||
          lookahead == 'O' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(247);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('G' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(247);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('G' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_NAME);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('G' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_NAME);
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_LNAME);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('+' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(251);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(251);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'A') ADVANCE(286);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'A') ADVANCE(284);
      if (lookahead == 'I') ADVANCE(291);
      if (lookahead == 'N') ADVANCE(257);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'A') ADVANCE(284);
      if (lookahead == 'N') ADVANCE(257);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'B') ADVANCE(329);
      if (lookahead == 'N') ADVANCE(295);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'B') ADVANCE(330);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'B') ADVANCE(331);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'B') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'C') ADVANCE(283);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'C') ADVANCE(321);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'D') ADVANCE(268);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'E') ADVANCE(326);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'E') ADVANCE(333);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'E') ADVANCE(75);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'E') ADVANCE(77);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'E') ADVANCE(304);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'E') ADVANCE(290);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'F') ADVANCE(280);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'G') ADVANCE(293);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'I') ADVANCE(276);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'I') ADVANCE(319);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'I') ADVANCE(291);
      if (lookahead == 'N') ADVANCE(257);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'I') ADVANCE(285);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'I') ADVANCE(318);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'L') ADVANCE(324);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'L') ADVANCE(277);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'L') ADVANCE(271);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'M') ADVANCE(272);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'M') ADVANCE(274);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'N') ADVANCE(257);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'N') ADVANCE(314);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'N') ADVANCE(316);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'N') ADVANCE(278);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'N') ADVANCE(270);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'N') ADVANCE(287);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'O') ADVANCE(303);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'O') ADVANCE(292);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'O') ADVANCE(306);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'O') ADVANCE(289);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'O') ADVANCE(308);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'O') ADVANCE(309);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'O') ADVANCE(310);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'O') ADVANCE(311);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'P') ADVANCE(307);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(315);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(313);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(325);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(312);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(282);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(281);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(317);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(322);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'R') ADVANCE(323);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'S') ADVANCE(269);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'S') ADVANCE(320);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(67);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(63);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(328);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(335);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(296);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'T') ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'U') ADVANCE(266);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'U') ADVANCE(265);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'V') ADVANCE(273);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'X') ADVANCE(264);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'Y') ADVANCE(72);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'Y') ADVANCE(334);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'Y') ADVANCE(336);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'Y') ADVANCE(337);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == 'Y') ADVANCE(338);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '_') ADVANCE(258);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '_') ADVANCE(259);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '!' ||
          ('*' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^') ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(243);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_wildcard_name);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_INT_token2);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_INT_token2);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'b' ||
          lookahead == 'd') ADVANCE(342);
      if (lookahead == 'H' ||
          lookahead == 'O' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_INT_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(347);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_INT_token3);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_INT_token3);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(343);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'b' ||
          lookahead == 'd') ADVANCE(342);
      if (lookahead == 'H' ||
          lookahead == 'O' ||
          lookahead == 'h' ||
          lookahead == 'o') ADVANCE(341);
      if (lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_INT_token3);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'b' ||
          lookahead == 'd') ADVANCE(342);
      if (lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(344);
      if (lookahead == 'H' ||
          lookahead == 'O' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_INT_token3);
      if (lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_VERS_TAG);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_VERS_IDENTIFIER);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 350:
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
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'g') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'B') ADVANCE(25);
      if (lookahead == 'D') ADVANCE(26);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'L') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == 'E') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(32);
      if (lookahead == 'L') ADVANCE(33);
      if (lookahead == 'Y') ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'E') ADVANCE(38);
      if (lookahead == 'S') ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == 'N') ADVANCE(40);
      if (lookahead == 'X') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == 'I') ADVANCE(42);
      if (lookahead == 'L') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == 'R') ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == 'I') ADVANCE(46);
      if (lookahead == 'L') ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(51);
      if (lookahead == 'O') ADVANCE(52);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead == 'O') ADVANCE(57);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(58);
      if (lookahead == 'R') ADVANCE(59);
      if (lookahead == 'U') ADVANCE(60);
      if (lookahead == 'V') ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead == 'H') ADVANCE(62);
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == 'U') ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead == 'H') ADVANCE(67);
      if (lookahead == 'I') ADVANCE(68);
      if (lookahead == 'P') ADVANCE(69);
      if (lookahead == 'Q') ADVANCE(70);
      if (lookahead == 'T') ADVANCE(71);
      if (lookahead == 'U') ADVANCE(72);
      if (lookahead == 'Y') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(74);
      if (lookahead == 'Y') ADVANCE(75);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == 'x') ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == 'D') ADVANCE(82);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(84);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(86);
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 31:
      if (lookahead == 'F') ADVANCE(88);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(89);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(90);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(91);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(93);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(95);
      END_STATE();
    case 38:
      if (lookahead == 'F') ADVANCE(96);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(97);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(98);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(99);
      END_STATE();
    case 42:
      if (lookahead == 'L') ADVANCE(100);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(101);
      END_STATE();
    case 44:
      if (lookahead == 'R') ADVANCE(102);
      END_STATE();
    case 45:
      if (lookahead == 'O') ADVANCE(103);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(104);
      END_STATE();
    case 47:
      if (lookahead == 'L') ADVANCE(105);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'F') ADVANCE(107);
      if (lookahead == 'H') ADVANCE(108);
      if (lookahead == 'P') ADVANCE(109);
      if (lookahead == 'S') ADVANCE(110);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(111);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(112);
      END_STATE();
    case 51:
      if (lookahead == 'N') ADVANCE(113);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == 'G') ADVANCE(115);
      if (lookahead == 'N') ADVANCE(116);
      END_STATE();
    case 53:
      if (lookahead == 'P') ADVANCE(117);
      if (lookahead == 'X') ADVANCE(118);
      END_STATE();
    case 54:
      if (lookahead == 'M') ADVANCE(119);
      END_STATE();
    case 55:
      if (lookahead == 'N') ADVANCE(120);
      END_STATE();
    case 56:
      if (lookahead == 'X') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == 'C') ADVANCE(122);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'L') ADVANCE(124);
      END_STATE();
    case 58:
      if (lookahead == 'L') ADVANCE(125);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(126);
      END_STATE();
    case 60:
      if (lookahead == 'T') ADVANCE(127);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(128);
      END_STATE();
    case 62:
      if (lookahead == 'D') ADVANCE(129);
      END_STATE();
    case 63:
      if (lookahead == 'O') ADVANCE(130);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(131);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'G') ADVANCE(133);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'C') ADVANCE(135);
      if (lookahead == 'G') ADVANCE(136);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(137);
      END_STATE();
    case 68:
      if (lookahead == 'Z') ADVANCE(138);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 70:
      if (lookahead == 'U') ADVANCE(140);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(141);
      END_STATE();
    case 72:
      if (lookahead == 'B') ADVANCE(142);
      END_STATE();
    case 73:
      if (lookahead == 'S') ADVANCE(143);
      END_STATE();
    case 74:
      if (lookahead == 'R') ADVANCE(144);
      END_STATE();
    case 75:
      if (lookahead == 'P') ADVANCE(145);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(146);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 81:
      if (lookahead == 'O') ADVANCE(151);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(152);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(153);
      END_STATE();
    case 84:
      if (lookahead == 'G') ADVANCE(154);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(155);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(156);
      END_STATE();
    case 87:
      if (lookahead == 'N') ADVANCE(157);
      END_STATE();
    case 88:
      if (lookahead == 'O') ADVANCE(158);
      END_STATE();
    case 89:
      if (lookahead == 'D') ADVANCE(159);
      END_STATE();
    case 90:
      if (lookahead == 'C') ADVANCE(160);
      END_STATE();
    case 91:
      if (lookahead == 'E') ADVANCE(161);
      END_STATE();
    case 92:
      if (lookahead == 'S') ADVANCE(162);
      END_STATE();
    case 93:
      if (lookahead == 'Y') ADVANCE(163);
      END_STATE();
    case 94:
      if (lookahead == 'A') ADVANCE(164);
      END_STATE();
    case 95:
      if (lookahead == 'A') ADVANCE(165);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(166);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(167);
      END_STATE();
    case 98:
      if (lookahead == 'R') ADVANCE(168);
      END_STATE();
    case 99:
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(170);
      END_STATE();
    case 101:
      if (lookahead == 'A') ADVANCE(171);
      END_STATE();
    case 102:
      if (lookahead == 'C') ADVANCE(172);
      END_STATE();
    case 103:
      if (lookahead == 'U') ADVANCE(173);
      END_STATE();
    case 104:
      if (lookahead == 'D') ADVANCE(174);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_HLL);
      END_STATE();
    case 106:
      if (lookahead == 'L') ADVANCE(175);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(176);
      END_STATE();
    case 108:
      if (lookahead == 'I') ADVANCE(177);
      END_STATE();
    case 109:
      if (lookahead == 'U') ADVANCE(178);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(179);
      END_STATE();
    case 111:
      if (lookahead == 'P') ADVANCE(180);
      END_STATE();
    case 112:
      if (lookahead == 'F') ADVANCE(181);
      END_STATE();
    case 113:
      if (lookahead == 'K') ADVANCE(182);
      END_STATE();
    case 114:
      if (lookahead == 'D') ADVANCE(183);
      END_STATE();
    case 115:
      if (lookahead == '2') ADVANCE(184);
      END_STATE();
    case 116:
      if (lookahead == 'G') ADVANCE(185);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_MAP);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_MAX);
      END_STATE();
    case 119:
      if (lookahead == 'O') ADVANCE(186);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_MIN);
      END_STATE();
    case 121:
      if (lookahead == 'T') ADVANCE(187);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(188);
      END_STATE();
    case 123:
      if (lookahead == 'L') ADVANCE(189);
      END_STATE();
    case 124:
      if (lookahead == 'O') ADVANCE(190);
      END_STATE();
    case 125:
      if (lookahead == 'Y') ADVANCE(191);
      END_STATE();
    case 126:
      if (lookahead == 'G') ADVANCE(192);
      END_STATE();
    case 127:
      if (lookahead == 'P') ADVANCE(193);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(194);
      END_STATE();
    case 129:
      if (lookahead == 'R') ADVANCE(195);
      END_STATE();
    case 130:
      if (lookahead == 'V') ADVANCE(196);
      END_STATE();
    case 131:
      if (lookahead == 'D') ADVANCE(197);
      END_STATE();
    case 132:
      if (lookahead == 'D') ADVANCE(198);
      END_STATE();
    case 133:
      if (lookahead == 'I') ADVANCE(199);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(200);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(201);
      END_STATE();
    case 136:
      if (lookahead == 'M') ADVANCE(202);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(203);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(204);
      END_STATE();
    case 139:
      if (lookahead == 'C') ADVANCE(205);
      END_STATE();
    case 140:
      if (lookahead == 'A') ADVANCE(206);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(207);
      END_STATE();
    case 142:
      if (lookahead == 'A') ADVANCE(208);
      END_STATE();
    case 143:
      if (lookahead == 'L') ADVANCE(209);
      END_STATE();
    case 144:
      if (lookahead == 'G') ADVANCE(210);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(211);
      END_STATE();
    case 146:
      if (lookahead == 'S') ADVANCE(212);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 148:
      if (lookahead == 'b') ADVANCE(214);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_org);
      END_STATE();
    case 151:
      if (lookahead == 'L') ADVANCE(216);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_ADDR);
      END_STATE();
    case 153:
      if (lookahead == 'R') ADVANCE(217);
      END_STATE();
    case 154:
      if (lookahead == 'N') ADVANCE(218);
      END_STATE();
    case 155:
      if (lookahead == 'Z') ADVANCE(219);
      END_STATE();
    case 156:
      if (lookahead == 'R') ADVANCE(220);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(221);
      END_STATE();
    case 158:
      if (lookahead == 'R') ADVANCE(222);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_BIND);
      END_STATE();
    case 160:
      if (lookahead == 'K') ADVANCE(223);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(224);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(225);
      END_STATE();
    case 165:
      if (lookahead == '_') ADVANCE(226);
      END_STATE();
    case 166:
      if (lookahead == 'N') ADVANCE(227);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(228);
      END_STATE();
    case 168:
      if (lookahead == 'Y') ADVANCE(229);
      END_STATE();
    case 169:
      if (lookahead == 'R') ADVANCE(230);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_FILL);
      END_STATE();
    case 171:
      if (lookahead == 'T') ADVANCE(231);
      END_STATE();
    case 172:
      if (lookahead == 'E') ADVANCE(232);
      END_STATE();
    case 173:
      if (lookahead == 'P') ADVANCE(233);
      END_STATE();
    case 174:
      if (lookahead == 'E') ADVANCE(234);
      END_STATE();
    case 175:
      if (lookahead == 'U') ADVANCE(235);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 177:
      if (lookahead == 'B') ADVANCE(236);
      END_STATE();
    case 178:
      if (lookahead == 'T') ADVANCE(237);
      END_STATE();
    case 179:
      if (lookahead == 'R') ADVANCE(238);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_KEEP);
      END_STATE();
    case 181:
      if (lookahead == 'E') ADVANCE(239);
      END_STATE();
    case 182:
      if (lookahead == 'E') ADVANCE(240);
      END_STATE();
    case 183:
      if (lookahead == 'A') ADVANCE(241);
      END_STATE();
    case 184:
      if (lookahead == 'C') ADVANCE(242);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LONG);
      END_STATE();
    case 186:
      if (lookahead == 'R') ADVANCE(243);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_NEXT);
      END_STATE();
    case 188:
      if (lookahead == 'O') ADVANCE(244);
      END_STATE();
    case 189:
      if (lookahead == 'O') ADVANCE(245);
      END_STATE();
    case 190:
      if (lookahead == 'A') ADVANCE(246);
      END_STATE();
    case 191:
      if (lookahead == '_') ADVANCE(247);
      END_STATE();
    case 192:
      if (lookahead == 'I') ADVANCE(248);
      END_STATE();
    case 193:
      if (lookahead == 'U') ADVANCE(249);
      END_STATE();
    case 194:
      if (lookahead == 'L') ADVANCE(250);
      END_STATE();
    case 195:
      if (lookahead == 'S') ADVANCE(251);
      END_STATE();
    case 196:
      if (lookahead == 'I') ADVANCE(252);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_QUAD);
      END_STATE();
    case 198:
      if (lookahead == 'O') ADVANCE(253);
      END_STATE();
    case 199:
      if (lookahead == 'O') ADVANCE(254);
      END_STATE();
    case 200:
      if (lookahead == 'C') ADVANCE(255);
      END_STATE();
    case 201:
      if (lookahead == 'I') ADVANCE(256);
      END_STATE();
    case 202:
      if (lookahead == 'E') ADVANCE(257);
      END_STATE();
    case 203:
      if (lookahead == 'T') ADVANCE(258);
      END_STATE();
    case 204:
      if (lookahead == 'O') ADVANCE(259);
      END_STATE();
    case 205:
      if (lookahead == 'I') ADVANCE(260);
      END_STATE();
    case 206:
      if (lookahead == 'D') ADVANCE(261);
      END_STATE();
    case 207:
      if (lookahead == 'T') ADVANCE(262);
      END_STATE();
    case 208:
      if (lookahead == 'L') ADVANCE(263);
      END_STATE();
    case 209:
      if (lookahead == 'I') ADVANCE(264);
      END_STATE();
    case 210:
      if (lookahead == 'E') ADVANCE(265);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_TYPE);
      END_STATE();
    case 212:
      if (lookahead == 'I') ADVANCE(266);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 216:
      if (lookahead == 'U') ADVANCE(270);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_AFTER);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_ALIGN);
      if (lookahead == 'O') ADVANCE(271);
      if (lookahead == '_') ADVANCE(272);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_ASCIZ);
      END_STATE();
    case 220:
      if (lookahead == 'T') ADVANCE(273);
      END_STATE();
    case 221:
      if (lookahead == 'E') ADVANCE(274);
      END_STATE();
    case 222:
      if (lookahead == 'E') ADVANCE(275);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_BLOCK);
      END_STATE();
    case 224:
      if (lookahead == 'A') ADVANCE(276);
      END_STATE();
    case 225:
      if (lookahead == 'E') ADVANCE(277);
      END_STATE();
    case 226:
      if (lookahead == 'S') ADVANCE(278);
      END_STATE();
    case 227:
      if (lookahead == 'E') ADVANCE(279);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DSECT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_ENTRY);
      END_STATE();
    case 230:
      if (lookahead == 'N') ADVANCE(280);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 232:
      if (lookahead == '_') ADVANCE(281);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_GROUP);
      END_STATE();
    case 234:
      if (lookahead == 'N') ADVANCE(282);
      END_STATE();
    case 235:
      if (lookahead == 'D') ADVANCE(283);
      END_STATE();
    case 236:
      if (lookahead == 'I') ADVANCE(284);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_INPUT);
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 238:
      if (lookahead == 'T') ADVANCE(286);
      END_STATE();
    case 239:
      if (lookahead == 'A') ADVANCE(287);
      END_STATE();
    case 240:
      if (lookahead == 'R') ADVANCE(288);
      END_STATE();
    case 241:
      if (lookahead == 'D') ADVANCE(289);
      END_STATE();
    case 242:
      if (lookahead == 'E') ADVANCE(290);
      END_STATE();
    case 243:
      if (lookahead == 'Y') ADVANCE(291);
      END_STATE();
    case 244:
      if (lookahead == 'S') ADVANCE(292);
      END_STATE();
    case 245:
      if (lookahead == 'A') ADVANCE(293);
      END_STATE();
    case 246:
      if (lookahead == 'D') ADVANCE(294);
      END_STATE();
    case 247:
      if (lookahead == 'I') ADVANCE(295);
      END_STATE();
    case 248:
      if (lookahead == 'N') ADVANCE(296);
      END_STATE();
    case 249:
      if (lookahead == 'T') ADVANCE(297);
      END_STATE();
    case 250:
      if (lookahead == 'A') ADVANCE(298);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_PHDRS);
      END_STATE();
    case 252:
      if (lookahead == 'D') ADVANCE(299);
      END_STATE();
    case 253:
      if (lookahead == 'N') ADVANCE(300);
      END_STATE();
    case 254:
      if (lookahead == 'N') ADVANCE(301);
      END_STATE();
    case 255:
      if (lookahead == 'H') ADVANCE(302);
      END_STATE();
    case 256:
      if (lookahead == 'O') ADVANCE(303);
      END_STATE();
    case 257:
      if (lookahead == 'N') ADVANCE(304);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_SHORT);
      END_STATE();
    case 259:
      if (lookahead == 'F') ADVANCE(305);
      END_STATE();
    case 260:
      if (lookahead == 'A') ADVANCE(306);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_SQUAD);
      END_STATE();
    case 262:
      if (lookahead == 'U') ADVANCE(307);
      END_STATE();
    case 263:
      if (lookahead == 'I') ADVANCE(308);
      END_STATE();
    case 264:
      if (lookahead == 'B') ADVANCE(309);
      END_STATE();
    case 265:
      if (lookahead == 'T') ADVANCE(310);
      END_STATE();
    case 266:
      if (lookahead == 'O') ADVANCE(311);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 270:
      if (lookahead == 'T') ADVANCE(314);
      END_STATE();
    case 271:
      if (lookahead == 'F') ADVANCE(315);
      END_STATE();
    case 272:
      if (lookahead == 'W') ADVANCE(316);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_ASSERT);
      END_STATE();
    case 274:
      if (lookahead == 'D') ADVANCE(317);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_BEFORE);
      END_STATE();
    case 276:
      if (lookahead == 'N') ADVANCE(318);
      END_STATE();
    case 277:
      if (lookahead == '_') ADVANCE(319);
      END_STATE();
    case 278:
      if (lookahead == 'E') ADVANCE(320);
      END_STATE();
    case 279:
      if (lookahead == 'D') ADVANCE(321);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_EXTERN);
      END_STATE();
    case 281:
      if (lookahead == 'C') ADVANCE(322);
      if (lookahead == 'G') ADVANCE(323);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_HIDDEN);
      END_STATE();
    case 283:
      if (lookahead == 'E') ADVANCE(324);
      END_STATE();
    case 284:
      if (lookahead == 'T') ADVANCE(325);
      END_STATE();
    case 285:
      if (lookahead == 'S') ADVANCE(326);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_INSERT);
      END_STATE();
    case 287:
      if (lookahead == 'T') ADVANCE(327);
      END_STATE();
    case 288:
      if (lookahead == '_') ADVANCE(328);
      END_STATE();
    case 289:
      if (lookahead == 'D') ADVANCE(329);
      END_STATE();
    case 290:
      if (lookahead == 'I') ADVANCE(330);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_MEMORY);
      END_STATE();
    case 292:
      if (lookahead == 'S') ADVANCE(331);
      END_STATE();
    case 293:
      if (lookahead == 'T') ADVANCE(332);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_NOLOAD);
      END_STATE();
    case 295:
      if (lookahead == 'F') ADVANCE(333);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_ORIGIN);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_OUTPUT);
      if (lookahead == '_') ADVANCE(334);
      END_STATE();
    case 298:
      if (lookahead == 'Y') ADVANCE(335);
      END_STATE();
    case 299:
      if (lookahead == 'E') ADVANCE(336);
      END_STATE();
    case 300:
      if (lookahead == 'L') ADVANCE(337);
      END_STATE();
    case 301:
      if (lookahead == '_') ADVANCE(338);
      END_STATE();
    case 302:
      if (lookahead == '_') ADVANCE(339);
      END_STATE();
    case 303:
      if (lookahead == 'N') ADVANCE(340);
      END_STATE();
    case 304:
      if (lookahead == 'T') ADVANCE(341);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_SIZEOF);
      if (lookahead == '_') ADVANCE(342);
      END_STATE();
    case 306:
      if (lookahead == 'L') ADVANCE(343);
      END_STATE();
    case 307:
      if (lookahead == 'P') ADVANCE(344);
      END_STATE();
    case 308:
      if (lookahead == 'G') ADVANCE(345);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_SYSLIB);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_TARGET);
      END_STATE();
    case 311:
      if (lookahead == 'N') ADVANCE(346);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 314:
      if (lookahead == 'E') ADVANCE(347);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_ALIGNOF);
      END_STATE();
    case 316:
      if (lookahead == 'I') ADVANCE(348);
      END_STATE();
    case 317:
      if (lookahead == 'E') ADVANCE(349);
      END_STATE();
    case 318:
      if (lookahead == 'T') ADVANCE(350);
      END_STATE();
    case 319:
      if (lookahead == 'O') ADVANCE(351);
      END_STATE();
    case 320:
      if (lookahead == 'G') ADVANCE(352);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_DEFINED);
      END_STATE();
    case 322:
      if (lookahead == 'O') ADVANCE(353);
      END_STATE();
    case 323:
      if (lookahead == 'R') ADVANCE(354);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 325:
      if (lookahead == '_') ADVANCE(355);
      END_STATE();
    case 326:
      if (lookahead == 'E') ADVANCE(356);
      END_STATE();
    case 327:
      if (lookahead == 'U') ADVANCE(357);
      END_STATE();
    case 328:
      if (lookahead == 'V') ADVANCE(358);
      END_STATE();
    case 329:
      if (lookahead == 'R') ADVANCE(359);
      END_STATE();
    case 330:
      if (lookahead == 'L') ADVANCE(360);
      END_STATE();
    case 331:
      if (lookahead == 'R') ADVANCE(361);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_NOFLOAT);
      END_STATE();
    case 333:
      if (lookahead == '_') ADVANCE(362);
      END_STATE();
    case 334:
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'F') ADVANCE(364);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_OVERLAY);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_PROVIDE);
      if (lookahead == '_') ADVANCE(365);
      END_STATE();
    case 337:
      if (lookahead == 'Y') ADVANCE(366);
      END_STATE();
    case 338:
      if (lookahead == 'A') ADVANCE(367);
      END_STATE();
    case 339:
      if (lookahead == 'D') ADVANCE(368);
      END_STATE();
    case 340:
      if (lookahead == 'S') ADVANCE(369);
      END_STATE();
    case 341:
      if (lookahead == '_') ADVANCE(370);
      END_STATE();
    case 342:
      if (lookahead == 'H') ADVANCE(371);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_SPECIAL);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_STARTUP);
      END_STATE();
    case 345:
      if (lookahead == 'N') ADVANCE(372);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_ABSOLUTE);
      END_STATE();
    case 348:
      if (lookahead == 'T') ADVANCE(373);
      END_STATE();
    case 349:
      if (lookahead == 'D') ADVANCE(374);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_CONSTANT);
      END_STATE();
    case 351:
      if (lookahead == 'B') ADVANCE(375);
      END_STATE();
    case 352:
      if (lookahead == 'M') ADVANCE(376);
      END_STATE();
    case 353:
      if (lookahead == 'M') ADVANCE(377);
      END_STATE();
    case 354:
      if (lookahead == 'O') ADVANCE(378);
      END_STATE();
    case 355:
      if (lookahead == 'C') ADVANCE(379);
      END_STATE();
    case 356:
      if (lookahead == 'C') ADVANCE(380);
      END_STATE();
    case 357:
      if (lookahead == 'R') ADVANCE(381);
      END_STATE();
    case 358:
      if (lookahead == 'E') ADVANCE(382);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_LOADADDR);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_LOG2CEIL);
      END_STATE();
    case 361:
      if (lookahead == 'E') ADVANCE(383);
      END_STATE();
    case 362:
      if (lookahead == 'R') ADVANCE(384);
      END_STATE();
    case 363:
      if (lookahead == 'R') ADVANCE(385);
      END_STATE();
    case 364:
      if (lookahead == 'O') ADVANCE(386);
      END_STATE();
    case 365:
      if (lookahead == 'H') ADVANCE(387);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_READONLY);
      END_STATE();
    case 367:
      if (lookahead == 'L') ADVANCE(388);
      END_STATE();
    case 368:
      if (lookahead == 'I') ADVANCE(389);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_SECTIONS);
      END_STATE();
    case 370:
      if (lookahead == 'S') ADVANCE(390);
      END_STATE();
    case 371:
      if (lookahead == 'E') ADVANCE(391);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_SUBALIGN);
      END_STATE();
    case 373:
      if (lookahead == 'H') ADVANCE(392);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_AS_NEEDED);
      END_STATE();
    case 375:
      if (lookahead == 'J') ADVANCE(393);
      END_STATE();
    case 376:
      if (lookahead == 'E') ADVANCE(394);
      END_STATE();
    case 377:
      if (lookahead == 'M') ADVANCE(395);
      END_STATE();
    case 378:
      if (lookahead == 'U') ADVANCE(396);
      END_STATE();
    case 379:
      if (lookahead == 'O') ADVANCE(397);
      END_STATE();
    case 380:
      if (lookahead == 'T') ADVANCE(398);
      END_STATE();
    case 381:
      if (lookahead == 'E') ADVANCE(399);
      END_STATE();
    case 382:
      if (lookahead == 'R') ADVANCE(400);
      END_STATE();
    case 383:
      if (lookahead == 'F') ADVANCE(401);
      END_STATE();
    case 384:
      if (lookahead == 'O') ADVANCE(402);
      if (lookahead == 'W') ADVANCE(403);
      END_STATE();
    case 385:
      if (lookahead == 'C') ADVANCE(404);
      END_STATE();
    case 386:
      if (lookahead == 'R') ADVANCE(405);
      END_STATE();
    case 387:
      if (lookahead == 'I') ADVANCE(406);
      END_STATE();
    case 388:
      if (lookahead == 'I') ADVANCE(407);
      END_STATE();
    case 389:
      if (lookahead == 'R') ADVANCE(408);
      END_STATE();
    case 390:
      if (lookahead == 'T') ADVANCE(409);
      END_STATE();
    case 391:
      if (lookahead == 'A') ADVANCE(410);
      END_STATE();
    case 392:
      if (lookahead == '_') ADVANCE(411);
      END_STATE();
    case 393:
      if (lookahead == 'E') ADVANCE(412);
      END_STATE();
    case 394:
      if (lookahead == 'N') ADVANCE(413);
      END_STATE();
    case 395:
      if (lookahead == 'O') ADVANCE(414);
      END_STATE();
    case 396:
      if (lookahead == 'P') ADVANCE(415);
      END_STATE();
    case 397:
      if (lookahead == 'M') ADVANCE(416);
      END_STATE();
    case 398:
      if (lookahead == 'I') ADVANCE(417);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LD_FEATURE);
      END_STATE();
    case 400:
      if (lookahead == 'S') ADVANCE(418);
      END_STATE();
    case 401:
      if (lookahead == 'S') ADVANCE(419);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_ONLY_IF_RO);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_ONLY_IF_RW);
      END_STATE();
    case 404:
      if (lookahead == 'H') ADVANCE(420);
      END_STATE();
    case 405:
      if (lookahead == 'M') ADVANCE(421);
      END_STATE();
    case 406:
      if (lookahead == 'D') ADVANCE(422);
      END_STATE();
    case 407:
      if (lookahead == 'A') ADVANCE(423);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_SEARCH_DIR);
      END_STATE();
    case 409:
      if (lookahead == 'A') ADVANCE(424);
      END_STATE();
    case 410:
      if (lookahead == 'D') ADVANCE(425);
      END_STATE();
    case 411:
      if (lookahead == 'I') ADVANCE(426);
      END_STATE();
    case 412:
      if (lookahead == 'C') ADVANCE(427);
      END_STATE();
    case 413:
      if (lookahead == 'T') ADVANCE(428);
      END_STATE();
    case 414:
      if (lookahead == 'N') ADVANCE(429);
      END_STATE();
    case 415:
      if (lookahead == '_') ADVANCE(430);
      END_STATE();
    case 416:
      if (lookahead == 'M') ADVANCE(431);
      END_STATE();
    case 417:
      if (lookahead == 'O') ADVANCE(432);
      END_STATE();
    case 418:
      if (lookahead == 'I') ADVANCE(433);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_NOCROSSREFS);
      if (lookahead == '_') ADVANCE(434);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_OUTPUT_ARCH);
      END_STATE();
    case 421:
      if (lookahead == 'A') ADVANCE(435);
      END_STATE();
    case 422:
      if (lookahead == 'D') ADVANCE(436);
      END_STATE();
    case 423:
      if (lookahead == 'S') ADVANCE(437);
      END_STATE();
    case 424:
      if (lookahead == 'R') ADVANCE(438);
      END_STATE();
    case 425:
      if (lookahead == 'E') ADVANCE(439);
      END_STATE();
    case 426:
      if (lookahead == 'N') ADVANCE(440);
      END_STATE();
    case 427:
      if (lookahead == 'T') ADVANCE(441);
      END_STATE();
    case 428:
      if (lookahead == '_') ADVANCE(442);
      END_STATE();
    case 429:
      if (lookahead == '_') ADVANCE(443);
      END_STATE();
    case 430:
      if (lookahead == 'A') ADVANCE(444);
      END_STATE();
    case 431:
      if (lookahead == 'O') ADVANCE(445);
      END_STATE();
    case 432:
      if (lookahead == 'N') ADVANCE(446);
      END_STATE();
    case 433:
      if (lookahead == 'O') ADVANCE(447);
      END_STATE();
    case 434:
      if (lookahead == 'T') ADVANCE(448);
      END_STATE();
    case 435:
      if (lookahead == 'T') ADVANCE(449);
      END_STATE();
    case 436:
      if (lookahead == 'E') ADVANCE(450);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_REGION_ALIAS);
      END_STATE();
    case 438:
      if (lookahead == 'T') ADVANCE(451);
      END_STATE();
    case 439:
      if (lookahead == 'R') ADVANCE(452);
      END_STATE();
    case 440:
      if (lookahead == 'P') ADVANCE(453);
      END_STATE();
    case 441:
      if (lookahead == '_') ADVANCE(454);
      END_STATE();
    case 442:
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(456);
      if (lookahead == 'R') ADVANCE(457);
      END_STATE();
    case 443:
      if (lookahead == 'A') ADVANCE(458);
      END_STATE();
    case 444:
      if (lookahead == 'L') ADVANCE(459);
      END_STATE();
    case 445:
      if (lookahead == 'N') ADVANCE(460);
      END_STATE();
    case 446:
      if (lookahead == '_') ADVANCE(461);
      END_STATE();
    case 447:
      if (lookahead == 'N') ADVANCE(462);
      END_STATE();
    case 448:
      if (lookahead == 'O') ADVANCE(463);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_OUTPUT_FORMAT);
      END_STATE();
    case 450:
      if (lookahead == 'N') ADVANCE(464);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_SEGMENT_START);
      END_STATE();
    case 452:
      if (lookahead == 'S') ADVANCE(465);
      END_STATE();
    case 453:
      if (lookahead == 'U') ADVANCE(466);
      END_STATE();
    case 454:
      if (lookahead == 'S') ADVANCE(467);
      END_STATE();
    case 455:
      if (lookahead == 'L') ADVANCE(468);
      END_STATE();
    case 456:
      if (lookahead == 'N') ADVANCE(469);
      END_STATE();
    case 457:
      if (lookahead == 'E') ADVANCE(470);
      END_STATE();
    case 458:
      if (lookahead == 'L') ADVANCE(471);
      END_STATE();
    case 459:
      if (lookahead == 'L') ADVANCE(472);
      END_STATE();
    case 460:
      if (lookahead == '_') ADVANCE(473);
      END_STATE();
    case 461:
      if (lookahead == 'F') ADVANCE(474);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_LINKER_VERSION);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_NOCROSSREFS_TO);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_PROVIDE_HIDDEN);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_SIZEOF_HEADERS);
      END_STATE();
    case 466:
      if (lookahead == 'T') ADVANCE(475);
      END_STATE();
    case 467:
      if (lookahead == 'Y') ADVANCE(476);
      END_STATE();
    case 468:
      if (lookahead == 'I') ADVANCE(477);
      END_STATE();
    case 469:
      if (lookahead == 'D') ADVANCE(478);
      END_STATE();
    case 470:
      if (lookahead == 'L') ADVANCE(479);
      END_STATE();
    case 471:
      if (lookahead == 'L') ADVANCE(480);
      END_STATE();
    case 472:
      if (lookahead == 'O') ADVANCE(481);
      END_STATE();
    case 473:
      if (lookahead == 'A') ADVANCE(482);
      END_STATE();
    case 474:
      if (lookahead == 'L') ADVANCE(483);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_ALIGN_WITH_INPUT);
      END_STATE();
    case 476:
      if (lookahead == 'M') ADVANCE(484);
      END_STATE();
    case 477:
      if (lookahead == 'G') ADVANCE(485);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_DATA_SEGMENT_END);
      END_STATE();
    case 479:
      if (lookahead == 'R') ADVANCE(486);
      END_STATE();
    case 480:
      if (lookahead == 'O') ADVANCE(487);
      END_STATE();
    case 481:
      if (lookahead == 'C') ADVANCE(488);
      END_STATE();
    case 482:
      if (lookahead == 'L') ADVANCE(489);
      END_STATE();
    case 483:
      if (lookahead == 'A') ADVANCE(490);
      END_STATE();
    case 484:
      if (lookahead == 'B') ADVANCE(491);
      END_STATE();
    case 485:
      if (lookahead == 'N') ADVANCE(492);
      END_STATE();
    case 486:
      if (lookahead == 'O') ADVANCE(493);
      END_STATE();
    case 487:
      if (lookahead == 'C') ADVANCE(494);
      END_STATE();
    case 488:
      if (lookahead == 'A') ADVANCE(495);
      END_STATE();
    case 489:
      if (lookahead == 'L') ADVANCE(496);
      END_STATE();
    case 490:
      if (lookahead == 'G') ADVANCE(497);
      END_STATE();
    case 491:
      if (lookahead == 'O') ADVANCE(498);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_DATA_SEGMENT_ALIGN);
      END_STATE();
    case 493:
      if (lookahead == '_') ADVANCE(499);
      END_STATE();
    case 494:
      if (lookahead == 'A') ADVANCE(500);
      END_STATE();
    case 495:
      if (lookahead == 'T') ADVANCE(501);
      END_STATE();
    case 496:
      if (lookahead == 'O') ADVANCE(502);
      END_STATE();
    case 497:
      if (lookahead == 'S') ADVANCE(503);
      END_STATE();
    case 498:
      if (lookahead == 'L') ADVANCE(504);
      END_STATE();
    case 499:
      if (lookahead == 'E') ADVANCE(505);
      END_STATE();
    case 500:
      if (lookahead == 'T') ADVANCE(506);
      END_STATE();
    case 501:
      if (lookahead == 'I') ADVANCE(507);
      END_STATE();
    case 502:
      if (lookahead == 'C') ADVANCE(508);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_INPUT_SECTION_FLAGS);
      END_STATE();
    case 504:
      if (lookahead == 'S') ADVANCE(509);
      END_STATE();
    case 505:
      if (lookahead == 'N') ADVANCE(510);
      END_STATE();
    case 506:
      if (lookahead == 'I') ADVANCE(511);
      END_STATE();
    case 507:
      if (lookahead == 'O') ADVANCE(512);
      END_STATE();
    case 508:
      if (lookahead == 'A') ADVANCE(513);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_CREATE_OBJECT_SYMBOLS);
      END_STATE();
    case 510:
      if (lookahead == 'D') ADVANCE(514);
      END_STATE();
    case 511:
      if (lookahead == 'O') ADVANCE(515);
      END_STATE();
    case 512:
      if (lookahead == 'N') ADVANCE(516);
      END_STATE();
    case 513:
      if (lookahead == 'T') ADVANCE(517);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_DATA_SEGMENT_RELRO_END);
      END_STATE();
    case 515:
      if (lookahead == 'N') ADVANCE(518);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_FORCE_GROUP_ALLOCATION);
      END_STATE();
    case 517:
      if (lookahead == 'I') ADVANCE(519);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_FORCE_COMMON_ALLOCATION);
      END_STATE();
    case 519:
      if (lookahead == 'O') ADVANCE(520);
      END_STATE();
    case 520:
      if (lookahead == 'N') ADVANCE(521);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_INHIBIT_COMMON_ALLOCATION);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 48},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 48},
  [19] = {.lex_state = 48},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 48},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 48},
  [35] = {.lex_state = 48},
  [36] = {.lex_state = 48},
  [37] = {.lex_state = 48},
  [38] = {.lex_state = 48},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 48},
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
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 7},
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
  [156] = {.lex_state = 48},
  [157] = {.lex_state = 48},
  [158] = {.lex_state = 48},
  [159] = {.lex_state = 48},
  [160] = {.lex_state = 48},
  [161] = {.lex_state = 48},
  [162] = {.lex_state = 48},
  [163] = {.lex_state = 48},
  [164] = {.lex_state = 48},
  [165] = {.lex_state = 48},
  [166] = {.lex_state = 48},
  [167] = {.lex_state = 48},
  [168] = {.lex_state = 48},
  [169] = {.lex_state = 48},
  [170] = {.lex_state = 48},
  [171] = {.lex_state = 48},
  [172] = {.lex_state = 48},
  [173] = {.lex_state = 48},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 48},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 48},
  [179] = {.lex_state = 48},
  [180] = {.lex_state = 15},
  [181] = {.lex_state = 48},
  [182] = {.lex_state = 15},
  [183] = {.lex_state = 48},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 48},
  [186] = {.lex_state = 48},
  [187] = {.lex_state = 48},
  [188] = {.lex_state = 48},
  [189] = {.lex_state = 15},
  [190] = {.lex_state = 48},
  [191] = {.lex_state = 48},
  [192] = {.lex_state = 48},
  [193] = {.lex_state = 48},
  [194] = {.lex_state = 48},
  [195] = {.lex_state = 48},
  [196] = {.lex_state = 48},
  [197] = {.lex_state = 48},
  [198] = {.lex_state = 48},
  [199] = {.lex_state = 48},
  [200] = {.lex_state = 48},
  [201] = {.lex_state = 48},
  [202] = {.lex_state = 18},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 48},
  [205] = {.lex_state = 18},
  [206] = {.lex_state = 18},
  [207] = {.lex_state = 18},
  [208] = {.lex_state = 48},
  [209] = {.lex_state = 18},
  [210] = {.lex_state = 18},
  [211] = {.lex_state = 18},
  [212] = {.lex_state = 48},
  [213] = {.lex_state = 48},
  [214] = {.lex_state = 48},
  [215] = {.lex_state = 48},
  [216] = {.lex_state = 48},
  [217] = {.lex_state = 48},
  [218] = {.lex_state = 18},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 18},
  [221] = {.lex_state = 48},
  [222] = {.lex_state = 8},
  [223] = {.lex_state = 8},
  [224] = {.lex_state = 48},
  [225] = {.lex_state = 48},
  [226] = {.lex_state = 48},
  [227] = {.lex_state = 15},
  [228] = {.lex_state = 48},
  [229] = {.lex_state = 48},
  [230] = {.lex_state = 48},
  [231] = {.lex_state = 15},
  [232] = {.lex_state = 15},
  [233] = {.lex_state = 48},
  [234] = {.lex_state = 15},
  [235] = {.lex_state = 11},
  [236] = {.lex_state = 48},
  [237] = {.lex_state = 48},
  [238] = {.lex_state = 48},
  [239] = {.lex_state = 48},
  [240] = {.lex_state = 48},
  [241] = {.lex_state = 11},
  [242] = {.lex_state = 11},
  [243] = {.lex_state = 11},
  [244] = {.lex_state = 48},
  [245] = {.lex_state = 15},
  [246] = {.lex_state = 48},
  [247] = {.lex_state = 15},
  [248] = {.lex_state = 11},
  [249] = {.lex_state = 11},
  [250] = {.lex_state = 48},
  [251] = {.lex_state = 11},
  [252] = {.lex_state = 15},
  [253] = {.lex_state = 48},
  [254] = {.lex_state = 11},
  [255] = {.lex_state = 48},
  [256] = {.lex_state = 48},
  [257] = {.lex_state = 15},
  [258] = {.lex_state = 48},
  [259] = {.lex_state = 19},
  [260] = {.lex_state = 48},
  [261] = {.lex_state = 48},
  [262] = {.lex_state = 48},
  [263] = {.lex_state = 48},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 48},
  [266] = {.lex_state = 48},
  [267] = {.lex_state = 6},
  [268] = {.lex_state = 48},
  [269] = {.lex_state = 6},
  [270] = {.lex_state = 48},
  [271] = {.lex_state = 48},
  [272] = {.lex_state = 19},
  [273] = {.lex_state = 48},
  [274] = {.lex_state = 48},
  [275] = {.lex_state = 48},
  [276] = {.lex_state = 48},
  [277] = {.lex_state = 6},
  [278] = {.lex_state = 48},
  [279] = {.lex_state = 48},
  [280] = {.lex_state = 48},
  [281] = {.lex_state = 6},
  [282] = {.lex_state = 48},
  [283] = {.lex_state = 48},
  [284] = {.lex_state = 6},
  [285] = {.lex_state = 6},
  [286] = {.lex_state = 17},
  [287] = {.lex_state = 48},
  [288] = {.lex_state = 48},
  [289] = {.lex_state = 48},
  [290] = {.lex_state = 48},
  [291] = {.lex_state = 48},
  [292] = {.lex_state = 6},
  [293] = {.lex_state = 21},
  [294] = {.lex_state = 48},
  [295] = {.lex_state = 48},
  [296] = {.lex_state = 21},
  [297] = {.lex_state = 48},
  [298] = {.lex_state = 48},
  [299] = {.lex_state = 48},
  [300] = {.lex_state = 48},
  [301] = {.lex_state = 48},
  [302] = {.lex_state = 48},
  [303] = {.lex_state = 48},
  [304] = {.lex_state = 48},
  [305] = {.lex_state = 48},
  [306] = {.lex_state = 48},
  [307] = {.lex_state = 10},
  [308] = {.lex_state = 48},
  [309] = {.lex_state = 20},
  [310] = {.lex_state = 48},
  [311] = {.lex_state = 48},
  [312] = {.lex_state = 48},
  [313] = {.lex_state = 4},
  [314] = {.lex_state = 20},
  [315] = {.lex_state = 48},
  [316] = {.lex_state = 48},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 20},
  [319] = {.lex_state = 22},
  [320] = {.lex_state = 10},
  [321] = {.lex_state = 48},
  [322] = {.lex_state = 48},
  [323] = {.lex_state = 48},
  [324] = {.lex_state = 48},
  [325] = {.lex_state = 48},
  [326] = {.lex_state = 48},
  [327] = {.lex_state = 48},
  [328] = {.lex_state = 20},
  [329] = {.lex_state = 48},
  [330] = {.lex_state = 6},
  [331] = {.lex_state = 10},
  [332] = {.lex_state = 48},
  [333] = {.lex_state = 48},
  [334] = {.lex_state = 20},
  [335] = {.lex_state = 48},
  [336] = {.lex_state = 48},
  [337] = {.lex_state = 48},
  [338] = {.lex_state = 48},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 48},
  [341] = {.lex_state = 48},
  [342] = {.lex_state = 48},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 48},
  [347] = {.lex_state = 48},
  [348] = {.lex_state = 10},
  [349] = {.lex_state = 48},
  [350] = {.lex_state = 4},
  [351] = {.lex_state = 48},
  [352] = {.lex_state = 48},
  [353] = {.lex_state = 48},
  [354] = {.lex_state = 48},
  [355] = {.lex_state = 48},
  [356] = {.lex_state = 48},
  [357] = {.lex_state = 48},
  [358] = {.lex_state = 48},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 48},
  [364] = {.lex_state = 10},
  [365] = {.lex_state = 48},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 48},
  [368] = {.lex_state = 48},
  [369] = {.lex_state = 48},
  [370] = {.lex_state = 48},
  [371] = {.lex_state = 48},
  [372] = {.lex_state = 48},
  [373] = {.lex_state = 4},
  [374] = {.lex_state = 48},
  [375] = {.lex_state = 4},
  [376] = {.lex_state = 48},
  [377] = {.lex_state = 48},
  [378] = {.lex_state = 48},
  [379] = {.lex_state = 48},
  [380] = {.lex_state = 48},
  [381] = {.lex_state = 23},
  [382] = {.lex_state = 23},
  [383] = {.lex_state = 48},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 48},
  [386] = {.lex_state = 12},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 48},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 48},
  [391] = {.lex_state = 23},
  [392] = {.lex_state = 10},
  [393] = {.lex_state = 23},
  [394] = {.lex_state = 12},
  [395] = {.lex_state = 10},
  [396] = {.lex_state = 10},
  [397] = {.lex_state = 48},
  [398] = {.lex_state = 48},
  [399] = {.lex_state = 48},
  [400] = {.lex_state = 48},
  [401] = {.lex_state = 48},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 10},
  [405] = {.lex_state = 48},
  [406] = {.lex_state = 12},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 10},
  [410] = {.lex_state = 48},
  [411] = {.lex_state = 48},
  [412] = {.lex_state = 12},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 10},
  [416] = {.lex_state = 48},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 48},
  [421] = {.lex_state = 48},
  [422] = {.lex_state = 48},
  [423] = {.lex_state = 48},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 12},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 48},
  [428] = {.lex_state = 48},
  [429] = {.lex_state = 48},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 48},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 48},
  [434] = {.lex_state = 48},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 48},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 48},
  [440] = {.lex_state = 48},
  [441] = {.lex_state = 48},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 48},
  [444] = {.lex_state = 48},
  [445] = {.lex_state = 48},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 48},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 48},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 48},
  [453] = {.lex_state = 48},
  [454] = {.lex_state = 48},
  [455] = {.lex_state = 48},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 12},
  [458] = {.lex_state = 48},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 48},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 48},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 12},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 12},
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
  [501] = {.lex_state = 10},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 48},
  [506] = {.lex_state = 48},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 48},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 48},
  [531] = {.lex_state = 48},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 48},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 48},
  [555] = {.lex_state = 48},
  [556] = {.lex_state = 48},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 48},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 48},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 10},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 48},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 48},
  [584] = {.lex_state = 10},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 48},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 48},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 10},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 48},
  [608] = {.lex_state = 48},
  [609] = {.lex_state = 48},
  [610] = {.lex_state = 48},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 10},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 48},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 48},
  [620] = {.lex_state = 48},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 12},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 12},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 48},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 48},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 48},
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
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 48},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
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
    [anon_sym_extern] = ACTIONS(1),
    [aux_sym_INT_token1] = ACTIONS(1),
    [aux_sym_INT_token2] = ACTIONS(1),
    [aux_sym_INT_token3] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_script_file] = STATE(623),
    [sym_ifile_p1] = STATE(3),
    [sym_sections] = STATE(29),
    [sym_statement_anywhere] = STATE(29),
    [sym_assignment] = STATE(417),
    [sym_memory] = STATE(29),
    [sym_startup] = STATE(29),
    [sym_high_level_library] = STATE(29),
    [sym_low_level_library] = STATE(29),
    [sym_floating_point_support] = STATE(29),
    [sym_phdrs] = STATE(29),
    [sym_version] = STATE(29),
    [aux_sym_script_file_repeat1] = STATE(3),
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
  [0] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(61), 1,
      anon_sym_SLASH_EQ,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(65), 1,
      anon_sym_COLON,
    ACTIONS(69), 1,
      anon_sym_BANG,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(83), 1,
      anon_sym_BIND,
    STATE(60), 1,
      sym_assign_op,
    STATE(115), 1,
      sym_INT,
    STATE(128), 1,
      sym_exp,
    STATE(204), 1,
      sym_opt_exp_with_type,
    STATE(561), 1,
      sym_atype,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(71), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_TILDE,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
    ACTIONS(59), 8,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
  [95] = 28,
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
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(417), 1,
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
    STATE(4), 2,
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
    STATE(29), 9,
      sym_sections,
      sym_statement_anywhere,
      sym_memory,
      sym_startup,
      sym_high_level_library,
      sym_low_level_library,
      sym_floating_point_support,
      sym_phdrs,
      sym_version,
  [200] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_NAME,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    ACTIONS(103), 1,
      anon_sym_OUTPUT_FORMAT,
    ACTIONS(112), 1,
      anon_sym_INCLUDE,
    ACTIONS(118), 1,
      anon_sym_EXTERN,
    ACTIONS(121), 1,
      anon_sym_INSERT,
    ACTIONS(124), 1,
      anon_sym_REGION_ALIAS,
    ACTIONS(127), 1,
      anon_sym_SECTIONS,
    ACTIONS(130), 1,
      anon_sym_ENTRY,
    ACTIONS(133), 1,
      anon_sym_ASSERT,
    ACTIONS(139), 1,
      anon_sym_MEMORY,
    ACTIONS(142), 1,
      anon_sym_STARTUP,
    ACTIONS(145), 1,
      anon_sym_HLL,
    ACTIONS(148), 1,
      anon_sym_SYSLIB,
    ACTIONS(154), 1,
      anon_sym_PHDRS,
    ACTIONS(157), 1,
      anon_sym_VERSION,
    STATE(417), 1,
      sym_assignment,
    ACTIONS(109), 2,
      anon_sym_INPUT,
      anon_sym_GROUP,
    ACTIONS(115), 2,
      anon_sym_NOCROSSREFS,
      anon_sym_NOCROSSREFS_TO,
    ACTIONS(151), 2,
      anon_sym_FLOAT,
      anon_sym_NOFLOAT,
    STATE(4), 2,
      sym_ifile_p1,
      aux_sym_script_file_repeat1,
    ACTIONS(97), 3,
      anon_sym_TARGET,
      anon_sym_OUTPUT_ARCH,
      anon_sym_LD_FEATURE,
    ACTIONS(100), 3,
      anon_sym_SEARCH_DIR,
      anon_sym_OUTPUT,
      anon_sym_MAP,
    ACTIONS(106), 3,
      anon_sym_FORCE_COMMON_ALLOCATION,
      anon_sym_FORCE_GROUP_ALLOCATION,
      anon_sym_INHIBIT_COMMON_ALLOCATION,
    ACTIONS(136), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    STATE(29), 9,
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
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(166), 1,
      anon_sym_READONLY,
    ACTIONS(168), 1,
      anon_sym_TYPE,
    STATE(115), 1,
      sym_INT,
    STATE(135), 1,
      sym_exp,
    STATE(500), 1,
      sym_type,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
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
    ACTIONS(67), 6,
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
    STATE(111), 1,
      sym_input_section_spec_no_keep,
    STATE(119), 1,
      sym_input_section_spec,
    STATE(223), 1,
      sym_sect_flags,
    STATE(407), 1,
      sym_assignment,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(538), 1,
      sym_statement_list,
    STATE(656), 1,
      sym_length,
    STATE(659), 1,
      sym_filename_spec,
    STATE(665), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(184), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(15), 2,
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
    STATE(111), 1,
      sym_input_section_spec_no_keep,
    STATE(119), 1,
      sym_input_section_spec,
    STATE(223), 1,
      sym_sect_flags,
    STATE(407), 1,
      sym_assignment,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(464), 1,
      sym_statement_list,
    STATE(656), 1,
      sym_length,
    STATE(659), 1,
      sym_filename_spec,
    STATE(665), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(184), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(15), 2,
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
  [631] = 7,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(208), 1,
      sym_comment,
    STATE(60), 1,
      sym_assign_op,
    ACTIONS(214), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(59), 4,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(61), 5,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_CARET_EQ,
    ACTIONS(212), 25,
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
  [685] = 29,
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
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym_input_section_spec_no_keep,
    STATE(119), 1,
      sym_input_section_spec,
    STATE(223), 1,
      sym_sect_flags,
    STATE(407), 1,
      sym_assignment,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(537), 1,
      sym_statement_list,
    STATE(656), 1,
      sym_length,
    STATE(659), 1,
      sym_filename_spec,
    STATE(665), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(184), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(15), 2,
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
  [783] = 29,
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
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym_input_section_spec_no_keep,
    STATE(119), 1,
      sym_input_section_spec,
    STATE(223), 1,
      sym_sect_flags,
    STATE(407), 1,
      sym_assignment,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(517), 1,
      sym_statement_list,
    STATE(656), 1,
      sym_length,
    STATE(659), 1,
      sym_filename_spec,
    STATE(665), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(184), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(15), 2,
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
    STATE(111), 1,
      sym_input_section_spec_no_keep,
    STATE(119), 1,
      sym_input_section_spec,
    STATE(223), 1,
      sym_sect_flags,
    STATE(407), 1,
      sym_assignment,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(523), 1,
      sym_statement_list,
    STATE(656), 1,
      sym_length,
    STATE(659), 1,
      sym_filename_spec,
    STATE(665), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(184), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(15), 2,
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
    STATE(111), 1,
      sym_input_section_spec_no_keep,
    STATE(119), 1,
      sym_input_section_spec,
    STATE(223), 1,
      sym_sect_flags,
    STATE(407), 1,
      sym_assignment,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(599), 1,
      sym_statement_list,
    STATE(656), 1,
      sym_length,
    STATE(659), 1,
      sym_filename_spec,
    STATE(665), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(184), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(15), 2,
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
    STATE(111), 1,
      sym_input_section_spec_no_keep,
    STATE(119), 1,
      sym_input_section_spec,
    STATE(223), 1,
      sym_sect_flags,
    STATE(407), 1,
      sym_assignment,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(536), 1,
      sym_statement_list,
    STATE(656), 1,
      sym_length,
    STATE(659), 1,
      sym_filename_spec,
    STATE(665), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(184), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(15), 2,
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
  [1175] = 28,
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
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym_input_section_spec_no_keep,
    STATE(119), 1,
      sym_input_section_spec,
    STATE(223), 1,
      sym_sect_flags,
    STATE(407), 1,
      sym_assignment,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(656), 1,
      sym_length,
    STATE(659), 1,
      sym_filename_spec,
    STATE(665), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(184), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(17), 2,
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
  [1270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(230), 34,
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
  [1315] = 28,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_NAME,
    ACTIONS(235), 1,
      anon_sym_SEMI,
    ACTIONS(238), 1,
      anon_sym_INCLUDE,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(243), 1,
      anon_sym_ASSERT,
    ACTIONS(249), 1,
      anon_sym_SORT_NONE,
    ACTIONS(252), 1,
      anon_sym_REVERSE,
    ACTIONS(255), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(258), 1,
      anon_sym_INPUT_SECTION_FLAGS,
    ACTIONS(261), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_KEEP,
    ACTIONS(270), 1,
      anon_sym_ASCIZ,
    ACTIONS(273), 1,
      anon_sym_FILL,
    ACTIONS(282), 1,
      sym_wildcard_name,
    STATE(111), 1,
      sym_input_section_spec_no_keep,
    STATE(119), 1,
      sym_input_section_spec,
    STATE(223), 1,
      sym_sect_flags,
    STATE(407), 1,
      sym_assignment,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(656), 1,
      sym_length,
    STATE(659), 1,
      sym_filename_spec,
    STATE(665), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(246), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
    STATE(17), 2,
      sym_statement,
      aux_sym_statement_list_repeat1,
    ACTIONS(267), 3,
      anon_sym_CREATE_OBJECT_SYMBOLS,
      anon_sym_CONSTRUCTORS,
      anon_sym_LINKER_VERSION,
    ACTIONS(279), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    ACTIONS(276), 5,
      anon_sym_QUAD,
      anon_sym_SQUAD,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_BYTE,
  [1410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(287), 34,
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
  [1455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(291), 34,
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
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(65), 1,
      anon_sym_COLON,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(83), 1,
      anon_sym_BIND,
    STATE(115), 1,
      sym_INT,
    STATE(128), 1,
      sym_exp,
    STATE(560), 1,
      sym_opt_exp_with_type,
    STATE(561), 1,
      sym_atype,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
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
    STATE(84), 1,
      sym_INT,
    STATE(104), 1,
      sym_exp,
    STATE(208), 1,
      sym_mustbe_exp,
    STATE(216), 1,
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
    STATE(84), 1,
      sym_INT,
    STATE(104), 1,
      sym_exp,
    STATE(208), 1,
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
    STATE(84), 1,
      sym_INT,
    STATE(104), 1,
      sym_exp,
    STATE(208), 1,
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
    STATE(84), 1,
      sym_INT,
    STATE(104), 1,
      sym_exp,
    STATE(208), 1,
      sym_mustbe_exp,
    STATE(397), 1,
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
  [2718] = 17,
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
    STATE(84), 1,
      sym_INT,
    STATE(104), 1,
      sym_exp,
    STATE(208), 1,
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
    STATE(84), 1,
      sym_INT,
    STATE(104), 1,
      sym_exp,
    STATE(208), 1,
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
    STATE(84), 1,
      sym_INT,
    STATE(104), 1,
      sym_exp,
    STATE(208), 1,
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
    STATE(84), 1,
      sym_INT,
    STATE(104), 1,
      sym_exp,
    STATE(208), 1,
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
    STATE(84), 1,
      sym_INT,
    STATE(104), 1,
      sym_exp,
    STATE(208), 1,
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
    STATE(84), 1,
      sym_INT,
    STATE(104), 1,
      sym_exp,
    STATE(208), 1,
      sym_mustbe_exp,
    STATE(423), 1,
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
    STATE(84), 1,
      sym_INT,
    STATE(104), 1,
      sym_exp,
    STATE(208), 1,
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
  [3208] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_COLON,
    STATE(115), 1,
      sym_INT,
    STATE(144), 1,
      sym_exp,
    STATE(290), 1,
      sym_opt_exp_without_type,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
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
    STATE(84), 1,
      sym_INT,
    STATE(104), 1,
      sym_exp,
    STATE(208), 1,
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
  [3348] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(127), 1,
      sym_exp,
    STATE(208), 1,
      sym_mustbe_exp,
    STATE(518), 1,
      sym_fill_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
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
    STATE(84), 1,
      sym_INT,
    STATE(104), 1,
      sym_exp,
    STATE(208), 1,
      sym_mustbe_exp,
    STATE(410), 1,
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
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(127), 1,
      sym_exp,
    STATE(373), 1,
      sym_mustbe_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
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
    STATE(84), 1,
      sym_INT,
    STATE(104), 1,
      sym_exp,
    STATE(342), 1,
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
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(127), 1,
      sym_exp,
    STATE(467), 1,
      sym_mustbe_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3689] = 16,
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
    STATE(84), 1,
      sym_INT,
    STATE(129), 1,
      sym_exp,
    STATE(329), 1,
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
  [3756] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(127), 1,
      sym_exp,
    STATE(456), 1,
      sym_mustbe_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3823] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(127), 1,
      sym_exp,
    STATE(518), 1,
      sym_mustbe_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [3890] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(147), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
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
  [3994] = 3,
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
  [4034] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(138), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4098] = 15,
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
    STATE(64), 1,
      sym_exp,
    STATE(84), 1,
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
  [4162] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(132), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4226] = 3,
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
  [4266] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(135), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4330] = 3,
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
  [4370] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_exp,
    STATE(115), 1,
      sym_INT,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4434] = 15,
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
    STATE(77), 1,
      sym_exp,
    STATE(84), 1,
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
  [4498] = 3,
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
  [4538] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(146), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4602] = 3,
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
  [4642] = 15,
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
    STATE(73), 1,
      sym_exp,
    STATE(84), 1,
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
  [4706] = 3,
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
  [4746] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(152), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4810] = 3,
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
  [4850] = 3,
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
  [4890] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(149), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [4954] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(153), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5018] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(130), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5082] = 3,
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
  [5122] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(131), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5186] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(136), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5250] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(155), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5314] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(137), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5378] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(148), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5442] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(154), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5506] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(139), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5570] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(142), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5634] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(140), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5698] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(125), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5762] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(150), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5826] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(133), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5890] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(151), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [5954] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(143), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [6018] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(145), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [6082] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(134), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [6146] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_exp,
    STATE(115), 1,
      sym_INT,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [6210] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_ASSERT,
    ACTIONS(71), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_ALIGN,
    ACTIONS(81), 1,
      anon_sym_SEGMENT_START,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_INT,
    STATE(141), 1,
      sym_exp,
    ACTIONS(53), 2,
      anon_sym_SIZEOF_HEADERS,
      sym_NAME,
    ACTIONS(75), 2,
      anon_sym_DEFINED,
      anon_sym_CONSTANT,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(85), 3,
      aux_sym_INT_token1,
      aux_sym_INT_token2,
      aux_sym_INT_token3,
    ACTIONS(79), 4,
      anon_sym_DATA_SEGMENT_ALIGN,
      anon_sym_DATA_SEGMENT_RELRO_END,
      anon_sym_MAX,
      anon_sym_MIN,
    ACTIONS(73), 5,
      anon_sym_NEXT,
      anon_sym_ABSOLUTE,
      anon_sym_DATA_SEGMENT_END,
      anon_sym_BLOCK,
      anon_sym_LOG2CEIL,
    ACTIONS(67), 6,
      anon_sym_ORIGIN,
      anon_sym_LENGTH,
      anon_sym_ALIGNOF,
      anon_sym_SIZEOF,
      anon_sym_ADDR,
      anon_sym_LOADADDR,
  [6274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(431), 26,
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
  [6312] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_QMARK,
    ACTIONS(437), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(439), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(435), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
    ACTIONS(441), 13,
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
  [6356] = 3,
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
  [6391] = 3,
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
  [6426] = 3,
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
  [6461] = 3,
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
  [6496] = 3,
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
  [6531] = 3,
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
  [6566] = 3,
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
  [6671] = 3,
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
  [6706] = 3,
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
  [6741] = 3,
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
  [6776] = 3,
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
  [6811] = 3,
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
  [6916] = 3,
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
  [6951] = 3,
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
  [6986] = 3,
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
  [7021] = 3,
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
  [7056] = 3,
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
  [7091] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(230), 25,
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
    ACTIONS(435), 1,
      anon_sym_l,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(437), 5,
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
    STATE(499), 1,
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
    ACTIONS(443), 1,
      anon_sym_QMARK,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(495), 2,
      anon_sym_AT,
      sym_NAME,
    ACTIONS(439), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(441), 13,
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
  [7341] = 5,
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
  [7373] = 5,
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
  [7405] = 5,
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
  [7437] = 5,
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
  [7469] = 5,
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
  [7501] = 5,
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
  [7533] = 5,
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
  [7565] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(517), 1,
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
    ACTIONS(519), 1,
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
  [7629] = 5,
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
  [7661] = 5,
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
  [7693] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(525), 1,
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
  [7725] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(527), 1,
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
  [7789] = 5,
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
  [7821] = 5,
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
  [7853] = 5,
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
  [8013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_QMARK,
    ACTIONS(543), 1,
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
    STATE(167), 1,
      sym_memspec,
    STATE(188), 1,
      sym_memspec_at,
    STATE(200), 1,
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
    STATE(168), 1,
      sym_memspec,
    STATE(183), 1,
      sym_memspec_at,
    STATE(191), 1,
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
    STATE(164), 1,
      sym_memspec,
    STATE(173), 1,
      sym_memspec_at,
    STATE(198), 1,
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
    STATE(169), 1,
      sym_memspec,
    STATE(187), 1,
      sym_memspec_at,
    STATE(194), 1,
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
    STATE(165), 1,
      sym_memspec,
    STATE(175), 1,
      sym_memspec_at,
    STATE(192), 1,
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
    STATE(166), 1,
      sym_memspec,
    STATE(172), 1,
      sym_memspec_at,
    STATE(190), 1,
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
    STATE(186), 1,
      sym_memspec_at,
    STATE(197), 1,
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
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    ACTIONS(615), 1,
      anon_sym_EQ,
    STATE(179), 1,
      sym_memspec_at,
    STATE(195), 1,
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
  [8407] = 9,
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
    STATE(187), 1,
      sym_memspec_at,
    STATE(194), 1,
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
  [8443] = 9,
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
    STATE(186), 1,
      sym_memspec_at,
    STATE(197), 1,
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
  [8479] = 9,
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
    STATE(175), 1,
      sym_memspec_at,
    STATE(192), 1,
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
  [8515] = 9,
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
    STATE(173), 1,
      sym_memspec_at,
    STATE(198), 1,
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
  [8551] = 9,
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
    ACTIONS(559), 1,
      anon_sym_AT,
    STATE(188), 1,
      sym_memspec_at,
    STATE(200), 1,
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
    STATE(172), 1,
      sym_memspec_at,
    STATE(190), 1,
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
    STATE(417), 1,
      sym_assignment,
    STATE(593), 1,
      sym_sec_or_group_p1,
    ACTIONS(37), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    STATE(185), 3,
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
    STATE(417), 1,
      sym_assignment,
    STATE(529), 1,
      sym_sec_or_group_p1,
    ACTIONS(37), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    STATE(185), 3,
      sym_statement_anywhere,
      sym_section,
      aux_sym_sec_or_group_p1_repeat1,
  [8705] = 7,
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
    STATE(192), 1,
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
  [8735] = 7,
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
    STATE(194), 1,
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
  [8765] = 11,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    ACTIONS(640), 1,
      anon_sym_REVERSE,
    ACTIONS(643), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(646), 1,
      sym_wildcard_name,
    STATE(242), 1,
      sym_wildcard_maybe_exclude,
    STATE(248), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(637), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    STATE(174), 2,
      sym_section_name_spec,
      aux_sym_section_name_list_repeat1,
    ACTIONS(634), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [8803] = 7,
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
    STATE(197), 1,
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
  [8833] = 11,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    ACTIONS(657), 1,
      anon_sym_REVERSE,
    ACTIONS(659), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(661), 1,
      sym_wildcard_name,
    STATE(242), 1,
      sym_wildcard_maybe_exclude,
    STATE(248), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(655), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    STATE(174), 2,
      sym_section_name_spec,
      aux_sym_section_name_list_repeat1,
    ACTIONS(653), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [8871] = 13,
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
    ACTIONS(663), 1,
      sym_NAME,
    ACTIONS(665), 1,
      anon_sym_LBRACK,
    STATE(222), 1,
      sym_sect_flags,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(498), 1,
      sym_input_section_spec_no_keep,
    STATE(658), 1,
      sym_filename_spec,
    STATE(665), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(186), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
  [8913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(667), 11,
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
  [8935] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 1,
      anon_sym_EQ,
    STATE(193), 1,
      sym_phdr_opt,
    ACTIONS(671), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [8965] = 11,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_REVERSE,
    ACTIONS(687), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(689), 1,
      anon_sym_RBRACK,
    ACTIONS(691), 1,
      sym_wildcard_name,
    STATE(231), 1,
      sym_wildcard_maybe_exclude,
    STATE(257), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(683), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    STATE(189), 2,
      sym_section_name_spec,
      aux_sym_section_name_list_repeat1,
    ACTIONS(681), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9003] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      sym_NAME,
    ACTIONS(696), 1,
      anon_sym_GROUP,
    ACTIONS(699), 1,
      anon_sym_INCLUDE,
    ACTIONS(702), 1,
      anon_sym_RBRACE,
    ACTIONS(704), 1,
      anon_sym_ENTRY,
    ACTIONS(707), 1,
      anon_sym_ASSERT,
    ACTIONS(713), 1,
      anon_sym_OVERLAY,
    STATE(417), 1,
      sym_assignment,
    ACTIONS(710), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    STATE(181), 3,
      sym_statement_anywhere,
      sym_section,
      aux_sym_sec_or_group_p1_repeat1,
  [9041] = 11,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    ACTIONS(725), 1,
      anon_sym_REVERSE,
    ACTIONS(728), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(731), 1,
      anon_sym_RBRACK,
    ACTIONS(733), 1,
      sym_wildcard_name,
    STATE(231), 1,
      sym_wildcard_maybe_exclude,
    STATE(257), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(722), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    STATE(182), 2,
      sym_section_name_spec,
      aux_sym_section_name_list_repeat1,
    ACTIONS(719), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9079] = 7,
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
    STATE(200), 1,
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
  [9109] = 11,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_REVERSE,
    ACTIONS(659), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(661), 1,
      sym_wildcard_name,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      sym_wildcard_maybe_exclude,
    STATE(248), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(655), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    STATE(176), 2,
      sym_section_name_spec,
      aux_sym_section_name_list_repeat1,
    ACTIONS(653), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9147] = 11,
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
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    STATE(417), 1,
      sym_assignment,
    ACTIONS(37), 3,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
    STATE(181), 3,
      sym_statement_anywhere,
      sym_section,
      aux_sym_sec_or_group_p1_repeat1,
  [9185] = 7,
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
    STATE(195), 1,
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
  [9215] = 7,
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
    STATE(190), 1,
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
  [9245] = 7,
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
    STATE(198), 1,
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
  [9275] = 11,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_REVERSE,
    ACTIONS(687), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(691), 1,
      sym_wildcard_name,
    ACTIONS(740), 1,
      anon_sym_RBRACK,
    STATE(231), 1,
      sym_wildcard_maybe_exclude,
    STATE(257), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(683), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    STATE(182), 2,
      sym_section_name_spec,
      aux_sym_section_name_list_repeat1,
    ACTIONS(681), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
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
  [9340] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      anon_sym_EQ,
    ACTIONS(742), 1,
      anon_sym_COLON,
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
  [9367] = 6,
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
  [9394] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    ACTIONS(750), 1,
      anon_sym_EQ,
    ACTIONS(744), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9421] = 6,
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
  [9448] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 1,
      anon_sym_EQ,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(671), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [9475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(752), 10,
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
  [9496] = 6,
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
  [9523] = 6,
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
  [9550] = 3,
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
  [9571] = 6,
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
  [9598] = 3,
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
  [9619] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_REVERSE,
    ACTIONS(687), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(691), 1,
      sym_wildcard_name,
    STATE(180), 1,
      sym_section_name_spec,
    STATE(231), 1,
      sym_wildcard_maybe_exclude,
    STATE(257), 1,
      sym_wildcard_maybe_reverse,
    STATE(494), 1,
      sym_section_name_list,
    ACTIONS(683), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(681), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9653] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_REVERSE,
    ACTIONS(659), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(661), 1,
      sym_wildcard_name,
    STATE(184), 1,
      sym_section_name_spec,
    STATE(242), 1,
      sym_wildcard_maybe_exclude,
    STATE(248), 1,
      sym_wildcard_maybe_reverse,
    STATE(488), 1,
      sym_section_name_list,
    ACTIONS(655), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(653), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9687] = 11,
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
    STATE(250), 1,
      sym_at,
    STATE(265), 1,
      sym_align,
    STATE(305), 1,
      sym_subalign,
    STATE(484), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [9723] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_REVERSE,
    ACTIONS(659), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(661), 1,
      sym_wildcard_name,
    STATE(184), 1,
      sym_section_name_spec,
    STATE(242), 1,
      sym_wildcard_maybe_exclude,
    STATE(248), 1,
      sym_wildcard_maybe_reverse,
    STATE(626), 1,
      sym_section_name_list,
    ACTIONS(655), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(653), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9757] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_REVERSE,
    ACTIONS(687), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(691), 1,
      sym_wildcard_name,
    STATE(180), 1,
      sym_section_name_spec,
    STATE(231), 1,
      sym_wildcard_maybe_exclude,
    STATE(257), 1,
      sym_wildcard_maybe_reverse,
    STATE(627), 1,
      sym_section_name_list,
    ACTIONS(683), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(681), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9791] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_REVERSE,
    ACTIONS(687), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(691), 1,
      sym_wildcard_name,
    STATE(180), 1,
      sym_section_name_spec,
    STATE(231), 1,
      sym_wildcard_maybe_exclude,
    STATE(257), 1,
      sym_wildcard_maybe_reverse,
    STATE(572), 1,
      sym_section_name_list,
    ACTIONS(683), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(681), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9825] = 3,
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
  [9845] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_REVERSE,
    ACTIONS(687), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(691), 1,
      sym_wildcard_name,
    STATE(180), 1,
      sym_section_name_spec,
    STATE(231), 1,
      sym_wildcard_maybe_exclude,
    STATE(257), 1,
      sym_wildcard_maybe_reverse,
    STATE(621), 1,
      sym_section_name_list,
    ACTIONS(683), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(681), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9879] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_REVERSE,
    ACTIONS(659), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(661), 1,
      sym_wildcard_name,
    STATE(184), 1,
      sym_section_name_spec,
    STATE(242), 1,
      sym_wildcard_maybe_exclude,
    STATE(248), 1,
      sym_wildcard_maybe_reverse,
    STATE(497), 1,
      sym_section_name_list,
    ACTIONS(655), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(653), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9913] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_REVERSE,
    ACTIONS(659), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(661), 1,
      sym_wildcard_name,
    STATE(184), 1,
      sym_section_name_spec,
    STATE(242), 1,
      sym_wildcard_maybe_exclude,
    STATE(248), 1,
      sym_wildcard_maybe_reverse,
    STATE(630), 1,
      sym_section_name_list,
    ACTIONS(655), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(653), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [9947] = 4,
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
  [9968] = 4,
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
  [9989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COMMA,
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
  [10010] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    ACTIONS(744), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10031] = 4,
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
  [10052] = 4,
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
  [10073] = 9,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_REVERSE,
    ACTIONS(659), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(661), 1,
      sym_wildcard_name,
    STATE(242), 1,
      sym_wildcard_maybe_exclude,
    STATE(248), 1,
      sym_wildcard_maybe_reverse,
    STATE(254), 1,
      sym_section_name_spec,
    ACTIONS(655), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(653), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [10104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_EQ,
    STATE(60), 1,
      sym_assign_op,
    ACTIONS(59), 9,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
  [10125] = 9,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_REVERSE,
    ACTIONS(687), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(691), 1,
      sym_wildcard_name,
    STATE(227), 1,
      sym_section_name_spec,
    STATE(231), 1,
      sym_wildcard_maybe_exclude,
    STATE(257), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(683), 2,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
    ACTIONS(681), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [10156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(671), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10177] = 10,
    ACTIONS(188), 1,
      anon_sym_REVERSE,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym_NAME,
    ACTIONS(784), 1,
      anon_sym_LBRACK,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(663), 1,
      sym_filename_spec,
    STATE(665), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(186), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
  [10210] = 10,
    ACTIONS(188), 1,
      anon_sym_REVERSE,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_NAME,
    ACTIONS(788), 1,
      anon_sym_LBRACK,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(570), 1,
      sym_filename_spec,
    STATE(665), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(186), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
  [10243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    ACTIONS(790), 9,
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
    ACTIONS(798), 1,
      anon_sym_COMMA,
    ACTIONS(800), 1,
      anon_sym_RBRACE,
    ACTIONS(796), 9,
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
  [10306] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(731), 10,
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
  [10322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(671), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10340] = 3,
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
  [10358] = 3,
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
  [10376] = 2,
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
  [10392] = 2,
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
  [10408] = 3,
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
  [10426] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(810), 10,
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
  [10442] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    ACTIONS(812), 9,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      sym_wildcard_name,
  [10460] = 3,
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
  [10478] = 3,
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
  [10496] = 3,
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
  [10514] = 3,
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
  [10532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_RBRACE,
    ACTIONS(796), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10550] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    ACTIONS(816), 9,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      sym_wildcard_name,
  [10568] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(820), 1,
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
  [10586] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(822), 1,
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
  [10604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    ACTIONS(790), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10622] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(816), 10,
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
  [10638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
    ACTIONS(824), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10656] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(828), 10,
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
  [10672] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(832), 1,
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
  [10690] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
    ACTIONS(810), 9,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      sym_wildcard_name,
  [10708] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_ALIGN,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    ACTIONS(838), 1,
      anon_sym_ALIGN_WITH_INPUT,
    STATE(261), 1,
      sym_align,
    STATE(306), 1,
      sym_subalign,
    STATE(648), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [10738] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    ACTIONS(828), 9,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      sym_wildcard_name,
  [10756] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(812), 10,
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
  [10772] = 3,
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
  [10790] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    ACTIONS(731), 9,
      anon_sym_COMMA,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
      anon_sym_SORT_NONE,
      anon_sym_SORT_BY_INIT_PRIORITY,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      sym_wildcard_name,
  [10808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    ACTIONS(744), 9,
      anon_sym_GROUP,
      anon_sym_INCLUDE,
      anon_sym_ENTRY,
      anon_sym_ASSERT,
      anon_sym_HIDDEN,
      anon_sym_PROVIDE,
      anon_sym_PROVIDE_HIDDEN,
      anon_sym_OVERLAY,
      sym_NAME,
  [10826] = 3,
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
  [10844] = 2,
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
  [10860] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(844), 1,
      anon_sym_READONLY,
    ACTIONS(846), 1,
      anon_sym_TYPE,
    STATE(500), 1,
      sym_type,
    ACTIONS(842), 5,
      anon_sym_OVERLAY,
      anon_sym_NOLOAD,
      anon_sym_DSECT,
      anon_sym_COPY,
      anon_sym_INFO,
  [10883] = 7,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_REVERSE,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(482), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(848), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [10907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_ALIGN,
    ACTIONS(852), 7,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_SUBALIGN,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
      anon_sym_ALIGN_WITH_INPUT,
  [10923] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    ACTIONS(858), 1,
      anon_sym_ALIGN_WITH_INPUT,
    STATE(321), 1,
      sym_subalign,
    STATE(569), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [10947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_ALIGN,
    ACTIONS(860), 7,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_SUBALIGN,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
      anon_sym_ALIGN_WITH_INPUT,
  [10963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_ALIGN,
    ACTIONS(864), 7,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_SUBALIGN,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
      anon_sym_ALIGN_WITH_INPUT,
  [10979] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(868), 8,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_NONE,
      anon_sym_REVERSE,
      anon_sym_EXCLUDE_FILE,
      anon_sym_LBRACK,
      sym_NAME,
      sym_wildcard_name,
  [10993] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    ACTIONS(838), 1,
      anon_sym_ALIGN_WITH_INPUT,
    STATE(306), 1,
      sym_subalign,
    STATE(648), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [11017] = 3,
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
  [11033] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_RBRACE,
    ACTIONS(878), 1,
      anon_sym_global,
    ACTIONS(880), 1,
      anon_sym_local,
    ACTIONS(882), 1,
      anon_sym_extern,
    STATE(527), 1,
      sym_vers_defns,
    STATE(528), 1,
      sym_vers_tag,
    ACTIONS(874), 2,
      sym_NAME,
      sym_VERS_IDENTIFIER,
  [11059] = 3,
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
  [11075] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_global,
    ACTIONS(880), 1,
      anon_sym_local,
    ACTIONS(882), 1,
      anon_sym_extern,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
    STATE(504), 1,
      sym_vers_tag,
    STATE(527), 1,
      sym_vers_defns,
    ACTIONS(874), 2,
      sym_NAME,
      sym_VERS_IDENTIFIER,
  [11101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_ALIGN,
    ACTIONS(890), 7,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_SUBALIGN,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
      anon_sym_ALIGN_WITH_INPUT,
  [11117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_ALIGN,
    ACTIONS(894), 7,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_SUBALIGN,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
      anon_sym_ALIGN_WITH_INPUT,
  [11133] = 7,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_REVERSE,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(629), 1,
      sym_wildcard_maybe_reverse,
    ACTIONS(898), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_ALIGNMENT,
  [11157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_ALIGN,
    ACTIONS(900), 6,
      anon_sym_LBRACE,
      anon_sym_SUBALIGN,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
      anon_sym_ALIGN_WITH_INPUT,
  [11172] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    STATE(321), 1,
      sym_subalign,
    STATE(569), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [11193] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    STATE(306), 1,
      sym_subalign,
    STATE(648), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [11214] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(904), 1,
      anon_sym_LBRACE,
    STATE(327), 1,
      sym_subalign,
    STATE(479), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [11235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_extern,
    STATE(438), 1,
      sym_vers_defns,
    ACTIONS(874), 4,
      anon_sym_global,
      anon_sym_local,
      sym_NAME,
      sym_VERS_IDENTIFIER,
  [11251] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_NAME,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
    ACTIONS(914), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(917), 1,
      sym_LNAME,
    STATE(278), 1,
      aux_sym_input_list_repeat1,
  [11273] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(920), 1,
      sym_NAME,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
    ACTIONS(926), 1,
      anon_sym_EQ,
    STATE(311), 1,
      sym_phdr_opt,
  [11295] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(928), 1,
      sym_NAME,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(932), 1,
      anon_sym_RBRACE,
    ACTIONS(934), 1,
      anon_sym_EQ,
    STATE(312), 1,
      sym_phdr_opt,
  [11317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_extern,
    STATE(448), 1,
      sym_vers_defns,
    ACTIONS(874), 4,
      anon_sym_global,
      anon_sym_local,
      sym_NAME,
      sym_VERS_IDENTIFIER,
  [11333] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym_NAME,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(940), 1,
      anon_sym_RPAREN,
    ACTIONS(942), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(944), 1,
      sym_LNAME,
    STATE(278), 1,
      aux_sym_input_list_repeat1,
  [11355] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym_NAME,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(950), 1,
      anon_sym_INCLUDE,
    ACTIONS(952), 1,
      anon_sym_RBRACE,
    STATE(297), 2,
      sym_memory_spec,
      aux_sym_memory_spec_list_repeat1,
  [11375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_extern,
    STATE(613), 1,
      sym_vers_defns,
    ACTIONS(874), 4,
      anon_sym_global,
      anon_sym_local,
      sym_NAME,
      sym_VERS_IDENTIFIER,
  [11391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_extern,
    STATE(612), 1,
      sym_vers_defns,
    ACTIONS(874), 4,
      anon_sym_global,
      anon_sym_local,
      sym_NAME,
      sym_VERS_IDENTIFIER,
  [11407] = 7,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_REVERSE,
    ACTIONS(954), 1,
      anon_sym_CONSTRUCTORS,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(516), 1,
      sym_wildcard_maybe_reverse,
  [11429] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      sym_NAME,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(962), 1,
      anon_sym_INCLUDE,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
    STATE(287), 2,
      sym_memory_spec,
      aux_sym_memory_spec_list_repeat1,
  [11449] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_NAME,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_low_level_library_NAME_list_repeat2,
    STATE(333), 2,
      sym_filename,
      aux_sym_low_level_library_NAME_list_repeat1,
  [11469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 6,
      anon_sym_LBRACE,
      anon_sym_SUBALIGN,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
      anon_sym_ALIGN_WITH_INPUT,
  [11481] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_AT,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(975), 1,
      anon_sym_NOCROSSREFS,
    ACTIONS(977), 1,
      anon_sym_LBRACE,
    STATE(416), 1,
      sym_at,
    STATE(487), 1,
      sym_subalign,
  [11503] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(942), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(979), 1,
      sym_NAME,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    ACTIONS(983), 1,
      sym_LNAME,
    STATE(282), 1,
      aux_sym_input_list_repeat1,
  [11525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_extern,
    STATE(521), 1,
      sym_vers_defns,
    ACTIONS(874), 4,
      anon_sym_global,
      anon_sym_local,
      sym_NAME,
      sym_VERS_IDENTIFIER,
  [11541] = 5,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    STATE(624), 1,
      sym_wildcard_maybe_exclude,
    ACTIONS(985), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_INIT_PRIORITY,
  [11559] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym_NAME,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(942), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(944), 1,
      sym_LNAME,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      aux_sym_input_list_repeat1,
  [11581] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(942), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(989), 1,
      sym_NAME,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    ACTIONS(993), 1,
      sym_LNAME,
    STATE(294), 1,
      aux_sym_input_list_repeat1,
  [11603] = 5,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    STATE(632), 1,
      sym_wildcard_maybe_exclude,
    ACTIONS(995), 3,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
      anon_sym_SORT_BY_INIT_PRIORITY,
  [11621] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym_NAME,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(950), 1,
      anon_sym_INCLUDE,
    ACTIONS(997), 1,
      anon_sym_RBRACE,
    STATE(287), 2,
      sym_memory_spec,
      aux_sym_memory_spec_list_repeat1,
  [11641] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_NAME,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      aux_sym_low_level_library_NAME_list_repeat2,
    STATE(333), 2,
      sym_filename,
      aux_sym_low_level_library_NAME_list_repeat1,
  [11661] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_NAME,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(577), 1,
      sym_low_level_library_NAME_list,
    STATE(288), 2,
      sym_filename,
      aux_sym_low_level_library_NAME_list_repeat1,
  [11681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 2,
      anon_sym_AS_NEEDED,
      sym_NAME,
    ACTIONS(1007), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_LNAME,
  [11694] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym_NAME,
    ACTIONS(1011), 1,
      anon_sym_RBRACE,
    STATE(576), 1,
      sym_phdr_list,
    STATE(378), 2,
      sym_phdr,
      aux_sym_phdr_list_repeat1,
  [11711] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      sym_NAME,
    ACTIONS(1015), 1,
      anon_sym_BANG,
    STATE(463), 1,
      sym_attributes_list,
    STATE(315), 2,
      sym_attributes_string,
      aux_sym_attributes_list_repeat1,
  [11728] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym_NAME,
    ACTIONS(950), 1,
      anon_sym_INCLUDE,
    ACTIONS(1017), 1,
      anon_sym_RBRACE,
    STATE(283), 1,
      sym_memory_spec,
    STATE(581), 1,
      sym_memory_spec_list,
  [11747] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_NAME,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(322), 2,
      sym_filename,
      aux_sym_high_level_library_NAME_list_repeat1,
  [11764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    STATE(648), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [11779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    STATE(569), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [11794] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_LBRACE,
    ACTIONS(1025), 1,
      sym_VERS_TAG,
    STATE(573), 1,
      sym_vers_nodes,
    STATE(331), 2,
      sym_vers_node,
      aux_sym_vers_nodes_repeat1,
  [11811] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      sym_NAME,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
    ACTIONS(1032), 1,
      anon_sym_BANG,
    STATE(308), 2,
      sym_attributes_string,
      aux_sym_attributes_list_repeat1,
  [11828] = 6,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_REVERSE,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(650), 1,
      sym_wildcard_maybe_reverse,
  [11847] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_AT,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(1035), 1,
      anon_sym_LBRACE,
    STATE(411), 1,
      sym_at,
    STATE(532), 1,
      sym_subalign,
  [11866] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(928), 1,
      sym_NAME,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(932), 1,
      anon_sym_RBRACE,
    ACTIONS(934), 1,
      anon_sym_EQ,
  [11885] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(1037), 1,
      sym_NAME,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1041), 1,
      anon_sym_RBRACE,
    ACTIONS(1043), 1,
      anon_sym_EQ,
  [11904] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1049), 1,
      anon_sym_l,
    STATE(374), 1,
      sym_length_spec,
    ACTIONS(1047), 2,
      anon_sym_LENGTH,
      anon_sym_len,
  [11921] = 6,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_REVERSE,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(535), 1,
      sym_wildcard_maybe_reverse,
  [11940] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      sym_NAME,
    ACTIONS(1015), 1,
      anon_sym_BANG,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    STATE(308), 2,
      sym_attributes_string,
      aux_sym_attributes_list_repeat1,
  [11957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 2,
      anon_sym_AS_NEEDED,
      sym_NAME,
    ACTIONS(912), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_LNAME,
  [11970] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_l,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      sym_length_spec,
    ACTIONS(1047), 2,
      anon_sym_LENGTH,
      anon_sym_len,
  [11987] = 6,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_REVERSE,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(516), 1,
      sym_wildcard_maybe_reverse,
  [12006] = 5,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    STATE(514), 1,
      sym_wildcard_maybe_exclude,
    ACTIONS(1057), 2,
      anon_sym_SORT_BY_NAME,
      anon_sym_SORT,
  [12023] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_RBRACE,
    ACTIONS(1064), 1,
      sym_VERS_TAG,
    STATE(320), 2,
      sym_vers_node,
      aux_sym_vers_nodes_repeat1,
  [12040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LBRACE,
    STATE(479), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [12055] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      sym_NAME,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    STATE(322), 2,
      sym_filename,
      aux_sym_high_level_library_NAME_list_repeat1,
  [12072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_NAME,
    ACTIONS(1075), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(333), 2,
      sym_filename,
      aux_sym_low_level_library_NAME_list_repeat1,
  [12087] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_NAME,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
    STATE(304), 2,
      sym_filename,
      aux_sym_high_level_library_NAME_list_repeat1,
  [12104] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_SEMI,
    ACTIONS(1083), 1,
      anon_sym_LPAREN,
    STATE(427), 1,
      sym_phdr_val,
    ACTIONS(1079), 2,
      anon_sym_AT,
      sym_NAME,
  [12121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      sym_NAME,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_vers_defns_repeat1,
    ACTIONS(1089), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_LBRACE,
    STATE(490), 1,
      sym_sect_constraint,
    ACTIONS(772), 3,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [12153] = 6,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_REVERSE,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(629), 1,
      sym_wildcard_maybe_reverse,
  [12172] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym_NAME,
    ACTIONS(1095), 1,
      anon_sym_SEMI,
    ACTIONS(1097), 1,
      anon_sym_AT,
    STATE(340), 1,
      aux_sym_phdr_qualifiers_repeat1,
    STATE(474), 1,
      sym_phdr_qualifiers,
  [12191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_extern,
    ACTIONS(1099), 4,
      anon_sym_global,
      anon_sym_local,
      sym_NAME,
      sym_VERS_IDENTIFIER,
  [12204] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_LBRACE,
    ACTIONS(1025), 1,
      sym_VERS_TAG,
    ACTIONS(1103), 1,
      anon_sym_RBRACE,
    STATE(320), 2,
      sym_vers_node,
      aux_sym_vers_nodes_repeat1,
  [12221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_AS_NEEDED,
      sym_NAME,
    ACTIONS(1107), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_LNAME,
  [12234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      sym_NAME,
    ACTIONS(1112), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(333), 2,
      sym_filename,
      aux_sym_low_level_library_NAME_list_repeat1,
  [12249] = 6,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_REVERSE,
    STATE(451), 1,
      sym_wildcard_maybe_exclude,
    STATE(482), 1,
      sym_wildcard_maybe_reverse,
  [12268] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    ACTIONS(1114), 1,
      sym_NAME,
    STATE(405), 1,
      aux_sym_overlay_section_repeat1,
    STATE(538), 1,
      sym_overlay_section,
  [12284] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      sym_NAME,
    ACTIONS(1118), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(1120), 1,
      sym_LNAME,
    STATE(525), 1,
      sym_input_list,
  [12300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_o,
    STATE(313), 1,
      sym_origin_spec,
    ACTIONS(1122), 2,
      anon_sym_ORIGIN,
      anon_sym_org,
  [12314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(1126), 2,
      anon_sym_INCLUDE,
      sym_NAME,
  [12326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym_vers_defns_repeat1,
    ACTIONS(1128), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12340] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym_NAME,
    ACTIONS(1097), 1,
      anon_sym_AT,
    ACTIONS(1130), 1,
      anon_sym_SEMI,
    STATE(355), 1,
      aux_sym_phdr_qualifiers_repeat1,
  [12356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 2,
      anon_sym_INCLUDE,
      sym_NAME,
    ACTIONS(1134), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 2,
      anon_sym_INCLUDE,
      sym_NAME,
    ACTIONS(1138), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_vers_defns_repeat1,
    ACTIONS(1140), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_vers_defns_repeat1,
    ACTIONS(1142), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_vers_defns_repeat1,
    ACTIONS(1142), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    ACTIONS(1114), 1,
      sym_NAME,
    STATE(405), 1,
      aux_sym_overlay_section_repeat1,
    STATE(536), 1,
      sym_overlay_section,
  [12438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 4,
      anon_sym_NOCROSSREFS,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_SUBALIGN,
  [12448] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_SEMI,
    ACTIONS(1148), 1,
      sym_VERS_TAG,
    STATE(409), 1,
      aux_sym_verdep_repeat1,
    STATE(611), 1,
      sym_verdep,
  [12464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      sym_NAME,
    ACTIONS(1118), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(1120), 1,
      sym_LNAME,
    STATE(602), 1,
      sym_input_list,
  [12480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_l,
    STATE(374), 1,
      sym_length_spec,
    ACTIONS(1047), 2,
      anon_sym_LENGTH,
      anon_sym_len,
  [12494] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      sym_NAME,
    ACTIONS(1118), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(1120), 1,
      sym_LNAME,
    STATE(604), 1,
      sym_input_list,
  [12510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 2,
      anon_sym_INCLUDE,
      sym_NAME,
    ACTIONS(1152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12522] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      sym_NAME,
    ACTIONS(1157), 1,
      anon_sym_COMMA,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_extern_name_list_repeat1,
  [12538] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      sym_NAME,
    ACTIONS(1118), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(1120), 1,
      sym_LNAME,
    STATE(510), 1,
      sym_input_list,
  [12554] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      sym_NAME,
    ACTIONS(1165), 1,
      anon_sym_SEMI,
    ACTIONS(1167), 1,
      anon_sym_AT,
    STATE(355), 1,
      aux_sym_phdr_qualifiers_repeat1,
  [12570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 4,
      anon_sym_LBRACE,
      anon_sym_ONLY_IF_RO,
      anon_sym_ONLY_IF_RW,
      anon_sym_SPECIAL,
  [12580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      sym_NAME,
    ACTIONS(1174), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      sym_NAME,
    ACTIONS(1179), 1,
      anon_sym_RBRACE,
    STATE(358), 2,
      sym_phdr,
      aux_sym_phdr_list_repeat1,
  [12606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_vers_defns_repeat1,
    ACTIONS(1174), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_vers_defns_repeat1,
    ACTIONS(1184), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_vers_defns_repeat1,
    ACTIONS(1089), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12648] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
    ACTIONS(1089), 1,
      anon_sym_SEMI,
    ACTIONS(1186), 1,
      anon_sym_COLON,
    STATE(343), 1,
      aux_sym_vers_defns_repeat1,
  [12664] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    ACTIONS(1114), 1,
      sym_NAME,
    STATE(405), 1,
      aux_sym_overlay_section_repeat1,
    STATE(464), 1,
      sym_overlay_section,
  [12680] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      sym_VERS_TAG,
    ACTIONS(1188), 1,
      anon_sym_SEMI,
    STATE(409), 1,
      aux_sym_verdep_repeat1,
    STATE(559), 1,
      sym_verdep,
  [12696] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_NAME,
    ACTIONS(1190), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      sym_filename,
    STATE(579), 1,
      sym_high_level_library_NAME_list,
  [12712] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
    ACTIONS(1089), 1,
      anon_sym_SEMI,
    ACTIONS(1192), 1,
      anon_sym_COLON,
    STATE(343), 1,
      aux_sym_vers_defns_repeat1,
  [12728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      sym_NAME,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      aux_sym_extern_name_list_repeat1,
  [12744] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    ACTIONS(1200), 1,
      anon_sym_COLON,
    ACTIONS(1202), 1,
      anon_sym_BLOCK,
    STATE(547), 1,
      sym_atype,
  [12760] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      sym_NAME,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym_extern_name_list_repeat1,
  [12776] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(1114), 1,
      sym_NAME,
    STATE(405), 1,
      aux_sym_overlay_section_repeat1,
    STATE(599), 1,
      sym_overlay_section,
  [12792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 2,
      anon_sym_INCLUDE,
      sym_NAME,
    ACTIONS(1212), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12804] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      sym_NAME,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1218), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_extern_name_list_repeat1,
  [12820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_l,
    ACTIONS(1220), 3,
      anon_sym_COMMA,
      anon_sym_LENGTH,
      anon_sym_len,
  [12832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 2,
      anon_sym_INCLUDE,
      sym_NAME,
    ACTIONS(1226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_l,
    STATE(341), 1,
      sym_length_spec,
    ACTIONS(1047), 2,
      anon_sym_LENGTH,
      anon_sym_len,
  [12858] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      sym_NAME,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_extern_name_list_repeat1,
  [12874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_o,
    STATE(317), 1,
      sym_origin_spec,
    ACTIONS(1122), 2,
      anon_sym_ORIGIN,
      anon_sym_org,
  [12888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym_NAME,
    ACTIONS(1230), 1,
      anon_sym_RBRACE,
    STATE(358), 2,
      sym_phdr,
      aux_sym_phdr_list_repeat1,
  [12902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 4,
      anon_sym_NOCROSSREFS,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_SUBALIGN,
  [12912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym_NAME,
    ACTIONS(950), 1,
      anon_sym_INCLUDE,
    STATE(338), 1,
      sym_memory_spec,
  [12925] = 4,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    STATE(535), 1,
      sym_wildcard_maybe_exclude,
  [12938] = 4,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    STATE(650), 1,
      sym_wildcard_maybe_exclude,
  [12951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      sym_NAME,
    ACTIONS(1073), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_LPAREN,
    ACTIONS(1238), 1,
      anon_sym_COLON,
    STATE(549), 1,
      sym_attributes,
  [12975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      sym_NAME,
    ACTIONS(1243), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      aux_sym_overlay_section_repeat1,
  [12988] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1245), 1,
      sym_wildcard_name,
    STATE(425), 1,
      aux_sym_exclude_name_list_repeat1,
    STATE(513), 1,
      sym_exclude_name_list,
  [13001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym_low_level_library_NAME_list_repeat2,
  [13014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_NAME,
    STATE(298), 2,
      sym_filename,
      aux_sym_low_level_library_NAME_list_repeat1,
  [13025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
    ACTIONS(1249), 1,
      anon_sym_COMMA,
    STATE(389), 1,
      aux_sym_low_level_library_NAME_list_repeat2,
  [13038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      sym_NAME,
    ACTIONS(1254), 1,
      anon_sym_AS_NEEDED,
    ACTIONS(1256), 1,
      sym_LNAME,
  [13051] = 4,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    STATE(514), 1,
      sym_wildcard_maybe_exclude,
  [13064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_VERS_TAG,
  [13073] = 4,
    ACTIONS(190), 1,
      anon_sym_EXCLUDE_FILE,
    ACTIONS(206), 1,
      sym_wildcard_name,
    ACTIONS(208), 1,
      sym_comment,
    STATE(509), 1,
      sym_wildcard_maybe_exclude,
  [13086] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1245), 1,
      sym_wildcard_name,
    STATE(425), 1,
      aux_sym_exclude_name_list_repeat1,
    STATE(645), 1,
      sym_exclude_name_list,
  [13099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_VERS_TAG,
  [13108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_SEMI,
    ACTIONS(1264), 1,
      sym_VERS_TAG,
    STATE(396), 1,
      aux_sym_verdep_repeat1,
  [13121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      sym_NAME,
    ACTIONS(1269), 1,
      anon_sym_COMMA,
    ACTIONS(1271), 1,
      anon_sym_RBRACE,
  [13134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_SEMI,
    ACTIONS(1273), 2,
      anon_sym_AT,
      sym_NAME,
  [13145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1277), 1,
      sym_NAME,
    ACTIONS(1279), 2,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [13156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 1,
      anon_sym_SEMI,
    ACTIONS(1281), 2,
      anon_sym_AT,
      sym_NAME,
  [13167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_NAME,
    STATE(323), 2,
      sym_filename,
      aux_sym_low_level_library_NAME_list_repeat1,
  [13178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym_low_level_library_NAME_list_repeat2,
  [13191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_VERS_TAG,
  [13209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      sym_NAME,
    ACTIONS(1289), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      aux_sym_overlay_section_repeat1,
  [13222] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1245), 1,
      sym_wildcard_name,
    STATE(425), 1,
      aux_sym_exclude_name_list_repeat1,
    STATE(651), 1,
      sym_exclude_name_list,
  [13235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(109), 1,
      sym_separator,
    ACTIONS(1291), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(121), 1,
      sym_separator,
    ACTIONS(1291), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 1,
      anon_sym_SEMI,
    ACTIONS(1295), 1,
      sym_VERS_TAG,
    STATE(396), 1,
      aux_sym_verdep_repeat1,
  [13270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      sym_NAME,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1301), 1,
      anon_sym_RBRACE,
  [13283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(1303), 1,
      anon_sym_LBRACE,
    STATE(597), 1,
      sym_subalign,
  [13296] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
    ACTIONS(1307), 1,
      sym_wildcard_name,
    STATE(412), 1,
      aux_sym_exclude_name_list_repeat1,
  [13309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
    ACTIONS(1312), 1,
      anon_sym_AMP,
    STATE(424), 1,
      aux_sym_sect_flag_list_repeat1,
  [13322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    ACTIONS(1314), 1,
      anon_sym_COLON,
    STATE(541), 1,
      sym_atype,
  [13335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_VERS_TAG,
  [13344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SUBALIGN,
    ACTIONS(1035), 1,
      anon_sym_LBRACE,
    STATE(532), 1,
      sym_subalign,
  [13357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym_separator,
    ACTIONS(1318), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1320), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      sym_NAME,
    ACTIONS(1160), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 1,
      sym_NAME,
    ACTIONS(1326), 2,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [13408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      sym_NAME,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      sym_nocrossref_list,
  [13421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym_NAME,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1041), 1,
      anon_sym_RBRACE,
  [13434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
    ACTIONS(1334), 1,
      anon_sym_AMP,
    STATE(424), 1,
      aux_sym_sect_flag_list_repeat1,
  [13447] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    ACTIONS(1339), 1,
      sym_wildcard_name,
    STATE(412), 1,
      aux_sym_exclude_name_list_repeat1,
  [13460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      anon_sym_AMP,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      aux_sym_sect_flag_list_repeat1,
  [13473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      anon_sym_SEMI,
    ACTIONS(1343), 2,
      anon_sym_AT,
      sym_NAME,
  [13484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1345), 2,
      anon_sym_AFTER,
      anon_sym_BEFORE,
  [13492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_NAME,
    STATE(36), 1,
      sym_filename,
  [13502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 2,
      anon_sym_RPAREN,
      anon_sym_AMP,
  [13510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1347), 1,
      sym_NAME,
    ACTIONS(1349), 1,
      anon_sym_RBRACE,
  [13520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 1,
      anon_sym_LPAREN,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
  [13530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 1,
      sym_NAME,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
  [13540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_NAME,
    STATE(246), 1,
      sym_filename,
  [13550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1359), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_NAME,
    STATE(602), 1,
      sym_filename,
  [13568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_paren_script_name,
  [13578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_SEMI,
    ACTIONS(1365), 1,
      anon_sym_RBRACE,
  [13588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      sym_NAME,
    STATE(602), 1,
      sym_extern_name_list,
  [13598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_NAME,
    STATE(580), 1,
      sym_filename,
  [13608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      sym_NAME,
    ACTIONS(1301), 1,
      anon_sym_RBRACE,
  [13618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
  [13628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1373), 1,
      sym_NAME,
    STATE(109), 1,
      sym_filename,
  [13638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym_NAME,
    ACTIONS(1041), 1,
      anon_sym_RBRACE,
  [13648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_NAME,
    STATE(383), 1,
      sym_filename,
  [13658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      sym_NAME,
    ACTIONS(1271), 1,
      anon_sym_RBRACE,
  [13676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 1,
      anon_sym_SEMI,
    ACTIONS(1377), 1,
      anon_sym_RBRACE,
  [13686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 1,
      sym_NAME,
    ACTIONS(1381), 1,
      anon_sym_RBRACE,
  [13704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      anon_sym_RBRACE,
    ACTIONS(1385), 1,
      anon_sym_local,
  [13722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      anon_sym_RPAREN,
    ACTIONS(1355), 1,
      sym_NAME,
  [13732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_NAME,
    ACTIONS(932), 1,
      anon_sym_RBRACE,
  [13742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 1,
      sym_NAME,
    ACTIONS(1389), 1,
      anon_sym_RBRACE,
  [13752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13760] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1393), 1,
      sym_wildcard_name,
    STATE(512), 1,
      sym_sect_flag_list,
  [13770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_NAME,
    STATE(371), 1,
      sym_filename,
  [13780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym_paren_script_name,
  [13798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1397), 1,
      anon_sym_COLON,
  [13805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1399), 1,
      anon_sym_LPAREN,
  [13812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 1,
      anon_sym_RPAREN,
  [13819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
  [13826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1403), 1,
      sym_NAME,
  [13833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1405), 1,
      anon_sym_LPAREN,
  [13840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
  [13847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
  [13854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_COMMA,
  [13861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      sym_NAME,
  [13868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 1,
      anon_sym_LPAREN,
  [13875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
  [13882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_LPAREN,
  [13889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1417), 1,
      anon_sym_SEMI,
  [13896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 1,
      anon_sym_RBRACE,
  [13903] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1421), 1,
      sym_wildcard_name,
  [13910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 1,
      anon_sym_COLON,
  [13917] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1425), 1,
      sym_wildcard_name,
  [13924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_LBRACE,
  [13931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1427), 1,
      anon_sym_RPAREN,
  [13938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 1,
      anon_sym_LPAREN,
  [13945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
  [13952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LPAREN,
  [13959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
  [13966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 1,
      anon_sym_LBRACE,
  [13973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LPAREN,
  [13980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_LBRACE,
  [13987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
  [13994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1441), 1,
      anon_sym_LBRACE,
  [14001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 1,
      anon_sym_LBRACE,
  [14008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_SEMI,
  [14015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 1,
      anon_sym_LPAREN,
  [14022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 1,
      anon_sym_RBRACE,
  [14029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 1,
      anon_sym_RBRACK,
  [14036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 1,
      anon_sym_RPAREN,
  [14043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1453), 1,
      anon_sym_LPAREN,
  [14050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 1,
      anon_sym_RPAREN,
  [14057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 1,
      anon_sym_RPAREN,
  [14064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 1,
      anon_sym_COLON,
  [14071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1459), 1,
      anon_sym_RPAREN,
  [14078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1461), 1,
      anon_sym_EQ,
  [14085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
  [14092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
  [14099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1463), 1,
      anon_sym_RBRACE,
  [14106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1465), 1,
      sym_NAME,
  [14113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1467), 1,
      sym_NAME,
  [14120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 1,
      anon_sym_RPAREN,
  [14127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_RPAREN,
  [14134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1473), 1,
      anon_sym_RPAREN,
  [14141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_RPAREN,
  [14148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1477), 1,
      anon_sym_TYPE,
  [14155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      anon_sym_RPAREN,
  [14162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 1,
      anon_sym_RPAREN,
  [14169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
  [14176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 1,
      anon_sym_LPAREN,
  [14183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1487), 1,
      anon_sym_RPAREN,
  [14190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
  [14197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1489), 1,
      anon_sym_RPAREN,
  [14204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      anon_sym_RBRACE,
  [14211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_LPAREN,
  [14218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 1,
      anon_sym_SEMI,
  [14225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1497), 1,
      anon_sym_COLON,
  [14232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1499), 1,
      anon_sym_RBRACE,
  [14239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1501), 1,
      anon_sym_LPAREN,
  [14246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
  [14253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 1,
      anon_sym_COMMA,
  [14260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1507), 1,
      anon_sym_SEMI,
  [14267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1509), 1,
      anon_sym_RBRACE,
  [14274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
  [14281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1511), 1,
      sym_NAME,
  [14288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 1,
      sym_NAME,
  [14295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_LBRACE,
  [14302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 1,
      anon_sym_LBRACE,
  [14309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
  [14316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1519), 1,
      anon_sym_RPAREN,
  [14323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
  [14330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1521), 1,
      anon_sym_RBRACE,
  [14337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
  [14344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1523), 1,
      anon_sym_RBRACE,
  [14351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1525), 1,
      anon_sym_SEMI,
  [14358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1527), 1,
      anon_sym_COLON,
  [14365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1529), 1,
      sym_NAME,
  [14372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1531), 1,
      anon_sym_LPAREN,
  [14379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1533), 1,
      anon_sym_LPAREN,
  [14386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1535), 1,
      anon_sym_LPAREN,
  [14393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1537), 1,
      anon_sym_LPAREN,
  [14400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1539), 1,
      anon_sym_COLON,
  [14407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1541), 1,
      anon_sym_LPAREN,
  [14414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 1,
      anon_sym_COLON,
  [14421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1545), 1,
      anon_sym_LPAREN,
  [14428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1547), 1,
      anon_sym_RPAREN,
  [14435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1549), 1,
      anon_sym_LPAREN,
  [14442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1551), 1,
      anon_sym_LPAREN,
  [14449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1553), 1,
      sym_NAME,
  [14456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1555), 1,
      sym_NAME,
  [14463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1557), 1,
      sym_NAME,
  [14470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1559), 1,
      anon_sym_LPAREN,
  [14477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1561), 1,
      anon_sym_LPAREN,
  [14484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1563), 1,
      anon_sym_SEMI,
  [14491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1565), 1,
      anon_sym_LBRACE,
  [14498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_COLON,
  [14505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1567), 1,
      anon_sym_LPAREN,
  [14512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1569), 1,
      sym_NAME,
  [14519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      anon_sym_RBRACE,
  [14526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 1,
      sym_NAME,
  [14533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1571), 1,
      anon_sym_LBRACE,
  [14540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
  [14547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1573), 1,
      anon_sym_EQ,
  [14554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LBRACE,
  [14561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1575), 1,
      anon_sym_LPAREN,
  [14568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1577), 1,
      sym_NAME,
  [14575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1579), 1,
      anon_sym_RBRACK,
  [14582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1581), 1,
      anon_sym_RBRACE,
  [14589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1583), 1,
      anon_sym_LBRACE,
  [14596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1585), 1,
      anon_sym_LPAREN,
  [14603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1587), 1,
      anon_sym_RBRACE,
  [14610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1589), 1,
      anon_sym_RPAREN,
  [14617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1591), 1,
      anon_sym_LPAREN,
  [14624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1593), 1,
      anon_sym_RPAREN,
  [14631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1595), 1,
      anon_sym_RPAREN,
  [14638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1597), 1,
      anon_sym_RBRACE,
  [14645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1599), 1,
      anon_sym_LPAREN,
  [14652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1601), 1,
      anon_sym_GT,
  [14659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1603), 1,
      anon_sym_EQ,
  [14666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1605), 1,
      anon_sym_LPAREN,
  [14673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1607), 1,
      anon_sym_LPAREN,
  [14680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1609), 1,
      anon_sym_LPAREN,
  [14687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1611), 1,
      anon_sym_LPAREN,
  [14694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1613), 1,
      anon_sym_LPAREN,
  [14701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1615), 1,
      sym_NAME,
  [14708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1617), 1,
      anon_sym_LPAREN,
  [14715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1619), 1,
      anon_sym_RPAREN,
  [14722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1621), 1,
      anon_sym_RBRACE,
  [14729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1623), 1,
      sym_NAME,
  [14736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
  [14743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1625), 1,
      anon_sym_COMMA,
  [14750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1627), 1,
      anon_sym_LBRACE,
  [14757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
  [14764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
  [14771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1629), 1,
      anon_sym_LPAREN,
  [14778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1631), 1,
      anon_sym_EQ,
  [14785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
  [14792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
  [14799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1633), 1,
      anon_sym_RPAREN,
  [14806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1635), 1,
      anon_sym_RPAREN,
  [14813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
  [14820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1637), 1,
      sym_NAME,
  [14827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1639), 1,
      sym_NAME,
  [14834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1641), 1,
      sym_NAME,
  [14841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1643), 1,
      sym_NAME,
  [14848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      anon_sym_SEMI,
  [14855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1645), 1,
      anon_sym_SEMI,
  [14862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1647), 1,
      anon_sym_SEMI,
  [14869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1649), 1,
      anon_sym_EQ,
  [14876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1651), 1,
      anon_sym_RPAREN,
  [14883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1653), 1,
      sym_NAME,
  [14890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
  [14897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1655), 1,
      anon_sym_COLON,
  [14904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1657), 1,
      sym_NAME,
  [14911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1659), 1,
      sym_NAME,
  [14918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1661), 1,
      anon_sym_RBRACK,
  [14925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
  [14932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1663), 1,
      ts_builtin_sym_end,
  [14939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1665), 1,
      anon_sym_RPAREN,
  [14946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1667), 1,
      anon_sym_LBRACE,
  [14953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1669), 1,
      anon_sym_RPAREN,
  [14960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1669), 1,
      anon_sym_RBRACK,
  [14967] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1671), 1,
      sym_wildcard_name,
  [14974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1673), 1,
      anon_sym_RPAREN,
  [14981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1675), 1,
      anon_sym_RPAREN,
  [14988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1677), 1,
      anon_sym_RPAREN,
  [14995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1679), 1,
      anon_sym_RPAREN,
  [15002] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1681), 1,
      sym_wildcard_name,
  [15009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1683), 1,
      anon_sym_LBRACE,
  [15016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1685), 1,
      sym_NAME,
  [15023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1687), 1,
      anon_sym_LPAREN,
  [15030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1689), 1,
      sym_NAME,
  [15037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1691), 1,
      anon_sym_LPAREN,
  [15044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1693), 1,
      anon_sym_LPAREN,
  [15051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1695), 1,
      anon_sym_LBRACE,
  [15058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1697), 1,
      sym_NAME,
  [15065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1699), 1,
      anon_sym_LPAREN,
  [15072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1701), 1,
      anon_sym_LPAREN,
  [15079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1703), 1,
      anon_sym_LPAREN,
  [15086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1705), 1,
      anon_sym_RPAREN,
  [15093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1707), 1,
      anon_sym_LBRACE,
  [15100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1709), 1,
      anon_sym_LPAREN,
  [15107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
  [15114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1711), 1,
      anon_sym_LPAREN,
  [15121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1713), 1,
      anon_sym_RPAREN,
  [15128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1715), 1,
      anon_sym_RPAREN,
  [15135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1717), 1,
      anon_sym_LPAREN,
  [15142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1719), 1,
      anon_sym_LPAREN,
  [15149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1721), 1,
      anon_sym_LPAREN,
  [15156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1723), 1,
      anon_sym_LPAREN,
  [15163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1725), 1,
      anon_sym_LPAREN,
  [15170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_COMMA,
  [15177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1727), 1,
      anon_sym_LPAREN,
  [15184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1729), 1,
      anon_sym_LPAREN,
  [15191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1731), 1,
      anon_sym_LPAREN,
  [15198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1733), 1,
      anon_sym_LPAREN,
  [15205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1735), 1,
      anon_sym_LPAREN,
  [15212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1737), 1,
      anon_sym_LPAREN,
  [15219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1739), 1,
      anon_sym_LPAREN,
  [15226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1741), 1,
      anon_sym_LPAREN,
  [15233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1743), 1,
      anon_sym_LPAREN,
  [15240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1745), 1,
      anon_sym_LPAREN,
  [15247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1747), 1,
      anon_sym_LPAREN,
  [15254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1749), 1,
      sym_NAME,
  [15261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1751), 1,
      anon_sym_LPAREN,
  [15268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1753), 1,
      anon_sym_LPAREN,
  [15275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1755), 1,
      anon_sym_LPAREN,
  [15282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1757), 1,
      anon_sym_LPAREN,
  [15289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1759), 1,
      anon_sym_LPAREN,
  [15296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1761), 1,
      anon_sym_LPAREN,
  [15303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1763), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 200,
  [SMALL_STATE(5)] = 305,
  [SMALL_STATE(6)] = 388,
  [SMALL_STATE(7)] = 435,
  [SMALL_STATE(8)] = 533,
  [SMALL_STATE(9)] = 631,
  [SMALL_STATE(10)] = 685,
  [SMALL_STATE(11)] = 783,
  [SMALL_STATE(12)] = 881,
  [SMALL_STATE(13)] = 979,
  [SMALL_STATE(14)] = 1077,
  [SMALL_STATE(15)] = 1175,
  [SMALL_STATE(16)] = 1270,
  [SMALL_STATE(17)] = 1315,
  [SMALL_STATE(18)] = 1410,
  [SMALL_STATE(19)] = 1455,
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
  [SMALL_STATE(65)] = 4034,
  [SMALL_STATE(66)] = 4098,
  [SMALL_STATE(67)] = 4162,
  [SMALL_STATE(68)] = 4226,
  [SMALL_STATE(69)] = 4266,
  [SMALL_STATE(70)] = 4330,
  [SMALL_STATE(71)] = 4370,
  [SMALL_STATE(72)] = 4434,
  [SMALL_STATE(73)] = 4498,
  [SMALL_STATE(74)] = 4538,
  [SMALL_STATE(75)] = 4602,
  [SMALL_STATE(76)] = 4642,
  [SMALL_STATE(77)] = 4706,
  [SMALL_STATE(78)] = 4746,
  [SMALL_STATE(79)] = 4810,
  [SMALL_STATE(80)] = 4850,
  [SMALL_STATE(81)] = 4890,
  [SMALL_STATE(82)] = 4954,
  [SMALL_STATE(83)] = 5018,
  [SMALL_STATE(84)] = 5082,
  [SMALL_STATE(85)] = 5122,
  [SMALL_STATE(86)] = 5186,
  [SMALL_STATE(87)] = 5250,
  [SMALL_STATE(88)] = 5314,
  [SMALL_STATE(89)] = 5378,
  [SMALL_STATE(90)] = 5442,
  [SMALL_STATE(91)] = 5506,
  [SMALL_STATE(92)] = 5570,
  [SMALL_STATE(93)] = 5634,
  [SMALL_STATE(94)] = 5698,
  [SMALL_STATE(95)] = 5762,
  [SMALL_STATE(96)] = 5826,
  [SMALL_STATE(97)] = 5890,
  [SMALL_STATE(98)] = 5954,
  [SMALL_STATE(99)] = 6018,
  [SMALL_STATE(100)] = 6082,
  [SMALL_STATE(101)] = 6146,
  [SMALL_STATE(102)] = 6210,
  [SMALL_STATE(103)] = 6274,
  [SMALL_STATE(104)] = 6312,
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
  [SMALL_STATE(173)] = 8735,
  [SMALL_STATE(174)] = 8765,
  [SMALL_STATE(175)] = 8803,
  [SMALL_STATE(176)] = 8833,
  [SMALL_STATE(177)] = 8871,
  [SMALL_STATE(178)] = 8913,
  [SMALL_STATE(179)] = 8935,
  [SMALL_STATE(180)] = 8965,
  [SMALL_STATE(181)] = 9003,
  [SMALL_STATE(182)] = 9041,
  [SMALL_STATE(183)] = 9079,
  [SMALL_STATE(184)] = 9109,
  [SMALL_STATE(185)] = 9147,
  [SMALL_STATE(186)] = 9185,
  [SMALL_STATE(187)] = 9215,
  [SMALL_STATE(188)] = 9245,
  [SMALL_STATE(189)] = 9275,
  [SMALL_STATE(190)] = 9313,
  [SMALL_STATE(191)] = 9340,
  [SMALL_STATE(192)] = 9367,
  [SMALL_STATE(193)] = 9394,
  [SMALL_STATE(194)] = 9421,
  [SMALL_STATE(195)] = 9448,
  [SMALL_STATE(196)] = 9475,
  [SMALL_STATE(197)] = 9496,
  [SMALL_STATE(198)] = 9523,
  [SMALL_STATE(199)] = 9550,
  [SMALL_STATE(200)] = 9571,
  [SMALL_STATE(201)] = 9598,
  [SMALL_STATE(202)] = 9619,
  [SMALL_STATE(203)] = 9653,
  [SMALL_STATE(204)] = 9687,
  [SMALL_STATE(205)] = 9723,
  [SMALL_STATE(206)] = 9757,
  [SMALL_STATE(207)] = 9791,
  [SMALL_STATE(208)] = 9825,
  [SMALL_STATE(209)] = 9845,
  [SMALL_STATE(210)] = 9879,
  [SMALL_STATE(211)] = 9913,
  [SMALL_STATE(212)] = 9947,
  [SMALL_STATE(213)] = 9968,
  [SMALL_STATE(214)] = 9989,
  [SMALL_STATE(215)] = 10010,
  [SMALL_STATE(216)] = 10031,
  [SMALL_STATE(217)] = 10052,
  [SMALL_STATE(218)] = 10073,
  [SMALL_STATE(219)] = 10104,
  [SMALL_STATE(220)] = 10125,
  [SMALL_STATE(221)] = 10156,
  [SMALL_STATE(222)] = 10177,
  [SMALL_STATE(223)] = 10210,
  [SMALL_STATE(224)] = 10243,
  [SMALL_STATE(225)] = 10264,
  [SMALL_STATE(226)] = 10285,
  [SMALL_STATE(227)] = 10306,
  [SMALL_STATE(228)] = 10322,
  [SMALL_STATE(229)] = 10340,
  [SMALL_STATE(230)] = 10358,
  [SMALL_STATE(231)] = 10376,
  [SMALL_STATE(232)] = 10392,
  [SMALL_STATE(233)] = 10408,
  [SMALL_STATE(234)] = 10426,
  [SMALL_STATE(235)] = 10442,
  [SMALL_STATE(236)] = 10460,
  [SMALL_STATE(237)] = 10478,
  [SMALL_STATE(238)] = 10496,
  [SMALL_STATE(239)] = 10514,
  [SMALL_STATE(240)] = 10532,
  [SMALL_STATE(241)] = 10550,
  [SMALL_STATE(242)] = 10568,
  [SMALL_STATE(243)] = 10586,
  [SMALL_STATE(244)] = 10604,
  [SMALL_STATE(245)] = 10622,
  [SMALL_STATE(246)] = 10638,
  [SMALL_STATE(247)] = 10656,
  [SMALL_STATE(248)] = 10672,
  [SMALL_STATE(249)] = 10690,
  [SMALL_STATE(250)] = 10708,
  [SMALL_STATE(251)] = 10738,
  [SMALL_STATE(252)] = 10756,
  [SMALL_STATE(253)] = 10772,
  [SMALL_STATE(254)] = 10790,
  [SMALL_STATE(255)] = 10808,
  [SMALL_STATE(256)] = 10826,
  [SMALL_STATE(257)] = 10844,
  [SMALL_STATE(258)] = 10860,
  [SMALL_STATE(259)] = 10883,
  [SMALL_STATE(260)] = 10907,
  [SMALL_STATE(261)] = 10923,
  [SMALL_STATE(262)] = 10947,
  [SMALL_STATE(263)] = 10963,
  [SMALL_STATE(264)] = 10979,
  [SMALL_STATE(265)] = 10993,
  [SMALL_STATE(266)] = 11017,
  [SMALL_STATE(267)] = 11033,
  [SMALL_STATE(268)] = 11059,
  [SMALL_STATE(269)] = 11075,
  [SMALL_STATE(270)] = 11101,
  [SMALL_STATE(271)] = 11117,
  [SMALL_STATE(272)] = 11133,
  [SMALL_STATE(273)] = 11157,
  [SMALL_STATE(274)] = 11172,
  [SMALL_STATE(275)] = 11193,
  [SMALL_STATE(276)] = 11214,
  [SMALL_STATE(277)] = 11235,
  [SMALL_STATE(278)] = 11251,
  [SMALL_STATE(279)] = 11273,
  [SMALL_STATE(280)] = 11295,
  [SMALL_STATE(281)] = 11317,
  [SMALL_STATE(282)] = 11333,
  [SMALL_STATE(283)] = 11355,
  [SMALL_STATE(284)] = 11375,
  [SMALL_STATE(285)] = 11391,
  [SMALL_STATE(286)] = 11407,
  [SMALL_STATE(287)] = 11429,
  [SMALL_STATE(288)] = 11449,
  [SMALL_STATE(289)] = 11469,
  [SMALL_STATE(290)] = 11481,
  [SMALL_STATE(291)] = 11503,
  [SMALL_STATE(292)] = 11525,
  [SMALL_STATE(293)] = 11541,
  [SMALL_STATE(294)] = 11559,
  [SMALL_STATE(295)] = 11581,
  [SMALL_STATE(296)] = 11603,
  [SMALL_STATE(297)] = 11621,
  [SMALL_STATE(298)] = 11641,
  [SMALL_STATE(299)] = 11661,
  [SMALL_STATE(300)] = 11681,
  [SMALL_STATE(301)] = 11694,
  [SMALL_STATE(302)] = 11711,
  [SMALL_STATE(303)] = 11728,
  [SMALL_STATE(304)] = 11747,
  [SMALL_STATE(305)] = 11764,
  [SMALL_STATE(306)] = 11779,
  [SMALL_STATE(307)] = 11794,
  [SMALL_STATE(308)] = 11811,
  [SMALL_STATE(309)] = 11828,
  [SMALL_STATE(310)] = 11847,
  [SMALL_STATE(311)] = 11866,
  [SMALL_STATE(312)] = 11885,
  [SMALL_STATE(313)] = 11904,
  [SMALL_STATE(314)] = 11921,
  [SMALL_STATE(315)] = 11940,
  [SMALL_STATE(316)] = 11957,
  [SMALL_STATE(317)] = 11970,
  [SMALL_STATE(318)] = 11987,
  [SMALL_STATE(319)] = 12006,
  [SMALL_STATE(320)] = 12023,
  [SMALL_STATE(321)] = 12040,
  [SMALL_STATE(322)] = 12055,
  [SMALL_STATE(323)] = 12072,
  [SMALL_STATE(324)] = 12087,
  [SMALL_STATE(325)] = 12104,
  [SMALL_STATE(326)] = 12121,
  [SMALL_STATE(327)] = 12138,
  [SMALL_STATE(328)] = 12153,
  [SMALL_STATE(329)] = 12172,
  [SMALL_STATE(330)] = 12191,
  [SMALL_STATE(331)] = 12204,
  [SMALL_STATE(332)] = 12221,
  [SMALL_STATE(333)] = 12234,
  [SMALL_STATE(334)] = 12249,
  [SMALL_STATE(335)] = 12268,
  [SMALL_STATE(336)] = 12284,
  [SMALL_STATE(337)] = 12300,
  [SMALL_STATE(338)] = 12314,
  [SMALL_STATE(339)] = 12326,
  [SMALL_STATE(340)] = 12340,
  [SMALL_STATE(341)] = 12356,
  [SMALL_STATE(342)] = 12368,
  [SMALL_STATE(343)] = 12380,
  [SMALL_STATE(344)] = 12394,
  [SMALL_STATE(345)] = 12408,
  [SMALL_STATE(346)] = 12422,
  [SMALL_STATE(347)] = 12438,
  [SMALL_STATE(348)] = 12448,
  [SMALL_STATE(349)] = 12464,
  [SMALL_STATE(350)] = 12480,
  [SMALL_STATE(351)] = 12494,
  [SMALL_STATE(352)] = 12510,
  [SMALL_STATE(353)] = 12522,
  [SMALL_STATE(354)] = 12538,
  [SMALL_STATE(355)] = 12554,
  [SMALL_STATE(356)] = 12570,
  [SMALL_STATE(357)] = 12580,
  [SMALL_STATE(358)] = 12592,
  [SMALL_STATE(359)] = 12606,
  [SMALL_STATE(360)] = 12620,
  [SMALL_STATE(361)] = 12634,
  [SMALL_STATE(362)] = 12648,
  [SMALL_STATE(363)] = 12664,
  [SMALL_STATE(364)] = 12680,
  [SMALL_STATE(365)] = 12696,
  [SMALL_STATE(366)] = 12712,
  [SMALL_STATE(367)] = 12728,
  [SMALL_STATE(368)] = 12744,
  [SMALL_STATE(369)] = 12760,
  [SMALL_STATE(370)] = 12776,
  [SMALL_STATE(371)] = 12792,
  [SMALL_STATE(372)] = 12804,
  [SMALL_STATE(373)] = 12820,
  [SMALL_STATE(374)] = 12832,
  [SMALL_STATE(375)] = 12844,
  [SMALL_STATE(376)] = 12858,
  [SMALL_STATE(377)] = 12874,
  [SMALL_STATE(378)] = 12888,
  [SMALL_STATE(379)] = 12902,
  [SMALL_STATE(380)] = 12912,
  [SMALL_STATE(381)] = 12925,
  [SMALL_STATE(382)] = 12938,
  [SMALL_STATE(383)] = 12951,
  [SMALL_STATE(384)] = 12962,
  [SMALL_STATE(385)] = 12975,
  [SMALL_STATE(386)] = 12988,
  [SMALL_STATE(387)] = 13001,
  [SMALL_STATE(388)] = 13014,
  [SMALL_STATE(389)] = 13025,
  [SMALL_STATE(390)] = 13038,
  [SMALL_STATE(391)] = 13051,
  [SMALL_STATE(392)] = 13064,
  [SMALL_STATE(393)] = 13073,
  [SMALL_STATE(394)] = 13086,
  [SMALL_STATE(395)] = 13099,
  [SMALL_STATE(396)] = 13108,
  [SMALL_STATE(397)] = 13121,
  [SMALL_STATE(398)] = 13134,
  [SMALL_STATE(399)] = 13145,
  [SMALL_STATE(400)] = 13156,
  [SMALL_STATE(401)] = 13167,
  [SMALL_STATE(402)] = 13178,
  [SMALL_STATE(403)] = 13191,
  [SMALL_STATE(404)] = 13200,
  [SMALL_STATE(405)] = 13209,
  [SMALL_STATE(406)] = 13222,
  [SMALL_STATE(407)] = 13235,
  [SMALL_STATE(408)] = 13246,
  [SMALL_STATE(409)] = 13257,
  [SMALL_STATE(410)] = 13270,
  [SMALL_STATE(411)] = 13283,
  [SMALL_STATE(412)] = 13296,
  [SMALL_STATE(413)] = 13309,
  [SMALL_STATE(414)] = 13322,
  [SMALL_STATE(415)] = 13335,
  [SMALL_STATE(416)] = 13344,
  [SMALL_STATE(417)] = 13357,
  [SMALL_STATE(418)] = 13368,
  [SMALL_STATE(419)] = 13377,
  [SMALL_STATE(420)] = 13386,
  [SMALL_STATE(421)] = 13397,
  [SMALL_STATE(422)] = 13408,
  [SMALL_STATE(423)] = 13421,
  [SMALL_STATE(424)] = 13434,
  [SMALL_STATE(425)] = 13447,
  [SMALL_STATE(426)] = 13460,
  [SMALL_STATE(427)] = 13473,
  [SMALL_STATE(428)] = 13484,
  [SMALL_STATE(429)] = 13492,
  [SMALL_STATE(430)] = 13502,
  [SMALL_STATE(431)] = 13510,
  [SMALL_STATE(432)] = 13520,
  [SMALL_STATE(433)] = 13530,
  [SMALL_STATE(434)] = 13540,
  [SMALL_STATE(435)] = 13550,
  [SMALL_STATE(436)] = 13558,
  [SMALL_STATE(437)] = 13568,
  [SMALL_STATE(438)] = 13578,
  [SMALL_STATE(439)] = 13588,
  [SMALL_STATE(440)] = 13598,
  [SMALL_STATE(441)] = 13608,
  [SMALL_STATE(442)] = 13618,
  [SMALL_STATE(443)] = 13628,
  [SMALL_STATE(444)] = 13638,
  [SMALL_STATE(445)] = 13648,
  [SMALL_STATE(446)] = 13658,
  [SMALL_STATE(447)] = 13666,
  [SMALL_STATE(448)] = 13676,
  [SMALL_STATE(449)] = 13686,
  [SMALL_STATE(450)] = 13694,
  [SMALL_STATE(451)] = 13704,
  [SMALL_STATE(452)] = 13712,
  [SMALL_STATE(453)] = 13722,
  [SMALL_STATE(454)] = 13732,
  [SMALL_STATE(455)] = 13742,
  [SMALL_STATE(456)] = 13752,
  [SMALL_STATE(457)] = 13760,
  [SMALL_STATE(458)] = 13770,
  [SMALL_STATE(459)] = 13780,
  [SMALL_STATE(460)] = 13788,
  [SMALL_STATE(461)] = 13798,
  [SMALL_STATE(462)] = 13805,
  [SMALL_STATE(463)] = 13812,
  [SMALL_STATE(464)] = 13819,
  [SMALL_STATE(465)] = 13826,
  [SMALL_STATE(466)] = 13833,
  [SMALL_STATE(467)] = 13840,
  [SMALL_STATE(468)] = 13847,
  [SMALL_STATE(469)] = 13854,
  [SMALL_STATE(470)] = 13861,
  [SMALL_STATE(471)] = 13868,
  [SMALL_STATE(472)] = 13875,
  [SMALL_STATE(473)] = 13882,
  [SMALL_STATE(474)] = 13889,
  [SMALL_STATE(475)] = 13896,
  [SMALL_STATE(476)] = 13903,
  [SMALL_STATE(477)] = 13910,
  [SMALL_STATE(478)] = 13917,
  [SMALL_STATE(479)] = 13924,
  [SMALL_STATE(480)] = 13931,
  [SMALL_STATE(481)] = 13938,
  [SMALL_STATE(482)] = 13945,
  [SMALL_STATE(483)] = 13952,
  [SMALL_STATE(484)] = 13959,
  [SMALL_STATE(485)] = 13966,
  [SMALL_STATE(486)] = 13973,
  [SMALL_STATE(487)] = 13980,
  [SMALL_STATE(488)] = 13987,
  [SMALL_STATE(489)] = 13994,
  [SMALL_STATE(490)] = 14001,
  [SMALL_STATE(491)] = 14008,
  [SMALL_STATE(492)] = 14015,
  [SMALL_STATE(493)] = 14022,
  [SMALL_STATE(494)] = 14029,
  [SMALL_STATE(495)] = 14036,
  [SMALL_STATE(496)] = 14043,
  [SMALL_STATE(497)] = 14050,
  [SMALL_STATE(498)] = 14057,
  [SMALL_STATE(499)] = 14064,
  [SMALL_STATE(500)] = 14071,
  [SMALL_STATE(501)] = 14078,
  [SMALL_STATE(502)] = 14085,
  [SMALL_STATE(503)] = 14092,
  [SMALL_STATE(504)] = 14099,
  [SMALL_STATE(505)] = 14106,
  [SMALL_STATE(506)] = 14113,
  [SMALL_STATE(507)] = 14120,
  [SMALL_STATE(508)] = 14127,
  [SMALL_STATE(509)] = 14134,
  [SMALL_STATE(510)] = 14141,
  [SMALL_STATE(511)] = 14148,
  [SMALL_STATE(512)] = 14155,
  [SMALL_STATE(513)] = 14162,
  [SMALL_STATE(514)] = 14169,
  [SMALL_STATE(515)] = 14176,
  [SMALL_STATE(516)] = 14183,
  [SMALL_STATE(517)] = 14190,
  [SMALL_STATE(518)] = 14197,
  [SMALL_STATE(519)] = 14204,
  [SMALL_STATE(520)] = 14211,
  [SMALL_STATE(521)] = 14218,
  [SMALL_STATE(522)] = 14225,
  [SMALL_STATE(523)] = 14232,
  [SMALL_STATE(524)] = 14239,
  [SMALL_STATE(525)] = 14246,
  [SMALL_STATE(526)] = 14253,
  [SMALL_STATE(527)] = 14260,
  [SMALL_STATE(528)] = 14267,
  [SMALL_STATE(529)] = 14274,
  [SMALL_STATE(530)] = 14281,
  [SMALL_STATE(531)] = 14288,
  [SMALL_STATE(532)] = 14295,
  [SMALL_STATE(533)] = 14302,
  [SMALL_STATE(534)] = 14309,
  [SMALL_STATE(535)] = 14316,
  [SMALL_STATE(536)] = 14323,
  [SMALL_STATE(537)] = 14330,
  [SMALL_STATE(538)] = 14337,
  [SMALL_STATE(539)] = 14344,
  [SMALL_STATE(540)] = 14351,
  [SMALL_STATE(541)] = 14358,
  [SMALL_STATE(542)] = 14365,
  [SMALL_STATE(543)] = 14372,
  [SMALL_STATE(544)] = 14379,
  [SMALL_STATE(545)] = 14386,
  [SMALL_STATE(546)] = 14393,
  [SMALL_STATE(547)] = 14400,
  [SMALL_STATE(548)] = 14407,
  [SMALL_STATE(549)] = 14414,
  [SMALL_STATE(550)] = 14421,
  [SMALL_STATE(551)] = 14428,
  [SMALL_STATE(552)] = 14435,
  [SMALL_STATE(553)] = 14442,
  [SMALL_STATE(554)] = 14449,
  [SMALL_STATE(555)] = 14456,
  [SMALL_STATE(556)] = 14463,
  [SMALL_STATE(557)] = 14470,
  [SMALL_STATE(558)] = 14477,
  [SMALL_STATE(559)] = 14484,
  [SMALL_STATE(560)] = 14491,
  [SMALL_STATE(561)] = 14498,
  [SMALL_STATE(562)] = 14505,
  [SMALL_STATE(563)] = 14512,
  [SMALL_STATE(564)] = 14519,
  [SMALL_STATE(565)] = 14526,
  [SMALL_STATE(566)] = 14533,
  [SMALL_STATE(567)] = 14540,
  [SMALL_STATE(568)] = 14547,
  [SMALL_STATE(569)] = 14554,
  [SMALL_STATE(570)] = 14561,
  [SMALL_STATE(571)] = 14568,
  [SMALL_STATE(572)] = 14575,
  [SMALL_STATE(573)] = 14582,
  [SMALL_STATE(574)] = 14589,
  [SMALL_STATE(575)] = 14596,
  [SMALL_STATE(576)] = 14603,
  [SMALL_STATE(577)] = 14610,
  [SMALL_STATE(578)] = 14617,
  [SMALL_STATE(579)] = 14624,
  [SMALL_STATE(580)] = 14631,
  [SMALL_STATE(581)] = 14638,
  [SMALL_STATE(582)] = 14645,
  [SMALL_STATE(583)] = 14652,
  [SMALL_STATE(584)] = 14659,
  [SMALL_STATE(585)] = 14666,
  [SMALL_STATE(586)] = 14673,
  [SMALL_STATE(587)] = 14680,
  [SMALL_STATE(588)] = 14687,
  [SMALL_STATE(589)] = 14694,
  [SMALL_STATE(590)] = 14701,
  [SMALL_STATE(591)] = 14708,
  [SMALL_STATE(592)] = 14715,
  [SMALL_STATE(593)] = 14722,
  [SMALL_STATE(594)] = 14729,
  [SMALL_STATE(595)] = 14736,
  [SMALL_STATE(596)] = 14743,
  [SMALL_STATE(597)] = 14750,
  [SMALL_STATE(598)] = 14757,
  [SMALL_STATE(599)] = 14764,
  [SMALL_STATE(600)] = 14771,
  [SMALL_STATE(601)] = 14778,
  [SMALL_STATE(602)] = 14785,
  [SMALL_STATE(603)] = 14792,
  [SMALL_STATE(604)] = 14799,
  [SMALL_STATE(605)] = 14806,
  [SMALL_STATE(606)] = 14813,
  [SMALL_STATE(607)] = 14820,
  [SMALL_STATE(608)] = 14827,
  [SMALL_STATE(609)] = 14834,
  [SMALL_STATE(610)] = 14841,
  [SMALL_STATE(611)] = 14848,
  [SMALL_STATE(612)] = 14855,
  [SMALL_STATE(613)] = 14862,
  [SMALL_STATE(614)] = 14869,
  [SMALL_STATE(615)] = 14876,
  [SMALL_STATE(616)] = 14883,
  [SMALL_STATE(617)] = 14890,
  [SMALL_STATE(618)] = 14897,
  [SMALL_STATE(619)] = 14904,
  [SMALL_STATE(620)] = 14911,
  [SMALL_STATE(621)] = 14918,
  [SMALL_STATE(622)] = 14925,
  [SMALL_STATE(623)] = 14932,
  [SMALL_STATE(624)] = 14939,
  [SMALL_STATE(625)] = 14946,
  [SMALL_STATE(626)] = 14953,
  [SMALL_STATE(627)] = 14960,
  [SMALL_STATE(628)] = 14967,
  [SMALL_STATE(629)] = 14974,
  [SMALL_STATE(630)] = 14981,
  [SMALL_STATE(631)] = 14988,
  [SMALL_STATE(632)] = 14995,
  [SMALL_STATE(633)] = 15002,
  [SMALL_STATE(634)] = 15009,
  [SMALL_STATE(635)] = 15016,
  [SMALL_STATE(636)] = 15023,
  [SMALL_STATE(637)] = 15030,
  [SMALL_STATE(638)] = 15037,
  [SMALL_STATE(639)] = 15044,
  [SMALL_STATE(640)] = 15051,
  [SMALL_STATE(641)] = 15058,
  [SMALL_STATE(642)] = 15065,
  [SMALL_STATE(643)] = 15072,
  [SMALL_STATE(644)] = 15079,
  [SMALL_STATE(645)] = 15086,
  [SMALL_STATE(646)] = 15093,
  [SMALL_STATE(647)] = 15100,
  [SMALL_STATE(648)] = 15107,
  [SMALL_STATE(649)] = 15114,
  [SMALL_STATE(650)] = 15121,
  [SMALL_STATE(651)] = 15128,
  [SMALL_STATE(652)] = 15135,
  [SMALL_STATE(653)] = 15142,
  [SMALL_STATE(654)] = 15149,
  [SMALL_STATE(655)] = 15156,
  [SMALL_STATE(656)] = 15163,
  [SMALL_STATE(657)] = 15170,
  [SMALL_STATE(658)] = 15177,
  [SMALL_STATE(659)] = 15184,
  [SMALL_STATE(660)] = 15191,
  [SMALL_STATE(661)] = 15198,
  [SMALL_STATE(662)] = 15205,
  [SMALL_STATE(663)] = 15212,
  [SMALL_STATE(664)] = 15219,
  [SMALL_STATE(665)] = 15226,
  [SMALL_STATE(666)] = 15233,
  [SMALL_STATE(667)] = 15240,
  [SMALL_STATE(668)] = 15247,
  [SMALL_STATE(669)] = 15254,
  [SMALL_STATE(670)] = 15261,
  [SMALL_STATE(671)] = 15268,
  [SMALL_STATE(672)] = 15275,
  [SMALL_STATE(673)] = 15282,
  [SMALL_STATE(674)] = 15289,
  [SMALL_STATE(675)] = 15296,
  [SMALL_STATE(676)] = 15303,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(219),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(29),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(557),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(668),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(667),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(29),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(664),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(429),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(655),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(649),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(428),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(647),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(646),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(644),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(643),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(642),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(640),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(639),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(638),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(636),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(28),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(634),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_file_repeat1, 2), SHIFT_REPEAT(625),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_section_spec_no_keep, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_section_spec_no_keep, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_separator, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_separator, 1),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(9),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(119),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(443),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(466),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(544),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(545),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(546),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(552),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(553),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(207),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(558),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(119),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(506),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(543),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(666),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(642),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(459),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_anywhere, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_anywhere, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_anywhere, 6),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_anywhere, 6),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_anywhere, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_anywhere, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifile_p1, 8),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifile_p1, 8),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_low_level_library, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_low_level_library, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_high_level_library, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_high_level_library, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sections, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_support, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_support, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifile_p1, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifile_p1, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sections, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_low_level_library, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_low_level_library, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_high_level_library, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_high_level_library, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifile_p1, 6),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifile_p1, 6),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdrs, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phdrs, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdrs, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phdrs, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifile_p1, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifile_p1, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_startup, 4),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_startup, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifile_p1, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifile_p1, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory, 4),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifile_p1, 4),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifile_p1, 4),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_INT, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_INT, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 5),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 5),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 4),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_script_name, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_script_name, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 6),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 6),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_op, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_op, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustbe_exp, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustbe_exp, 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_section_spec_no_keep, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_section_spec_no_keep, 3),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_section_spec, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_section_spec, 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_section_spec_no_keep, 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_section_spec_no_keep, 5),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_section_spec, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_section_spec, 4),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_section_spec_no_keep, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_section_spec_no_keep, 2),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 7),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 7),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_section_spec_no_keep, 4),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_section_spec_no_keep, 4),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phdr_type, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdr_type, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 5),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 5),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 6),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 6),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 7),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 7),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 9),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 9),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 8),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 8),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 10),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 10),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 11),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 11),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(218),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_name_list_repeat1, 2),
  [634] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(660),
  [637] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(661),
  [640] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(662),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(673),
  [646] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(243),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name_list, 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memspec, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memspec, 2),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 12),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 12),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_name_list, 1),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [693] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sec_or_group_p1_repeat1, 2), SHIFT_REPEAT(2),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sec_or_group_p1_repeat1, 2), SHIFT_REPEAT(21),
  [699] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sec_or_group_p1_repeat1, 2), SHIFT_REPEAT(434),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sec_or_group_p1_repeat1, 2),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sec_or_group_p1_repeat1, 2), SHIFT_REPEAT(644),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sec_or_group_p1_repeat1, 2), SHIFT_REPEAT(643),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sec_or_group_p1_repeat1, 2), SHIFT_REPEAT(642),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sec_or_group_p1_repeat1, 2), SHIFT_REPEAT(52),
  [716] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(220),
  [719] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(582),
  [722] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(578),
  [725] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(575),
  [728] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(670),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2),
  [733] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_name_list_repeat1, 2), SHIFT_REPEAT(232),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name_list, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sec_or_group_p1, 1),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_name_list, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 13),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 13),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phdr_opt, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdr_opt, 2),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memspec_at, 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memspec_at, 3),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phdr_opt, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdr_opt, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_exp, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_exp, 1),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 14),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 14),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 15),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 15),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_maybe_reverse, 1),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_maybe_exclude, 1),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 16),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 16),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_name_spec, 7),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_maybe_reverse, 4),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_maybe_reverse, 4),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_maybe_exclude, 5),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_maybe_exclude, 5),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_maybe_reverse, 1),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_maybe_exclude, 1),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_name_spec, 4),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_name_spec, 1),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name_spec, 1),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name_spec, 7),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name_spec, 4),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_with_type, 1),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_exp_with_type, 1),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_with_type, 3),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_exp_with_type, 3),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_with_type, 10),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_exp_with_type, 10),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sect_flags, 4),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_with_type, 2),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_exp_with_type, 2),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_with_type, 6),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_exp_with_type, 6),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_with_type, 9),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_exp_with_type, 9),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_with_type, 5),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_exp_with_type, 5),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at, 4),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at, 4),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [906] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_list_repeat1, 2), SHIFT_REPEAT(278),
  [909] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_list_repeat1, 2), SHIFT_REPEAT(390),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_list_repeat1, 2),
  [914] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_list_repeat1, 2), SHIFT_REPEAT(462),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_list_repeat1, 2), SHIFT_REPEAT(278),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_overlay_section_repeat1, 3),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_section_repeat1, 3),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_overlay_section_repeat1, 4),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_section_repeat1, 4),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_list, 2),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_spec_list, 1),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [956] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_memory_spec_list_repeat1, 2), SHIFT_REPEAT(384),
  [959] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_memory_spec_list_repeat1, 2), SHIFT_REPEAT(380),
  [962] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_memory_spec_list_repeat1, 2), SHIFT_REPEAT(458),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_memory_spec_list_repeat1, 2),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_low_level_library_NAME_list, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align, 4),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_list, 1),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_list, 5),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_list, 4),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_spec_list, 2),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_low_level_library_NAME_list, 2),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_input_list_repeat1, 5),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_list_repeat1, 5),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_high_level_library_NAME_list, 2),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1027] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributes_list_repeat1, 2), SHIFT_REPEAT(399),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_list_repeat1, 2),
  [1032] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_list_repeat1, 2), SHIFT_REPEAT(465),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1037] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_overlay_section_repeat1, 5),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_section_repeat1, 5),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes_list, 1),
  [1053] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_input_list_repeat1, 2),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1059] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vers_nodes_repeat1, 2), SHIFT_REPEAT(267),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vers_nodes_repeat1, 2),
  [1064] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vers_nodes_repeat1, 2), SHIFT_REPEAT(574),
  [1067] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_high_level_library_NAME_list_repeat1, 2), SHIFT_REPEAT(6),
  [1070] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_high_level_library_NAME_list_repeat1, 2), SHIFT_REPEAT(445),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_high_level_library_NAME_list_repeat1, 2),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_low_level_library_NAME_list_repeat2, 2),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_high_level_library_NAME_list, 1),
  [1079] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phdr_qualifiers_repeat1, 1),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phdr_qualifiers_repeat1, 1),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_defns, 1),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_nodes, 1),
  [1105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_input_list_repeat1, 4),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_list_repeat1, 4),
  [1109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_low_level_library_NAME_list_repeat1, 2), SHIFT_REPEAT(6),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_low_level_library_NAME_list_repeat1, 2),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_memory_spec_list_repeat1, 2),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_defns, 5),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdr_qualifiers, 1),
  [1132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_spec, 6),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_spec, 6),
  [1136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_length_spec, 3),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_length_spec, 3),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_defns, 2),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_defns, 6),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_without_type, 2),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_spec, 4),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_spec, 4),
  [1154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_extern_name_list_repeat1, 2), SHIFT_REPEAT(353),
  [1157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extern_name_list_repeat1, 2), SHIFT_REPEAT(565),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extern_name_list_repeat1, 2),
  [1162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phdr_qualifiers_repeat1, 2), SHIFT_REPEAT(325),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phdr_qualifiers_repeat1, 2),
  [1167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phdr_qualifiers_repeat1, 2), SHIFT_REPEAT(471),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subalign, 4),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vers_defns_repeat1, 2),
  [1176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phdr_list_repeat1, 2), SHIFT_REPEAT(59),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phdr_list_repeat1, 2),
  [1181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vers_defns_repeat1, 2), SHIFT_REPEAT(330),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_defns, 7),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nocrossref_list, 1),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_name_list, 1),
  [1210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_spec, 2),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_spec, 2),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nocrossref_list, 2),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin_spec, 3),
  [1222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_origin_spec, 3),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_spec, 5),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_spec, 5),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_name_list, 2),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdr_list, 1),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_exp_without_type, 1),
  [1234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_high_level_library_NAME_list_repeat1, 2),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_overlay_section_repeat1, 2), SHIFT_REPEAT(533),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_section_repeat1, 2),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_low_level_library_NAME_list, 3),
  [1249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_low_level_library_NAME_list_repeat2, 2), SHIFT_REPEAT(401),
  [1252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_node, 6),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_node, 5),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verdep_repeat1, 2),
  [1264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verdep_repeat1, 2), SHIFT_REPEAT(396),
  [1267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_overlay_section_repeat1, 7),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_section_repeat1, 7),
  [1273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phdr_val, 3),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdr_val, 3),
  [1277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes_string, 1),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes_string, 1),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phdr_qualifiers_repeat1, 4),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phdr_qualifiers_repeat1, 4),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vers_defns_repeat1, 7),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_node, 3),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overlay_section, 1),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verdep, 1),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_overlay_section_repeat1, 6),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_section_repeat1, 6),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_name_list_repeat1, 2),
  [1307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_name_list_repeat1, 2), SHIFT_REPEAT(412),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sect_flag_list, 2),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_node, 4),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vers_defns_repeat1, 6),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extern_name_list_repeat1, 2),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes_string, 2),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes_string, 2),
  [1328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sect_flag_list_repeat1, 2),
  [1334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sect_flag_list_repeat1, 2), SHIFT_REPEAT(478),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_name_list, 1),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sect_flag_list, 1),
  [1343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phdr_qualifiers_repeat1, 2),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phdr, 4),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdr, 4),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nocrossref_list, 3),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_overlay_section_repeat1, 8),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_section_repeat1, 8),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_tag, 4),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phdr, 3),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phdr, 3),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [1393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atype, 2),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_spec, 4),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sect_constraint, 1),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_tag, 2),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [1467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atype, 3),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vers_tag, 8),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_spec, 7),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [1639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [1641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [1643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [1657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [1659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1663] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_spec, 1),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_length, 1),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
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
