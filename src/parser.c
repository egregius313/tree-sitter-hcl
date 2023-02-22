#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 695
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 122
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 50

enum {
  anon_sym_EQ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_identifier = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  aux_sym_numeric_lit_token1 = 7,
  aux_sym_numeric_lit_token2 = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  sym_null_lit = 11,
  anon_sym_COMMA = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_COLON = 15,
  anon_sym_DOT = 16,
  aux_sym__legacy_index_token1 = 17,
  anon_sym_DOT_STAR = 18,
  anon_sym_LBRACK_STAR_RBRACK = 19,
  anon_sym_EQ_GT = 20,
  anon_sym_for = 21,
  anon_sym_in = 22,
  anon_sym_if = 23,
  sym_ellipsis = 24,
  anon_sym_QMARK = 25,
  anon_sym_DASH = 26,
  anon_sym_BANG = 27,
  anon_sym_STAR = 28,
  anon_sym_SLASH = 29,
  anon_sym_PERCENT = 30,
  anon_sym_PLUS = 31,
  anon_sym_GT = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_LT = 34,
  anon_sym_LT_EQ = 35,
  anon_sym_EQ_EQ = 36,
  anon_sym_BANG_EQ = 37,
  anon_sym_AMP_AMP = 38,
  anon_sym_PIPE_PIPE = 39,
  anon_sym_LT_LT = 40,
  anon_sym_LT_LT_DASH = 41,
  sym__strip_marker = 42,
  anon_sym_endfor = 43,
  anon_sym_else = 44,
  anon_sym_endif = 45,
  sym_comment = 46,
  sym__whitespace = 47,
  sym__quoted_template_start = 48,
  sym__quoted_template_end = 49,
  sym__template_literal_chunk = 50,
  sym__template_interpolation_start = 51,
  sym__template_interpolation_end = 52,
  sym__template_directive_start = 53,
  sym__template_directive_end = 54,
  sym__heredoc_identifier = 55,
  sym_config_file = 56,
  sym_body = 57,
  sym_attribute = 58,
  sym_block = 59,
  sym__block_start = 60,
  sym__block_end = 61,
  sym__expression = 62,
  sym__expr_term = 63,
  sym_literal_value = 64,
  sym_numeric_lit = 65,
  sym_bool_lit = 66,
  sym_string_lit = 67,
  sym_collection_value = 68,
  sym__comma = 69,
  sym_tuple = 70,
  sym__tuple_start = 71,
  sym__tuple_end = 72,
  sym__tuple_elems = 73,
  sym_object = 74,
  sym__object_start = 75,
  sym__object_end = 76,
  sym__object_elems = 77,
  sym_object_elem = 78,
  sym_index = 79,
  sym__new_index = 80,
  sym__legacy_index = 81,
  sym_get_attr = 82,
  sym_splat = 83,
  sym_attr_splat = 84,
  sym_full_splat = 85,
  sym_for_expr = 86,
  sym_for_tuple_expr = 87,
  sym_for_object_expr = 88,
  sym__for_intro = 89,
  sym__for_cond = 90,
  sym_variable_expr = 91,
  sym_function_call = 92,
  sym__function_call_start = 93,
  sym__function_call_end = 94,
  sym__function_arguments = 95,
  sym_conditional = 96,
  sym_operation = 97,
  sym_unary_operation = 98,
  sym_binary_operation = 99,
  sym_template_expr = 100,
  sym_quoted_template = 101,
  sym_heredoc_template = 102,
  sym__heredoc_start = 103,
  aux_sym__template = 104,
  sym_template_literal = 105,
  sym_template_interpolation = 106,
  sym_template_directive = 107,
  sym_template_for = 108,
  sym__template_for_start = 109,
  sym__template_for_end = 110,
  sym_template_if = 111,
  sym__template_if_intro = 112,
  sym__template_else_intro = 113,
  sym__template_if_end = 114,
  aux_sym_body_repeat1 = 115,
  aux_sym_block_repeat1 = 116,
  aux_sym__tuple_elems_repeat1 = 117,
  aux_sym__object_elems_repeat1 = 118,
  aux_sym_attr_splat_repeat1 = 119,
  aux_sym__function_arguments_repeat1 = 120,
  aux_sym_template_literal_repeat1 = 121,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_numeric_lit_token1] = "numeric_lit_token1",
  [aux_sym_numeric_lit_token2] = "numeric_lit_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null_lit] = "null_lit",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [aux_sym__legacy_index_token1] = "_legacy_index_token1",
  [anon_sym_DOT_STAR] = ".*",
  [anon_sym_LBRACK_STAR_RBRACK] = "[*]",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [sym_ellipsis] = "ellipsis",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_LT_LT_DASH] = "<<-",
  [sym__strip_marker] = "_strip_marker",
  [anon_sym_endfor] = "endfor",
  [anon_sym_else] = "else",
  [anon_sym_endif] = "endif",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym__quoted_template_start] = "_quoted_template_start",
  [sym__quoted_template_end] = "_quoted_template_end",
  [sym__template_literal_chunk] = "_template_literal_chunk",
  [sym__template_interpolation_start] = "_template_interpolation_start",
  [sym__template_interpolation_end] = "_template_interpolation_end",
  [sym__template_directive_start] = "_template_directive_start",
  [sym__template_directive_end] = "_template_directive_end",
  [sym__heredoc_identifier] = "_heredoc_identifier",
  [sym_config_file] = "config_file",
  [sym_body] = "body",
  [sym_attribute] = "attribute",
  [sym_block] = "block",
  [sym__block_start] = "_block_start",
  [sym__block_end] = "_block_end",
  [sym__expression] = "_expression",
  [sym__expr_term] = "_expr_term",
  [sym_literal_value] = "literal_value",
  [sym_numeric_lit] = "numeric_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_string_lit] = "string_lit",
  [sym_collection_value] = "collection_value",
  [sym__comma] = "_comma",
  [sym_tuple] = "tuple",
  [sym__tuple_start] = "_tuple_start",
  [sym__tuple_end] = "_tuple_end",
  [sym__tuple_elems] = "_tuple_elems",
  [sym_object] = "object",
  [sym__object_start] = "_object_start",
  [sym__object_end] = "_object_end",
  [sym__object_elems] = "_object_elems",
  [sym_object_elem] = "object_elem",
  [sym_index] = "index",
  [sym__new_index] = "_new_index",
  [sym__legacy_index] = "_legacy_index",
  [sym_get_attr] = "get_attr",
  [sym_splat] = "splat",
  [sym_attr_splat] = "attr_splat",
  [sym_full_splat] = "full_splat",
  [sym_for_expr] = "for_expr",
  [sym_for_tuple_expr] = "for_tuple_expr",
  [sym_for_object_expr] = "for_object_expr",
  [sym__for_intro] = "_for_intro",
  [sym__for_cond] = "_for_cond",
  [sym_variable_expr] = "variable_expr",
  [sym_function_call] = "function_call",
  [sym__function_call_start] = "_function_call_start",
  [sym__function_call_end] = "_function_call_end",
  [sym__function_arguments] = "_function_arguments",
  [sym_conditional] = "conditional",
  [sym_operation] = "operation",
  [sym_unary_operation] = "unary_operation",
  [sym_binary_operation] = "binary_operation",
  [sym_template_expr] = "template_expr",
  [sym_quoted_template] = "quoted_template",
  [sym_heredoc_template] = "heredoc_template",
  [sym__heredoc_start] = "_heredoc_start",
  [aux_sym__template] = "_template",
  [sym_template_literal] = "template_literal",
  [sym_template_interpolation] = "template_interpolation",
  [sym_template_directive] = "template_directive",
  [sym_template_for] = "template_for",
  [sym__template_for_start] = "_template_for_start",
  [sym__template_for_end] = "_template_for_end",
  [sym_template_if] = "template_if",
  [sym__template_if_intro] = "_template_if_intro",
  [sym__template_else_intro] = "_template_else_intro",
  [sym__template_if_end] = "_template_if_end",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__tuple_elems_repeat1] = "_tuple_elems_repeat1",
  [aux_sym__object_elems_repeat1] = "_object_elems_repeat1",
  [aux_sym_attr_splat_repeat1] = "attr_splat_repeat1",
  [aux_sym__function_arguments_repeat1] = "_function_arguments_repeat1",
  [aux_sym_template_literal_repeat1] = "template_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_numeric_lit_token1] = aux_sym_numeric_lit_token1,
  [aux_sym_numeric_lit_token2] = aux_sym_numeric_lit_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null_lit] = sym_null_lit,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym__legacy_index_token1] = aux_sym__legacy_index_token1,
  [anon_sym_DOT_STAR] = anon_sym_DOT_STAR,
  [anon_sym_LBRACK_STAR_RBRACK] = anon_sym_LBRACK_STAR_RBRACK,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [sym_ellipsis] = sym_ellipsis,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_LT_LT_DASH] = anon_sym_LT_LT_DASH,
  [sym__strip_marker] = sym__strip_marker,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym__quoted_template_start] = sym__quoted_template_start,
  [sym__quoted_template_end] = sym__quoted_template_end,
  [sym__template_literal_chunk] = sym__template_literal_chunk,
  [sym__template_interpolation_start] = sym__template_interpolation_start,
  [sym__template_interpolation_end] = sym__template_interpolation_end,
  [sym__template_directive_start] = sym__template_directive_start,
  [sym__template_directive_end] = sym__template_directive_end,
  [sym__heredoc_identifier] = sym__heredoc_identifier,
  [sym_config_file] = sym_config_file,
  [sym_body] = sym_body,
  [sym_attribute] = sym_attribute,
  [sym_block] = sym_block,
  [sym__block_start] = sym__block_start,
  [sym__block_end] = sym__block_end,
  [sym__expression] = sym__expression,
  [sym__expr_term] = sym__expr_term,
  [sym_literal_value] = sym_literal_value,
  [sym_numeric_lit] = sym_numeric_lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_string_lit] = sym_string_lit,
  [sym_collection_value] = sym_collection_value,
  [sym__comma] = sym__comma,
  [sym_tuple] = sym_tuple,
  [sym__tuple_start] = sym__tuple_start,
  [sym__tuple_end] = sym__tuple_end,
  [sym__tuple_elems] = sym__tuple_elems,
  [sym_object] = sym_object,
  [sym__object_start] = sym__object_start,
  [sym__object_end] = sym__object_end,
  [sym__object_elems] = sym__object_elems,
  [sym_object_elem] = sym_object_elem,
  [sym_index] = sym_index,
  [sym__new_index] = sym__new_index,
  [sym__legacy_index] = sym__legacy_index,
  [sym_get_attr] = sym_get_attr,
  [sym_splat] = sym_splat,
  [sym_attr_splat] = sym_attr_splat,
  [sym_full_splat] = sym_full_splat,
  [sym_for_expr] = sym_for_expr,
  [sym_for_tuple_expr] = sym_for_tuple_expr,
  [sym_for_object_expr] = sym_for_object_expr,
  [sym__for_intro] = sym__for_intro,
  [sym__for_cond] = sym__for_cond,
  [sym_variable_expr] = sym_variable_expr,
  [sym_function_call] = sym_function_call,
  [sym__function_call_start] = sym__function_call_start,
  [sym__function_call_end] = sym__function_call_end,
  [sym__function_arguments] = sym__function_arguments,
  [sym_conditional] = sym_conditional,
  [sym_operation] = sym_operation,
  [sym_unary_operation] = sym_unary_operation,
  [sym_binary_operation] = sym_binary_operation,
  [sym_template_expr] = sym_template_expr,
  [sym_quoted_template] = sym_quoted_template,
  [sym_heredoc_template] = sym_heredoc_template,
  [sym__heredoc_start] = sym__heredoc_start,
  [aux_sym__template] = aux_sym__template,
  [sym_template_literal] = sym_template_literal,
  [sym_template_interpolation] = sym_template_interpolation,
  [sym_template_directive] = sym_template_directive,
  [sym_template_for] = sym_template_for,
  [sym__template_for_start] = sym__template_for_start,
  [sym__template_for_end] = sym__template_for_end,
  [sym_template_if] = sym_template_if,
  [sym__template_if_intro] = sym__template_if_intro,
  [sym__template_else_intro] = sym__template_else_intro,
  [sym__template_if_end] = sym__template_if_end,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__tuple_elems_repeat1] = aux_sym__tuple_elems_repeat1,
  [aux_sym__object_elems_repeat1] = aux_sym__object_elems_repeat1,
  [aux_sym_attr_splat_repeat1] = aux_sym_attr_splat_repeat1,
  [aux_sym__function_arguments_repeat1] = aux_sym__function_arguments_repeat1,
  [aux_sym_template_literal_repeat1] = aux_sym_template_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_numeric_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_lit_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__legacy_index_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_STAR_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [sym_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_LT_EQ] = {
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
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym__strip_marker] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_template_start] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_template_end] = {
    .visible = false,
    .named = true,
  },
  [sym__template_literal_chunk] = {
    .visible = false,
    .named = true,
  },
  [sym__template_interpolation_start] = {
    .visible = false,
    .named = true,
  },
  [sym__template_interpolation_end] = {
    .visible = false,
    .named = true,
  },
  [sym__template_directive_start] = {
    .visible = false,
    .named = true,
  },
  [sym__template_directive_end] = {
    .visible = false,
    .named = true,
  },
  [sym__heredoc_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_config_file] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__block_start] = {
    .visible = false,
    .named = true,
  },
  [sym__block_end] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expr_term] = {
    .visible = false,
    .named = true,
  },
  [sym_literal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_value] = {
    .visible = true,
    .named = true,
  },
  [sym__comma] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple_start] = {
    .visible = false,
    .named = true,
  },
  [sym__tuple_end] = {
    .visible = false,
    .named = true,
  },
  [sym__tuple_elems] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym__object_start] = {
    .visible = false,
    .named = true,
  },
  [sym__object_end] = {
    .visible = false,
    .named = true,
  },
  [sym__object_elems] = {
    .visible = false,
    .named = true,
  },
  [sym_object_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym__new_index] = {
    .visible = false,
    .named = true,
  },
  [sym__legacy_index] = {
    .visible = false,
    .named = true,
  },
  [sym_get_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_full_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_tuple_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_object_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__for_intro] = {
    .visible = false,
    .named = true,
  },
  [sym__for_cond] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__function_call_start] = {
    .visible = false,
    .named = true,
  },
  [sym__function_call_end] = {
    .visible = false,
    .named = true,
  },
  [sym__function_arguments] = {
    .visible = false,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_template_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_template] = {
    .visible = true,
    .named = true,
  },
  [sym__heredoc_start] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__template] = {
    .visible = false,
    .named = false,
  },
  [sym_template_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_template_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_template_for] = {
    .visible = true,
    .named = true,
  },
  [sym__template_for_start] = {
    .visible = false,
    .named = true,
  },
  [sym__template_for_end] = {
    .visible = false,
    .named = true,
  },
  [sym_template_if] = {
    .visible = true,
    .named = true,
  },
  [sym__template_if_intro] = {
    .visible = false,
    .named = true,
  },
  [sym__template_else_intro] = {
    .visible = false,
    .named = true,
  },
  [sym__template_if_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tuple_elems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__object_elems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_splat_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__function_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alternative = 1,
  field_argument = 2,
  field_body = 3,
  field_condition = 4,
  field_decimal = 5,
  field_element = 6,
  field_expr = 7,
  field_function = 8,
  field_hexadecimal = 9,
  field_index = 10,
  field_iter = 11,
  field_key = 12,
  field_label = 13,
  field_left = 14,
  field_name = 15,
  field_operand = 16,
  field_operator = 17,
  field_right = 18,
  field_start = 19,
  field_target = 20,
  field_type = 21,
  field_val = 22,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_decimal] = "decimal",
  [field_element] = "element",
  [field_expr] = "expr",
  [field_function] = "function",
  [field_hexadecimal] = "hexadecimal",
  [field_index] = "index",
  [field_iter] = "iter",
  [field_key] = "key",
  [field_label] = "label",
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_start] = "start",
  [field_target] = "target",
  [field_type] = "type",
  [field_val] = "val",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 2},
  [16] = {.index = 22, .length = 1},
  [17] = {.index = 23, .length = 1},
  [18] = {.index = 24, .length = 1},
  [19] = {.index = 25, .length = 1},
  [20] = {.index = 26, .length = 3},
  [21] = {.index = 29, .length = 1},
  [22] = {.index = 30, .length = 2},
  [23] = {.index = 32, .length = 3},
  [24] = {.index = 35, .length = 1},
  [25] = {.index = 36, .length = 3},
  [26] = {.index = 39, .length = 2},
  [27] = {.index = 41, .length = 2},
  [28] = {.index = 43, .length = 2},
  [29] = {.index = 45, .length = 3},
  [30] = {.index = 48, .length = 1},
  [31] = {.index = 49, .length = 1},
  [32] = {.index = 50, .length = 1},
  [33] = {.index = 51, .length = 2},
  [34] = {.index = 53, .length = 1},
  [35] = {.index = 54, .length = 2},
  [36] = {.index = 56, .length = 3},
  [37] = {.index = 59, .length = 1},
  [38] = {.index = 60, .length = 4},
  [39] = {.index = 64, .length = 1},
  [40] = {.index = 65, .length = 3},
  [41] = {.index = 68, .length = 2},
  [42] = {.index = 70, .length = 4},
  [43] = {.index = 74, .length = 2},
  [44] = {.index = 76, .length = 5},
  [45] = {.index = 81, .length = 2},
  [46] = {.index = 83, .length = 3},
  [47] = {.index = 86, .length = 5},
  [48] = {.index = 91, .length = 3},
  [49] = {.index = 94, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 0},
  [1] =
    {field_name, 0},
  [2] =
    {field_decimal, 0},
  [3] =
    {field_hexadecimal, 0},
  [4] =
    {field_element, 0},
  [5] =
    {field_key, 0},
    {field_val, 2},
  [7] =
    {field_type, 0},
  [8] =
    {field_label, 0, .inherited = true},
    {field_label, 1, .inherited = true},
  [10] =
    {field_operand, 1},
    {field_operator, 0},
  [12] =
    {field_index, 0, .inherited = true},
  [13] =
    {field_element, 1, .inherited = true},
  [14] =
    {field_element, 0},
    {field_element, 1, .inherited = true},
  [16] =
    {field_body, 2},
    {field_type, 0},
  [18] =
    {field_label, 1, .inherited = true},
    {field_type, 0},
  [20] =
    {field_iter, 0, .inherited = true},
    {field_target, 0, .inherited = true},
  [22] =
    {field_condition, 0, .inherited = true},
  [23] =
    {field_argument, 0},
  [24] =
    {field_function, 0},
  [25] =
    {field_index, 1},
  [26] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [29] =
    {field_element, 1},
  [30] =
    {field_element, 0, .inherited = true},
    {field_element, 1, .inherited = true},
  [32] =
    {field_body, 3},
    {field_label, 1, .inherited = true},
    {field_type, 0},
  [35] =
    {field_expr, 1},
  [36] =
    {field_body, 1},
    {field_iter, 0, .inherited = true},
    {field_target, 0, .inherited = true},
  [39] =
    {field_body, 1},
    {field_condition, 0, .inherited = true},
  [41] =
    {field_argument, 0},
    {field_argument, 1, .inherited = true},
  [43] =
    {field_argument, 2, .inherited = true},
    {field_function, 0},
  [45] =
    {field_expr, 2},
    {field_iter, 1, .inherited = true},
    {field_target, 1, .inherited = true},
  [48] =
    {field_start, 0},
  [49] =
    {field_expr, 2},
  [50] =
    {field_condition, 2},
  [51] =
    {field_alternative, 2},
    {field_condition, 0, .inherited = true},
  [53] =
    {field_argument, 1},
  [54] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [56] =
    {field_alternative, 4},
    {field_body, 2},
    {field_condition, 0},
  [59] =
    {field_condition, 1},
  [60] =
    {field_condition, 3, .inherited = true},
    {field_expr, 2},
    {field_iter, 1, .inherited = true},
    {field_target, 1, .inherited = true},
  [64] =
    {field_condition, 3},
  [65] =
    {field_alternative, 3},
    {field_body, 1},
    {field_condition, 0, .inherited = true},
  [68] =
    {field_iter, 3},
    {field_target, 1},
  [70] =
    {field_iter, 1, .inherited = true},
    {field_key, 2},
    {field_target, 1, .inherited = true},
    {field_val, 4},
  [74] =
    {field_iter, 4},
    {field_target, 2},
  [76] =
    {field_condition, 5, .inherited = true},
    {field_iter, 1, .inherited = true},
    {field_key, 2},
    {field_target, 1, .inherited = true},
    {field_val, 4},
  [81] =
    {field_iter, 5},
    {field_target, 3},
  [83] =
    {field_iter, 5},
    {field_target, 1},
    {field_target, 3},
  [86] =
    {field_condition, 6, .inherited = true},
    {field_iter, 1, .inherited = true},
    {field_key, 2},
    {field_target, 1, .inherited = true},
    {field_val, 4},
  [91] =
    {field_iter, 6},
    {field_target, 2},
    {field_target, 4},
  [94] =
    {field_iter, 7},
    {field_target, 3},
    {field_target, 5},
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
  [3] = 2,
  [4] = 2,
  [5] = 2,
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 8,
  [12] = 8,
  [13] = 13,
  [14] = 8,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 16,
  [19] = 16,
  [20] = 16,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 24,
  [25] = 25,
  [26] = 21,
  [27] = 24,
  [28] = 24,
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
  [45] = 43,
  [46] = 46,
  [47] = 43,
  [48] = 46,
  [49] = 43,
  [50] = 46,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 54,
  [55] = 52,
  [56] = 56,
  [57] = 57,
  [58] = 42,
  [59] = 56,
  [60] = 42,
  [61] = 52,
  [62] = 56,
  [63] = 63,
  [64] = 64,
  [65] = 57,
  [66] = 66,
  [67] = 51,
  [68] = 42,
  [69] = 52,
  [70] = 43,
  [71] = 57,
  [72] = 46,
  [73] = 51,
  [74] = 74,
  [75] = 56,
  [76] = 46,
  [77] = 52,
  [78] = 78,
  [79] = 79,
  [80] = 56,
  [81] = 42,
  [82] = 57,
  [83] = 83,
  [84] = 57,
  [85] = 85,
  [86] = 86,
  [87] = 51,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 96,
  [98] = 98,
  [99] = 95,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 103,
  [105] = 102,
  [106] = 101,
  [107] = 100,
  [108] = 95,
  [109] = 98,
  [110] = 96,
  [111] = 98,
  [112] = 103,
  [113] = 102,
  [114] = 101,
  [115] = 100,
  [116] = 95,
  [117] = 98,
  [118] = 100,
  [119] = 96,
  [120] = 101,
  [121] = 96,
  [122] = 102,
  [123] = 103,
  [124] = 102,
  [125] = 101,
  [126] = 100,
  [127] = 95,
  [128] = 98,
  [129] = 103,
  [130] = 34,
  [131] = 33,
  [132] = 36,
  [133] = 37,
  [134] = 38,
  [135] = 39,
  [136] = 40,
  [137] = 29,
  [138] = 90,
  [139] = 91,
  [140] = 92,
  [141] = 93,
  [142] = 94,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
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
  [176] = 143,
  [177] = 36,
  [178] = 39,
  [179] = 40,
  [180] = 33,
  [181] = 37,
  [182] = 34,
  [183] = 29,
  [184] = 38,
  [185] = 163,
  [186] = 166,
  [187] = 160,
  [188] = 162,
  [189] = 148,
  [190] = 164,
  [191] = 165,
  [192] = 175,
  [193] = 167,
  [194] = 169,
  [195] = 157,
  [196] = 173,
  [197] = 145,
  [198] = 174,
  [199] = 161,
  [200] = 150,
  [201] = 155,
  [202] = 153,
  [203] = 152,
  [204] = 151,
  [205] = 146,
  [206] = 154,
  [207] = 156,
  [208] = 168,
  [209] = 147,
  [210] = 144,
  [211] = 159,
  [212] = 170,
  [213] = 172,
  [214] = 149,
  [215] = 171,
  [216] = 158,
  [217] = 39,
  [218] = 37,
  [219] = 33,
  [220] = 39,
  [221] = 33,
  [222] = 34,
  [223] = 91,
  [224] = 93,
  [225] = 36,
  [226] = 37,
  [227] = 38,
  [228] = 94,
  [229] = 40,
  [230] = 38,
  [231] = 29,
  [232] = 90,
  [233] = 34,
  [234] = 40,
  [235] = 36,
  [236] = 92,
  [237] = 29,
  [238] = 90,
  [239] = 94,
  [240] = 93,
  [241] = 92,
  [242] = 93,
  [243] = 91,
  [244] = 90,
  [245] = 92,
  [246] = 94,
  [247] = 91,
  [248] = 143,
  [249] = 160,
  [250] = 148,
  [251] = 143,
  [252] = 169,
  [253] = 167,
  [254] = 164,
  [255] = 163,
  [256] = 162,
  [257] = 150,
  [258] = 156,
  [259] = 154,
  [260] = 158,
  [261] = 145,
  [262] = 165,
  [263] = 166,
  [264] = 168,
  [265] = 171,
  [266] = 172,
  [267] = 174,
  [268] = 175,
  [269] = 157,
  [270] = 155,
  [271] = 153,
  [272] = 152,
  [273] = 159,
  [274] = 173,
  [275] = 143,
  [276] = 170,
  [277] = 161,
  [278] = 147,
  [279] = 151,
  [280] = 146,
  [281] = 144,
  [282] = 149,
  [283] = 175,
  [284] = 155,
  [285] = 167,
  [286] = 169,
  [287] = 170,
  [288] = 161,
  [289] = 173,
  [290] = 150,
  [291] = 159,
  [292] = 175,
  [293] = 174,
  [294] = 154,
  [295] = 156,
  [296] = 158,
  [297] = 145,
  [298] = 165,
  [299] = 166,
  [300] = 168,
  [301] = 171,
  [302] = 172,
  [303] = 172,
  [304] = 174,
  [305] = 159,
  [306] = 173,
  [307] = 170,
  [308] = 171,
  [309] = 169,
  [310] = 168,
  [311] = 161,
  [312] = 166,
  [313] = 167,
  [314] = 165,
  [315] = 164,
  [316] = 163,
  [317] = 162,
  [318] = 160,
  [319] = 157,
  [320] = 164,
  [321] = 153,
  [322] = 152,
  [323] = 145,
  [324] = 151,
  [325] = 147,
  [326] = 144,
  [327] = 148,
  [328] = 149,
  [329] = 146,
  [330] = 158,
  [331] = 149,
  [332] = 148,
  [333] = 147,
  [334] = 156,
  [335] = 146,
  [336] = 154,
  [337] = 150,
  [338] = 163,
  [339] = 162,
  [340] = 160,
  [341] = 144,
  [342] = 151,
  [343] = 152,
  [344] = 153,
  [345] = 155,
  [346] = 157,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 351,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 355,
  [357] = 351,
  [358] = 355,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 359,
  [365] = 365,
  [366] = 363,
  [367] = 365,
  [368] = 368,
  [369] = 360,
  [370] = 370,
  [371] = 360,
  [372] = 370,
  [373] = 373,
  [374] = 368,
  [375] = 375,
  [376] = 361,
  [377] = 375,
  [378] = 361,
  [379] = 359,
  [380] = 362,
  [381] = 363,
  [382] = 373,
  [383] = 362,
  [384] = 368,
  [385] = 365,
  [386] = 365,
  [387] = 368,
  [388] = 373,
  [389] = 370,
  [390] = 373,
  [391] = 368,
  [392] = 373,
  [393] = 365,
  [394] = 394,
  [395] = 375,
  [396] = 394,
  [397] = 394,
  [398] = 394,
  [399] = 394,
  [400] = 347,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 404,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 404,
  [411] = 404,
  [412] = 404,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 417,
  [419] = 419,
  [420] = 413,
  [421] = 417,
  [422] = 347,
  [423] = 423,
  [424] = 413,
  [425] = 413,
  [426] = 413,
  [427] = 419,
  [428] = 415,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 434,
  [436] = 436,
  [437] = 432,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 440,
  [443] = 443,
  [444] = 444,
  [445] = 433,
  [446] = 446,
  [447] = 439,
  [448] = 448,
  [449] = 430,
  [450] = 433,
  [451] = 451,
  [452] = 452,
  [453] = 438,
  [454] = 446,
  [455] = 455,
  [456] = 456,
  [457] = 434,
  [458] = 434,
  [459] = 444,
  [460] = 460,
  [461] = 460,
  [462] = 462,
  [463] = 463,
  [464] = 455,
  [465] = 465,
  [466] = 431,
  [467] = 467,
  [468] = 463,
  [469] = 436,
  [470] = 470,
  [471] = 432,
  [472] = 434,
  [473] = 473,
  [474] = 415,
  [475] = 475,
  [476] = 456,
  [477] = 443,
  [478] = 432,
  [479] = 432,
  [480] = 448,
  [481] = 467,
  [482] = 452,
  [483] = 483,
  [484] = 462,
  [485] = 485,
  [486] = 443,
  [487] = 470,
  [488] = 448,
  [489] = 473,
  [490] = 451,
  [491] = 485,
  [492] = 419,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 441,
  [497] = 494,
  [498] = 498,
  [499] = 493,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 455,
  [504] = 504,
  [505] = 505,
  [506] = 347,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 161,
  [514] = 502,
  [515] = 515,
  [516] = 516,
  [517] = 451,
  [518] = 518,
  [519] = 473,
  [520] = 502,
  [521] = 485,
  [522] = 522,
  [523] = 523,
  [524] = 415,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 460,
  [530] = 444,
  [531] = 531,
  [532] = 532,
  [533] = 430,
  [534] = 446,
  [535] = 438,
  [536] = 536,
  [537] = 441,
  [538] = 440,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 439,
  [543] = 436,
  [544] = 544,
  [545] = 545,
  [546] = 456,
  [547] = 462,
  [548] = 493,
  [549] = 500,
  [550] = 347,
  [551] = 494,
  [552] = 552,
  [553] = 470,
  [554] = 452,
  [555] = 539,
  [556] = 467,
  [557] = 431,
  [558] = 540,
  [559] = 463,
  [560] = 540,
  [561] = 561,
  [562] = 562,
  [563] = 419,
  [564] = 539,
  [565] = 565,
  [566] = 500,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 572,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 574,
  [580] = 580,
  [581] = 581,
  [582] = 572,
  [583] = 581,
  [584] = 580,
  [585] = 585,
  [586] = 586,
  [587] = 571,
  [588] = 572,
  [589] = 589,
  [590] = 590,
  [591] = 589,
  [592] = 592,
  [593] = 574,
  [594] = 594,
  [595] = 595,
  [596] = 590,
  [597] = 586,
  [598] = 585,
  [599] = 599,
  [600] = 574,
  [601] = 595,
  [602] = 602,
  [603] = 590,
  [604] = 589,
  [605] = 576,
  [606] = 575,
  [607] = 576,
  [608] = 575,
  [609] = 595,
  [610] = 571,
  [611] = 589,
  [612] = 571,
  [613] = 590,
  [614] = 580,
  [615] = 581,
  [616] = 594,
  [617] = 590,
  [618] = 572,
  [619] = 574,
  [620] = 585,
  [621] = 586,
  [622] = 622,
  [623] = 602,
  [624] = 592,
  [625] = 625,
  [626] = 626,
  [627] = 592,
  [628] = 581,
  [629] = 594,
  [630] = 580,
  [631] = 631,
  [632] = 576,
  [633] = 575,
  [634] = 595,
  [635] = 635,
  [636] = 571,
  [637] = 602,
  [638] = 638,
  [639] = 595,
  [640] = 575,
  [641] = 576,
  [642] = 602,
  [643] = 580,
  [644] = 581,
  [645] = 602,
  [646] = 589,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 649,
  [658] = 656,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 655,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 648,
  [669] = 651,
  [670] = 670,
  [671] = 671,
  [672] = 652,
  [673] = 655,
  [674] = 656,
  [675] = 649,
  [676] = 676,
  [677] = 648,
  [678] = 678,
  [679] = 659,
  [680] = 660,
  [681] = 652,
  [682] = 682,
  [683] = 659,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 651,
  [688] = 688,
  [689] = 660,
  [690] = 690,
  [691] = 651,
  [692] = 692,
  [693] = 651,
  [694] = 694,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43360
    ? (c < 4096
      ? (c < 2654
        ? (c < 1808
          ? (c < 902
            ? (c < 216
              ? (c < 'u'
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c < 'o'
                    ? (c >= 'g' && c <= 'm')
                    : c <= 's')))
                : (c <= 'z' || (c < 186
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 186 || (c >= 192 && c <= 214)))))
              : (c <= 246 || (c < 750
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 890
                  ? (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)
                  : (c <= 893 || c == 895))))))
            : (c <= 902 || (c < 1488
              ? (c < 1015
                ? (c < 910
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))))
              : (c <= 1514 || (c < 1749
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1808 || (c < 2437
            ? (c < 2112
              ? (c < 2042
                ? (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)))
                : (c <= 2042 || (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2308
                ? (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))))))
            : (c <= 2444 || (c < 2544
              ? (c < 2486
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))))
              : (c <= 2545 || (c < 2602
                ? (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3200
          ? (c < 2929
            ? (c < 2809
              ? (c < 2738
                ? (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)))
                : (c <= 2739 || (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2809 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))))))
            : (c <= 2929 || (c < 2990
              ? (c < 2969
                ? (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3114
                ? (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))))))
          : (c <= 3200 || (c < 3517
            ? (c < 3342
              ? (c < 3261
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3261 || (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3423
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3751
              ? (c < 3713
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3760 || (c < 3804
                ? (c < 3776
                  ? (c < 3773
                    ? (c >= 3762 && c <= 3763)
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))))))))))))
      : (c <= 4138 || (c < 8064
        ? (c < 5998
          ? (c < 4786
            ? (c < 4301
              ? (c < 4206
                ? (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || (c < 4197
                    ? c == 4193
                    : c <= 4198)))
                : (c <= 4208 || (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4696
                ? (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))))
            : (c <= 4789 || (c < 5112
              ? (c < 4824
                ? (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))))
              : (c <= 5117 || (c < 5870
                ? (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))))))))
          : (c <= 6000 || (c < 7168
            ? (c < 6528
              ? (c < 6314
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)))
                : (c <= 6314 || (c < 6480
                  ? (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))))
              : (c <= 6571 || (c < 6917
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7086
                  ? (c < 7043
                    ? (c >= 6981 && c <= 6988)
                    : c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))))))
            : (c <= 7203 || (c < 7424
              ? (c < 7357
                ? (c < 7296
                  ? (c < 7258
                    ? (c >= 7245 && c <= 7247)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7413
                  ? (c < 7406
                    ? (c >= 7401 && c <= 7404)
                    : c <= 7411)
                  : (c <= 7414 || c == 7418))))
              : (c <= 7615 || (c < 8016
                ? (c < 7968
                  ? (c < 7960
                    ? (c >= 7680 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))
                : (c <= 8023 || (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))))))))))
        : (c <= 8116 || (c < 11728
          ? (c < 8490
            ? (c < 8319
              ? (c < 8150
                ? (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)))
                : (c <= 8155 || (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || c == 8305))))
              : (c <= 8319 || (c < 8469
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))))))
            : (c <= 8505 || (c < 11565
              ? (c < 11264
                ? (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))
                : (c <= 11492 || (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11688
                ? (c < 11648
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))))))
          : (c <= 11734 || (c < 42560
            ? (c < 12549
              ? (c < 12344
                ? (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12449
                  ? (c < 12443
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))))
              : (c <= 12591 || (c < 19968
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))))))
            : (c <= 42606 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))))
              : (c <= 43013 || (c < 43250
                ? (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))
                : (c <= 43255 || (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))))))))))))
    : (c <= 43388 || (c < 70751
      ? (c < 66967
        ? (c < 64323
          ? (c < 43785
            ? (c < 43646
              ? (c < 43520
                ? (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c < 43514
                    ? (c >= 43494 && c <= 43503)
                    : c <= 43518)))
                : (c <= 43560 || (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || c == 43642))))
              : (c <= 43695 || (c < 43714
                ? (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))
                : (c <= 43714 || (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))))))
            : (c <= 43790 || (c < 63744
              ? (c < 43868
                ? (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))
              : (c <= 64109 || (c < 64287
                ? (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))
                : (c <= 64296 || (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))))))
          : (c <= 64324 || (c < 65664
            ? (c < 65474
              ? (c < 65136
                ? (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))
                : (c <= 65140 || (c < 65345
                  ? (c < 65313
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))))
              : (c <= 65479 || (c < 65549
                ? (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))
                : (c <= 65574 || (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))))))
            : (c <= 65786 || (c < 66513
              ? (c < 66349
                ? (c < 66208
                  ? (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66378 || (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))))
              : (c <= 66517 || (c < 66864
                ? (c < 66776
                  ? (c < 66736
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))
        : (c <= 66977 || (c < 69296
          ? (c < 67872
            ? (c < 67592
              ? (c < 67424
                ? (c < 67003
                  ? (c < 66995
                    ? (c >= 66979 && c <= 66993)
                    : c <= 67001)
                  : (c <= 67004 || (c < 67392
                    ? (c >= 67072 && c <= 67382)
                    : c <= 67413)))
                : (c <= 67431 || (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))))
              : (c <= 67592 || (c < 67680
                ? (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67828
                  ? (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)
                  : (c <= 67829 || (c >= 67840 && c <= 67861)))))))
            : (c <= 67897 || (c < 68297
              ? (c < 68117
                ? (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68096 || (c >= 68112 && c <= 68115)))
                : (c <= 68119 || (c < 68224
                  ? (c < 68192
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68220)
                  : (c <= 68252 || (c >= 68288 && c <= 68295)))))
              : (c <= 68324 || (c < 68608
                ? (c < 68448
                  ? (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)
                  : (c <= 68466 || (c >= 68480 && c <= 68497)))
                : (c <= 68680 || (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68899 || (c >= 69248 && c <= 69289)))))))))
          : (c <= 69297 || (c < 70108
            ? (c < 69763
              ? (c < 69552
                ? (c < 69424
                  ? (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)
                  : (c <= 69445 || (c >= 69488 && c <= 69505)))
                : (c <= 69572 || (c < 69745
                  ? (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69687)
                  : (c <= 69746 || c == 69749))))
              : (c <= 69807 || (c < 69968
                ? (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))
                : (c <= 70002 || (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))))))
            : (c <= 70108 || (c < 70415
              ? (c < 70282
                ? (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))
                : (c <= 70285 || (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))))
              : (c <= 70416 || (c < 70461
                ? (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))
                : (c <= 70461 || (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))))))))))))
      : (c <= 70753 || (c < 119966
        ? (c < 73063
          ? (c < 72096
            ? (c < 71488
              ? (c < 71168
                ? (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c < 71128
                    ? (c >= 71040 && c <= 71086)
                    : c <= 71131)))
                : (c <= 71215 || (c < 71352
                  ? (c < 71296
                    ? c == 71236
                    : c <= 71338)
                  : (c <= 71352 || (c >= 71424 && c <= 71450)))))
              : (c <= 71494 || (c < 71948
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))
                : (c <= 71955 || (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))))))
            : (c <= 72103 || (c < 72368
              ? (c < 72203
                ? (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))
                : (c <= 72242 || (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))))
              : (c <= 72440 || (c < 72960
                ? (c < 72768
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))
                : (c <= 72966 || (c < 73030
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73008)
                  : (c <= 73030 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73112
                    ? (c >= 73066 && c <= 73097)
                    : c <= 73112)
                  : (c <= 73458 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43396
    ? (c < 4176
      ? (c < 2703
        ? (c < 1969
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 890
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1646
              ? (c < 1369
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1519
                  ? (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1647 || (c < 1786
                ? (c < 1765
                  ? (c < 1749
                    ? (c >= 1649 && c <= 1747)
                    : c <= 1749)
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1810
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1808)
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))))))))
          : (c <= 1969 || (c < 2474
            ? (c < 2185
              ? (c < 2084
                ? (c < 2042
                  ? (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)))
                : (c <= 2084 || (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2392
                ? (c < 2365
                  ? (c < 2308
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2432)
                    : c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))
            : (c <= 2480 || (c < 2575
              ? (c < 2524
                ? (c < 2493
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))))
              : (c <= 2576 || (c < 2616
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3218
          ? (c < 2958
            ? (c < 2835
              ? (c < 2768
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)))
                : (c <= 2768 || (c < 2821
                  ? (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2908
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2947
                  ? (c < 2929
                    ? (c >= 2911 && c <= 2913)
                    : c <= 2929)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))))
            : (c <= 2960 || (c < 3086
              ? (c < 2979
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 3024
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))))
              : (c <= 3088 || (c < 3165
                ? (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))))))
          : (c <= 3240 || (c < 3585
            ? (c < 3389
              ? (c < 3296
                ? (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3342
                  ? (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))))
              : (c <= 3389 || (c < 3461
                ? (c < 3423
                  ? (c < 3412
                    ? c == 3406
                    : c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))))
            : (c <= 3632 || (c < 3773
              ? (c < 3718
                ? (c < 3713
                  ? (c < 3648
                    ? (c >= 3634 && c <= 3635)
                    : c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))))
              : (c <= 3773 || (c < 3904
                ? (c < 3804
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3807 || c == 3840))
                : (c <= 3911 || (c < 4096
                  ? (c < 3976
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3980)
                  : (c <= 4138 || c == 4159))))))))))))
      : (c <= 4181 || (c < 8118
        ? (c < 6103
          ? (c < 4800
            ? (c < 4348
              ? (c < 4238
                ? (c < 4197
                  ? (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : c <= 4193)
                  : (c <= 4198 || (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)))
                : (c <= 4238 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))))
              : (c <= 4680 || (c < 4704
                ? (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))))
            : (c <= 4800 || (c < 5743
              ? (c < 4888
                ? (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))))
              : (c <= 5759 || (c < 5919
                ? (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5969)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))))))))
          : (c <= 6103 || (c < 7245
            ? (c < 6576
              ? (c < 6320
                ? (c < 6272
                  ? (c < 6176
                    ? c == 6108
                    : c <= 6264)
                  : (c <= 6312 || c == 6314))
                : (c <= 6389 || (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6981
                ? (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7247 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))))))
        : (c <= 8124 || (c < 11736
          ? (c < 8508
            ? (c < 8336
              ? (c < 8160
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))
              : (c <= 8348 || (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))))
            : (c <= 8511 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))))))
          : (c <= 11742 || (c < 42623
            ? (c < 12593
              ? (c < 12353
                ? (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))
                : (c <= 12438 || (c < 12540
                  ? (c < 12449
                    ? (c >= 12443 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))
              : (c <= 12686 || (c < 42192
                ? (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))))
            : (c <= 42653 || (c < 43015
              ? (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))
              : (c <= 43018 || (c < 43259
                ? (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))))))))))))
    : (c <= 43442 || (c < 70784
      ? (c < 66979
        ? (c < 64326
          ? (c < 43793
            ? (c < 43697
              ? (c < 43584
                ? (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c < 43520
                    ? (c >= 43514 && c <= 43518)
                    : c <= 43560)))
                : (c <= 43586 || (c < 43642
                  ? (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))))
              : (c <= 43697 || (c < 43739
                ? (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))))
            : (c <= 43798 || (c < 64112
              ? (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))
              : (c <= 64217 || (c < 64298
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65856
            ? (c < 65482
              ? (c < 65142
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65136
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65140)))
                : (c <= 65276 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))
              : (c <= 65487 || (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65908 || (c < 66560
              ? (c < 66384
                ? (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))))
              : (c <= 66717 || (c < 66928
                ? (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))))))))
        : (c <= 66993 || (c < 69376
          ? (c < 67968
            ? (c < 67594
              ? (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))))
              : (c <= 67637 || (c < 67712
                ? (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))
                : (c <= 67742 || (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))))))
            : (c <= 68023 || (c < 68352
              ? (c < 68121
                ? (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))
                : (c <= 68149 || (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c >= 68297 && c <= 68324)))))
              : (c <= 68405 || (c < 68736
                ? (c < 68480
                  ? (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)
                  : (c <= 68497 || (c >= 68608 && c <= 68680)))
                : (c <= 68786 || (c < 69248
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68899)
                  : (c <= 69289 || (c >= 69296 && c <= 69297)))))))))
          : (c <= 69404 || (c < 70144
            ? (c < 69840
              ? (c < 69600
                ? (c < 69488
                  ? (c < 69424
                    ? c == 69415
                    : c <= 69445)
                  : (c <= 69505 || (c >= 69552 && c <= 69572)))
                : (c <= 69622 || (c < 69749
                  ? (c < 69745
                    ? (c >= 69635 && c <= 69687)
                    : c <= 69746)
                  : (c <= 69749 || (c >= 69763 && c <= 69807)))))
              : (c <= 69864 || (c < 70006
                ? (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))
                : (c <= 70006 || (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))))))
            : (c <= 70161 || (c < 70419
              ? (c < 70287
                ? (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))
                : (c <= 70301 || (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))))
              : (c <= 70440 || (c < 70480
                ? (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || c == 70461))
                : (c <= 70480 || (c < 70727
                  ? (c < 70656
                    ? (c >= 70493 && c <= 70497)
                    : c <= 70708)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))))))))))
      : (c <= 70831 || (c < 119966
        ? (c < 73066
          ? (c < 72106
            ? (c < 71680
              ? (c < 71236
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71086 || (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)))
                : (c <= 71236 || (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c >= 71488 && c <= 71494)))))
              : (c <= 71723 || (c < 71957
                ? (c < 71945
                  ? (c < 71935
                    ? (c >= 71840 && c <= 71903)
                    : c <= 71942)
                  : (c <= 71945 || (c >= 71948 && c <= 71955)))
                : (c <= 71958 || (c < 72001
                  ? (c < 71999
                    ? (c >= 71960 && c <= 71983)
                    : c <= 71999)
                  : (c <= 72001 || (c >= 72096 && c <= 72103)))))))
            : (c <= 72144 || (c < 72704
              ? (c < 72250
                ? (c < 72192
                  ? (c < 72163
                    ? c == 72161
                    : c <= 72163)
                  : (c <= 72192 || (c >= 72203 && c <= 72242)))
                : (c <= 72250 || (c < 72349
                  ? (c < 72284
                    ? c == 72272
                    : c <= 72329)
                  : (c <= 72349 || (c >= 72368 && c <= 72440)))))
              : (c <= 72712 || (c < 72968
                ? (c < 72818
                  ? (c < 72768
                    ? (c >= 72714 && c <= 72750)
                    : c <= 72768)
                  : (c <= 72847 || (c >= 72960 && c <= 72966)))
                : (c <= 72969 || (c < 73056
                  ? (c < 73030
                    ? (c >= 72971 && c <= 73008)
                    : c <= 73030)
                  : (c <= 73061 || (c >= 73063 && c <= 73064)))))))))
          : (c <= 73097 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73458)
                  : (c <= 73648 || (c >= 73728 && c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 'p'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'b'
                    ? c == '_'
                    : c <= 'n')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 'f'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'd')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 'm'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'k')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 's'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'q')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 't'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'r')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 'v'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 't')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 43520
    ? (c < 3751
      ? (c < 2738
        ? (c < 2042
          ? (c < 931
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'b'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1488
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1155
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1159)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1473
                  ? (c < 1471
                    ? (c >= 1425 && c <= 1469)
                    : c <= 1471)
                  : (c <= 1474 || (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)))))
              : (c <= 1514 || (c < 1759
                ? (c < 1568
                  ? (c < 1552
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1562)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1866 || (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)))))))))
          : (c <= 2042 || (c < 2556
            ? (c < 2447
              ? (c < 2185
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)))
                : (c <= 2190 || (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)))))
              : (c <= 2448 || (c < 2503
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)))
                : (c <= 2504 || (c < 2524
                  ? (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)
                  : (c <= 2525 || (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)))))))
            : (c <= 2556 || (c < 2631
              ? (c < 2602
                ? (c < 2565
                  ? (c < 2561
                    ? c == 2558
                    : c <= 2563)
                  : (c <= 2570 || (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c < 2622
                    ? c == 2620
                    : c <= 2626)))))
              : (c <= 2632 || (c < 2689
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || (c < 2662
                    ? c == 2654
                    : c <= 2677)))
                : (c <= 2691 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))))
        : (c <= 2739 || (c < 3160
          ? (c < 2946
            ? (c < 2835
              ? (c < 2784
                ? (c < 2759
                  ? (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)
                  : (c <= 2761 || (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)))
                : (c <= 2787 || (c < 2817
                  ? (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)
                  : (c <= 2819 || (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)))))
              : (c <= 2856 || (c < 2891
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)))
                : (c <= 2893 || (c < 2911
                  ? (c < 2908
                    ? (c >= 2901 && c <= 2903)
                    : c <= 2909)
                  : (c <= 2915 || (c < 2929
                    ? (c >= 2918 && c <= 2927)
                    : c <= 2929)))))))
            : (c <= 2947 || (c < 3018
              ? (c < 2974
                ? (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)))
                : (c <= 2975 || (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || (c < 3014
                    ? (c >= 3006 && c <= 3010)
                    : c <= 3016)))))
              : (c <= 3021 || (c < 3090
                ? (c < 3046
                  ? (c < 3031
                    ? c == 3024
                    : c <= 3031)
                  : (c <= 3055 || (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)))
                : (c <= 3112 || (c < 3142
                  ? (c < 3132
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))))))))
          : (c <= 3162 || (c < 3423
            ? (c < 3274
              ? (c < 3214
                ? (c < 3174
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3171)
                  : (c <= 3183 || (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || (c < 3270
                    ? (c >= 3260 && c <= 3268)
                    : c <= 3272)))))
              : (c <= 3277 || (c < 3328
                ? (c < 3296
                  ? (c < 3293
                    ? (c >= 3285 && c <= 3286)
                    : c <= 3294)
                  : (c <= 3299 || (c < 3313
                    ? (c >= 3302 && c <= 3311)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))))))
            : (c <= 3427 || (c < 3544
              ? (c < 3507
                ? (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))
                : (c <= 3515 || (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))))
              : (c <= 3551 || (c < 3713
                ? (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))))))))))
      : (c <= 3773 || (c < 7968
        ? (c < 5792
          ? (c < 4348
            ? (c < 3902
              ? (c < 3840
                ? (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))
                : (c <= 3840 || (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))))
              : (c <= 3911 || (c < 4096
                ? (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)))
                : (c <= 4169 || (c < 4295
                  ? (c < 4256
                    ? (c >= 4176 && c <= 4253)
                    : c <= 4293)
                  : (c <= 4295 || (c < 4304
                    ? c == 4301
                    : c <= 4346)))))))
            : (c <= 4680 || (c < 4808
              ? (c < 4746
                ? (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || (c < 4802
                    ? c == 4800
                    : c <= 4805)))))
              : (c <= 4822 || (c < 4992
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c < 4969
                    ? (c >= 4957 && c <= 4959)
                    : c <= 4977)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)))))))))
          : (c <= 5866 || (c < 6608
            ? (c < 6155
              ? (c < 5998
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)
                  : (c <= 5940 || (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)
                  : (c <= 6103 || (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)))))
              : (c <= 6157 || (c < 6432
                ? (c < 6272
                  ? (c < 6176
                    ? (c >= 6159 && c <= 6169)
                    : c <= 6264)
                  : (c <= 6314 || (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)))
                : (c <= 6443 || (c < 6512
                  ? (c < 6470
                    ? (c >= 6448 && c <= 6459)
                    : c <= 6509)
                  : (c <= 6516 || (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)))))))
            : (c <= 6618 || (c < 7040
              ? (c < 6823
                ? (c < 6752
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6683)
                    : c <= 6750)
                  : (c <= 6780 || (c < 6800
                    ? (c >= 6783 && c <= 6793)
                    : c <= 6809)))
                : (c <= 6823 || (c < 6912
                  ? (c < 6847
                    ? (c >= 6832 && c <= 6845)
                    : c <= 6862)
                  : (c <= 6988 || (c < 7019
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7027)))))
              : (c <= 7155 || (c < 7357
                ? (c < 7245
                  ? (c < 7232
                    ? (c >= 7168 && c <= 7223)
                    : c <= 7241)
                  : (c <= 7293 || (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)))
                : (c <= 7359 || (c < 7424
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))))))))
        : (c <= 8005 || (c < 11688
          ? (c < 8421
            ? (c < 8144
              ? (c < 8031
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || (c < 8029
                    ? c == 8027
                    : c <= 8029)))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)))))
              : (c <= 8147 || (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))))
            : (c <= 8432 || (c < 8526
              ? (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)))))
              : (c <= 8526 || (c < 11565
                ? (c < 11499
                  ? (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)
                  : (c <= 11507 || (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)))
                : (c <= 11565 || (c < 11647
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 43520
    ? (c < 3751
      ? (c < 2738
        ? (c < 2042
          ? (c < 931
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1488
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1155
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1159)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1473
                  ? (c < 1471
                    ? (c >= 1425 && c <= 1469)
                    : c <= 1471)
                  : (c <= 1474 || (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)))))
              : (c <= 1514 || (c < 1759
                ? (c < 1568
                  ? (c < 1552
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1562)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1866 || (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)))))))))
          : (c <= 2042 || (c < 2556
            ? (c < 2447
              ? (c < 2185
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)))
                : (c <= 2190 || (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)))))
              : (c <= 2448 || (c < 2503
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)))
                : (c <= 2504 || (c < 2524
                  ? (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)
                  : (c <= 2525 || (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)))))))
            : (c <= 2556 || (c < 2631
              ? (c < 2602
                ? (c < 2565
                  ? (c < 2561
                    ? c == 2558
                    : c <= 2563)
                  : (c <= 2570 || (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c < 2622
                    ? c == 2620
                    : c <= 2626)))))
              : (c <= 2632 || (c < 2689
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || (c < 2662
                    ? c == 2654
                    : c <= 2677)))
                : (c <= 2691 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))))
        : (c <= 2739 || (c < 3160
          ? (c < 2946
            ? (c < 2835
              ? (c < 2784
                ? (c < 2759
                  ? (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)
                  : (c <= 2761 || (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)))
                : (c <= 2787 || (c < 2817
                  ? (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)
                  : (c <= 2819 || (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)))))
              : (c <= 2856 || (c < 2891
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)))
                : (c <= 2893 || (c < 2911
                  ? (c < 2908
                    ? (c >= 2901 && c <= 2903)
                    : c <= 2909)
                  : (c <= 2915 || (c < 2929
                    ? (c >= 2918 && c <= 2927)
                    : c <= 2929)))))))
            : (c <= 2947 || (c < 3018
              ? (c < 2974
                ? (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)))
                : (c <= 2975 || (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || (c < 3014
                    ? (c >= 3006 && c <= 3010)
                    : c <= 3016)))))
              : (c <= 3021 || (c < 3090
                ? (c < 3046
                  ? (c < 3031
                    ? c == 3024
                    : c <= 3031)
                  : (c <= 3055 || (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)))
                : (c <= 3112 || (c < 3142
                  ? (c < 3132
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))))))))
          : (c <= 3162 || (c < 3423
            ? (c < 3274
              ? (c < 3214
                ? (c < 3174
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3171)
                  : (c <= 3183 || (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || (c < 3270
                    ? (c >= 3260 && c <= 3268)
                    : c <= 3272)))))
              : (c <= 3277 || (c < 3328
                ? (c < 3296
                  ? (c < 3293
                    ? (c >= 3285 && c <= 3286)
                    : c <= 3294)
                  : (c <= 3299 || (c < 3313
                    ? (c >= 3302 && c <= 3311)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))))))
            : (c <= 3427 || (c < 3544
              ? (c < 3507
                ? (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))
                : (c <= 3515 || (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))))
              : (c <= 3551 || (c < 3713
                ? (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))))))))))
      : (c <= 3773 || (c < 7968
        ? (c < 5792
          ? (c < 4348
            ? (c < 3902
              ? (c < 3840
                ? (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))
                : (c <= 3840 || (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))))
              : (c <= 3911 || (c < 4096
                ? (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)))
                : (c <= 4169 || (c < 4295
                  ? (c < 4256
                    ? (c >= 4176 && c <= 4253)
                    : c <= 4293)
                  : (c <= 4295 || (c < 4304
                    ? c == 4301
                    : c <= 4346)))))))
            : (c <= 4680 || (c < 4808
              ? (c < 4746
                ? (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || (c < 4802
                    ? c == 4800
                    : c <= 4805)))))
              : (c <= 4822 || (c < 4992
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c < 4969
                    ? (c >= 4957 && c <= 4959)
                    : c <= 4977)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)))))))))
          : (c <= 5866 || (c < 6608
            ? (c < 6155
              ? (c < 5998
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)
                  : (c <= 5940 || (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)
                  : (c <= 6103 || (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)))))
              : (c <= 6157 || (c < 6432
                ? (c < 6272
                  ? (c < 6176
                    ? (c >= 6159 && c <= 6169)
                    : c <= 6264)
                  : (c <= 6314 || (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)))
                : (c <= 6443 || (c < 6512
                  ? (c < 6470
                    ? (c >= 6448 && c <= 6459)
                    : c <= 6509)
                  : (c <= 6516 || (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)))))))
            : (c <= 6618 || (c < 7040
              ? (c < 6823
                ? (c < 6752
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6683)
                    : c <= 6750)
                  : (c <= 6780 || (c < 6800
                    ? (c >= 6783 && c <= 6793)
                    : c <= 6809)))
                : (c <= 6823 || (c < 6912
                  ? (c < 6847
                    ? (c >= 6832 && c <= 6845)
                    : c <= 6862)
                  : (c <= 6988 || (c < 7019
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7027)))))
              : (c <= 7155 || (c < 7357
                ? (c < 7245
                  ? (c < 7232
                    ? (c >= 7168 && c <= 7223)
                    : c <= 7241)
                  : (c <= 7293 || (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)))
                : (c <= 7359 || (c < 7424
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))))))))
        : (c <= 8005 || (c < 11688
          ? (c < 8421
            ? (c < 8144
              ? (c < 8031
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || (c < 8029
                    ? c == 8027
                    : c <= 8029)))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)))))
              : (c <= 8147 || (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))))
            : (c <= 8432 || (c < 8526
              ? (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)))))
              : (c <= 8526 || (c < 11565
                ? (c < 11499
                  ? (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)
                  : (c <= 11507 || (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)))
                : (c <= 11565 || (c < 11647
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(76);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(43);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(104);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(88);
      END_STATE();
    case 10:
      if (lookahead == '<') ADVANCE(106);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(82);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == '|') ADVANCE(105);
      END_STATE();
    case 37:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(59);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(59);
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(59);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(59);
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(59);
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(59);
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(59);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(59);
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(59);
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(59);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(59);
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(59);
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_null_lit);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_null_lit);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '*') ADVANCE(14);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__legacy_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_ellipsis);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__strip_marker);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 3, .external_lex_state = 2},
  [3] = {.lex_state = 3, .external_lex_state = 2},
  [4] = {.lex_state = 3, .external_lex_state = 2},
  [5] = {.lex_state = 3, .external_lex_state = 2},
  [6] = {.lex_state = 3, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 3, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 3, .external_lex_state = 2},
  [11] = {.lex_state = 3, .external_lex_state = 2},
  [12] = {.lex_state = 3, .external_lex_state = 2},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 3, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 1, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 3},
  [22] = {.lex_state = 1, .external_lex_state = 2},
  [23] = {.lex_state = 1, .external_lex_state = 3},
  [24] = {.lex_state = 1, .external_lex_state = 3},
  [25] = {.lex_state = 1, .external_lex_state = 2},
  [26] = {.lex_state = 1, .external_lex_state = 3},
  [27] = {.lex_state = 1, .external_lex_state = 3},
  [28] = {.lex_state = 1, .external_lex_state = 3},
  [29] = {.lex_state = 1, .external_lex_state = 2},
  [30] = {.lex_state = 1, .external_lex_state = 2},
  [31] = {.lex_state = 1, .external_lex_state = 2},
  [32] = {.lex_state = 1, .external_lex_state = 2},
  [33] = {.lex_state = 1, .external_lex_state = 2},
  [34] = {.lex_state = 1, .external_lex_state = 2},
  [35] = {.lex_state = 1, .external_lex_state = 2},
  [36] = {.lex_state = 1, .external_lex_state = 2},
  [37] = {.lex_state = 1, .external_lex_state = 2},
  [38] = {.lex_state = 1, .external_lex_state = 2},
  [39] = {.lex_state = 1, .external_lex_state = 2},
  [40] = {.lex_state = 1, .external_lex_state = 2},
  [41] = {.lex_state = 1, .external_lex_state = 2},
  [42] = {.lex_state = 1, .external_lex_state = 2},
  [43] = {.lex_state = 1, .external_lex_state = 2},
  [44] = {.lex_state = 1, .external_lex_state = 2},
  [45] = {.lex_state = 1, .external_lex_state = 2},
  [46] = {.lex_state = 1, .external_lex_state = 2},
  [47] = {.lex_state = 1, .external_lex_state = 2},
  [48] = {.lex_state = 1, .external_lex_state = 2},
  [49] = {.lex_state = 1, .external_lex_state = 2},
  [50] = {.lex_state = 1, .external_lex_state = 2},
  [51] = {.lex_state = 1, .external_lex_state = 2},
  [52] = {.lex_state = 1, .external_lex_state = 2},
  [53] = {.lex_state = 1, .external_lex_state = 2},
  [54] = {.lex_state = 1, .external_lex_state = 2},
  [55] = {.lex_state = 1, .external_lex_state = 2},
  [56] = {.lex_state = 1, .external_lex_state = 2},
  [57] = {.lex_state = 1, .external_lex_state = 2},
  [58] = {.lex_state = 1, .external_lex_state = 2},
  [59] = {.lex_state = 1, .external_lex_state = 2},
  [60] = {.lex_state = 1, .external_lex_state = 2},
  [61] = {.lex_state = 1, .external_lex_state = 2},
  [62] = {.lex_state = 1, .external_lex_state = 2},
  [63] = {.lex_state = 1, .external_lex_state = 2},
  [64] = {.lex_state = 1, .external_lex_state = 2},
  [65] = {.lex_state = 1, .external_lex_state = 2},
  [66] = {.lex_state = 1, .external_lex_state = 2},
  [67] = {.lex_state = 1, .external_lex_state = 2},
  [68] = {.lex_state = 1, .external_lex_state = 2},
  [69] = {.lex_state = 1, .external_lex_state = 2},
  [70] = {.lex_state = 1, .external_lex_state = 2},
  [71] = {.lex_state = 1, .external_lex_state = 2},
  [72] = {.lex_state = 1, .external_lex_state = 2},
  [73] = {.lex_state = 1, .external_lex_state = 2},
  [74] = {.lex_state = 1, .external_lex_state = 2},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 1, .external_lex_state = 2},
  [77] = {.lex_state = 1, .external_lex_state = 2},
  [78] = {.lex_state = 1, .external_lex_state = 2},
  [79] = {.lex_state = 1, .external_lex_state = 2},
  [80] = {.lex_state = 1, .external_lex_state = 2},
  [81] = {.lex_state = 1, .external_lex_state = 2},
  [82] = {.lex_state = 1, .external_lex_state = 2},
  [83] = {.lex_state = 1, .external_lex_state = 2},
  [84] = {.lex_state = 1, .external_lex_state = 2},
  [85] = {.lex_state = 1, .external_lex_state = 2},
  [86] = {.lex_state = 1, .external_lex_state = 2},
  [87] = {.lex_state = 1, .external_lex_state = 2},
  [88] = {.lex_state = 1, .external_lex_state = 2},
  [89] = {.lex_state = 1, .external_lex_state = 2},
  [90] = {.lex_state = 1, .external_lex_state = 2},
  [91] = {.lex_state = 1, .external_lex_state = 2},
  [92] = {.lex_state = 1, .external_lex_state = 2},
  [93] = {.lex_state = 1, .external_lex_state = 2},
  [94] = {.lex_state = 1, .external_lex_state = 2},
  [95] = {.lex_state = 1, .external_lex_state = 2},
  [96] = {.lex_state = 1, .external_lex_state = 2},
  [97] = {.lex_state = 1, .external_lex_state = 2},
  [98] = {.lex_state = 1, .external_lex_state = 2},
  [99] = {.lex_state = 1, .external_lex_state = 2},
  [100] = {.lex_state = 1, .external_lex_state = 2},
  [101] = {.lex_state = 1, .external_lex_state = 2},
  [102] = {.lex_state = 1, .external_lex_state = 2},
  [103] = {.lex_state = 1, .external_lex_state = 2},
  [104] = {.lex_state = 1, .external_lex_state = 2},
  [105] = {.lex_state = 1, .external_lex_state = 2},
  [106] = {.lex_state = 1, .external_lex_state = 2},
  [107] = {.lex_state = 1, .external_lex_state = 2},
  [108] = {.lex_state = 1, .external_lex_state = 2},
  [109] = {.lex_state = 1, .external_lex_state = 2},
  [110] = {.lex_state = 1, .external_lex_state = 2},
  [111] = {.lex_state = 1, .external_lex_state = 2},
  [112] = {.lex_state = 1, .external_lex_state = 2},
  [113] = {.lex_state = 1, .external_lex_state = 2},
  [114] = {.lex_state = 1, .external_lex_state = 2},
  [115] = {.lex_state = 1, .external_lex_state = 2},
  [116] = {.lex_state = 1, .external_lex_state = 2},
  [117] = {.lex_state = 1, .external_lex_state = 2},
  [118] = {.lex_state = 1, .external_lex_state = 2},
  [119] = {.lex_state = 1, .external_lex_state = 2},
  [120] = {.lex_state = 1, .external_lex_state = 2},
  [121] = {.lex_state = 1, .external_lex_state = 2},
  [122] = {.lex_state = 1, .external_lex_state = 2},
  [123] = {.lex_state = 1, .external_lex_state = 2},
  [124] = {.lex_state = 1, .external_lex_state = 2},
  [125] = {.lex_state = 1, .external_lex_state = 2},
  [126] = {.lex_state = 1, .external_lex_state = 2},
  [127] = {.lex_state = 1, .external_lex_state = 2},
  [128] = {.lex_state = 1, .external_lex_state = 2},
  [129] = {.lex_state = 1, .external_lex_state = 2},
  [130] = {.lex_state = 41},
  [131] = {.lex_state = 41},
  [132] = {.lex_state = 41},
  [133] = {.lex_state = 41},
  [134] = {.lex_state = 41},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 41},
  [137] = {.lex_state = 41},
  [138] = {.lex_state = 41},
  [139] = {.lex_state = 41},
  [140] = {.lex_state = 41},
  [141] = {.lex_state = 41},
  [142] = {.lex_state = 41},
  [143] = {.lex_state = 1, .external_lex_state = 2},
  [144] = {.lex_state = 1, .external_lex_state = 2},
  [145] = {.lex_state = 1, .external_lex_state = 2},
  [146] = {.lex_state = 1, .external_lex_state = 2},
  [147] = {.lex_state = 1, .external_lex_state = 2},
  [148] = {.lex_state = 1, .external_lex_state = 2},
  [149] = {.lex_state = 1, .external_lex_state = 2},
  [150] = {.lex_state = 1, .external_lex_state = 2},
  [151] = {.lex_state = 1, .external_lex_state = 2},
  [152] = {.lex_state = 1, .external_lex_state = 2},
  [153] = {.lex_state = 1, .external_lex_state = 2},
  [154] = {.lex_state = 1, .external_lex_state = 2},
  [155] = {.lex_state = 1, .external_lex_state = 2},
  [156] = {.lex_state = 1, .external_lex_state = 2},
  [157] = {.lex_state = 1, .external_lex_state = 2},
  [158] = {.lex_state = 1, .external_lex_state = 2},
  [159] = {.lex_state = 1, .external_lex_state = 2},
  [160] = {.lex_state = 1, .external_lex_state = 2},
  [161] = {.lex_state = 1, .external_lex_state = 2},
  [162] = {.lex_state = 1, .external_lex_state = 2},
  [163] = {.lex_state = 1, .external_lex_state = 2},
  [164] = {.lex_state = 1, .external_lex_state = 2},
  [165] = {.lex_state = 1, .external_lex_state = 2},
  [166] = {.lex_state = 1, .external_lex_state = 2},
  [167] = {.lex_state = 1, .external_lex_state = 2},
  [168] = {.lex_state = 1, .external_lex_state = 2},
  [169] = {.lex_state = 1, .external_lex_state = 2},
  [170] = {.lex_state = 1, .external_lex_state = 2},
  [171] = {.lex_state = 1, .external_lex_state = 2},
  [172] = {.lex_state = 1, .external_lex_state = 2},
  [173] = {.lex_state = 1, .external_lex_state = 2},
  [174] = {.lex_state = 1, .external_lex_state = 2},
  [175] = {.lex_state = 1, .external_lex_state = 2},
  [176] = {.lex_state = 41},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 41},
  [186] = {.lex_state = 41},
  [187] = {.lex_state = 41},
  [188] = {.lex_state = 41},
  [189] = {.lex_state = 41},
  [190] = {.lex_state = 41},
  [191] = {.lex_state = 41},
  [192] = {.lex_state = 41},
  [193] = {.lex_state = 41},
  [194] = {.lex_state = 41},
  [195] = {.lex_state = 41},
  [196] = {.lex_state = 41},
  [197] = {.lex_state = 41},
  [198] = {.lex_state = 41},
  [199] = {.lex_state = 41},
  [200] = {.lex_state = 41},
  [201] = {.lex_state = 41},
  [202] = {.lex_state = 41},
  [203] = {.lex_state = 41},
  [204] = {.lex_state = 41},
  [205] = {.lex_state = 41},
  [206] = {.lex_state = 41},
  [207] = {.lex_state = 41},
  [208] = {.lex_state = 41},
  [209] = {.lex_state = 41},
  [210] = {.lex_state = 41},
  [211] = {.lex_state = 41},
  [212] = {.lex_state = 41},
  [213] = {.lex_state = 41},
  [214] = {.lex_state = 41},
  [215] = {.lex_state = 41},
  [216] = {.lex_state = 41},
  [217] = {.lex_state = 41, .external_lex_state = 4},
  [218] = {.lex_state = 41, .external_lex_state = 5},
  [219] = {.lex_state = 41, .external_lex_state = 5},
  [220] = {.lex_state = 41, .external_lex_state = 5},
  [221] = {.lex_state = 41, .external_lex_state = 4},
  [222] = {.lex_state = 41, .external_lex_state = 4},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 41, .external_lex_state = 4},
  [226] = {.lex_state = 41, .external_lex_state = 4},
  [227] = {.lex_state = 41, .external_lex_state = 4},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 41, .external_lex_state = 4},
  [230] = {.lex_state = 41, .external_lex_state = 5},
  [231] = {.lex_state = 41, .external_lex_state = 4},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 41, .external_lex_state = 5},
  [234] = {.lex_state = 41, .external_lex_state = 5},
  [235] = {.lex_state = 41, .external_lex_state = 5},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 41, .external_lex_state = 5},
  [238] = {.lex_state = 41, .external_lex_state = 5},
  [239] = {.lex_state = 41, .external_lex_state = 4},
  [240] = {.lex_state = 41, .external_lex_state = 4},
  [241] = {.lex_state = 41, .external_lex_state = 4},
  [242] = {.lex_state = 41, .external_lex_state = 5},
  [243] = {.lex_state = 41, .external_lex_state = 4},
  [244] = {.lex_state = 41, .external_lex_state = 4},
  [245] = {.lex_state = 41, .external_lex_state = 5},
  [246] = {.lex_state = 41, .external_lex_state = 5},
  [247] = {.lex_state = 41, .external_lex_state = 5},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 41, .external_lex_state = 4},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 2},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 41, .external_lex_state = 5},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 41, .external_lex_state = 5},
  [284] = {.lex_state = 41, .external_lex_state = 5},
  [285] = {.lex_state = 41, .external_lex_state = 4},
  [286] = {.lex_state = 41, .external_lex_state = 4},
  [287] = {.lex_state = 41, .external_lex_state = 4},
  [288] = {.lex_state = 41, .external_lex_state = 4},
  [289] = {.lex_state = 41, .external_lex_state = 4},
  [290] = {.lex_state = 41, .external_lex_state = 5},
  [291] = {.lex_state = 41, .external_lex_state = 4},
  [292] = {.lex_state = 41, .external_lex_state = 4},
  [293] = {.lex_state = 41, .external_lex_state = 4},
  [294] = {.lex_state = 41, .external_lex_state = 5},
  [295] = {.lex_state = 41, .external_lex_state = 5},
  [296] = {.lex_state = 41, .external_lex_state = 5},
  [297] = {.lex_state = 41, .external_lex_state = 5},
  [298] = {.lex_state = 41, .external_lex_state = 5},
  [299] = {.lex_state = 41, .external_lex_state = 5},
  [300] = {.lex_state = 41, .external_lex_state = 5},
  [301] = {.lex_state = 41, .external_lex_state = 5},
  [302] = {.lex_state = 41, .external_lex_state = 4},
  [303] = {.lex_state = 41, .external_lex_state = 5},
  [304] = {.lex_state = 41, .external_lex_state = 5},
  [305] = {.lex_state = 41, .external_lex_state = 5},
  [306] = {.lex_state = 41, .external_lex_state = 5},
  [307] = {.lex_state = 41, .external_lex_state = 5},
  [308] = {.lex_state = 41, .external_lex_state = 4},
  [309] = {.lex_state = 41, .external_lex_state = 5},
  [310] = {.lex_state = 41, .external_lex_state = 4},
  [311] = {.lex_state = 41, .external_lex_state = 5},
  [312] = {.lex_state = 41, .external_lex_state = 4},
  [313] = {.lex_state = 41, .external_lex_state = 5},
  [314] = {.lex_state = 41, .external_lex_state = 4},
  [315] = {.lex_state = 41, .external_lex_state = 5},
  [316] = {.lex_state = 41, .external_lex_state = 5},
  [317] = {.lex_state = 41, .external_lex_state = 5},
  [318] = {.lex_state = 41, .external_lex_state = 5},
  [319] = {.lex_state = 41, .external_lex_state = 5},
  [320] = {.lex_state = 41, .external_lex_state = 4},
  [321] = {.lex_state = 41, .external_lex_state = 5},
  [322] = {.lex_state = 41, .external_lex_state = 5},
  [323] = {.lex_state = 41, .external_lex_state = 4},
  [324] = {.lex_state = 41, .external_lex_state = 5},
  [325] = {.lex_state = 41, .external_lex_state = 4},
  [326] = {.lex_state = 41, .external_lex_state = 5},
  [327] = {.lex_state = 41, .external_lex_state = 4},
  [328] = {.lex_state = 41, .external_lex_state = 4},
  [329] = {.lex_state = 41, .external_lex_state = 4},
  [330] = {.lex_state = 41, .external_lex_state = 4},
  [331] = {.lex_state = 41, .external_lex_state = 5},
  [332] = {.lex_state = 41, .external_lex_state = 5},
  [333] = {.lex_state = 41, .external_lex_state = 5},
  [334] = {.lex_state = 41, .external_lex_state = 4},
  [335] = {.lex_state = 41, .external_lex_state = 5},
  [336] = {.lex_state = 41, .external_lex_state = 4},
  [337] = {.lex_state = 41, .external_lex_state = 4},
  [338] = {.lex_state = 41, .external_lex_state = 4},
  [339] = {.lex_state = 41, .external_lex_state = 4},
  [340] = {.lex_state = 41, .external_lex_state = 4},
  [341] = {.lex_state = 41, .external_lex_state = 4},
  [342] = {.lex_state = 41, .external_lex_state = 4},
  [343] = {.lex_state = 41, .external_lex_state = 4},
  [344] = {.lex_state = 41, .external_lex_state = 4},
  [345] = {.lex_state = 41, .external_lex_state = 4},
  [346] = {.lex_state = 41, .external_lex_state = 4},
  [347] = {.lex_state = 1, .external_lex_state = 2},
  [348] = {.lex_state = 1, .external_lex_state = 2},
  [349] = {.lex_state = 1, .external_lex_state = 2},
  [350] = {.lex_state = 1, .external_lex_state = 2},
  [351] = {.lex_state = 0, .external_lex_state = 6},
  [352] = {.lex_state = 0, .external_lex_state = 6},
  [353] = {.lex_state = 1, .external_lex_state = 2},
  [354] = {.lex_state = 1, .external_lex_state = 2},
  [355] = {.lex_state = 0, .external_lex_state = 6},
  [356] = {.lex_state = 0, .external_lex_state = 6},
  [357] = {.lex_state = 0, .external_lex_state = 6},
  [358] = {.lex_state = 0, .external_lex_state = 6},
  [359] = {.lex_state = 0, .external_lex_state = 6},
  [360] = {.lex_state = 0, .external_lex_state = 6},
  [361] = {.lex_state = 0, .external_lex_state = 6},
  [362] = {.lex_state = 0, .external_lex_state = 6},
  [363] = {.lex_state = 0, .external_lex_state = 6},
  [364] = {.lex_state = 0, .external_lex_state = 6},
  [365] = {.lex_state = 0, .external_lex_state = 7},
  [366] = {.lex_state = 0, .external_lex_state = 6},
  [367] = {.lex_state = 0, .external_lex_state = 7},
  [368] = {.lex_state = 0, .external_lex_state = 7},
  [369] = {.lex_state = 0, .external_lex_state = 6},
  [370] = {.lex_state = 0, .external_lex_state = 6},
  [371] = {.lex_state = 0, .external_lex_state = 6},
  [372] = {.lex_state = 0, .external_lex_state = 6},
  [373] = {.lex_state = 0, .external_lex_state = 8},
  [374] = {.lex_state = 0, .external_lex_state = 7},
  [375] = {.lex_state = 0, .external_lex_state = 8},
  [376] = {.lex_state = 0, .external_lex_state = 6},
  [377] = {.lex_state = 0, .external_lex_state = 7},
  [378] = {.lex_state = 0, .external_lex_state = 6},
  [379] = {.lex_state = 0, .external_lex_state = 6},
  [380] = {.lex_state = 0, .external_lex_state = 6},
  [381] = {.lex_state = 0, .external_lex_state = 6},
  [382] = {.lex_state = 0, .external_lex_state = 8},
  [383] = {.lex_state = 0, .external_lex_state = 6},
  [384] = {.lex_state = 0, .external_lex_state = 7},
  [385] = {.lex_state = 0, .external_lex_state = 7},
  [386] = {.lex_state = 0, .external_lex_state = 7},
  [387] = {.lex_state = 0, .external_lex_state = 7},
  [388] = {.lex_state = 0, .external_lex_state = 8},
  [389] = {.lex_state = 0, .external_lex_state = 6},
  [390] = {.lex_state = 0, .external_lex_state = 8},
  [391] = {.lex_state = 0, .external_lex_state = 7},
  [392] = {.lex_state = 0, .external_lex_state = 8},
  [393] = {.lex_state = 0, .external_lex_state = 7},
  [394] = {.lex_state = 0, .external_lex_state = 6},
  [395] = {.lex_state = 0, .external_lex_state = 6},
  [396] = {.lex_state = 0, .external_lex_state = 6},
  [397] = {.lex_state = 0, .external_lex_state = 6},
  [398] = {.lex_state = 0, .external_lex_state = 6},
  [399] = {.lex_state = 0, .external_lex_state = 6},
  [400] = {.lex_state = 41},
  [401] = {.lex_state = 41},
  [402] = {.lex_state = 41},
  [403] = {.lex_state = 4, .external_lex_state = 2},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 41},
  [407] = {.lex_state = 41},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 41, .external_lex_state = 2},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0, .external_lex_state = 7},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0, .external_lex_state = 7},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 41, .external_lex_state = 2},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0, .external_lex_state = 8},
  [428] = {.lex_state = 0, .external_lex_state = 8},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0, .external_lex_state = 8},
  [431] = {.lex_state = 0, .external_lex_state = 7},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0, .external_lex_state = 7},
  [435] = {.lex_state = 0, .external_lex_state = 7},
  [436] = {.lex_state = 0, .external_lex_state = 8},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0, .external_lex_state = 7},
  [439] = {.lex_state = 0, .external_lex_state = 8},
  [440] = {.lex_state = 0, .external_lex_state = 8},
  [441] = {.lex_state = 0, .external_lex_state = 8},
  [442] = {.lex_state = 0, .external_lex_state = 7},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0, .external_lex_state = 7},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0, .external_lex_state = 7},
  [447] = {.lex_state = 0, .external_lex_state = 7},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0, .external_lex_state = 7},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0, .external_lex_state = 7},
  [452] = {.lex_state = 0, .external_lex_state = 7},
  [453] = {.lex_state = 0, .external_lex_state = 8},
  [454] = {.lex_state = 0, .external_lex_state = 8},
  [455] = {.lex_state = 0, .external_lex_state = 7},
  [456] = {.lex_state = 0, .external_lex_state = 8},
  [457] = {.lex_state = 0, .external_lex_state = 7},
  [458] = {.lex_state = 0, .external_lex_state = 7},
  [459] = {.lex_state = 0, .external_lex_state = 8},
  [460] = {.lex_state = 0, .external_lex_state = 8},
  [461] = {.lex_state = 0, .external_lex_state = 7},
  [462] = {.lex_state = 0, .external_lex_state = 8},
  [463] = {.lex_state = 0, .external_lex_state = 8},
  [464] = {.lex_state = 0, .external_lex_state = 8},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0, .external_lex_state = 8},
  [467] = {.lex_state = 0, .external_lex_state = 7},
  [468] = {.lex_state = 0, .external_lex_state = 7},
  [469] = {.lex_state = 0, .external_lex_state = 7},
  [470] = {.lex_state = 0, .external_lex_state = 7},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0, .external_lex_state = 7},
  [473] = {.lex_state = 0, .external_lex_state = 7},
  [474] = {.lex_state = 0, .external_lex_state = 6},
  [475] = {.lex_state = 41},
  [476] = {.lex_state = 0, .external_lex_state = 7},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0, .external_lex_state = 8},
  [482] = {.lex_state = 0, .external_lex_state = 8},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0, .external_lex_state = 7},
  [485] = {.lex_state = 0, .external_lex_state = 8},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0, .external_lex_state = 8},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0, .external_lex_state = 8},
  [490] = {.lex_state = 0, .external_lex_state = 8},
  [491] = {.lex_state = 0, .external_lex_state = 7},
  [492] = {.lex_state = 0, .external_lex_state = 6},
  [493] = {.lex_state = 0, .external_lex_state = 7},
  [494] = {.lex_state = 0, .external_lex_state = 8},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0, .external_lex_state = 7},
  [497] = {.lex_state = 0, .external_lex_state = 7},
  [498] = {.lex_state = 0, .external_lex_state = 9},
  [499] = {.lex_state = 0, .external_lex_state = 8},
  [500] = {.lex_state = 0, .external_lex_state = 4},
  [501] = {.lex_state = 0, .external_lex_state = 6},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0, .external_lex_state = 6},
  [504] = {.lex_state = 0, .external_lex_state = 5},
  [505] = {.lex_state = 41, .external_lex_state = 2},
  [506] = {.lex_state = 0, .external_lex_state = 5},
  [507] = {.lex_state = 0, .external_lex_state = 5},
  [508] = {.lex_state = 0, .external_lex_state = 6},
  [509] = {.lex_state = 0, .external_lex_state = 6},
  [510] = {.lex_state = 0, .external_lex_state = 6},
  [511] = {.lex_state = 0, .external_lex_state = 5},
  [512] = {.lex_state = 3},
  [513] = {.lex_state = 41, .external_lex_state = 2},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0, .external_lex_state = 6},
  [516] = {.lex_state = 0, .external_lex_state = 6},
  [517] = {.lex_state = 0, .external_lex_state = 6},
  [518] = {.lex_state = 41, .external_lex_state = 2},
  [519] = {.lex_state = 0, .external_lex_state = 6},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0, .external_lex_state = 6},
  [522] = {.lex_state = 0, .external_lex_state = 6},
  [523] = {.lex_state = 41},
  [524] = {.lex_state = 0, .external_lex_state = 9},
  [525] = {.lex_state = 0, .external_lex_state = 6},
  [526] = {.lex_state = 0, .external_lex_state = 5},
  [527] = {.lex_state = 41},
  [528] = {.lex_state = 0, .external_lex_state = 6},
  [529] = {.lex_state = 0, .external_lex_state = 6},
  [530] = {.lex_state = 0, .external_lex_state = 6},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0, .external_lex_state = 6},
  [534] = {.lex_state = 0, .external_lex_state = 6},
  [535] = {.lex_state = 0, .external_lex_state = 6},
  [536] = {.lex_state = 0, .external_lex_state = 6},
  [537] = {.lex_state = 0, .external_lex_state = 6},
  [538] = {.lex_state = 0, .external_lex_state = 6},
  [539] = {.lex_state = 0, .external_lex_state = 4},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0, .external_lex_state = 6},
  [542] = {.lex_state = 0, .external_lex_state = 6},
  [543] = {.lex_state = 0, .external_lex_state = 6},
  [544] = {.lex_state = 41},
  [545] = {.lex_state = 0, .external_lex_state = 5},
  [546] = {.lex_state = 0, .external_lex_state = 6},
  [547] = {.lex_state = 0, .external_lex_state = 6},
  [548] = {.lex_state = 0, .external_lex_state = 6},
  [549] = {.lex_state = 0, .external_lex_state = 4},
  [550] = {.lex_state = 0, .external_lex_state = 4},
  [551] = {.lex_state = 0, .external_lex_state = 6},
  [552] = {.lex_state = 0, .external_lex_state = 6},
  [553] = {.lex_state = 0, .external_lex_state = 6},
  [554] = {.lex_state = 0, .external_lex_state = 6},
  [555] = {.lex_state = 0, .external_lex_state = 4},
  [556] = {.lex_state = 0, .external_lex_state = 6},
  [557] = {.lex_state = 0, .external_lex_state = 6},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0, .external_lex_state = 6},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0, .external_lex_state = 6},
  [562] = {.lex_state = 41},
  [563] = {.lex_state = 0, .external_lex_state = 9},
  [564] = {.lex_state = 0, .external_lex_state = 4},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0, .external_lex_state = 4},
  [567] = {.lex_state = 0, .external_lex_state = 5},
  [568] = {.lex_state = 0, .external_lex_state = 6},
  [569] = {.lex_state = 0, .external_lex_state = 6},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 1},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 41},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 1},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0, .external_lex_state = 5},
  [586] = {.lex_state = 0, .external_lex_state = 5},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0, .external_lex_state = 5},
  [593] = {.lex_state = 1},
  [594] = {.lex_state = 0, .external_lex_state = 5},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0, .external_lex_state = 5},
  [598] = {.lex_state = 0, .external_lex_state = 5},
  [599] = {.lex_state = 0, .external_lex_state = 5},
  [600] = {.lex_state = 1},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 41},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 41},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0, .external_lex_state = 5},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 1},
  [620] = {.lex_state = 0, .external_lex_state = 5},
  [621] = {.lex_state = 0, .external_lex_state = 5},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0, .external_lex_state = 5},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0, .external_lex_state = 5},
  [627] = {.lex_state = 0, .external_lex_state = 5},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0, .external_lex_state = 5},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 41},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 41},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0, .external_lex_state = 5},
  [648] = {.lex_state = 0, .external_lex_state = 5},
  [649] = {.lex_state = 0, .external_lex_state = 4},
  [650] = {.lex_state = 41},
  [651] = {.lex_state = 0, .external_lex_state = 10},
  [652] = {.lex_state = 0, .external_lex_state = 5},
  [653] = {.lex_state = 0, .external_lex_state = 5},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0, .external_lex_state = 5},
  [656] = {.lex_state = 0, .external_lex_state = 5},
  [657] = {.lex_state = 0, .external_lex_state = 4},
  [658] = {.lex_state = 0, .external_lex_state = 5},
  [659] = {.lex_state = 0, .external_lex_state = 4},
  [660] = {.lex_state = 0, .external_lex_state = 4},
  [661] = {.lex_state = 0, .external_lex_state = 11},
  [662] = {.lex_state = 0, .external_lex_state = 5},
  [663] = {.lex_state = 0, .external_lex_state = 5},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 41},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0, .external_lex_state = 5},
  [668] = {.lex_state = 0, .external_lex_state = 5},
  [669] = {.lex_state = 0, .external_lex_state = 10},
  [670] = {.lex_state = 41},
  [671] = {.lex_state = 41},
  [672] = {.lex_state = 0, .external_lex_state = 5},
  [673] = {.lex_state = 0, .external_lex_state = 5},
  [674] = {.lex_state = 0, .external_lex_state = 5},
  [675] = {.lex_state = 0, .external_lex_state = 4},
  [676] = {.lex_state = 0, .external_lex_state = 5},
  [677] = {.lex_state = 0, .external_lex_state = 5},
  [678] = {.lex_state = 0, .external_lex_state = 5},
  [679] = {.lex_state = 0, .external_lex_state = 4},
  [680] = {.lex_state = 0, .external_lex_state = 4},
  [681] = {.lex_state = 0, .external_lex_state = 5},
  [682] = {.lex_state = 0, .external_lex_state = 5},
  [683] = {.lex_state = 0, .external_lex_state = 4},
  [684] = {.lex_state = 41},
  [685] = {.lex_state = 0, .external_lex_state = 5},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0, .external_lex_state = 10},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0, .external_lex_state = 4},
  [690] = {.lex_state = 41},
  [691] = {.lex_state = 0, .external_lex_state = 10},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0, .external_lex_state = 10},
  [694] = {.lex_state = 0},
};

