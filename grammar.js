module.exports = grammar({
  name: 'cpp2',
  rules: {
    identifier: $ => /[a-zA-Z_][a-zA-Z_0-9]*/
    ,

    string_literal: $ => seq(
      choice('L"', 'u"', 'U"', 'u8"', '"'),
      repeat(choice(
        alias(token.immediate(prec(1, /[^\\"\n]+/)), $.string_content),
        $.escape_sequence,
      )),
      '"',
    ),

    escape_sequence: _ => token(prec(1, seq(
      '\\',
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/,
      ),
    ))),


    boolean_literal: $ => choice('true', 'false'),
    char_literal: $ => seq(
      choice('L\'', 'u\'', 'U\'', 'u8\'', '\''),
      choice(
        $.escape_sequence,
        alias(token.immediate(/[^\n']/), $.character),
      ),
      '\'',
    ),


    number_literal: $ => {
      const sign = /[-\+]/;
      const separator = '\'';
      const binary = /[01]/;
      const binaryDigits = seq(repeat1(binary), repeat(seq(separator, repeat1(binary))));
      const decimal = /[0-9]/;
      const firstDecimal = /[1-9]/;
      const intDecimalDigits = seq(firstDecimal, repeat(decimal), repeat(seq(separator, repeat1(decimal))));
      const floatDecimalDigits = seq(repeat1(decimal), repeat(seq(separator, repeat1(decimal))));
      const hex = /[0-9a-fA-F]/;
      const hexDigits = seq(repeat1(hex), repeat(seq(separator, repeat1(hex))));
      const octal = /[0-7]/;
      const octalDigits = seq('0', repeat(octal), repeat(seq(separator, repeat1(octal))));
      const hexExponent = seq(/[pP]/, optional(sign), floatDecimalDigits);
      const decimalExponent = seq(/[eE]/, optional(sign), floatDecimalDigits);
      const intSuffix = /(ll|LL)[uU]?|[uU](ll|LL)?|[uU][lL]?|[uU][zZ]?|[lL][uU]?|[zZ][uU]?/;
      const floatSuffix = /([fF](16|32|64|128)?)|[lL]|(bf16|BF16)/;

      return token(seq(
        optional(sign),
        choice(
          seq(
            choice(
              seq(choice('0b', '0B'), binaryDigits),
              intDecimalDigits,
              seq(choice('0x', '0X'), hexDigits),
              octalDigits,
            ),
            optional(intSuffix),
          ),
          seq(
            choice(
              seq(floatDecimalDigits, decimalExponent),
              seq(floatDecimalDigits, '.', optional(floatDecimalDigits), optional(decimalExponent)),
              seq('.', floatDecimalDigits, optional(decimalExponent)),
              seq(
                choice('0x', '0X'),
                choice(
                  hexDigits,
                  seq(hexDigits, '.', optional(hexDigits)),
                  seq('.', hexDigits)),
                hexExponent,
              ),
            ),
            optional(floatSuffix),
          ),
        ),
      ));
    },


    literal_suffix: _ => token.immediate(/[a-zA-Z_]\w*/),

        user_defined_literal: $ => seq(
      choice(
        $.number_literal,
        $.char_literal,
        $.string_literal,
      ),
      $.literal_suffix,
    ),



    source_file: $ => repeat($.declaration),
    primary_expression: $ => choice(
      $.inspect_expression, 
      $.id_expression, 
      $.literal,
      seq('(' , $.expression_list, ')'), 
      seq('{' , $.expression_list, '}'),
      $.unnamed_declaration),
    // await_expression: $ =>   ,
    // sizeof_expression: $ =>   ,
    // var_sizeof_expression: $ =>   ,
    // alignof_expression: $ =>   ,
    // throws_expression: $ =>   ,
    postfix_expression: $ => choice(
      $.primary_expression, 
      seq($.primary_expression, $.postfix_operator), 
      seq($.postfix_expression, '[', $.expression_list, ']'),
      seq($.postfix_expression, '(', $.expression_list, ')'),
      seq($.postfix_expression, '.', $.id_expression),
    ),
    prefix_expression: $ => choice(
      $.postfix_expression, 
      seq($.prefix_operator,$.prefix_expression)
      // $.await_expression,
      // $.sizeof_expression,
      //$.var_sizeof_expression,
      // $.alignof_expression,
      //$.throws_expression,
    ),
    multiplicative_expression: $ => choice(
      $.is_as_expression,
      seq($.multiplicative_expression, '*', $.is_as_expression),
      seq($.multiplicative_expression, '/', $.is_as_expression),
      seq($.multiplicative_expression, '%', $.is_as_expression)
    ),
    additive_expression: $ => choice(
      $.multiplicative_expression,
      seq($.additive_expression, '+', $.multiplicative_expression),
      seq($.additive_expression, '-', $.multiplicative_expression)
    ),
    shift_expression: $ => choice(
      $.additive_expression,
      seq($.shift_expression, '<<', $.additive_expression),
      seq($.shift_expression, '>>', $.additive_expression)
    ),
    compare_expression: $ => choice(
      $.shift_expression,
      seq($.compare_expression, '<<', $.shift_expression)
    ),
    relational_expression: $ => choice(
      $.compare_expression,
      seq($.relational_expression, '<', $.compare_expression),
      seq($.relational_expression, '>', $.compare_expression),
      seq($.relational_expression, '<=', $.compare_expression),
      seq($.relational_expression, '>=', $.compare_expression)
    ),
    equality_expression: $ => choice(
      $.relational_expression,
      seq($.equality_expression, '==', $.relational_expression),
      seq($.equality_expression, '!=', $.relational_expression)
    ),
    bit_and_expression: $ => choice(
      $.equality_expression,
      seq($.bit_and_expression, '&', $.equality_expression)
    ),
    bit_xor_expression: $ => choice(
      $.bit_and_expression,
      seq($.bit_xor_expression, '^', $.bit_and_expression)
    ),
    bit_or_expression: $ => choice(
      $.bit_xor_expression,
      seq($.bit_or_expression, '|', $.bit_xor_expression)
    ),
    logical_and_expression: $ => choice(
      $.bit_or_expression,
      seq($.logical_and_expression, '&&', $.bit_or_expression)
    ),
    logical_or_expression: $ => choice(
      $.logical_and_expression,
      seq($.logical_or_expression, '||', $.logical_and_expression)
    ),
    assignment_expression: $ => choice(
      $.logical_or_expression,
      seq($.assignment_expression, $.assignment_operator, $.logical_or_expression)
    ),
    expression: $ => $.assignment_expression, //choice(
      //$.assignment_expression,
      //$.try_expression),
    expression_list: $ => seq(optional($.parameter_direction), $.expression, repeat(seq(',', optional($.parameter_direction), $.expression))),
    prefix_operator: $ => choice('!','-','+'),
    postfix_operator: $ => choice('++','--','*','&','~','$','...'),
    assignment_operator: $ => choice('=','*=','/=','%=','+=','-=','>>=','<<=','&=','^=','|='),
    type_id: $ => seq(repeat($.type_qualifier), choice($.qualified_id, $.unqualified_id)),
    type_qualifier: $ => choice('const', '*'),
    is_as_expression: $ => choice(
      $.prefix_expression,
      seq($.is_as_expression, $.is_type_constraint),
      seq($.is_as_expression, $.is_value_constraint),
    ),
    is_type_constraint: $ =>  seq('is', $.type_id),
    is_value_constraint: $ =>  seq('is', $.expression),
    as_type_cast: $ => seq('as', $.type_id),
    unqualified_id: $ =>  $.identifier,
    template_id: $ => seq($.identifier, '<', optional(seq($.template_argument, repeat(seq(',', $.template_argument)))),'>'),
    template_argument: $ => choice(
      seq('const',$.type_id),
      $.expression,
      $.type_id,
    ),
    qualified_id: $ => choice(
      seq($.nested_name_specifier, $.unqualified_id),
      seq($.member_name_specifier, $.unqualified_id),
    ),
    nested_name_specifier: $ => choice(
      '::',
      seq($.unqualified_id , '::'),
    ),
    member_name_specifier: $ =>  seq($.unqualified_id, '.'),
    id_expression: $ => choice(
      $.qualified_id,
      $.unqualified_id,
    ),
    ud_suffix: $=> $.identifier,
    literal: $ => choice(
      seq($.number_literal, optional($.ud_suffix)),
      seq($.char_literal, optional($.ud_suffix)),
      seq($.string_literal, optional($.ud_suffix)),
      seq($.boolean_literal, optional($.ud_suffix)),
      seq($.user_defined_literal, optional($.ud_suffix)),
    ),
    expression_statement: $ => choice(
      seq($.expression, ';'),
      $.expression,
    ),
    selection_statement: $ => choice(
    seq('if', optional('constexpr'), $.logical_or_expression, $.compound_statement),
    seq('if', optional('constexpr'), $.logical_or_expression, $.compound_statement , 'else', $.compound_statement),
    ),
    return_statement: $ => seq('return', optional($.expression), ';'),
    iteration_statement: $ => choice(
      seq(optional($.label), 'while', $.logical_or_expression, optional($.next_clause), $.compound_statement),
      seq(optional($.label), 'do', $.compound_statement, 'while', $.logical_or_expression, optional($.next_clause), ';'),
      seq(optional($.label), 'for', $.expression, optional($.next_clause), 'do', $.unnamed_declaration),
    ),
    label: $ => seq($.identifier, ':'), 
    next_clause: $ =>  seq('next', $.assignment_expression),
    alternative: $ => choice(
      seq(optional($.alt_name),$.is_type_constraint,'=',$.statement),
      seq(optional($.alt_name),$.is_value_constraint,'=',$.statement),
      seq(optional($.alt_name),$.as_type_cast,'=',$.statement),
    ),
    alt_name: $ => seq($.unqualified_id, ':'),
    inspect_expression: $ => choice(
      seq('inspect',optional('constexpr'), $.expression, '{', repeat($.alternative), '}'),
      seq('inspect', optional('constexpr'), $.expression,  '->', $.type_id ,'{', repeat($.alternative),'}'),
    ),
    jump_statement: $ => choice(
      seq('break', optional($.identifier), ';'),
      seq('continue', optional($.identifier), ';'),
    ),
    statement: $ => choice(
      $.selection_statement,
      $.inspect_expression,
      $.return_statement,
      $.jump_statement,
      $.iteration_statement,
      $.compound_statement,
      $.declaration,
      $.expression_statement,
      $.contract,
     // $.try_block,
    ),
    compound_statement: $ =>  seq('{', repeat($.statement), '}'),
    parameter_declaration: $ =>  seq(optional($.this_specifier), optional($.parameter_direction), $.declaration),
    parameter_direction: $ => choice('in','copy','inout','out','move','forward'),
    this_specifier: $ => choice( 'implicit',  'virtual',  'override','final'),
    parameter_declaration_list: $ => seq('(',$.parameter_declaration, repeat(seq(',', $.parameter_declaration)), ')'),
    contract: $ => choice(
      seq('[','[', $.contract_kind, optional($.id_expression), ':', $.logical_or_expression, ']', ']'),
      seq('[','[', $.contract_kind, optional($.id_expression), ':', $.logical_or_expression, ',', $.string_literal, ']', ']')
    ),
    contract_kind: $ => choice('pre', 'post', 'assert'),
    function_type: $ => seq($.parameter_declaration_list, optional('throws'), optional($.return_list), repeat($.contract)),
    return_list: $ => choice(
      $.expression_statement,
      seq('->', optional($.return_direction), $.type_id),
      seq('->', $.parameter_declaration_list),
    ),
    return_direction: $ => choice( 'forward', 'move'),
    unnamed_declaration: $ => choice(
      seq(':', repeat($.id_expression), optional($.template_parameter_declaration_list), $.function_type, optional($.requires_clause), '=', $.statement),
      seq(':', repeat($.id_expression), optional($.template_parameter_declaration_list), $.function_type, $.statement),
      seq(':', repeat($.id_expression), optional($.template_parameter_declaration_list), optional($.type_id), optional($.requires_clause), '=', $.statement),
      seq(':', repeat($.id_expression), optional($.template_parameter_declaration_list), $.type_id),
      seq(':', repeat($.id_expression), optional($.template_parameter_declaration_list), optional('final'), 'type', optional($.requires_clause),  '=' , $.statement),
      seq(':', 'namespace', '=', $.statement),
    ),
    requires_clause: $ => choice('requires', $.logical_or_expression),
    template_parameter_declaration_list: $ => seq( '<', $.parameter_declaration_list, '>'),
    alias: $ => choice(
      seq(':', optional($.template_parameter_declaration_list), 'type', optional($.requires_clause), '==', $.type_id, ';'),
      seq(':', 'namespace', '==', $.id_expression, ';'),
      seq(':', optional($.template_parameter_declaration_list), optional($.type_id), optional($.requires_clause), '==', $.expression,';'),
      seq(':', $.function_type, '==', $.expression, ';'),
    ),
    declaration: $ => choice(
      seq(optional($.access_specifier), $.identifier, optional('...') , $.unnamed_declaration),
      seq(optional($.access_specifier), $.identifier, $.alias),
    ),
    access_specifier: $ => choice(
      'public',
      'protected',
      'private',
    ),
  },
})  
