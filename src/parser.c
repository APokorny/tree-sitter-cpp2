#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 4
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_identifier_token1 = 1,
  anon_sym_L_DQUOTE = 2,
  anon_sym_u_DQUOTE = 3,
  anon_sym_U_DQUOTE = 4,
  anon_sym_u8_DQUOTE = 5,
  anon_sym_DQUOTE = 6,
  sym_escape_sequence = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_L_SQUOTE = 10,
  anon_sym_u_SQUOTE = 11,
  anon_sym_U_SQUOTE = 12,
  anon_sym_u8_SQUOTE = 13,
  anon_sym_SQUOTE = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_DOT = 21,
  anon_sym_STAR = 22,
  anon_sym_SLASH = 23,
  anon_sym_PERCENT = 24,
  anon_sym_PLUS = 25,
  anon_sym_DASH = 26,
  anon_sym_LT_LT = 27,
  anon_sym_GT_GT = 28,
  anon_sym_LT = 29,
  anon_sym_GT = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_BANG_EQ = 33,
  anon_sym_AMP = 34,
  anon_sym_CARET = 35,
  anon_sym_PIPE = 36,
  anon_sym_PIPE_PIPE = 37,
  anon_sym_COMMA = 38,
  anon_sym_BANG = 39,
  anon_sym_TILDE = 40,
  anon_sym_DOLLAR = 41,
  anon_sym_DOT_DOT_DOT = 42,
  anon_sym_EQ = 43,
  anon_sym_SLASH_EQ = 44,
  anon_sym_PERCENT_EQ = 45,
  anon_sym_PLUS_EQ = 46,
  anon_sym_DASH_EQ = 47,
  anon_sym_GT_GT_EQ = 48,
  anon_sym_LT_LT_EQ = 49,
  anon_sym_CARET_EQ = 50,
  anon_sym_PIPE_EQ = 51,
  anon_sym_const = 52,
  anon_sym_is = 53,
  anon_sym_as = 54,
  anon_sym_SEMI = 55,
  anon_sym_if = 56,
  anon_sym_else = 57,
  anon_sym_return = 58,
  anon_sym_while = 59,
  anon_sym_do = 60,
  anon_sym_for = 61,
  anon_sym_COLON = 62,
  anon_sym_next = 63,
  anon_sym_DASH_GT = 64,
  anon_sym_break = 65,
  anon_sym_continue = 66,
  anon_sym_in = 67,
  anon_sym_copy = 68,
  anon_sym_out = 69,
  anon_sym_move = 70,
  anon_sym_implicit = 71,
  anon_sym_virtual = 72,
  anon_sym_override = 73,
  anon_sym_final = 74,
  anon_sym_pre = 75,
  anon_sym_post = 76,
  anon_sym_throws = 77,
  anon_sym_type = 78,
  anon_sym_namespace = 79,
  anon_sym_requires = 80,
  anon_sym_public = 81,
  anon_sym_protected = 82,
  anon_sym_private = 83,
  sym_identifier = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_L_DQUOTE] = "L\"",
  [anon_sym_u_DQUOTE] = "u\"",
  [anon_sym_U_DQUOTE] = "U\"",
  [anon_sym_u8_DQUOTE] = "u8\"",
  [anon_sym_DQUOTE] = "\"",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_L_SQUOTE] = "L'",
  [anon_sym_u_SQUOTE] = "u'",
  [anon_sym_U_SQUOTE] = "U'",
  [anon_sym_u8_SQUOTE] = "u8'",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_COMMA] = ",",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_EQ] = "=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_const] = "const",
  [anon_sym_is] = "is",
  [anon_sym_as] = "as",
  [anon_sym_SEMI] = ";",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_return] = "return",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_for] = "for",
  [anon_sym_COLON] = ":",
  [anon_sym_next] = "next",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_in] = "in",
  [anon_sym_copy] = "copy",
  [anon_sym_out] = "out",
  [anon_sym_move] = "move",
  [anon_sym_implicit] = "implicit",
  [anon_sym_virtual] = "virtual",
  [anon_sym_override] = "override",
  [anon_sym_final] = "final",
  [anon_sym_pre] = "pre",
  [anon_sym_post] = "post",
  [anon_sym_throws] = "throws",
  [anon_sym_type] = "type",
  [anon_sym_namespace] = "namespace",
  [anon_sym_requires] = "requires",
  [anon_sym_public] = "public",
  [anon_sym_protected] = "protected",
  [anon_sym_private] = "private",
  [sym_identifier] = "identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_L_DQUOTE] = anon_sym_L_DQUOTE,
  [anon_sym_u_DQUOTE] = anon_sym_u_DQUOTE,
  [anon_sym_U_DQUOTE] = anon_sym_U_DQUOTE,
  [anon_sym_u8_DQUOTE] = anon_sym_u8_DQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_L_SQUOTE] = anon_sym_L_SQUOTE,
  [anon_sym_u_SQUOTE] = anon_sym_u_SQUOTE,
  [anon_sym_U_SQUOTE] = anon_sym_U_SQUOTE,
  [anon_sym_u8_SQUOTE] = anon_sym_u8_SQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_copy] = anon_sym_copy,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_implicit] = anon_sym_implicit,
  [anon_sym_virtual] = anon_sym_virtual,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_pre] = anon_sym_pre,
  [anon_sym_post] = anon_sym_post,
  [anon_sym_throws] = anon_sym_throws,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_requires] = anon_sym_requires,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_private] = anon_sym_private,
  [sym_identifier] = sym_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_L_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_L_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_DOT] = {
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
  [anon_sym_DASH] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_AMP] = {
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
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
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
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implicit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throws] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_requires] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(117);
      if (lookahead == '!') ADVANCE(158);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '%') ADVANCE(143);
      if (lookahead == '&') ADVANCE(153);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == ';') ADVANCE(174);
      if (lookahead == '<') ADVANCE(148);
      if (lookahead == '=') ADVANCE(162);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == 'L') ADVANCE(1);
      if (lookahead == 'U') ADVANCE(2);
      if (lookahead == '[') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(139);
      if (lookahead == '^') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(3);
      if (lookahead == 'v') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(40);
      if (lookahead == '{') ADVANCE(136);
      if (lookahead == '|') ADVANCE(155);
      if (lookahead == '}') ADVANCE(137);
      if (lookahead == '~') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(129);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(131);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(130);
      if (lookahead == '8') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '\'') ADVANCE(132);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(161);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(112);
      if (lookahead == 'x') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'k') ADVANCE(184);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 71:
      if (lookahead == 'q') ADVANCE(98);
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 103:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 104:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 105:
      if (lookahead == 'w') ADVANCE(81);
      END_STATE();
    case 106:
      if (lookahead == 'x') ADVANCE(89);
      END_STATE();
    case 107:
      if (lookahead == 'y') ADVANCE(187);
      END_STATE();
    case 108:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(108)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_L_DQUOTE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_u_DQUOTE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_U_DQUOTE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_u8_DQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_L_SQUOTE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_u_SQUOTE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_U_SQUOTE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_u8_SQUOTE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(163);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(164);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(165);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '>') ADVANCE(183);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(168);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(167);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '=') ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(147);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(170);
      if (lookahead == '|') ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(152);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(151);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_copy);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_implicit);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_pre);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 108},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_L_DQUOTE] = ACTIONS(1),
    [anon_sym_u_DQUOTE] = ACTIONS(1),
    [anon_sym_U_DQUOTE] = ACTIONS(1),
    [anon_sym_u8_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_L_SQUOTE] = ACTIONS(1),
    [anon_sym_u_SQUOTE] = ACTIONS(1),
    [anon_sym_U_SQUOTE] = ACTIONS(1),
    [anon_sym_u8_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_copy] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_implicit] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_pre] = ACTIONS(1),
    [anon_sym_post] = ACTIONS(1),
    [anon_sym_throws] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_requires] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
  },
  [1] = {
    [sym_identifier] = STATE(3),
    [aux_sym_identifier_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
  [4] = 1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 4,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [7] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cpp2(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
