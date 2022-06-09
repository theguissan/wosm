/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_WOSM_BISON_H_INCLUDED
# define YY_WOSM_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int wosm_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _ERROR_ = 258,
    _BANGEQ = 259,
    _DAMP = 260,
    _LPAREN = 261,
    _SYMB_11 = 262,
    _RPAREN = 263,
    _SYMB_16 = 264,
    _STAR = 265,
    _PLUS = 266,
    _COMMA = 267,
    _MINUS = 268,
    _SYMB_0 = 269,
    _SLASH = 270,
    _SEMI = 271,
    _LT = 272,
    _LDARROW = 273,
    _EQ = 274,
    _DEQ = 275,
    _GT = 276,
    _GTEQ = 277,
    _LBRACK = 278,
    _RBRACK = 279,
    _SYMB_6 = 280,
    _KW_begin = 281,
    _KW_char = 282,
    _SYMB_9 = 283,
    _KW_double = 284,
    _SYMB_17 = 285,
    _KW_end = 286,
    _SYMB_19 = 287,
    _SYMB_10 = 288,
    _KW_goto = 289,
    _SYMB_15 = 290,
    _KW_int = 291,
    _KW_program = 292,
    _SYMB_1 = 293,
    _KW_void = 294,
    _SYMB_18 = 295,
    _DBAR = 296,
    _RBRACE = 297,
    _INTEGER_ = 298,
    _DOUBLE_ = 299,
    _IDENT_ = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 50 "wosm.y"

  int    _int;
  char   _char;
  double _double;
  char*  _string;
  PROGRAM* program_;
  VARDECL* vardecl_;
  VAR* var_;
  ListVAR* listvar_;
  TYPE* type_;
  POINTER* pointer_;
  AST* ast_;
  ListAST* listast_;
  CONSTDECL* constdecl_;
  CONST* const_;
  ListCONST* listconst_;
  VALUE* value_;
  FUNCDECL* funcdecl_;
  FUNCTION* function_;
  ListFUNCTION* listfunction_;
  RETURN* return_;
  PARAM* param_;
  ListPARAM* listparam_;
  BLOCKPROG* blockprog_;
  CMD* cmd_;
  ListCMD* listcmd_;
  IF* if_;
  IFELSE* ifelse_;
  WHILE* while_;
  FOR* for_;
  GOTO* goto_;
  ASSIGMENT* assigment_;
  INCREMENT* increment_;
  COND* cond_;
  LOGICOP* logicop_;
  LOGICEXP* logicexp_;
  ListLOGICEXP* listlogicexp_;
  EXP* exp_;
  ARITOP* aritop_;
  ARITEXP* aritexp_;
  ListARITEXP* listaritexp_;

#line 146 "Bison.H"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int wosm_parse (yyscan_t scanner, YYSTYPE *result);

#endif /* !YY_WOSM_BISON_H_INCLUDED  */