enum {
  ts_external_token__quoted_template_start = 0,
  ts_external_token__quoted_template_end = 1,
  ts_external_token__template_literal_chunk = 2,
  ts_external_token__template_interpolation_start = 3,
  ts_external_token__template_interpolation_end = 4,
  ts_external_token__template_directive_start = 5,
  ts_external_token__template_directive_end = 6,
  ts_external_token__heredoc_identifier = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__quoted_template_start] = sym__quoted_template_start,
  [ts_external_token__quoted_template_end] = sym__quoted_template_end,
  [ts_external_token__template_literal_chunk] = sym__template_literal_chunk,
  [ts_external_token__template_interpolation_start] = sym__template_interpolation_start,
  [ts_external_token__template_interpolation_end] = sym__template_interpolation_end,
  [ts_external_token__template_directive_start] = sym__template_directive_start,
  [ts_external_token__template_directive_end] = sym__template_directive_end,
  [ts_external_token__heredoc_identifier] = sym__heredoc_identifier,
};

static const bool ts_external_scanner_states[12][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__quoted_template_start] = true,
    [ts_external_token__quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token__template_interpolation_start] = true,
    [ts_external_token__template_interpolation_end] = true,
    [ts_external_token__template_directive_start] = true,
    [ts_external_token__template_directive_end] = true,
    [ts_external_token__heredoc_identifier] = true,
  },
  [2] = {
    [ts_external_token__quoted_template_start] = true,
  },
  [3] = {
    [ts_external_token__quoted_template_start] = true,
    [ts_external_token__template_interpolation_end] = true,
  },
  [4] = {
    [ts_external_token__template_interpolation_end] = true,
  },
  [5] = {
    [ts_external_token__template_directive_end] = true,
  },
  [6] = {
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token__template_interpolation_start] = true,
    [ts_external_token__template_directive_start] = true,
  },
  [7] = {
    [ts_external_token__quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token__template_interpolation_start] = true,
    [ts_external_token__template_directive_start] = true,
  },
  [8] = {
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token__template_interpolation_start] = true,
    [ts_external_token__template_directive_start] = true,
    [ts_external_token__heredoc_identifier] = true,
  },
  [9] = {
    [ts_external_token__quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
  },
  [10] = {
    [ts_external_token__heredoc_identifier] = true,
  },
  [11] = {
    [ts_external_token__quoted_template_end] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_numeric_lit_token1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null_lit] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym__legacy_index_token1] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [anon_sym_LBRACK_STAR_RBRACK] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_ellipsis] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_LT_LT_DASH] = ACTIONS(1),
    [sym__strip_marker] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym__quoted_template_start] = ACTIONS(1),
    [sym__quoted_template_end] = ACTIONS(1),
    [sym__template_literal_chunk] = ACTIONS(1),
    [sym__template_interpolation_start] = ACTIONS(1),
    [sym__template_interpolation_end] = ACTIONS(1),
    [sym__template_directive_start] = ACTIONS(1),
    [sym__template_directive_end] = ACTIONS(1),
    [sym__heredoc_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(694),
    [sym_body] = STATE(692),
    [sym_attribute] = STATE(406),
    [sym_block] = STATE(406),
    [sym_object] = STATE(692),
    [sym__object_start] = STATE(15),
    [aux_sym_body_repeat1] = STATE(406),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(13), 1,
      sym_object_elem,
    STATE(73), 1,
      sym__for_intro,
    STATE(204), 1,
      sym__object_end,
    STATE(588), 1,
      sym__object_elems,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(512), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [105] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(13), 1,
      sym_object_elem,
    STATE(53), 1,
      sym__for_intro,
    STATE(279), 1,
      sym__object_end,
    STATE(618), 1,
      sym__object_elems,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(512), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [210] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(13), 1,
      sym_object_elem,
    STATE(87), 1,
      sym__for_intro,
    STATE(342), 1,
      sym__object_end,
    STATE(573), 1,
      sym__object_elems,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(512), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [315] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(13), 1,
      sym_object_elem,
    STATE(51), 1,
      sym__for_intro,
    STATE(324), 1,
      sym__object_end,
    STATE(572), 1,
      sym__object_elems,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(512), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [420] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(13), 1,
      sym_object_elem,
    STATE(67), 1,
      sym__for_intro,
    STATE(151), 1,
      sym__object_end,
    STATE(582), 1,
      sym__object_elems,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(512), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [525] = 28,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(61), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(67), 1,
      sym_null_lit,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_LT_LT,
    ACTIONS(82), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(85), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(7), 1,
      aux_sym__object_elems_repeat1,
    STATE(11), 1,
      sym__tuple_start,
    STATE(35), 1,
      sym__comma,
    STATE(349), 1,
      sym_object_elem,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(76), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(512), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [627] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(76), 1,
      sym__for_intro,
    STATE(285), 1,
      sym__tuple_end,
    STATE(596), 1,
      sym__tuple_elems,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(414), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [729] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    STATE(2), 1,
      sym__object_start,
    STATE(7), 1,
      aux_sym__object_elems_repeat1,
    STATE(11), 1,
      sym__tuple_start,
    STATE(22), 1,
      sym__comma,
    STATE(349), 1,
      sym_object_elem,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(512), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [831] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(50), 1,
      sym__for_intro,
    STATE(167), 1,
      sym__tuple_end,
    STATE(603), 1,
      sym__tuple_elems,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(414), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [933] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(72), 1,
      sym__for_intro,
    STATE(193), 1,
      sym__tuple_end,
    STATE(590), 1,
      sym__tuple_elems,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(414), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1035] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(48), 1,
      sym__for_intro,
    STATE(253), 1,
      sym__tuple_end,
    STATE(617), 1,
      sym__tuple_elems,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(414), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1137] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      aux_sym__object_elems_repeat1,
    STATE(11), 1,
      sym__tuple_start,
    STATE(25), 1,
      sym__comma,
    STATE(349), 1,
      sym_object_elem,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(512), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1239] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(46), 1,
      sym__for_intro,
    STATE(313), 1,
      sym__tuple_end,
    STATE(613), 1,
      sym__tuple_elems,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(414), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1341] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(13), 1,
      sym_object_elem,
    STATE(204), 1,
      sym__object_end,
    STATE(588), 1,
      sym__object_elems,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(512), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1440] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(289), 1,
      sym__function_call_end,
    STATE(612), 1,
      sym__function_arguments,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(408), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1536] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym__function_call_end,
    STATE(610), 1,
      sym__function_arguments,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(408), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1632] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(196), 1,
      sym__function_call_end,
    STATE(587), 1,
      sym__function_arguments,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(408), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1728] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(274), 1,
      sym__function_call_end,
    STATE(571), 1,
      sym__function_arguments,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(408), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1824] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(306), 1,
      sym__function_call_end,
    STATE(636), 1,
      sym__function_arguments,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(408), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1920] = 25,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(138), 1,
      sym__strip_marker,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    ACTIONS(142), 1,
      sym__template_interpolation_end,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(687), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(344), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(549), 2,
      sym__expression,
      sym_conditional,
    STATE(328), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(221), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2013] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(350), 1,
      sym_object_elem,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(512), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2106] = 25,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    ACTIONS(146), 1,
      sym__strip_marker,
    ACTIONS(148), 1,
      sym__template_interpolation_end,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(687), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(344), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(500), 2,
      sym__expression,
      sym_conditional,
    STATE(328), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(221), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2199] = 25,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    ACTIONS(150), 1,
      sym__strip_marker,
    ACTIONS(152), 1,
      sym__template_interpolation_end,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(687), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(344), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(564), 2,
      sym__expression,
      sym_conditional,
    STATE(328), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(221), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2292] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(350), 1,
      sym_object_elem,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(512), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2385] = 25,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    ACTIONS(156), 1,
      sym__strip_marker,
    ACTIONS(158), 1,
      sym__template_interpolation_end,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(687), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(344), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(566), 2,
      sym__expression,
      sym_conditional,
    STATE(328), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(221), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2478] = 25,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    ACTIONS(160), 1,
      sym__strip_marker,
    ACTIONS(162), 1,
      sym__template_interpolation_end,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(687), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(344), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(555), 2,
      sym__expression,
      sym_conditional,
    STATE(328), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(221), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2571] = 25,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    ACTIONS(164), 1,
      sym__strip_marker,
    ACTIONS(166), 1,
      sym__template_interpolation_end,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(687), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(344), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(539), 2,
      sym__expression,
      sym_conditional,
    STATE(328), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(221), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2664] = 9,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    STATE(162), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(172), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(168), 18,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [2724] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(531), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2814] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(495), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2904] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(531), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2994] = 19,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(190), 1,
      anon_sym_DOT_STAR,
    ACTIONS(192), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(202), 1,
      anon_sym_AMP_AMP,
    ACTIONS(204), 1,
      anon_sym_PIPE_PIPE,
    STATE(162), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(172), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(196), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(198), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(200), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(184), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(182), 8,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LT_LT_DASH,
  [3074] = 7,
    STATE(162), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(208), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(206), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3130] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(350), 1,
      sym_object_elem,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(512), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3220] = 14,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(202), 1,
      anon_sym_AMP_AMP,
    STATE(162), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(172), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(196), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(198), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(200), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(168), 11,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3290] = 13,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    STATE(162), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(172), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(196), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(198), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(200), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(168), 12,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3358] = 12,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    STATE(162), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(172), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(196), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(198), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(168), 14,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3424] = 10,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    STATE(162), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(172), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(168), 16,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3486] = 7,
    STATE(162), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(168), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3542] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(495), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3632] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(575), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3719] = 23,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(410), 2,
      sym__expression,
      sym_conditional,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(180), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3806] = 23,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(14), 1,
      sym__tuple_start,
    STATE(693), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(284), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(321), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(322), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(326), 2,
      sym_tuple,
      sym_object,
    STATE(511), 2,
      sym__expression,
      sym_conditional,
    STATE(331), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(219), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3893] = 23,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(405), 2,
      sym__expression,
      sym_conditional,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(180), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3980] = 23,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(424), 2,
      sym__expression,
      sym_conditional,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(180), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4067] = 23,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(404), 2,
      sym__expression,
      sym_conditional,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(180), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4154] = 23,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(425), 2,
      sym__expression,
      sym_conditional,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(180), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4241] = 23,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(412), 2,
      sym__expression,
      sym_conditional,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(180), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4328] = 23,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(426), 2,
      sym__expression,
      sym_conditional,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(180), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4415] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(574), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4502] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(643), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4589] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(579), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4676] = 23,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(669), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(152), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(153), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(155), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(348), 2,
      sym__expression,
      sym_conditional,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(33), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4763] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(584), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4850] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(583), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4937] = 23,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(687), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(344), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(550), 2,
      sym__expression,
      sym_conditional,
    STATE(328), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(221), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5024] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(608), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5111] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(581), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5198] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(606), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5285] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(614), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5372] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(644), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5459] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(531), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5546] = 23,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(14), 1,
      sym__tuple_start,
    STATE(693), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(284), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(321), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(322), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(326), 2,
      sym_tuple,
      sym_object,
    STATE(567), 2,
      sym__expression,
      sym_conditional,
    STATE(331), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(219), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5633] = 23,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(669), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(152), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(153), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(155), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(347), 2,
      sym__expression,
      sym_conditional,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(33), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5720] = 23,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(14), 1,
      sym__tuple_start,
    STATE(693), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(284), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(321), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(322), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(326), 2,
      sym_tuple,
      sym_object,
    STATE(526), 2,
      sym__expression,
      sym_conditional,
    STATE(331), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(219), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5807] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(593), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5894] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(633), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5981] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(580), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6068] = 23,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(411), 2,
      sym__expression,
      sym_conditional,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(180), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6155] = 23,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(422), 2,
      sym__expression,
      sym_conditional,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(180), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6242] = 23,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(420), 2,
      sym__expression,
      sym_conditional,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(180), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6329] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(619), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6416] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(565), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6503] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(615), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6590] = 23,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(413), 2,
      sym__expression,
      sym_conditional,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(180), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6677] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(630), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6764] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(475), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6851] = 23,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(14), 1,
      sym__tuple_start,
    STATE(693), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(284), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(321), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(322), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(326), 2,
      sym_tuple,
      sym_object,
    STATE(504), 2,
      sym__expression,
      sym_conditional,
    STATE(331), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(219), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6938] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(628), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7025] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(640), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7112] = 23,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(14), 1,
      sym__tuple_start,
    STATE(693), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(284), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(321), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(322), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(326), 2,
      sym_tuple,
      sym_object,
    STATE(506), 2,
      sym__expression,
      sym_conditional,
    STATE(331), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(219), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7199] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(570), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7286] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(400), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7373] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(495), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7460] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(635), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7547] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(600), 2,
      sym__expression,
      sym_conditional,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7634] = 23,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(14), 1,
      sym__tuple_start,
    STATE(693), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(284), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(321), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(322), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(326), 2,
      sym_tuple,
      sym_object,
    STATE(507), 2,
      sym__expression,
      sym_conditional,
    STATE(331), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(219), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7721] = 23,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(14), 1,
      sym__tuple_start,
    STATE(693), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(284), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(321), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(322), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(326), 2,
      sym_tuple,
      sym_object,
    STATE(545), 2,
      sym__expression,
      sym_conditional,
    STATE(331), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(219), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7808] = 8,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      anon_sym_DOT,
    STATE(162), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(94), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(286), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(284), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [7864] = 8,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      anon_sym_DOT,
    STATE(162), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(93), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(290), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(288), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [7920] = 8,
    ACTIONS(296), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      anon_sym_DOT,
    STATE(162), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(92), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(294), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(292), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [7976] = 8,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      anon_sym_DOT,
    STATE(162), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(92), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(304), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(302), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [8032] = 8,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      anon_sym_DOT,
    STATE(162), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(92), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(308), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(306), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [8088] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(133), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8171] = 22,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(669), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(152), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(153), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(155), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8254] = 22,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(687), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(344), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(222), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8337] = 22,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(14), 1,
      sym__tuple_start,
    STATE(693), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(284), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(321), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(322), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(326), 2,
      sym_tuple,
      sym_object,
    STATE(331), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(235), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8420] = 22,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(14), 1,
      sym__tuple_start,
    STATE(693), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(284), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(321), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(322), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(326), 2,
      sym_tuple,
      sym_object,
    STATE(331), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(218), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8503] = 22,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(14), 1,
      sym__tuple_start,
    STATE(693), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(284), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(321), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(322), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(326), 2,
      sym_tuple,
      sym_object,
    STATE(331), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(230), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8586] = 22,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(14), 1,
      sym__tuple_start,
    STATE(693), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(284), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(321), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(322), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(326), 2,
      sym_tuple,
      sym_object,
    STATE(331), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(220), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8669] = 22,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(14), 1,
      sym__tuple_start,
    STATE(693), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(284), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(321), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(322), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(326), 2,
      sym_tuple,
      sym_object,
    STATE(331), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(234), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8752] = 22,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(687), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(344), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(231), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8835] = 22,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(14), 1,
      sym__tuple_start,
    STATE(693), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(284), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(321), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(322), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(326), 2,
      sym_tuple,
      sym_object,
    STATE(331), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(237), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8918] = 22,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(687), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(344), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(229), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9001] = 22,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(687), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(344), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(217), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9084] = 22,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(687), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(344), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9167] = 22,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(687), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(344), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(226), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9250] = 22,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(687), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(344), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(225), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9333] = 22,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9416] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9499] = 22,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(183), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9582] = 22,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9665] = 22,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(178), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9748] = 22,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(184), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9831] = 22,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(181), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9914] = 22,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(691), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(270), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_tuple,
      sym_object,
    STATE(282), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9997] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(134), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10080] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(130), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10163] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10246] = 22,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(14), 1,
      sym__tuple_start,
    STATE(693), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(284), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(321), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(322), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(326), 2,
      sym_tuple,
      sym_object,
    STATE(331), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(233), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10329] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(136), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10412] = 22,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(669), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(152), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(153), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(155), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(29), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10495] = 22,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(669), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(152), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(153), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(155), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(40), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10578] = 22,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(669), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(152), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(153), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(155), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(39), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10661] = 22,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(669), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(152), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(153), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(155), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10744] = 22,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(669), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(152), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(153), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(155), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(37), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10827] = 22,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(669), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(152), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(153), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(155), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(36), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10910] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(651), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(201), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(202), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(203), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 2,
      sym_tuple,
      sym_object,
    STATE(214), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10993] = 7,
    STATE(185), 1,
      sym__legacy_index,
    STATE(188), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(190), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(187), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(208), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11045] = 19,
    ACTIONS(184), 1,
      anon_sym_EQ,
    ACTIONS(310), 1,
      anon_sym_LBRACK,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(314), 1,
      anon_sym_DOT_STAR,
    ACTIONS(316), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(330), 1,
      anon_sym_AMP_AMP,
    ACTIONS(332), 1,
      anon_sym_PIPE_PIPE,
    STATE(185), 1,
      sym__legacy_index,
    STATE(188), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(320), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(324), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(326), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(328), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(190), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(187), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(182), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [11121] = 14,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(330), 1,
      anon_sym_AMP_AMP,
    STATE(185), 1,
      sym__legacy_index,
    STATE(188), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(320), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(324), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(326), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(328), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(190), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(170), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(187), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(168), 13,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [11187] = 13,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym__legacy_index,
    STATE(188), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(320), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(324), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(326), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(328), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(190), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(170), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(187), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(168), 14,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11251] = 12,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym__legacy_index,
    STATE(188), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(320), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(324), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(326), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(190), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(170), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(187), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(168), 16,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11313] = 10,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym__legacy_index,
    STATE(188), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(320), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(190), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(187), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 18,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11371] = 7,
    STATE(185), 1,
      sym__legacy_index,
    STATE(188), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(190), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(187), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11423] = 9,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym__legacy_index,
    STATE(188), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(320), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(190), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(187), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 20,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11479] = 8,
    ACTIONS(310), 1,
      anon_sym_LBRACK,
    ACTIONS(312), 1,
      anon_sym_DOT,
    STATE(185), 1,
      sym__legacy_index,
    STATE(188), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(142), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(286), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11531] = 8,
    ACTIONS(310), 1,
      anon_sym_LBRACK,
    ACTIONS(312), 1,
      anon_sym_DOT,
    STATE(185), 1,
      sym__legacy_index,
    STATE(188), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(141), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(290), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11583] = 8,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(337), 1,
      anon_sym_DOT,
    STATE(185), 1,
      sym__legacy_index,
    STATE(188), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(140), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(294), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11635] = 8,
    ACTIONS(310), 1,
      anon_sym_LBRACK,
    ACTIONS(312), 1,
      anon_sym_DOT,
    STATE(185), 1,
      sym__legacy_index,
    STATE(188), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(140), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(304), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11687] = 8,
    ACTIONS(310), 1,
      anon_sym_LBRACK,
    ACTIONS(312), 1,
      anon_sym_DOT,
    STATE(185), 1,
      sym__legacy_index,
    STATE(188), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(140), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(308), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(306), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11739] = 5,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(340), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11785] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(346), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11826] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(350), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11867] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(354), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11908] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(358), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11949] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(362), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11990] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(366), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12031] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(372), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(370), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12072] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(374), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12113] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(378), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12154] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(382), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12195] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(388), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(386), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12236] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(390), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12277] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(396), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(394), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12318] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(400), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(398), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12359] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(402), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12400] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(406), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12441] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(412), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(410), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12482] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(416), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(414), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12523] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(420), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(418), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12564] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(424), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(422), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12605] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(428), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(426), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12646] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(430), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12687] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(436), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(434), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12728] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(440), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(438), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12769] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(442), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12810] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(448), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(446), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12851] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(452), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(450), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12892] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(456), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(454), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12933] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(460), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(458), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12974] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(464), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(462), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13015] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(466), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13056] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(472), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(470), 20,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13097] = 5,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13140] = 14,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      anon_sym_AMP_AMP,
    STATE(255), 1,
      sym__legacy_index,
    STATE(256), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(170), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(478), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(482), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(484), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(486), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(254), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(249), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(168), 8,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [13200] = 10,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(255), 1,
      sym__legacy_index,
    STATE(256), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(478), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(254), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(249), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 13,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13252] = 7,
    STATE(255), 1,
      sym__legacy_index,
    STATE(256), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(254), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(249), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13298] = 18,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_DOT,
    ACTIONS(494), 1,
      anon_sym_DOT_STAR,
    ACTIONS(496), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(498), 1,
      anon_sym_PIPE_PIPE,
    STATE(255), 1,
      sym__legacy_index,
    STATE(256), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(478), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(482), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(484), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(486), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(254), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(249), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(182), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [13366] = 13,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(255), 1,
      sym__legacy_index,
    STATE(256), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(170), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(478), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(482), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(484), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(486), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(254), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(249), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(168), 9,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13424] = 7,
    STATE(255), 1,
      sym__legacy_index,
    STATE(256), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(254), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(249), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(208), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13470] = 9,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(255), 1,
      sym__legacy_index,
    STATE(256), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(478), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(254), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(249), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 15,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13520] = 12,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(255), 1,
      sym__legacy_index,
    STATE(256), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(170), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(478), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(482), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(484), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(254), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(249), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(168), 11,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13576] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(424), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13613] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(436), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13650] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(412), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13687] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(420), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13724] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13761] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(428), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13798] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13835] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(472), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(470), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13872] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(440), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13909] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(448), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13946] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(400), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13983] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(464), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(462), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14020] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(350), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14057] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(466), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14094] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(416), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14131] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(372), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14168] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14205] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14242] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14279] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14316] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(354), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14353] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(388), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(386), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14390] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(396), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14427] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14464] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(358), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14501] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(346), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14538] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14575] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(452), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14612] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(460), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(458), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14649] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14686] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(456), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(454), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14723] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14760] = 10,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    STATE(338), 1,
      sym__legacy_index,
    STATE(339), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(500), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(502), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(320), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(340), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 11,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [14810] = 13,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    STATE(316), 1,
      sym__legacy_index,
    STATE(317), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(170), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(514), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(516), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(315), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(318), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(168), 7,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [14866] = 18,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      anon_sym_DOT,
    ACTIONS(522), 1,
      anon_sym_DOT_STAR,
    ACTIONS(524), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(526), 1,
      anon_sym_AMP_AMP,
    ACTIONS(528), 1,
      anon_sym_PIPE_PIPE,
    STATE(316), 1,
      sym__legacy_index,
    STATE(317), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(514), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(516), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(315), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(182), 3,
      sym__template_directive_end,
      anon_sym_QMARK,
      sym__strip_marker,
    STATE(318), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [14932] = 10,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    STATE(316), 1,
      sym__legacy_index,
    STATE(317), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(315), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(318), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 11,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [14982] = 18,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      anon_sym_DOT,
    ACTIONS(534), 1,
      anon_sym_DOT_STAR,
    ACTIONS(536), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(544), 1,
      anon_sym_AMP_AMP,
    ACTIONS(546), 1,
      anon_sym_PIPE_PIPE,
    STATE(338), 1,
      sym__legacy_index,
    STATE(339), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(500), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(502), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(538), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(540), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(542), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(320), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(182), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym__strip_marker,
    STATE(340), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [15048] = 7,
    STATE(338), 1,
      sym__legacy_index,
    STATE(339), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(320), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(340), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(208), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15092] = 8,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_DOT,
    STATE(255), 1,
      sym__legacy_index,
    STATE(256), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(290), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(224), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(288), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15138] = 8,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_DOT,
    STATE(255), 1,
      sym__legacy_index,
    STATE(256), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(236), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(302), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15184] = 14,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(544), 1,
      anon_sym_AMP_AMP,
    STATE(338), 1,
      sym__legacy_index,
    STATE(339), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(170), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(500), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(502), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(538), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(540), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(542), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(320), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(340), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(168), 6,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15242] = 13,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    STATE(338), 1,
      sym__legacy_index,
    STATE(339), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(170), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(500), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(502), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(538), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(540), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(542), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(320), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(340), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(168), 7,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15298] = 12,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    STATE(338), 1,
      sym__legacy_index,
    STATE(339), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(170), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(500), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(502), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(538), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(540), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(320), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(340), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(168), 9,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15352] = 8,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_DOT,
    STATE(255), 1,
      sym__legacy_index,
    STATE(256), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(236), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(306), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15398] = 7,
    STATE(338), 1,
      sym__legacy_index,
    STATE(339), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(320), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(340), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15442] = 12,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    STATE(316), 1,
      sym__legacy_index,
    STATE(317), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(170), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(514), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(315), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(318), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(168), 9,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15496] = 9,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    STATE(338), 1,
      sym__legacy_index,
    STATE(339), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(502), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(320), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(340), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 13,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15544] = 8,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_DOT,
    STATE(255), 1,
      sym__legacy_index,
    STATE(256), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(286), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(228), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(284), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15590] = 7,
    STATE(316), 1,
      sym__legacy_index,
    STATE(317), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(315), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(318), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(208), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15634] = 7,
    STATE(316), 1,
      sym__legacy_index,
    STATE(317), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(315), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(318), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15678] = 14,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(526), 1,
      anon_sym_AMP_AMP,
    STATE(316), 1,
      sym__legacy_index,
    STATE(317), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(170), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(514), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(516), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(315), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(318), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(168), 6,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15736] = 8,
    ACTIONS(548), 1,
      anon_sym_LBRACK,
    ACTIONS(551), 1,
      anon_sym_DOT,
    STATE(255), 1,
      sym__legacy_index,
    STATE(256), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(294), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(236), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(292), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15782] = 9,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    STATE(316), 1,
      sym__legacy_index,
    STATE(317), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(315), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(318), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(170), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 13,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15830] = 8,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      anon_sym_DOT,
    STATE(316), 1,
      sym__legacy_index,
    STATE(317), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(286), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(246), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(284), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15874] = 8,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      anon_sym_DOT,
    STATE(338), 1,
      sym__legacy_index,
    STATE(339), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(241), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(306), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15918] = 8,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      anon_sym_DOT,
    STATE(338), 1,
      sym__legacy_index,
    STATE(339), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(241), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(302), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15962] = 8,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(557), 1,
      anon_sym_DOT,
    STATE(338), 1,
      sym__legacy_index,
    STATE(339), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(294), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(241), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(292), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [16006] = 8,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      anon_sym_DOT,
    STATE(316), 1,
      sym__legacy_index,
    STATE(317), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(245), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(302), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [16050] = 8,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      anon_sym_DOT,
    STATE(338), 1,
      sym__legacy_index,
    STATE(339), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(290), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(240), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(288), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [16094] = 8,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      anon_sym_DOT,
    STATE(338), 1,
      sym__legacy_index,
    STATE(339), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(286), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(239), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(284), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [16138] = 8,
    ACTIONS(560), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 1,
      anon_sym_DOT,
    STATE(316), 1,
      sym__legacy_index,
    STATE(317), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(294), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(245), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(292), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [16182] = 8,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      anon_sym_DOT,
    STATE(316), 1,
      sym__legacy_index,
    STATE(317), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(245), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(306), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [16226] = 8,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      anon_sym_DOT,
    STATE(316), 1,
      sym__legacy_index,
    STATE(317), 1,
      sym__new_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(290), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(242), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(288), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [16270] = 5,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16307] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(412), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16338] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16369] = 5,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [16404] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(448), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16435] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(440), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16466] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(428), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16497] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(424), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16528] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(420), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16559] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(372), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16590] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(396), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16621] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(388), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(386), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16652] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16683] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(350), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16714] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16745] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(436), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16776] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16807] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(456), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(454), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16838] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(460), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(458), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16869] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(466), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16900] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(472), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(470), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16931] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(400), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16962] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16993] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17024] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17055] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17086] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(464), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(462), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17117] = 5,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17152] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(452), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17183] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(416), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17214] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(358), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17245] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17276] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(354), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17307] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(346), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17338] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17369] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(472), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(470), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17398] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17427] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(440), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17456] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(448), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17485] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(452), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17514] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(416), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17543] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(464), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(462), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17572] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(372), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17601] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17630] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(472), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(470), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17659] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(466), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17688] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(388), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(386), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17717] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(396), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17746] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17775] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(350), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17804] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17833] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(436), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17862] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17891] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(456), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(454), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17920] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(460), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(458), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17949] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(460), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(458), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [17978] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(466), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18007] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18036] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(464), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(462), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18065] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(452), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18094] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(456), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(454), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18123] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(448), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18152] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18181] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(416), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18210] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(436), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18239] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(440), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18268] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18297] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(428), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18326] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(424), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18355] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(420), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18384] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(412), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18413] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(400), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18442] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(428), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18471] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18500] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18529] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(350), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18558] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18587] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(358), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18616] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(346), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18645] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18674] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18703] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(354), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18732] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18761] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18790] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18819] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(358), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18848] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(396), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18877] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(354), 15,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18906] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(388), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(386), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18935] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(372), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18964] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(424), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [18993] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(420), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [19022] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(412), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [19051] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(346), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [19080] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [19109] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [19138] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [19167] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [19196] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(400), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [19225] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(574), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(572), 11,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19251] = 4,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(578), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(576), 10,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19279] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(584), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(582), 10,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19304] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(588), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(586), 10,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19329] = 11,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(594), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(378), 1,
      sym__template_else_intro,
    STATE(446), 1,
      sym__template_if_end,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19368] = 11,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(596), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(361), 1,
      sym__template_else_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    STATE(534), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19407] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(600), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(598), 8,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19430] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(604), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(602), 8,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19453] = 11,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(606), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(370), 1,
      sym__template_else_intro,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    STATE(485), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(357), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19492] = 11,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(594), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(372), 1,
      sym__template_else_intro,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    STATE(491), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(351), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19531] = 11,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(606), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(376), 1,
      sym__template_else_intro,
    STATE(454), 1,
      sym__template_if_end,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19570] = 11,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(596), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(389), 1,
      sym__template_else_intro,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    STATE(521), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(352), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19609] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(608), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    STATE(493), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19645] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(610), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    STATE(533), 1,
      sym__template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19681] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(612), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    STATE(547), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(362), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19717] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(612), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    STATE(556), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19753] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(610), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    STATE(519), 1,
      sym__template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(360), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19789] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(612), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    STATE(548), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19825] = 10,
    ACTIONS(614), 1,
      sym__quoted_template_end,
    ACTIONS(616), 1,
      sym__template_literal_chunk,
    ACTIONS(618), 1,
      sym__template_interpolation_start,
    ACTIONS(620), 1,
      sym__template_directive_start,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(381), 1,
      sym__template_for_start,
    STATE(415), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(377), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19861] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(622), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    STATE(489), 1,
      sym__template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(369), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19897] = 10,
    ACTIONS(616), 1,
      sym__template_literal_chunk,
    ACTIONS(618), 1,
      sym__template_interpolation_start,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(624), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(381), 1,
      sym__template_for_start,
    STATE(415), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(377), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19933] = 11,
    ACTIONS(616), 1,
      sym__template_literal_chunk,
    ACTIONS(618), 1,
      sym__template_interpolation_start,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(626), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(381), 1,
      sym__template_for_start,
    STATE(415), 1,
      aux_sym_template_literal_repeat1,
    STATE(434), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(367), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [19971] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(622), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(430), 1,
      sym__template_for_end,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20007] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(628), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(453), 1,
      sym__template_if_end,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(379), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20043] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(630), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(449), 1,
      sym__template_for_end,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20079] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(608), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(438), 1,
      sym__template_if_end,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(359), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20115] = 10,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(632), 1,
      sym__template_literal_chunk,
    ACTIONS(634), 1,
      sym__template_interpolation_start,
    ACTIONS(636), 1,
      sym__heredoc_identifier,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(366), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(375), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20151] = 11,
    ACTIONS(616), 1,
      sym__template_literal_chunk,
    ACTIONS(618), 1,
      sym__template_interpolation_start,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(638), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(381), 1,
      sym__template_for_start,
    STATE(415), 1,
      aux_sym_template_literal_repeat1,
    STATE(458), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(393), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [20189] = 10,
    ACTIONS(640), 1,
      sym__template_literal_chunk,
    ACTIONS(643), 1,
      sym__template_interpolation_start,
    ACTIONS(646), 1,
      sym__template_directive_start,
    ACTIONS(649), 1,
      sym__heredoc_identifier,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(366), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(375), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20225] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(628), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(462), 1,
      sym__template_if_end,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(383), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20261] = 10,
    ACTIONS(646), 1,
      sym__template_directive_start,
    ACTIONS(649), 1,
      sym__quoted_template_end,
    ACTIONS(651), 1,
      sym__template_literal_chunk,
    ACTIONS(654), 1,
      sym__template_interpolation_start,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(381), 1,
      sym__template_for_start,
    STATE(415), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(377), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20297] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(608), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    STATE(484), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(380), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20333] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(628), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    STATE(499), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20369] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(608), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(467), 1,
      sym__template_if_end,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20405] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(630), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(473), 1,
      sym__template_for_end,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(371), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20441] = 10,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(632), 1,
      sym__template_literal_chunk,
    ACTIONS(634), 1,
      sym__template_interpolation_start,
    ACTIONS(657), 1,
      sym__heredoc_identifier,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(366), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(375), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20477] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(628), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    STATE(481), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20513] = 11,
    ACTIONS(616), 1,
      sym__template_literal_chunk,
    ACTIONS(618), 1,
      sym__template_interpolation_start,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(659), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(381), 1,
      sym__template_for_start,
    STATE(415), 1,
      aux_sym_template_literal_repeat1,
    STATE(457), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(385), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [20551] = 10,
    ACTIONS(616), 1,
      sym__template_literal_chunk,
    ACTIONS(618), 1,
      sym__template_interpolation_start,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(661), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(381), 1,
      sym__template_for_start,
    STATE(415), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(377), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20587] = 10,
    ACTIONS(616), 1,
      sym__template_literal_chunk,
    ACTIONS(618), 1,
      sym__template_interpolation_start,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(663), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(381), 1,
      sym__template_for_start,
    STATE(415), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(377), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20623] = 11,
    ACTIONS(616), 1,
      sym__template_literal_chunk,
    ACTIONS(618), 1,
      sym__template_interpolation_start,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(665), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(381), 1,
      sym__template_for_start,
    STATE(415), 1,
      aux_sym_template_literal_repeat1,
    STATE(435), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(365), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [20661] = 10,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(632), 1,
      sym__template_literal_chunk,
    ACTIONS(634), 1,
      sym__template_interpolation_start,
    ACTIONS(667), 1,
      sym__heredoc_identifier,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(366), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(375), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20697] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(612), 1,
      sym__template_directive_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    STATE(535), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(364), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20733] = 10,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(632), 1,
      sym__template_literal_chunk,
    ACTIONS(634), 1,
      sym__template_interpolation_start,
    ACTIONS(669), 1,
      sym__heredoc_identifier,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(366), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(375), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20769] = 11,
    ACTIONS(616), 1,
      sym__template_literal_chunk,
    ACTIONS(618), 1,
      sym__template_interpolation_start,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(671), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(381), 1,
      sym__template_for_start,
    STATE(415), 1,
      aux_sym_template_literal_repeat1,
    STATE(472), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(386), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [20807] = 10,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(632), 1,
      sym__template_literal_chunk,
    ACTIONS(634), 1,
      sym__template_interpolation_start,
    ACTIONS(673), 1,
      sym__heredoc_identifier,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(366), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(375), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20843] = 10,
    ACTIONS(616), 1,
      sym__template_literal_chunk,
    ACTIONS(618), 1,
      sym__template_interpolation_start,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(675), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(381), 1,
      sym__template_for_start,
    STATE(415), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(377), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20879] = 9,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(632), 1,
      sym__template_literal_chunk,
    ACTIONS(634), 1,
      sym__template_interpolation_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(366), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(390), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20912] = 9,
    ACTIONS(646), 1,
      sym__template_directive_start,
    ACTIONS(677), 1,
      sym__template_literal_chunk,
    ACTIONS(680), 1,
      sym__template_interpolation_start,
    STATE(358), 1,
      sym__template_if_intro,
    STATE(363), 1,
      sym__template_for_start,
    STATE(474), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(503), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20945] = 9,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(632), 1,
      sym__template_literal_chunk,
    ACTIONS(634), 1,
      sym__template_interpolation_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(366), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(373), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20978] = 9,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(632), 1,
      sym__template_literal_chunk,
    ACTIONS(634), 1,
      sym__template_interpolation_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(366), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(392), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21011] = 9,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(632), 1,
      sym__template_literal_chunk,
    ACTIONS(634), 1,
      sym__template_interpolation_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(366), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(382), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21044] = 9,
    ACTIONS(620), 1,
      sym__template_directive_start,
    ACTIONS(632), 1,
      sym__template_literal_chunk,
    ACTIONS(634), 1,
      sym__template_interpolation_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(366), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(388), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21077] = 3,
    ACTIONS(574), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(572), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [21097] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    STATE(544), 1,
      sym__block_end,
    STATE(625), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(406), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21119] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    STATE(527), 1,
      sym__block_end,
    STATE(622), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(406), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21141] = 8,
    ACTIONS(687), 1,
      anon_sym_EQ,
    ACTIONS(689), 1,
      anon_sym_LBRACE,
    ACTIONS(691), 1,
      sym_identifier,
    ACTIONS(693), 1,
      sym__quoted_template_start,
    STATE(402), 1,
      sym__block_start,
    STATE(409), 1,
      aux_sym_block_repeat1,
    STATE(505), 1,
      sym_string_lit,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21167] = 7,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    ACTIONS(697), 1,
      anon_sym_if,
    ACTIONS(699), 1,
      sym_ellipsis,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    STATE(260), 1,
      sym__object_end,
    STATE(591), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21190] = 7,
    ACTIONS(697), 1,
      anon_sym_if,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(703), 1,
      anon_sym_RBRACE,
    ACTIONS(705), 1,
      sym_ellipsis,
    STATE(296), 1,
      sym__object_end,
    STATE(611), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21213] = 4,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(707), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(407), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21230] = 4,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(709), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(407), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21247] = 7,
    ACTIONS(714), 1,
      anon_sym_RPAREN,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    ACTIONS(718), 1,
      sym_ellipsis,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    STATE(31), 1,
      sym__comma,
    STATE(429), 1,
      aux_sym__function_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21270] = 7,
    ACTIONS(691), 1,
      sym_identifier,
    ACTIONS(693), 1,
      sym__quoted_template_start,
    ACTIONS(722), 1,
      anon_sym_LBRACE,
    STATE(401), 1,
      sym__block_start,
    STATE(423), 1,
      aux_sym_block_repeat1,
    STATE(505), 1,
      sym_string_lit,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21293] = 7,
    ACTIONS(697), 1,
      anon_sym_if,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
    ACTIONS(726), 1,
      sym_ellipsis,
    STATE(330), 1,
      sym__object_end,
    STATE(604), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21316] = 7,
    ACTIONS(697), 1,
      anon_sym_if,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
    ACTIONS(730), 1,
      sym_ellipsis,
    STATE(216), 1,
      sym__object_end,
    STATE(589), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21339] = 7,
    ACTIONS(697), 1,
      anon_sym_if,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    ACTIONS(734), 1,
      sym_ellipsis,
    STATE(158), 1,
      sym__object_end,
    STATE(646), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21362] = 6,
    ACTIONS(697), 1,
      anon_sym_if,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(736), 1,
      anon_sym_RBRACK,
    STATE(312), 1,
      sym__tuple_end,
    STATE(637), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21382] = 6,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym__comma,
    STATE(483), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21402] = 4,
    ACTIONS(744), 1,
      sym__template_literal_chunk,
    STATE(419), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(742), 3,
      sym__quoted_template_end,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [21418] = 5,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      sym__comma,
    STATE(416), 1,
      aux_sym__function_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(746), 2,
      anon_sym_RPAREN,
      sym_ellipsis,
  [21436] = 6,
    ACTIONS(751), 1,
      anon_sym_for,
    ACTIONS(753), 1,
      anon_sym_if,
    ACTIONS(755), 1,
      sym__strip_marker,
    ACTIONS(757), 1,
      anon_sym_else,
    ACTIONS(759), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21456] = 6,
    ACTIONS(751), 1,
      anon_sym_for,
    ACTIONS(753), 1,
      anon_sym_if,
    ACTIONS(757), 1,
      anon_sym_else,
    ACTIONS(761), 1,
      sym__strip_marker,
    ACTIONS(763), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21476] = 4,
    ACTIONS(767), 1,
      sym__template_literal_chunk,
    STATE(419), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(765), 3,
      sym__quoted_template_end,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [21492] = 6,
    ACTIONS(697), 1,
      anon_sym_if,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(770), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      sym__tuple_end,
    STATE(645), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21512] = 6,
    ACTIONS(751), 1,
      anon_sym_for,
    ACTIONS(753), 1,
      anon_sym_if,
    ACTIONS(757), 1,
      anon_sym_else,
    ACTIONS(772), 1,
      sym__strip_marker,
    ACTIONS(774), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21532] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(572), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [21544] = 6,
    ACTIONS(776), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym__quoted_template_start,
    STATE(423), 1,
      aux_sym_block_repeat1,
    STATE(505), 1,
      sym_string_lit,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21564] = 6,
    ACTIONS(697), 1,
      anon_sym_if,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(784), 1,
      anon_sym_RBRACK,
    STATE(299), 1,
      sym__tuple_end,
    STATE(623), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21584] = 6,
    ACTIONS(697), 1,
      anon_sym_if,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(786), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      sym__tuple_end,
    STATE(602), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21604] = 6,
    ACTIONS(697), 1,
      anon_sym_if,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(788), 1,
      anon_sym_RBRACK,
    STATE(166), 1,
      sym__tuple_end,
    STATE(642), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21624] = 4,
    ACTIONS(790), 1,
      sym__template_literal_chunk,
    STATE(427), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(765), 3,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [21640] = 4,
    ACTIONS(793), 1,
      sym__template_literal_chunk,
    STATE(427), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(742), 3,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [21656] = 6,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    ACTIONS(799), 1,
      sym_ellipsis,
    STATE(41), 1,
      sym__comma,
    STATE(416), 1,
      aux_sym__function_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21676] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(801), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [21687] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(803), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [21698] = 5,
    ACTIONS(697), 1,
      anon_sym_if,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      sym__object_end,
    STATE(634), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21715] = 5,
    ACTIONS(751), 1,
      anon_sym_for,
    ACTIONS(753), 1,
      anon_sym_if,
    ACTIONS(774), 1,
      anon_sym_endif,
    ACTIONS(807), 1,
      sym__strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21732] = 3,
    ACTIONS(809), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(811), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [21745] = 3,
    ACTIONS(813), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(811), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [21758] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(815), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [21769] = 5,
    ACTIONS(697), 1,
      anon_sym_if,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
    STATE(334), 1,
      sym__object_end,
    STATE(601), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21786] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(819), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [21797] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(821), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [21808] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(823), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [21819] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(825), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [21830] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(823), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [21841] = 5,
    ACTIONS(751), 1,
      anon_sym_for,
    ACTIONS(753), 1,
      anon_sym_if,
    ACTIONS(827), 1,
      sym__strip_marker,
    ACTIONS(829), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21858] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(831), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [21869] = 5,
    ACTIONS(751), 1,
      anon_sym_for,
    ACTIONS(753), 1,
      anon_sym_if,
    ACTIONS(759), 1,
      anon_sym_endif,
    ACTIONS(833), 1,
      sym__strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21886] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(835), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [21897] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(821), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [21908] = 5,
    ACTIONS(837), 1,
      anon_sym_for,
    ACTIONS(839), 1,
      anon_sym_if,
    ACTIONS(841), 1,
      anon_sym_else,
    ACTIONS(843), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21925] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(801), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [21936] = 5,
    ACTIONS(751), 1,
      anon_sym_for,
    ACTIONS(753), 1,
      anon_sym_if,
    ACTIONS(763), 1,
      anon_sym_endif,
    ACTIONS(845), 1,
      sym__strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21953] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(847), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [21964] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(849), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [21975] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(819), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [21986] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(835), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [21997] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(851), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22008] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(853), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22019] = 3,
    ACTIONS(855), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(811), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22032] = 3,
    ACTIONS(857), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(811), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22045] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(831), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22056] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(859), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22067] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(859), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22078] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(861), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22089] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(863), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22100] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(851), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22111] = 5,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(868), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      sym__comma,
    STATE(465), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22128] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(803), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22139] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(870), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22150] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(863), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22161] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(815), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22172] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(872), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22183] = 5,
    ACTIONS(697), 1,
      anon_sym_if,
    ACTIONS(874), 1,
      anon_sym_RBRACE,
    STATE(258), 1,
      sym__object_end,
    STATE(595), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22200] = 3,
    ACTIONS(876), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(811), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22213] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(878), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22224] = 4,
    ACTIONS(880), 1,
      sym__template_literal_chunk,
    STATE(492), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(742), 2,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22239] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(882), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [22252] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(853), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22263] = 5,
    ACTIONS(751), 1,
      anon_sym_for,
    ACTIONS(753), 1,
      anon_sym_if,
    ACTIONS(884), 1,
      sym__strip_marker,
    ACTIONS(886), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22280] = 5,
    ACTIONS(697), 1,
      anon_sym_if,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym__object_end,
    STATE(639), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22297] = 5,
    ACTIONS(697), 1,
      anon_sym_if,
    ACTIONS(890), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym__object_end,
    STATE(609), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22314] = 5,
    ACTIONS(837), 1,
      anon_sym_for,
    ACTIONS(839), 1,
      anon_sym_if,
    ACTIONS(841), 1,
      anon_sym_else,
    ACTIONS(892), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22331] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(870), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22342] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(849), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22353] = 5,
    ACTIONS(894), 1,
      anon_sym_COMMA,
    ACTIONS(896), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym__comma,
    STATE(465), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22370] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(861), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22381] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(898), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22392] = 5,
    ACTIONS(751), 1,
      anon_sym_for,
    ACTIONS(753), 1,
      anon_sym_if,
    ACTIONS(900), 1,
      sym__strip_marker,
    ACTIONS(902), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22409] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(872), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22420] = 5,
    ACTIONS(837), 1,
      anon_sym_for,
    ACTIONS(839), 1,
      anon_sym_if,
    ACTIONS(841), 1,
      anon_sym_else,
    ACTIONS(904), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22437] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(878), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22448] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(847), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22459] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(898), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22470] = 4,
    ACTIONS(906), 1,
      sym__template_literal_chunk,
    STATE(492), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(765), 2,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22485] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(909), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22496] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(911), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22507] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(913), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_ellipsis,
  [22520] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(825), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22531] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(911), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22542] = 5,
    ACTIONS(915), 1,
      sym__quoted_template_end,
    ACTIONS(917), 1,
      sym__template_literal_chunk,
    STATE(524), 1,
      aux_sym_template_literal_repeat1,
    STATE(661), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22559] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(909), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22570] = 4,
    ACTIONS(919), 1,
      anon_sym_QMARK,
    ACTIONS(921), 1,
      sym__strip_marker,
    ACTIONS(923), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22584] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(925), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22594] = 4,
    ACTIONS(837), 1,
      anon_sym_for,
    ACTIONS(839), 1,
      anon_sym_if,
    ACTIONS(927), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22608] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(851), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22618] = 4,
    ACTIONS(929), 1,
      anon_sym_QMARK,
    ACTIONS(931), 1,
      sym__strip_marker,
    ACTIONS(933), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22632] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(935), 3,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [22642] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(572), 3,
      sym__template_directive_end,
      anon_sym_QMARK,
      sym__strip_marker,
  [22652] = 4,
    ACTIONS(929), 1,
      anon_sym_QMARK,
    ACTIONS(937), 1,
      sym__strip_marker,
    ACTIONS(939), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22666] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(941), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22676] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(943), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22686] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(945), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22696] = 4,
    ACTIONS(929), 1,
      anon_sym_QMARK,
    ACTIONS(947), 1,
      sym__strip_marker,
    ACTIONS(949), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22710] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(951), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [22722] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 3,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [22732] = 4,
    ACTIONS(837), 1,
      anon_sym_for,
    ACTIONS(839), 1,
      anon_sym_if,
    ACTIONS(953), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22746] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(955), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22756] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(957), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22766] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(847), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22776] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 3,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [22786] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(878), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22796] = 4,
    ACTIONS(837), 1,
      anon_sym_for,
    ACTIONS(839), 1,
      anon_sym_if,
    ACTIONS(959), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22810] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(898), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22820] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(961), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22830] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(963), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [22840] = 4,
    ACTIONS(742), 1,
      sym__quoted_template_end,
    ACTIONS(965), 1,
      sym__template_literal_chunk,
    STATE(563), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22854] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(967), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22864] = 4,
    ACTIONS(929), 1,
      anon_sym_QMARK,
    ACTIONS(969), 1,
      sym__strip_marker,
    ACTIONS(971), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22878] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(973), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [22888] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(975), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22898] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(859), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22908] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(831), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22918] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(977), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [22930] = 4,
    ACTIONS(751), 1,
      anon_sym_for,
    ACTIONS(753), 1,
      anon_sym_if,
    ACTIONS(979), 1,
      sym__strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22944] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(801), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22954] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(835), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22964] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(819), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22974] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(981), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22984] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(825), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22994] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(823), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23004] = 4,
    ACTIONS(919), 1,
      anon_sym_QMARK,
    ACTIONS(983), 1,
      sym__strip_marker,
    ACTIONS(985), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23018] = 4,
    ACTIONS(837), 1,
      anon_sym_for,
    ACTIONS(839), 1,
      anon_sym_if,
    ACTIONS(904), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23032] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(987), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23042] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(821), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23052] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(815), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23062] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(989), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [23072] = 4,
    ACTIONS(929), 1,
      anon_sym_QMARK,
    ACTIONS(991), 1,
      sym__strip_marker,
    ACTIONS(993), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23086] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(853), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23096] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(861), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23106] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(909), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23116] = 4,
    ACTIONS(919), 1,
      anon_sym_QMARK,
    ACTIONS(995), 1,
      sym__strip_marker,
    ACTIONS(997), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23130] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(572), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym__strip_marker,
  [23140] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(911), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23150] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(999), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23160] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(872), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23170] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(849), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23180] = 4,
    ACTIONS(919), 1,
      anon_sym_QMARK,
    ACTIONS(1001), 1,
      sym__strip_marker,
    ACTIONS(1003), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23194] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(870), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23204] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(803), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23214] = 4,
    ACTIONS(837), 1,
      anon_sym_for,
    ACTIONS(839), 1,
      anon_sym_if,
    ACTIONS(843), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23228] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(863), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23238] = 4,
    ACTIONS(837), 1,
      anon_sym_for,
    ACTIONS(839), 1,
      anon_sym_if,
    ACTIONS(892), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23252] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1005), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23262] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1007), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [23272] = 4,
    ACTIONS(765), 1,
      sym__quoted_template_end,
    ACTIONS(1009), 1,
      sym__template_literal_chunk,
    STATE(563), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23286] = 4,
    ACTIONS(919), 1,
      anon_sym_QMARK,
    ACTIONS(1012), 1,
      sym__strip_marker,
    ACTIONS(1014), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23300] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1016), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [23312] = 4,
    ACTIONS(919), 1,
      anon_sym_QMARK,
    ACTIONS(1018), 1,
      sym__strip_marker,
    ACTIONS(1020), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23326] = 4,
    ACTIONS(929), 1,
      anon_sym_QMARK,
    ACTIONS(1022), 1,
      sym__strip_marker,
    ACTIONS(1024), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23340] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1026), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23350] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1028), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23360] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1030), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23371] = 3,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23382] = 3,
    ACTIONS(1034), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23393] = 3,
    ACTIONS(1036), 1,
      anon_sym_RBRACE,
    STATE(286), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23404] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1038), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23415] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1040), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23426] = 3,
    ACTIONS(1042), 1,
      sym_identifier,
    ACTIONS(1044), 1,
      aux_sym__legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23437] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23448] = 3,
    ACTIONS(1050), 1,
      anon_sym_COMMA,
    ACTIONS(1052), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23459] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1054), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23470] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1056), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23481] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1058), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23492] = 3,
    ACTIONS(1060), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23503] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1062), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23514] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1064), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23525] = 3,
    ACTIONS(1066), 1,
      sym__strip_marker,
    ACTIONS(1068), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23536] = 3,
    ACTIONS(1070), 1,
      sym__strip_marker,
    ACTIONS(1072), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23547] = 3,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23558] = 3,
    ACTIONS(1076), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23569] = 3,
    ACTIONS(1078), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23580] = 3,
    ACTIONS(1080), 1,
      anon_sym_RBRACK,
    STATE(213), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23591] = 3,
    ACTIONS(1082), 1,
      anon_sym_RBRACE,
    STATE(259), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23602] = 3,
    ACTIONS(1084), 1,
      sym__strip_marker,
    ACTIONS(1086), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23613] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1088), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23624] = 3,
    ACTIONS(1090), 1,
      sym__strip_marker,
    ACTIONS(1092), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23635] = 3,
    ACTIONS(1094), 1,
      anon_sym_RBRACE,
    STATE(257), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23646] = 3,
    ACTIONS(1096), 1,
      anon_sym_RBRACK,
    STATE(302), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23657] = 3,
    ACTIONS(1098), 1,
      sym__strip_marker,
    ACTIONS(1100), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23668] = 3,
    ACTIONS(1102), 1,
      sym__strip_marker,
    ACTIONS(1104), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23679] = 3,
    ACTIONS(1106), 1,
      sym__strip_marker,
    ACTIONS(1108), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23690] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1110), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23701] = 3,
    ACTIONS(1112), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23712] = 3,
    ACTIONS(1114), 1,
      anon_sym_RBRACK,
    STATE(261), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23723] = 3,
    ACTIONS(1116), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23734] = 3,
    ACTIONS(1118), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23745] = 3,
    ACTIONS(1120), 1,
      sym_identifier,
    ACTIONS(1122), 1,
      aux_sym__legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23756] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23767] = 3,
    ACTIONS(1126), 1,
      sym_identifier,
    ACTIONS(1128), 1,
      aux_sym__legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23778] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23789] = 3,
    ACTIONS(1132), 1,
      anon_sym_RBRACE,
    STATE(290), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23800] = 3,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23811] = 3,
    ACTIONS(1136), 1,
      anon_sym_RBRACE,
    STATE(294), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23822] = 3,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23833] = 3,
    ACTIONS(1140), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23844] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1142), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23855] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1144), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23866] = 3,
    ACTIONS(1146), 1,
      sym__strip_marker,
    ACTIONS(1148), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23877] = 3,
    ACTIONS(1150), 1,
      anon_sym_RBRACK,
    STATE(266), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23888] = 3,
    ACTIONS(1152), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23899] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1154), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23910] = 3,
    ACTIONS(1156), 1,
      sym__strip_marker,
    ACTIONS(1158), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23921] = 3,
    ACTIONS(1160), 1,
      sym__strip_marker,
    ACTIONS(1162), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23932] = 3,
    ACTIONS(1164), 1,
      anon_sym_RBRACE,
    STATE(562), 1,
      sym__block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23943] = 3,
    ACTIONS(1166), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23954] = 3,
    ACTIONS(1168), 1,
      sym__strip_marker,
    ACTIONS(1170), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23965] = 3,
    ACTIONS(1172), 1,
      anon_sym_RBRACE,
    STATE(523), 1,
      sym__block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23976] = 3,
    ACTIONS(1174), 1,
      sym__strip_marker,
    ACTIONS(1176), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23987] = 3,
    ACTIONS(1178), 1,
      sym__strip_marker,
    ACTIONS(1180), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23998] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1182), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24009] = 3,
    ACTIONS(1184), 1,
      sym__strip_marker,
    ACTIONS(1186), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24020] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1188), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24031] = 3,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1192), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24042] = 3,
    ACTIONS(1194), 1,
      sym_identifier,
    ACTIONS(1196), 1,
      aux_sym__legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24053] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24064] = 3,
    ACTIONS(1200), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24075] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1202), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24086] = 3,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24097] = 3,
    ACTIONS(1206), 1,
      anon_sym_RBRACK,
    STATE(323), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24108] = 3,
    ACTIONS(837), 1,
      anon_sym_for,
    ACTIONS(839), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24119] = 3,
    ACTIONS(1208), 1,
      anon_sym_RBRACE,
    STATE(150), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24130] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24141] = 3,
    ACTIONS(1212), 1,
      sym_identifier,
    ACTIONS(1214), 1,
      aux_sym__legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24152] = 3,
    ACTIONS(1216), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24163] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1218), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24174] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1220), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24185] = 3,
    ACTIONS(1222), 1,
      anon_sym_RBRACK,
    STATE(197), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24196] = 3,
    ACTIONS(1224), 1,
      anon_sym_RBRACE,
    STATE(154), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24207] = 2,
    ACTIONS(1226), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24215] = 2,
    ACTIONS(1228), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24223] = 2,
    ACTIONS(1230), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24231] = 2,
    ACTIONS(1232), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24239] = 2,
    ACTIONS(1234), 1,
      sym__heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24247] = 2,
    ACTIONS(1236), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24255] = 2,
    ACTIONS(1238), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24263] = 2,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24271] = 2,
    ACTIONS(1186), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24279] = 2,
    ACTIONS(1180), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24287] = 2,
    ACTIONS(1240), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24295] = 2,
    ACTIONS(1170), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24303] = 2,
    ACTIONS(1242), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24311] = 2,
    ACTIONS(1244), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24319] = 2,
    ACTIONS(1246), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24327] = 2,
    ACTIONS(1176), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24335] = 2,
    ACTIONS(1148), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24343] = 2,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24351] = 2,
    ACTIONS(1248), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24359] = 2,
    ACTIONS(1250), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24367] = 2,
    ACTIONS(1252), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24375] = 2,
    ACTIONS(1254), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24383] = 2,
    ACTIONS(1256), 1,
      sym__heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24391] = 2,
    ACTIONS(1258), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24399] = 2,
    ACTIONS(1260), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24407] = 2,
    ACTIONS(1262), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24415] = 2,
    ACTIONS(1092), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24423] = 2,
    ACTIONS(1086), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24431] = 2,
    ACTIONS(1264), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24439] = 2,
    ACTIONS(1266), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24447] = 2,
    ACTIONS(1268), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24455] = 2,
    ACTIONS(1270), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24463] = 2,
    ACTIONS(1272), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24471] = 2,
    ACTIONS(1274), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24479] = 2,
    ACTIONS(1276), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24487] = 2,
    ACTIONS(1278), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24495] = 2,
    ACTIONS(1280), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24503] = 2,
    ACTIONS(1282), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24511] = 2,
    ACTIONS(1284), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24519] = 2,
    ACTIONS(1286), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24527] = 2,
    ACTIONS(1288), 1,
      sym__heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24535] = 2,
    ACTIONS(1290), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24543] = 2,
    ACTIONS(1292), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24551] = 2,
    ACTIONS(1294), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24559] = 2,
    ACTIONS(1296), 1,
      sym__heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24567] = 2,
    ACTIONS(1298), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24575] = 2,
    ACTIONS(1300), 1,
      sym__heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24583] = 2,
    ACTIONS(1302), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 210,
  [SMALL_STATE(5)] = 315,
  [SMALL_STATE(6)] = 420,
  [SMALL_STATE(7)] = 525,
  [SMALL_STATE(8)] = 627,
  [SMALL_STATE(9)] = 729,
  [SMALL_STATE(10)] = 831,
  [SMALL_STATE(11)] = 933,
  [SMALL_STATE(12)] = 1035,
  [SMALL_STATE(13)] = 1137,
  [SMALL_STATE(14)] = 1239,
  [SMALL_STATE(15)] = 1341,
  [SMALL_STATE(16)] = 1440,
  [SMALL_STATE(17)] = 1536,
  [SMALL_STATE(18)] = 1632,
  [SMALL_STATE(19)] = 1728,
  [SMALL_STATE(20)] = 1824,
  [SMALL_STATE(21)] = 1920,
  [SMALL_STATE(22)] = 2013,
  [SMALL_STATE(23)] = 2106,
  [SMALL_STATE(24)] = 2199,
  [SMALL_STATE(25)] = 2292,
  [SMALL_STATE(26)] = 2385,
  [SMALL_STATE(27)] = 2478,
  [SMALL_STATE(28)] = 2571,
  [SMALL_STATE(29)] = 2664,
  [SMALL_STATE(30)] = 2724,
  [SMALL_STATE(31)] = 2814,
  [SMALL_STATE(32)] = 2904,
  [SMALL_STATE(33)] = 2994,
  [SMALL_STATE(34)] = 3074,
  [SMALL_STATE(35)] = 3130,
  [SMALL_STATE(36)] = 3220,
  [SMALL_STATE(37)] = 3290,
  [SMALL_STATE(38)] = 3358,
  [SMALL_STATE(39)] = 3424,
  [SMALL_STATE(40)] = 3486,
  [SMALL_STATE(41)] = 3542,
  [SMALL_STATE(42)] = 3632,
  [SMALL_STATE(43)] = 3719,
  [SMALL_STATE(44)] = 3806,
  [SMALL_STATE(45)] = 3893,
  [SMALL_STATE(46)] = 3980,
  [SMALL_STATE(47)] = 4067,
  [SMALL_STATE(48)] = 4154,
  [SMALL_STATE(49)] = 4241,
  [SMALL_STATE(50)] = 4328,
  [SMALL_STATE(51)] = 4415,
  [SMALL_STATE(52)] = 4502,
  [SMALL_STATE(53)] = 4589,
  [SMALL_STATE(54)] = 4676,
  [SMALL_STATE(55)] = 4763,
  [SMALL_STATE(56)] = 4850,
  [SMALL_STATE(57)] = 4937,
  [SMALL_STATE(58)] = 5024,
  [SMALL_STATE(59)] = 5111,
  [SMALL_STATE(60)] = 5198,
  [SMALL_STATE(61)] = 5285,
  [SMALL_STATE(62)] = 5372,
  [SMALL_STATE(63)] = 5459,
  [SMALL_STATE(64)] = 5546,
  [SMALL_STATE(65)] = 5633,
  [SMALL_STATE(66)] = 5720,
  [SMALL_STATE(67)] = 5807,
  [SMALL_STATE(68)] = 5894,
  [SMALL_STATE(69)] = 5981,
  [SMALL_STATE(70)] = 6068,
  [SMALL_STATE(71)] = 6155,
  [SMALL_STATE(72)] = 6242,
  [SMALL_STATE(73)] = 6329,
  [SMALL_STATE(74)] = 6416,
  [SMALL_STATE(75)] = 6503,
  [SMALL_STATE(76)] = 6590,
  [SMALL_STATE(77)] = 6677,
  [SMALL_STATE(78)] = 6764,
  [SMALL_STATE(79)] = 6851,
  [SMALL_STATE(80)] = 6938,
  [SMALL_STATE(81)] = 7025,
  [SMALL_STATE(82)] = 7112,
  [SMALL_STATE(83)] = 7199,
  [SMALL_STATE(84)] = 7286,
  [SMALL_STATE(85)] = 7373,
  [SMALL_STATE(86)] = 7460,
  [SMALL_STATE(87)] = 7547,
  [SMALL_STATE(88)] = 7634,
  [SMALL_STATE(89)] = 7721,
  [SMALL_STATE(90)] = 7808,
  [SMALL_STATE(91)] = 7864,
  [SMALL_STATE(92)] = 7920,
  [SMALL_STATE(93)] = 7976,
  [SMALL_STATE(94)] = 8032,
  [SMALL_STATE(95)] = 8088,
  [SMALL_STATE(96)] = 8171,
  [SMALL_STATE(97)] = 8254,
  [SMALL_STATE(98)] = 8337,
  [SMALL_STATE(99)] = 8420,
  [SMALL_STATE(100)] = 8503,
  [SMALL_STATE(101)] = 8586,
  [SMALL_STATE(102)] = 8669,
  [SMALL_STATE(103)] = 8752,
  [SMALL_STATE(104)] = 8835,
  [SMALL_STATE(105)] = 8918,
  [SMALL_STATE(106)] = 9001,
  [SMALL_STATE(107)] = 9084,
  [SMALL_STATE(108)] = 9167,
  [SMALL_STATE(109)] = 9250,
  [SMALL_STATE(110)] = 9333,
  [SMALL_STATE(111)] = 9416,
  [SMALL_STATE(112)] = 9499,
  [SMALL_STATE(113)] = 9582,
  [SMALL_STATE(114)] = 9665,
  [SMALL_STATE(115)] = 9748,
  [SMALL_STATE(116)] = 9831,
  [SMALL_STATE(117)] = 9914,
  [SMALL_STATE(118)] = 9997,
  [SMALL_STATE(119)] = 10080,
  [SMALL_STATE(120)] = 10163,
  [SMALL_STATE(121)] = 10246,
  [SMALL_STATE(122)] = 10329,
  [SMALL_STATE(123)] = 10412,
  [SMALL_STATE(124)] = 10495,
  [SMALL_STATE(125)] = 10578,
  [SMALL_STATE(126)] = 10661,
  [SMALL_STATE(127)] = 10744,
  [SMALL_STATE(128)] = 10827,
  [SMALL_STATE(129)] = 10910,
  [SMALL_STATE(130)] = 10993,
  [SMALL_STATE(131)] = 11045,
  [SMALL_STATE(132)] = 11121,
  [SMALL_STATE(133)] = 11187,
  [SMALL_STATE(134)] = 11251,
  [SMALL_STATE(135)] = 11313,
  [SMALL_STATE(136)] = 11371,
  [SMALL_STATE(137)] = 11423,
  [SMALL_STATE(138)] = 11479,
  [SMALL_STATE(139)] = 11531,
  [SMALL_STATE(140)] = 11583,
  [SMALL_STATE(141)] = 11635,
  [SMALL_STATE(142)] = 11687,
  [SMALL_STATE(143)] = 11739,
  [SMALL_STATE(144)] = 11785,
  [SMALL_STATE(145)] = 11826,
  [SMALL_STATE(146)] = 11867,
  [SMALL_STATE(147)] = 11908,
  [SMALL_STATE(148)] = 11949,
  [SMALL_STATE(149)] = 11990,
  [SMALL_STATE(150)] = 12031,
  [SMALL_STATE(151)] = 12072,
  [SMALL_STATE(152)] = 12113,
  [SMALL_STATE(153)] = 12154,
  [SMALL_STATE(154)] = 12195,
  [SMALL_STATE(155)] = 12236,
  [SMALL_STATE(156)] = 12277,
  [SMALL_STATE(157)] = 12318,
  [SMALL_STATE(158)] = 12359,
  [SMALL_STATE(159)] = 12400,
  [SMALL_STATE(160)] = 12441,
  [SMALL_STATE(161)] = 12482,
  [SMALL_STATE(162)] = 12523,
  [SMALL_STATE(163)] = 12564,
  [SMALL_STATE(164)] = 12605,
  [SMALL_STATE(165)] = 12646,
  [SMALL_STATE(166)] = 12687,
  [SMALL_STATE(167)] = 12728,
  [SMALL_STATE(168)] = 12769,
  [SMALL_STATE(169)] = 12810,
  [SMALL_STATE(170)] = 12851,
  [SMALL_STATE(171)] = 12892,
  [SMALL_STATE(172)] = 12933,
  [SMALL_STATE(173)] = 12974,
  [SMALL_STATE(174)] = 13015,
  [SMALL_STATE(175)] = 13056,
  [SMALL_STATE(176)] = 13097,
  [SMALL_STATE(177)] = 13140,
  [SMALL_STATE(178)] = 13200,
  [SMALL_STATE(179)] = 13252,
  [SMALL_STATE(180)] = 13298,
  [SMALL_STATE(181)] = 13366,
  [SMALL_STATE(182)] = 13424,
  [SMALL_STATE(183)] = 13470,
  [SMALL_STATE(184)] = 13520,
  [SMALL_STATE(185)] = 13576,
  [SMALL_STATE(186)] = 13613,
  [SMALL_STATE(187)] = 13650,
  [SMALL_STATE(188)] = 13687,
  [SMALL_STATE(189)] = 13724,
  [SMALL_STATE(190)] = 13761,
  [SMALL_STATE(191)] = 13798,
  [SMALL_STATE(192)] = 13835,
  [SMALL_STATE(193)] = 13872,
  [SMALL_STATE(194)] = 13909,
  [SMALL_STATE(195)] = 13946,
  [SMALL_STATE(196)] = 13983,
  [SMALL_STATE(197)] = 14020,
  [SMALL_STATE(198)] = 14057,
  [SMALL_STATE(199)] = 14094,
  [SMALL_STATE(200)] = 14131,
  [SMALL_STATE(201)] = 14168,
  [SMALL_STATE(202)] = 14205,
  [SMALL_STATE(203)] = 14242,
  [SMALL_STATE(204)] = 14279,
  [SMALL_STATE(205)] = 14316,
  [SMALL_STATE(206)] = 14353,
  [SMALL_STATE(207)] = 14390,
  [SMALL_STATE(208)] = 14427,
  [SMALL_STATE(209)] = 14464,
  [SMALL_STATE(210)] = 14501,
  [SMALL_STATE(211)] = 14538,
  [SMALL_STATE(212)] = 14575,
  [SMALL_STATE(213)] = 14612,
  [SMALL_STATE(214)] = 14649,
  [SMALL_STATE(215)] = 14686,
  [SMALL_STATE(216)] = 14723,
  [SMALL_STATE(217)] = 14760,
  [SMALL_STATE(218)] = 14810,
  [SMALL_STATE(219)] = 14866,
  [SMALL_STATE(220)] = 14932,
  [SMALL_STATE(221)] = 14982,
  [SMALL_STATE(222)] = 15048,
  [SMALL_STATE(223)] = 15092,
  [SMALL_STATE(224)] = 15138,
  [SMALL_STATE(225)] = 15184,
  [SMALL_STATE(226)] = 15242,
  [SMALL_STATE(227)] = 15298,
  [SMALL_STATE(228)] = 15352,
  [SMALL_STATE(229)] = 15398,
  [SMALL_STATE(230)] = 15442,
  [SMALL_STATE(231)] = 15496,
  [SMALL_STATE(232)] = 15544,
  [SMALL_STATE(233)] = 15590,
  [SMALL_STATE(234)] = 15634,
  [SMALL_STATE(235)] = 15678,
  [SMALL_STATE(236)] = 15736,
  [SMALL_STATE(237)] = 15782,
  [SMALL_STATE(238)] = 15830,
  [SMALL_STATE(239)] = 15874,
  [SMALL_STATE(240)] = 15918,
  [SMALL_STATE(241)] = 15962,
  [SMALL_STATE(242)] = 16006,
  [SMALL_STATE(243)] = 16050,
  [SMALL_STATE(244)] = 16094,
  [SMALL_STATE(245)] = 16138,
  [SMALL_STATE(246)] = 16182,
  [SMALL_STATE(247)] = 16226,
  [SMALL_STATE(248)] = 16270,
  [SMALL_STATE(249)] = 16307,
  [SMALL_STATE(250)] = 16338,
  [SMALL_STATE(251)] = 16369,
  [SMALL_STATE(252)] = 16404,
  [SMALL_STATE(253)] = 16435,
  [SMALL_STATE(254)] = 16466,
  [SMALL_STATE(255)] = 16497,
  [SMALL_STATE(256)] = 16528,
  [SMALL_STATE(257)] = 16559,
  [SMALL_STATE(258)] = 16590,
  [SMALL_STATE(259)] = 16621,
  [SMALL_STATE(260)] = 16652,
  [SMALL_STATE(261)] = 16683,
  [SMALL_STATE(262)] = 16714,
  [SMALL_STATE(263)] = 16745,
  [SMALL_STATE(264)] = 16776,
  [SMALL_STATE(265)] = 16807,
  [SMALL_STATE(266)] = 16838,
  [SMALL_STATE(267)] = 16869,
  [SMALL_STATE(268)] = 16900,
  [SMALL_STATE(269)] = 16931,
  [SMALL_STATE(270)] = 16962,
  [SMALL_STATE(271)] = 16993,
  [SMALL_STATE(272)] = 17024,
  [SMALL_STATE(273)] = 17055,
  [SMALL_STATE(274)] = 17086,
  [SMALL_STATE(275)] = 17117,
  [SMALL_STATE(276)] = 17152,
  [SMALL_STATE(277)] = 17183,
  [SMALL_STATE(278)] = 17214,
  [SMALL_STATE(279)] = 17245,
  [SMALL_STATE(280)] = 17276,
  [SMALL_STATE(281)] = 17307,
  [SMALL_STATE(282)] = 17338,
  [SMALL_STATE(283)] = 17369,
  [SMALL_STATE(284)] = 17398,
  [SMALL_STATE(285)] = 17427,
  [SMALL_STATE(286)] = 17456,
  [SMALL_STATE(287)] = 17485,
  [SMALL_STATE(288)] = 17514,
  [SMALL_STATE(289)] = 17543,
  [SMALL_STATE(290)] = 17572,
  [SMALL_STATE(291)] = 17601,
  [SMALL_STATE(292)] = 17630,
  [SMALL_STATE(293)] = 17659,
  [SMALL_STATE(294)] = 17688,
  [SMALL_STATE(295)] = 17717,
  [SMALL_STATE(296)] = 17746,
  [SMALL_STATE(297)] = 17775,
  [SMALL_STATE(298)] = 17804,
  [SMALL_STATE(299)] = 17833,
  [SMALL_STATE(300)] = 17862,
  [SMALL_STATE(301)] = 17891,
  [SMALL_STATE(302)] = 17920,
  [SMALL_STATE(303)] = 17949,
  [SMALL_STATE(304)] = 17978,
  [SMALL_STATE(305)] = 18007,
  [SMALL_STATE(306)] = 18036,
  [SMALL_STATE(307)] = 18065,
  [SMALL_STATE(308)] = 18094,
  [SMALL_STATE(309)] = 18123,
  [SMALL_STATE(310)] = 18152,
  [SMALL_STATE(311)] = 18181,
  [SMALL_STATE(312)] = 18210,
  [SMALL_STATE(313)] = 18239,
  [SMALL_STATE(314)] = 18268,
  [SMALL_STATE(315)] = 18297,
  [SMALL_STATE(316)] = 18326,
  [SMALL_STATE(317)] = 18355,
  [SMALL_STATE(318)] = 18384,
  [SMALL_STATE(319)] = 18413,
  [SMALL_STATE(320)] = 18442,
  [SMALL_STATE(321)] = 18471,
  [SMALL_STATE(322)] = 18500,
  [SMALL_STATE(323)] = 18529,
  [SMALL_STATE(324)] = 18558,
  [SMALL_STATE(325)] = 18587,
  [SMALL_STATE(326)] = 18616,
  [SMALL_STATE(327)] = 18645,
  [SMALL_STATE(328)] = 18674,
  [SMALL_STATE(329)] = 18703,
  [SMALL_STATE(330)] = 18732,
  [SMALL_STATE(331)] = 18761,
  [SMALL_STATE(332)] = 18790,
  [SMALL_STATE(333)] = 18819,
  [SMALL_STATE(334)] = 18848,
  [SMALL_STATE(335)] = 18877,
  [SMALL_STATE(336)] = 18906,
  [SMALL_STATE(337)] = 18935,
  [SMALL_STATE(338)] = 18964,
  [SMALL_STATE(339)] = 18993,
  [SMALL_STATE(340)] = 19022,
  [SMALL_STATE(341)] = 19051,
  [SMALL_STATE(342)] = 19080,
  [SMALL_STATE(343)] = 19109,
  [SMALL_STATE(344)] = 19138,
  [SMALL_STATE(345)] = 19167,
  [SMALL_STATE(346)] = 19196,
  [SMALL_STATE(347)] = 19225,
  [SMALL_STATE(348)] = 19251,
  [SMALL_STATE(349)] = 19279,
  [SMALL_STATE(350)] = 19304,
  [SMALL_STATE(351)] = 19329,
  [SMALL_STATE(352)] = 19368,
  [SMALL_STATE(353)] = 19407,
  [SMALL_STATE(354)] = 19430,
  [SMALL_STATE(355)] = 19453,
  [SMALL_STATE(356)] = 19492,
  [SMALL_STATE(357)] = 19531,
  [SMALL_STATE(358)] = 19570,
  [SMALL_STATE(359)] = 19609,
  [SMALL_STATE(360)] = 19645,
  [SMALL_STATE(361)] = 19681,
  [SMALL_STATE(362)] = 19717,
  [SMALL_STATE(363)] = 19753,
  [SMALL_STATE(364)] = 19789,
  [SMALL_STATE(365)] = 19825,
  [SMALL_STATE(366)] = 19861,
  [SMALL_STATE(367)] = 19897,
  [SMALL_STATE(368)] = 19933,
  [SMALL_STATE(369)] = 19971,
  [SMALL_STATE(370)] = 20007,
  [SMALL_STATE(371)] = 20043,
  [SMALL_STATE(372)] = 20079,
  [SMALL_STATE(373)] = 20115,
  [SMALL_STATE(374)] = 20151,
  [SMALL_STATE(375)] = 20189,
  [SMALL_STATE(376)] = 20225,
  [SMALL_STATE(377)] = 20261,
  [SMALL_STATE(378)] = 20297,
  [SMALL_STATE(379)] = 20333,
  [SMALL_STATE(380)] = 20369,
  [SMALL_STATE(381)] = 20405,
  [SMALL_STATE(382)] = 20441,
  [SMALL_STATE(383)] = 20477,
  [SMALL_STATE(384)] = 20513,
  [SMALL_STATE(385)] = 20551,
  [SMALL_STATE(386)] = 20587,
  [SMALL_STATE(387)] = 20623,
  [SMALL_STATE(388)] = 20661,
  [SMALL_STATE(389)] = 20697,
  [SMALL_STATE(390)] = 20733,
  [SMALL_STATE(391)] = 20769,
  [SMALL_STATE(392)] = 20807,
  [SMALL_STATE(393)] = 20843,
  [SMALL_STATE(394)] = 20879,
  [SMALL_STATE(395)] = 20912,
  [SMALL_STATE(396)] = 20945,
  [SMALL_STATE(397)] = 20978,
  [SMALL_STATE(398)] = 21011,
  [SMALL_STATE(399)] = 21044,
  [SMALL_STATE(400)] = 21077,
  [SMALL_STATE(401)] = 21097,
  [SMALL_STATE(402)] = 21119,
  [SMALL_STATE(403)] = 21141,
  [SMALL_STATE(404)] = 21167,
  [SMALL_STATE(405)] = 21190,
  [SMALL_STATE(406)] = 21213,
  [SMALL_STATE(407)] = 21230,
  [SMALL_STATE(408)] = 21247,
  [SMALL_STATE(409)] = 21270,
  [SMALL_STATE(410)] = 21293,
  [SMALL_STATE(411)] = 21316,
  [SMALL_STATE(412)] = 21339,
  [SMALL_STATE(413)] = 21362,
  [SMALL_STATE(414)] = 21382,
  [SMALL_STATE(415)] = 21402,
  [SMALL_STATE(416)] = 21418,
  [SMALL_STATE(417)] = 21436,
  [SMALL_STATE(418)] = 21456,
  [SMALL_STATE(419)] = 21476,
  [SMALL_STATE(420)] = 21492,
  [SMALL_STATE(421)] = 21512,
  [SMALL_STATE(422)] = 21532,
  [SMALL_STATE(423)] = 21544,
  [SMALL_STATE(424)] = 21564,
  [SMALL_STATE(425)] = 21584,
  [SMALL_STATE(426)] = 21604,
  [SMALL_STATE(427)] = 21624,
  [SMALL_STATE(428)] = 21640,
  [SMALL_STATE(429)] = 21656,
  [SMALL_STATE(430)] = 21676,
  [SMALL_STATE(431)] = 21687,
  [SMALL_STATE(432)] = 21698,
  [SMALL_STATE(433)] = 21715,
  [SMALL_STATE(434)] = 21732,
  [SMALL_STATE(435)] = 21745,
  [SMALL_STATE(436)] = 21758,
  [SMALL_STATE(437)] = 21769,
  [SMALL_STATE(438)] = 21786,
  [SMALL_STATE(439)] = 21797,
  [SMALL_STATE(440)] = 21808,
  [SMALL_STATE(441)] = 21819,
  [SMALL_STATE(442)] = 21830,
  [SMALL_STATE(443)] = 21841,
  [SMALL_STATE(444)] = 21858,
  [SMALL_STATE(445)] = 21869,
  [SMALL_STATE(446)] = 21886,
  [SMALL_STATE(447)] = 21897,
  [SMALL_STATE(448)] = 21908,
  [SMALL_STATE(449)] = 21925,
  [SMALL_STATE(450)] = 21936,
  [SMALL_STATE(451)] = 21953,
  [SMALL_STATE(452)] = 21964,
  [SMALL_STATE(453)] = 21975,
  [SMALL_STATE(454)] = 21986,
  [SMALL_STATE(455)] = 21997,
  [SMALL_STATE(456)] = 22008,
  [SMALL_STATE(457)] = 22019,
  [SMALL_STATE(458)] = 22032,
  [SMALL_STATE(459)] = 22045,
  [SMALL_STATE(460)] = 22056,
  [SMALL_STATE(461)] = 22067,
  [SMALL_STATE(462)] = 22078,
  [SMALL_STATE(463)] = 22089,
  [SMALL_STATE(464)] = 22100,
  [SMALL_STATE(465)] = 22111,
  [SMALL_STATE(466)] = 22128,
  [SMALL_STATE(467)] = 22139,
  [SMALL_STATE(468)] = 22150,
  [SMALL_STATE(469)] = 22161,
  [SMALL_STATE(470)] = 22172,
  [SMALL_STATE(471)] = 22183,
  [SMALL_STATE(472)] = 22200,
  [SMALL_STATE(473)] = 22213,
  [SMALL_STATE(474)] = 22224,
  [SMALL_STATE(475)] = 22239,
  [SMALL_STATE(476)] = 22252,
  [SMALL_STATE(477)] = 22263,
  [SMALL_STATE(478)] = 22280,
  [SMALL_STATE(479)] = 22297,
  [SMALL_STATE(480)] = 22314,
  [SMALL_STATE(481)] = 22331,
  [SMALL_STATE(482)] = 22342,
  [SMALL_STATE(483)] = 22353,
  [SMALL_STATE(484)] = 22370,
  [SMALL_STATE(485)] = 22381,
  [SMALL_STATE(486)] = 22392,
  [SMALL_STATE(487)] = 22409,
  [SMALL_STATE(488)] = 22420,
  [SMALL_STATE(489)] = 22437,
  [SMALL_STATE(490)] = 22448,
  [SMALL_STATE(491)] = 22459,
  [SMALL_STATE(492)] = 22470,
  [SMALL_STATE(493)] = 22485,
  [SMALL_STATE(494)] = 22496,
  [SMALL_STATE(495)] = 22507,
  [SMALL_STATE(496)] = 22520,
  [SMALL_STATE(497)] = 22531,
  [SMALL_STATE(498)] = 22542,
  [SMALL_STATE(499)] = 22559,
  [SMALL_STATE(500)] = 22570,
  [SMALL_STATE(501)] = 22584,
  [SMALL_STATE(502)] = 22594,
  [SMALL_STATE(503)] = 22608,
  [SMALL_STATE(504)] = 22618,
  [SMALL_STATE(505)] = 22632,
  [SMALL_STATE(506)] = 22642,
  [SMALL_STATE(507)] = 22652,
  [SMALL_STATE(508)] = 22666,
  [SMALL_STATE(509)] = 22676,
  [SMALL_STATE(510)] = 22686,
  [SMALL_STATE(511)] = 22696,
  [SMALL_STATE(512)] = 22710,
  [SMALL_STATE(513)] = 22722,
  [SMALL_STATE(514)] = 22732,
  [SMALL_STATE(515)] = 22746,
  [SMALL_STATE(516)] = 22756,
  [SMALL_STATE(517)] = 22766,
  [SMALL_STATE(518)] = 22776,
  [SMALL_STATE(519)] = 22786,
  [SMALL_STATE(520)] = 22796,
  [SMALL_STATE(521)] = 22810,
  [SMALL_STATE(522)] = 22820,
  [SMALL_STATE(523)] = 22830,
  [SMALL_STATE(524)] = 22840,
  [SMALL_STATE(525)] = 22854,
  [SMALL_STATE(526)] = 22864,
  [SMALL_STATE(527)] = 22878,
  [SMALL_STATE(528)] = 22888,
  [SMALL_STATE(529)] = 22898,
  [SMALL_STATE(530)] = 22908,
  [SMALL_STATE(531)] = 22918,
  [SMALL_STATE(532)] = 22930,
  [SMALL_STATE(533)] = 22944,
  [SMALL_STATE(534)] = 22954,
  [SMALL_STATE(535)] = 22964,
  [SMALL_STATE(536)] = 22974,
  [SMALL_STATE(537)] = 22984,
  [SMALL_STATE(538)] = 22994,
  [SMALL_STATE(539)] = 23004,
  [SMALL_STATE(540)] = 23018,
  [SMALL_STATE(541)] = 23032,
  [SMALL_STATE(542)] = 23042,
  [SMALL_STATE(543)] = 23052,
  [SMALL_STATE(544)] = 23062,
  [SMALL_STATE(545)] = 23072,
  [SMALL_STATE(546)] = 23086,
  [SMALL_STATE(547)] = 23096,
  [SMALL_STATE(548)] = 23106,
  [SMALL_STATE(549)] = 23116,
  [SMALL_STATE(550)] = 23130,
  [SMALL_STATE(551)] = 23140,
  [SMALL_STATE(552)] = 23150,
  [SMALL_STATE(553)] = 23160,
  [SMALL_STATE(554)] = 23170,
  [SMALL_STATE(555)] = 23180,
  [SMALL_STATE(556)] = 23194,
  [SMALL_STATE(557)] = 23204,
  [SMALL_STATE(558)] = 23214,
  [SMALL_STATE(559)] = 23228,
  [SMALL_STATE(560)] = 23238,
  [SMALL_STATE(561)] = 23252,
  [SMALL_STATE(562)] = 23262,
  [SMALL_STATE(563)] = 23272,
  [SMALL_STATE(564)] = 23286,
  [SMALL_STATE(565)] = 23300,
  [SMALL_STATE(566)] = 23312,
  [SMALL_STATE(567)] = 23326,
  [SMALL_STATE(568)] = 23340,
  [SMALL_STATE(569)] = 23350,
  [SMALL_STATE(570)] = 23360,
  [SMALL_STATE(571)] = 23371,
  [SMALL_STATE(572)] = 23382,
  [SMALL_STATE(573)] = 23393,
  [SMALL_STATE(574)] = 23404,
  [SMALL_STATE(575)] = 23415,
  [SMALL_STATE(576)] = 23426,
  [SMALL_STATE(577)] = 23437,
  [SMALL_STATE(578)] = 23448,
  [SMALL_STATE(579)] = 23459,
  [SMALL_STATE(580)] = 23470,
  [SMALL_STATE(581)] = 23481,
  [SMALL_STATE(582)] = 23492,
  [SMALL_STATE(583)] = 23503,
  [SMALL_STATE(584)] = 23514,
  [SMALL_STATE(585)] = 23525,
  [SMALL_STATE(586)] = 23536,
  [SMALL_STATE(587)] = 23547,
  [SMALL_STATE(588)] = 23558,
  [SMALL_STATE(589)] = 23569,
  [SMALL_STATE(590)] = 23580,
  [SMALL_STATE(591)] = 23591,
  [SMALL_STATE(592)] = 23602,
  [SMALL_STATE(593)] = 23613,
  [SMALL_STATE(594)] = 23624,
  [SMALL_STATE(595)] = 23635,
  [SMALL_STATE(596)] = 23646,
  [SMALL_STATE(597)] = 23657,
  [SMALL_STATE(598)] = 23668,
  [SMALL_STATE(599)] = 23679,
  [SMALL_STATE(600)] = 23690,
  [SMALL_STATE(601)] = 23701,
  [SMALL_STATE(602)] = 23712,
  [SMALL_STATE(603)] = 23723,
  [SMALL_STATE(604)] = 23734,
  [SMALL_STATE(605)] = 23745,
  [SMALL_STATE(606)] = 23756,
  [SMALL_STATE(607)] = 23767,
  [SMALL_STATE(608)] = 23778,
  [SMALL_STATE(609)] = 23789,
  [SMALL_STATE(610)] = 23800,
  [SMALL_STATE(611)] = 23811,
  [SMALL_STATE(612)] = 23822,
  [SMALL_STATE(613)] = 23833,
  [SMALL_STATE(614)] = 23844,
  [SMALL_STATE(615)] = 23855,
  [SMALL_STATE(616)] = 23866,
  [SMALL_STATE(617)] = 23877,
  [SMALL_STATE(618)] = 23888,
  [SMALL_STATE(619)] = 23899,
  [SMALL_STATE(620)] = 23910,
  [SMALL_STATE(621)] = 23921,
  [SMALL_STATE(622)] = 23932,
  [SMALL_STATE(623)] = 23943,
  [SMALL_STATE(624)] = 23954,
  [SMALL_STATE(625)] = 23965,
  [SMALL_STATE(626)] = 23976,
  [SMALL_STATE(627)] = 23987,
  [SMALL_STATE(628)] = 23998,
  [SMALL_STATE(629)] = 24009,
  [SMALL_STATE(630)] = 24020,
  [SMALL_STATE(631)] = 24031,
  [SMALL_STATE(632)] = 24042,
  [SMALL_STATE(633)] = 24053,
  [SMALL_STATE(634)] = 24064,
  [SMALL_STATE(635)] = 24075,
  [SMALL_STATE(636)] = 24086,
  [SMALL_STATE(637)] = 24097,
  [SMALL_STATE(638)] = 24108,
  [SMALL_STATE(639)] = 24119,
  [SMALL_STATE(640)] = 24130,
  [SMALL_STATE(641)] = 24141,
  [SMALL_STATE(642)] = 24152,
  [SMALL_STATE(643)] = 24163,
  [SMALL_STATE(644)] = 24174,
  [SMALL_STATE(645)] = 24185,
  [SMALL_STATE(646)] = 24196,
  [SMALL_STATE(647)] = 24207,
  [SMALL_STATE(648)] = 24215,
  [SMALL_STATE(649)] = 24223,
  [SMALL_STATE(650)] = 24231,
  [SMALL_STATE(651)] = 24239,
  [SMALL_STATE(652)] = 24247,
  [SMALL_STATE(653)] = 24255,
  [SMALL_STATE(654)] = 24263,
  [SMALL_STATE(655)] = 24271,
  [SMALL_STATE(656)] = 24279,
  [SMALL_STATE(657)] = 24287,
  [SMALL_STATE(658)] = 24295,
  [SMALL_STATE(659)] = 24303,
  [SMALL_STATE(660)] = 24311,
  [SMALL_STATE(661)] = 24319,
  [SMALL_STATE(662)] = 24327,
  [SMALL_STATE(663)] = 24335,
  [SMALL_STATE(664)] = 24343,
  [SMALL_STATE(665)] = 24351,
  [SMALL_STATE(666)] = 24359,
  [SMALL_STATE(667)] = 24367,
  [SMALL_STATE(668)] = 24375,
  [SMALL_STATE(669)] = 24383,
  [SMALL_STATE(670)] = 24391,
  [SMALL_STATE(671)] = 24399,
  [SMALL_STATE(672)] = 24407,
  [SMALL_STATE(673)] = 24415,
  [SMALL_STATE(674)] = 24423,
  [SMALL_STATE(675)] = 24431,
  [SMALL_STATE(676)] = 24439,
  [SMALL_STATE(677)] = 24447,
  [SMALL_STATE(678)] = 24455,
  [SMALL_STATE(679)] = 24463,
  [SMALL_STATE(680)] = 24471,
  [SMALL_STATE(681)] = 24479,
  [SMALL_STATE(682)] = 24487,
  [SMALL_STATE(683)] = 24495,
  [SMALL_STATE(684)] = 24503,
  [SMALL_STATE(685)] = 24511,
  [SMALL_STATE(686)] = 24519,
  [SMALL_STATE(687)] = 24527,
  [SMALL_STATE(688)] = 24535,
  [SMALL_STATE(689)] = 24543,
  [SMALL_STATE(690)] = 24551,
  [SMALL_STATE(691)] = 24559,
  [SMALL_STATE(692)] = 24567,
  [SMALL_STATE(693)] = 24575,
  [SMALL_STATE(694)] = 24583,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(176),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(58),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(205),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(209),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(189),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(214),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(35),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(11),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(119),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(651),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(651),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(374),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 2, .production_id = 12),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 1, .production_id = 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 3, .production_id = 12),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 2, .production_id = 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, .production_id = 20),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3, .production_id = 20),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 2, .production_id = 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 2, .production_id = 17),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 3, .production_id = 12),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2, .production_id = 9),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2, .production_id = 9),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 3, .production_id = 27),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(75),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(607),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(56),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(605),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1, .production_id = 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1, .production_id = 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5, .production_id = 38),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5, .production_id = 38),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1, .production_id = 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_lit, 1, .production_id = 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1, .production_id = 4),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_lit, 1, .production_id = 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8, .production_id = 47),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8, .production_id = 47),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7, .production_id = 44),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7, .production_id = 44),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7, .production_id = 42),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7, .production_id = 42),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6, .production_id = 42),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6, .production_id = 42),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1, .production_id = 10),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1, .production_id = 10),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 4, .production_id = 30),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 4, .production_id = 30),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4, .production_id = 29),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4, .production_id = 29),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_index, 3, .production_id = 19),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_index, 3, .production_id = 19),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 11),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 11),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 28),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 28),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 11),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 11),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 18),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 18),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_index, 2, .production_id = 19),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_index, 2, .production_id = 19),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(62),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(641),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(59),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(576),
  [560] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(80),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(632),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5, .production_id = 36),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5, .production_id = 36),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3, .production_id = 6),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_elem, 3, .production_id = 6),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 1, .production_id = 5),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 1, .production_id = 5),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 21),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 21),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_intro, 5, .production_id = 41),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_intro, 5, .production_id = 41),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_intro, 7, .production_id = 46),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_intro, 7, .production_id = 46),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(428),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(27),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(532),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template, 2),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(415),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(28),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(474),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(24),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(403),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 1, .production_id = 17),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 1, .production_id = 5),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_literal, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2, .production_id = 35),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2, .production_id = 35), SHIFT_REPEAT(85),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(419),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 8),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 8), SHIFT_REPEAT(505),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 8), SHIFT_REPEAT(498),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(427),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 2, .production_id = 27),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for, 3, .production_id = 25),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_end, 5),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template, 1),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_end, 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 3, .production_id = 16),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4, .production_id = 24),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4, .production_id = 31),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3, .production_id = 24),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 3, .production_id = 26),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 2),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_if_end, 4),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_directive, 1),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_if_end, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 4, .production_id = 26),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_if_end, 5),
  [865] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(63),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2, .production_id = 22),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 5, .production_id = 40),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_end, 4),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for, 2, .production_id = 15),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 6),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 2, .production_id = 12),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 2, .production_id = 16),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(492),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 4, .production_id = 33),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 5, .production_id = 31),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2, .production_id = 34),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_else_intro, 4),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 1),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_start, 9, .production_id = 49),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_start, 9, .production_id = 48),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_start, 8, .production_id = 45),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_start, 8, .production_id = 48),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_start, 10, .production_id = 49),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_start, 7, .production_id = 45),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 23),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_start, 7, .production_id = 43),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 7),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_else_intro, 5),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2, .production_id = 21),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_if_intro, 6, .production_id = 39),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_if_intro, 4, .production_id = 32),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 14),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_else_intro, 3),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_if_intro, 5, .production_id = 39),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 13),
  [1009] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(563),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_cond, 2, .production_id = 37),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_if_intro, 5, .production_id = 32),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_start, 6, .production_id = 43),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1302] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_hcl_external_scanner_create(void);
void tree_sitter_hcl_external_scanner_destroy(void *);
bool tree_sitter_hcl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_hcl_external_scanner_serialize(void *, char *);
void tree_sitter_hcl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hcl(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_hcl_external_scanner_create,
      tree_sitter_hcl_external_scanner_destroy,
      tree_sitter_hcl_external_scanner_scan,
      tree_sitter_hcl_external_scanner_serialize,
      tree_sitter_hcl_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
