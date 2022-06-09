/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         wosm_parse
#define yylex           wosm_lex
#define yyerror         wosm_error
#define yydebug         wosm_debug
#define yynerrs         wosm_nerrs

/* First part of user prologue.  */
#line 20 "wosm.y"

/* Begin C preamble code */

#include <algorithm> /* for std::reverse */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Absyn.H"

#define YYMAXDEPTH 10000000

/* The type yyscan_t is defined by flex, but we need it in the parser already. */
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern YY_BUFFER_STATE wosm__scan_string(const char *str, yyscan_t scanner);
extern void wosm__delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);

extern void wosm_lex_destroy(yyscan_t scanner);
extern char* wosm_get_text(yyscan_t scanner);

extern yyscan_t wosm__initialize_lexer(FILE * inp);

/* End C preamble code */

#line 104 "Parser.C"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 245 "Parser.C"

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

/* Second part of user prologue.  */
#line 93 "wosm.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, wosm_get_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 286 "Parser.C"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   163

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  147

#define YYUNDEFTOK  2
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   190,   190,   192,   193,   195,   196,   197,   198,   200,
     201,   203,   204,   205,   206,   208,   209,   210,   212,   214,
     215,   217,   218,   220,   222,   223,   225,   226,   227,   229,
     230,   232,   233,   235,   236,   238,   239,   240,   241,   243,
     245,   246,   247,   249,   251,   252,   253,   254,   255,   256,
     258,   259,   261,   263,   265,   267,   269,   271,   272,   274,
     275,   277,   279,   280,   281,   282,   283,   284,   285,   286,
     288,   290,   291,   292,   293,   294,   295,   297,   299,   300,
     301,   302,   304,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_ERROR_", "_BANGEQ", "_DAMP", "_LPAREN",
  "_SYMB_11", "_RPAREN", "_SYMB_16", "_STAR", "_PLUS", "_COMMA", "_MINUS",
  "_SYMB_0", "_SLASH", "_SEMI", "_LT", "_LDARROW", "_EQ", "_DEQ", "_GT",
  "_GTEQ", "_LBRACK", "_RBRACK", "_SYMB_6", "_KW_begin", "_KW_char",
  "_SYMB_9", "_KW_double", "_SYMB_17", "_KW_end", "_SYMB_19", "_SYMB_10",
  "_KW_goto", "_SYMB_15", "_KW_int", "_KW_program", "_SYMB_1", "_KW_void",
  "_SYMB_18", "_DBAR", "_RBRACE", "_INTEGER_", "_DOUBLE_", "_IDENT_",
  "$accept", "PROGRAM", "VARDECL", "VAR", "ListVAR", "TYPE", "POINTER",
  "AST", "ListAST", "CONSTDECL", "CONST", "ListCONST", "VALUE", "FUNCDECL",
  "FUNCTION", "ListFUNCTION", "RETURN", "PARAM", "ListPARAM", "BLOCKPROG",
  "CMD", "ListCMD", "IF", "IFELSE", "WHILE", "FOR", "GOTO", "ASSIGMENT",
  "INCREMENT", "COND", "LOGICOP", "LOGICEXP", "ListLOGICEXP", "EXP",
  "ARITOP", "ARITEXP", "ListARITEXP", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300
};
# endif

#define YYPACT_NINF (-88)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-20)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -28,   -31,    17,    14,   -88,    -8,   -88,    16,    -7,   -88,
       0,    32,    32,    32,   -88,    34,    15,   -88,    25,   -88,
      39,    61,    61,    61,   -88,    43,   -88,    23,    57,   -23,
     -88,   -88,   -88,   -88,     5,    35,    68,   -88,   -88,   -88,
     -88,   -88,   -88,    73,    50,    51,   -88,   -88,    21,   -88,
       5,    81,     5,   -88,   109,   -88,    53,    72,     5,     5,
      65,   -88,   103,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     5,    21,    -3,   -88,   -88,     5,    21,    63,
     -88,     5,    86,    59,    99,     5,   117,     5,   101,   -88,
      21,     5,     5,     5,     5,    21,   110,   134,   148,   141,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     5,
     -88,    -4,   -88,   -88,   124,   133,    69,   -88,   -88,   -88,
     -88,   -88,    63,   -88,   114,    21,    78,     5,     5,    87,
     -88,     5,   -88,   -88,   142,   151,   -88,   -88,   -88,   -88,
     132,     5,   -88,   -88,    21,    96,   -88
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,     9,    22,     0,    24,
      30,    13,    12,    11,     3,     0,     0,    14,     0,    33,
       0,    17,    16,    15,    10,     5,    21,     0,     0,     0,
      50,     2,    18,    20,     0,     0,     0,    25,    37,    36,
      35,    38,    29,     0,     0,     0,    26,    27,     6,    28,
      83,     0,     0,    34,     0,    43,     0,     0,     0,     0,
       0,    51,    44,    45,    46,    47,    48,    49,    80,    78,
      79,    81,     0,     0,    84,    77,     7,     0,    23,    40,
      31,     0,     0,     0,     0,    71,     0,     0,     0,    50,
      82,    83,    83,    83,    83,     8,     0,    41,     0,     0,
      56,    65,    68,    62,    63,    64,    67,    66,    69,     0,
      50,    72,    61,    50,     0,     0,     0,    91,    85,    88,
      94,    39,    40,    32,    60,    70,     0,    71,    71,     0,
      57,     0,    53,    42,     0,     0,    52,    73,    76,    54,
       0,     0,    50,    58,    59,     0,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -88,   -88,   -88,   -88,   -88,     3,   -88,   -88,   112,   -88,
     -88,   -88,   -34,   -88,   -88,   -88,   -88,   -88,    40,   -88,
     -88,   -87,   -88,   -88,   -88,   -88,   -88,   107,   -88,   -54,
     -88,   -82,    26,   -88,   -88,   -35,    58
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    15,     8,    96,    17,    33,    21,    10,
      28,    18,    73,    20,    43,    29,    44,    97,    98,    31,
      61,    45,    62,    63,    64,    65,    66,    67,   135,    84,
     109,    85,   112,    49,    72,    50,    75
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,   127,   116,   111,    38,    86,    39,    91,    92,     1,
      93,    16,    94,    40,     3,    74,    41,     4,    78,    42,
      11,    27,    12,   126,    83,    83,   129,    99,     5,    13,
       6,    68,    69,    19,    70,    14,    71,   128,    90,    74,
      46,    47,   -19,    95,     9,   111,   111,    83,    46,    47,
      24,    83,    11,   114,    12,   145,    74,    74,    74,    74,
      25,    13,    34,   101,   102,    30,    35,    26,    36,    68,
      69,    32,    70,    37,    71,   125,   103,   104,    51,   105,
     106,   107,    55,    56,    87,    57,    58,    52,    88,    53,
      11,    59,    12,    83,    83,    54,    60,   140,    60,    13,
     108,    56,   100,    57,    58,    76,    77,   144,   110,    59,
      56,   132,    57,    58,    60,    79,    80,    82,    59,    56,
     136,    57,    58,    60,    22,    23,   113,    59,    56,   139,
      57,    58,    60,    89,    68,    69,    59,    70,   146,    71,
     130,    60,    68,    69,   115,    70,   122,    71,   143,   117,
     118,   119,   120,   137,   138,   121,   123,   124,   131,   134,
     142,   141,   133,    81
};

static const yytype_uint8 yycheck[] =
{
      34,     5,    89,    85,    27,    59,    29,    10,    11,    37,
      13,     8,    15,    36,    45,    50,    39,     0,    52,    42,
      27,    18,    29,   110,    58,    59,   113,    81,    14,    36,
      38,    10,    11,    33,    13,    42,    15,    41,    72,    74,
      43,    44,    10,    77,    28,   127,   128,    81,    43,    44,
      16,    85,    27,    87,    29,   142,    91,    92,    93,    94,
      45,    36,    19,     4,     5,    26,    23,    42,    45,    10,
      11,    10,    13,    16,    15,   109,    17,    18,    43,    20,
      21,    22,    31,    32,    19,    34,    35,    19,    23,    16,
      27,    40,    29,   127,   128,    45,    45,   131,    45,    36,
      41,    32,    16,    34,    35,    24,    25,   141,     9,    40,
      32,    42,    34,    35,    45,     6,     7,    45,    40,    32,
      42,    34,    35,    45,    12,    13,     9,    40,    32,    42,
      34,    35,    45,    30,    10,    11,    40,    13,    42,    15,
      16,    45,    10,    11,    43,    13,    12,    15,    16,    91,
      92,    93,    94,   127,   128,    45,     8,    16,    25,    45,
       9,    19,   122,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    37,    47,    45,     0,    14,    38,    48,    50,    28,
      55,    27,    29,    36,    42,    49,    51,    52,    57,    33,
      59,    54,    54,    54,    16,    45,    42,    51,    56,    61,
      26,    65,    10,    53,    19,    23,    45,    16,    27,    29,
      36,    39,    42,    60,    62,    67,    43,    44,    58,    79,
      81,    43,    19,    16,    45,    31,    32,    34,    35,    40,
      45,    66,    68,    69,    70,    71,    72,    73,    10,    11,
      13,    15,    80,    58,    81,    82,    24,    25,    58,     6,
       7,    73,    45,    58,    75,    77,    75,    19,    23,    30,
      58,    10,    11,    13,    15,    58,    51,    63,    64,    75,
      16,     4,     5,    17,    18,    20,    21,    22,    41,    76,
       9,    77,    78,     9,    58,    43,    67,    82,    82,    82,
      82,    45,    12,     8,    16,    58,    67,     5,    41,    67,
      16,    25,    42,    64,    45,    74,    42,    78,    78,    42,
      58,    19,     9,    16,    58,    67,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    49,    50,
      50,    51,    51,    51,    51,    52,    52,    52,    53,    54,
      54,    55,    55,    56,    57,    57,    58,    58,    58,    59,
      59,    60,    60,    61,    61,    62,    62,    62,    62,    63,
      64,    64,    64,    65,    66,    66,    66,    66,    66,    66,
      67,    67,    68,    69,    70,    71,    72,    73,    73,    74,
      74,    75,    76,    76,    76,    76,    76,    76,    76,    76,
      77,    78,    78,    78,    78,    78,    78,    79,    80,    80,
      80,    80,    81,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     3,     0,     2,     4,     5,     6,     0,
       3,     1,     1,     1,     1,     2,     2,     2,     1,     0,
       2,     3,     0,     4,     0,     3,     1,     1,     1,     3,
       0,     3,     5,     0,     3,     1,     1,     1,     1,     2,
       0,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       0,     2,     5,     4,     5,     8,     3,     4,     6,     3,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     0,     1,     3,     0,     1,     3,     2,     1,     1,
       1,     1,     3,     0,     1,     3,     0,     1,     3,     0,
       1,     3,     0,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, result, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, scanner, result); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (result);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, scanner, result);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t scanner, YYSTYPE *result)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , scanner, result);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, result); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (result);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, YYSTYPE *result)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 190 "wosm.y"
                                                                           { (yyval.program_) = new Program((yyvsp[-5]._string), (yyvsp[-3].vardecl_), (yyvsp[-2].constdecl_), (yyvsp[-1].funcdecl_), (yyvsp[0].blockprog_)); result->program_ = (yyval.program_); }
#line 1669 "Parser.C"
    break;

  case 3:
#line 192 "wosm.y"
                                  { (yyval.vardecl_) = new VDecl((yyvsp[-1].listvar_)); result->vardecl_ = (yyval.vardecl_); }
#line 1675 "Parser.C"
    break;

  case 4:
#line 193 "wosm.y"
                { (yyval.vardecl_) = new VDeclVoid(); result->vardecl_ = (yyval.vardecl_); }
#line 1681 "Parser.C"
    break;

  case 5:
#line 195 "wosm.y"
                   { (yyval.var_) = new Var((yyvsp[-1].type_), (yyvsp[0]._string)); result->var_ = (yyval.var_); }
#line 1687 "Parser.C"
    break;

  case 6:
#line 196 "wosm.y"
                           { (yyval.var_) = new VarAssig((yyvsp[-3].type_), (yyvsp[-2]._string), (yyvsp[0].value_)); result->var_ = (yyval.var_); }
#line 1693 "Parser.C"
    break;

  case 7:
#line 197 "wosm.y"
                                           { (yyval.var_) = new VarV((yyvsp[-4].type_), (yyvsp[-3]._string), (yyvsp[-1]._int)); result->var_ = (yyval.var_); }
#line 1699 "Parser.C"
    break;

  case 8:
#line 198 "wosm.y"
                                                 { (yyval.var_) = new VarAssigV((yyvsp[-5].type_), (yyvsp[-4]._string), (yyvsp[-2]._int), (yyvsp[0].value_)); result->var_ = (yyval.var_); }
#line 1705 "Parser.C"
    break;

  case 9:
#line 200 "wosm.y"
                      { (yyval.listvar_) = new ListVAR(); result->listvar_ = (yyval.listvar_); }
#line 1711 "Parser.C"
    break;

  case 10:
#line 201 "wosm.y"
                      { (yyvsp[-2].listvar_)->push_back((yyvsp[-1].var_)); (yyval.listvar_) = (yyvsp[-2].listvar_); result->listvar_ = (yyval.listvar_); }
#line 1717 "Parser.C"
    break;

  case 11:
#line 203 "wosm.y"
               { (yyval.type_) = new TYPE_int(); result->type_ = (yyval.type_); }
#line 1723 "Parser.C"
    break;

  case 12:
#line 204 "wosm.y"
               { (yyval.type_) = new TYPE_double(); result->type_ = (yyval.type_); }
#line 1729 "Parser.C"
    break;

  case 13:
#line 205 "wosm.y"
             { (yyval.type_) = new TYPE_char(); result->type_ = (yyval.type_); }
#line 1735 "Parser.C"
    break;

  case 14:
#line 206 "wosm.y"
            { (yyval.type_) = new TYPEPOINTER((yyvsp[0].pointer_)); result->type_ = (yyval.type_); }
#line 1741 "Parser.C"
    break;

  case 15:
#line 208 "wosm.y"
                          { (yyval.pointer_) = new PointerInt((yyvsp[0].listast_)); result->pointer_ = (yyval.pointer_); }
#line 1747 "Parser.C"
    break;

  case 16:
#line 209 "wosm.y"
                       { (yyval.pointer_) = new PointerDouble((yyvsp[0].listast_)); result->pointer_ = (yyval.pointer_); }
#line 1753 "Parser.C"
    break;

  case 17:
#line 210 "wosm.y"
                     { (yyval.pointer_) = new PointerChar((yyvsp[0].listast_)); result->pointer_ = (yyval.pointer_); }
#line 1759 "Parser.C"
    break;

  case 18:
#line 212 "wosm.y"
            { (yyval.ast_) = new Ast(); result->ast_ = (yyval.ast_); }
#line 1765 "Parser.C"
    break;

  case 19:
#line 214 "wosm.y"
                      { (yyval.listast_) = new ListAST(); result->listast_ = (yyval.listast_); }
#line 1771 "Parser.C"
    break;

  case 20:
#line 215 "wosm.y"
                { (yyvsp[-1].listast_)->push_back((yyvsp[0].ast_)); (yyval.listast_) = (yyvsp[-1].listast_); result->listast_ = (yyval.listast_); }
#line 1777 "Parser.C"
    break;

  case 21:
#line 217 "wosm.y"
                                      { (yyval.constdecl_) = new CDecl((yyvsp[-1].listconst_)); result->constdecl_ = (yyval.constdecl_); }
#line 1783 "Parser.C"
    break;

  case 22:
#line 218 "wosm.y"
                { (yyval.constdecl_) = new CDeclVoid(); result->constdecl_ = (yyval.constdecl_); }
#line 1789 "Parser.C"
    break;

  case 23:
#line 220 "wosm.y"
                               { (yyval.const_) = new Const((yyvsp[-3].type_), (yyvsp[-2]._string), (yyvsp[0].value_)); result->const_ = (yyval.const_); }
#line 1795 "Parser.C"
    break;

  case 24:
#line 222 "wosm.y"
                        { (yyval.listconst_) = new ListCONST(); result->listconst_ = (yyval.listconst_); }
#line 1801 "Parser.C"
    break;

  case 25:
#line 223 "wosm.y"
                          { (yyvsp[-2].listconst_)->push_back((yyvsp[-1].const_)); (yyval.listconst_) = (yyvsp[-2].listconst_); result->listconst_ = (yyval.listconst_); }
#line 1807 "Parser.C"
    break;

  case 26:
#line 225 "wosm.y"
                  { (yyval.value_) = new VALUEInteger((yyvsp[0]._int)); result->value_ = (yyval.value_); }
#line 1813 "Parser.C"
    break;

  case 27:
#line 226 "wosm.y"
             { (yyval.value_) = new VALUEDouble((yyvsp[0]._double)); result->value_ = (yyval.value_); }
#line 1819 "Parser.C"
    break;

  case 28:
#line 227 "wosm.y"
        { (yyval.value_) = new VALUEEXP((yyvsp[0].exp_)); result->value_ = (yyval.value_); }
#line 1825 "Parser.C"
    break;

  case 29:
#line 229 "wosm.y"
                                         { (yyval.funcdecl_) = new FDecl((yyvsp[-1].listfunction_)); result->funcdecl_ = (yyval.funcdecl_); }
#line 1831 "Parser.C"
    break;

  case 30:
#line 230 "wosm.y"
                { (yyval.funcdecl_) = new FDeclVoid(); result->funcdecl_ = (yyval.funcdecl_); }
#line 1837 "Parser.C"
    break;

  case 31:
#line 232 "wosm.y"
                                   { (yyval.function_) = new Function((yyvsp[-2].return_), (yyvsp[-1]._string)); result->function_ = (yyval.function_); }
#line 1843 "Parser.C"
    break;

  case 32:
#line 233 "wosm.y"
                                             { std::reverse((yyvsp[-1].listparam_)->begin(),(yyvsp[-1].listparam_)->end()) ;(yyval.function_) = new FunctionP((yyvsp[-4].return_), (yyvsp[-3]._string), (yyvsp[-1].listparam_)); result->function_ = (yyval.function_); }
#line 1849 "Parser.C"
    break;

  case 33:
#line 235 "wosm.y"
                           { (yyval.listfunction_) = new ListFUNCTION(); result->listfunction_ = (yyval.listfunction_); }
#line 1855 "Parser.C"
    break;

  case 34:
#line 236 "wosm.y"
                                { (yyvsp[-2].listfunction_)->push_back((yyvsp[-1].function_)); (yyval.listfunction_) = (yyvsp[-2].listfunction_); result->listfunction_ = (yyval.listfunction_); }
#line 1861 "Parser.C"
    break;

  case 35:
#line 238 "wosm.y"
                 { (yyval.return_) = new RETURN_int(); result->return_ = (yyval.return_); }
#line 1867 "Parser.C"
    break;

  case 36:
#line 239 "wosm.y"
               { (yyval.return_) = new RETURN_double(); result->return_ = (yyval.return_); }
#line 1873 "Parser.C"
    break;

  case 37:
#line 240 "wosm.y"
             { (yyval.return_) = new RETURN_char(); result->return_ = (yyval.return_); }
#line 1879 "Parser.C"
    break;

  case 38:
#line 241 "wosm.y"
             { (yyval.return_) = new RETURN_void(); result->return_ = (yyval.return_); }
#line 1885 "Parser.C"
    break;

  case 39:
#line 243 "wosm.y"
                     { (yyval.param_) = new Param((yyvsp[-1].type_), (yyvsp[0]._string)); result->param_ = (yyval.param_); }
#line 1891 "Parser.C"
    break;

  case 40:
#line 245 "wosm.y"
                        { (yyval.listparam_) = new ListPARAM(); result->listparam_ = (yyval.listparam_); }
#line 1897 "Parser.C"
    break;

  case 41:
#line 246 "wosm.y"
          { (yyval.listparam_) = new ListPARAM(); (yyval.listparam_)->push_back((yyvsp[0].param_)); result->listparam_ = (yyval.listparam_); }
#line 1903 "Parser.C"
    break;

  case 42:
#line 247 "wosm.y"
                           { (yyvsp[0].listparam_)->push_back((yyvsp[-2].param_)); (yyval.listparam_) = (yyvsp[0].listparam_); result->listparam_ = (yyval.listparam_); }
#line 1909 "Parser.C"
    break;

  case 43:
#line 249 "wosm.y"
                                      { (yyval.blockprog_) = new BlockProg((yyvsp[-1].listcmd_)); result->blockprog_ = (yyval.blockprog_); }
#line 1915 "Parser.C"
    break;

  case 44:
#line 251 "wosm.y"
         { (yyval.cmd_) = new CMDIF((yyvsp[0].if_)); result->cmd_ = (yyval.cmd_); }
#line 1921 "Parser.C"
    break;

  case 45:
#line 252 "wosm.y"
           { (yyval.cmd_) = new CMDIFELSE((yyvsp[0].ifelse_)); result->cmd_ = (yyval.cmd_); }
#line 1927 "Parser.C"
    break;

  case 46:
#line 253 "wosm.y"
          { (yyval.cmd_) = new CMDWHILE((yyvsp[0].while_)); result->cmd_ = (yyval.cmd_); }
#line 1933 "Parser.C"
    break;

  case 47:
#line 254 "wosm.y"
        { (yyval.cmd_) = new CMDFOR((yyvsp[0].for_)); result->cmd_ = (yyval.cmd_); }
#line 1939 "Parser.C"
    break;

  case 48:
#line 255 "wosm.y"
         { (yyval.cmd_) = new CMDGOTO((yyvsp[0].goto_)); result->cmd_ = (yyval.cmd_); }
#line 1945 "Parser.C"
    break;

  case 49:
#line 256 "wosm.y"
              { (yyval.cmd_) = new CMDASSIGMENT((yyvsp[0].assigment_)); result->cmd_ = (yyval.cmd_); }
#line 1951 "Parser.C"
    break;

  case 50:
#line 258 "wosm.y"
                      { (yyval.listcmd_) = new ListCMD(); result->listcmd_ = (yyval.listcmd_); }
#line 1957 "Parser.C"
    break;

  case 51:
#line 259 "wosm.y"
                { (yyvsp[-1].listcmd_)->push_back((yyvsp[0].cmd_)); (yyval.listcmd_) = (yyvsp[-1].listcmd_); result->listcmd_ = (yyval.listcmd_); }
#line 1963 "Parser.C"
    break;

  case 52:
#line 261 "wosm.y"
                                            { (yyval.if_) = new If((yyvsp[-3].cond_), (yyvsp[-1].listcmd_)); result->if_ = (yyval.if_); }
#line 1969 "Parser.C"
    break;

  case 53:
#line 263 "wosm.y"
                                     { (yyval.ifelse_) = new IfElse((yyvsp[-3].if_), (yyvsp[-1].listcmd_)); result->ifelse_ = (yyval.ifelse_); }
#line 1975 "Parser.C"
    break;

  case 54:
#line 265 "wosm.y"
                                               { (yyval.while_) = new While((yyvsp[-3].cond_), (yyvsp[-1].listcmd_)); result->while_ = (yyval.while_); }
#line 1981 "Parser.C"
    break;

  case 55:
#line 267 "wosm.y"
                                                                       { (yyval.for_) = new For((yyvsp[-6].assigment_), (yyvsp[-5].cond_), (yyvsp[-3].increment_), (yyvsp[-1].listcmd_)); result->for_ = (yyval.for_); }
#line 1987 "Parser.C"
    break;

  case 56:
#line 269 "wosm.y"
                              { (yyval.goto_) = new Goto((yyvsp[-1]._string)); result->goto_ = (yyval.goto_); }
#line 1993 "Parser.C"
    break;

  case 57:
#line 271 "wosm.y"
                                    { (yyval.assigment_) = new Assigment((yyvsp[-3]._string), (yyvsp[-1].value_)); result->assigment_ = (yyval.assigment_); }
#line 1999 "Parser.C"
    break;

  case 58:
#line 272 "wosm.y"
                                                  { (yyval.assigment_) = new AssigmentV((yyvsp[-5]._string), (yyvsp[-3]._int), (yyvsp[-1].value_)); result->assigment_ = (yyval.assigment_); }
#line 2005 "Parser.C"
    break;

  case 59:
#line 274 "wosm.y"
                              { (yyval.increment_) = new Increment((yyvsp[-2]._string), (yyvsp[0].value_)); result->increment_ = (yyval.increment_); }
#line 2011 "Parser.C"
    break;

  case 60:
#line 275 "wosm.y"
                { (yyval.increment_) = new IncrementV(); result->increment_ = (yyval.increment_); }
#line 2017 "Parser.C"
    break;

  case 61:
#line 277 "wosm.y"
                             { std::reverse((yyvsp[0].listlogicexp_)->begin(),(yyvsp[0].listlogicexp_)->end()) ;(yyval.cond_) = new Cond((yyvsp[-1].logicexp_), (yyvsp[0].listlogicexp_)); result->cond_ = (yyval.cond_); }
#line 2023 "Parser.C"
    break;

  case 62:
#line 279 "wosm.y"
              { (yyval.logicop_) = new LOGICOP1(); result->logicop_ = (yyval.logicop_); }
#line 2029 "Parser.C"
    break;

  case 63:
#line 280 "wosm.y"
             { (yyval.logicop_) = new LOGICOP2(); result->logicop_ = (yyval.logicop_); }
#line 2035 "Parser.C"
    break;

  case 64:
#line 281 "wosm.y"
         { (yyval.logicop_) = new LOGICOP3(); result->logicop_ = (yyval.logicop_); }
#line 2041 "Parser.C"
    break;

  case 65:
#line 282 "wosm.y"
            { (yyval.logicop_) = new LOGICOP4(); result->logicop_ = (yyval.logicop_); }
#line 2047 "Parser.C"
    break;

  case 66:
#line 283 "wosm.y"
          { (yyval.logicop_) = new LOGICOP5(); result->logicop_ = (yyval.logicop_); }
#line 2053 "Parser.C"
    break;

  case 67:
#line 284 "wosm.y"
        { (yyval.logicop_) = new LOGICOP6(); result->logicop_ = (yyval.logicop_); }
#line 2059 "Parser.C"
    break;

  case 68:
#line 285 "wosm.y"
          { (yyval.logicop_) = new LOGICOP7(); result->logicop_ = (yyval.logicop_); }
#line 2065 "Parser.C"
    break;

  case 69:
#line 286 "wosm.y"
          { (yyval.logicop_) = new LOGICOP8(); result->logicop_ = (yyval.logicop_); }
#line 2071 "Parser.C"
    break;

  case 70:
#line 288 "wosm.y"
                               { (yyval.logicexp_) = new LogicExp((yyvsp[-2].value_), (yyvsp[-1].logicop_), (yyvsp[0].value_)); result->logicexp_ = (yyval.logicexp_); }
#line 2077 "Parser.C"
    break;

  case 71:
#line 290 "wosm.y"
                           { (yyval.listlogicexp_) = new ListLOGICEXP(); result->listlogicexp_ = (yyval.listlogicexp_); }
#line 2083 "Parser.C"
    break;

  case 72:
#line 291 "wosm.y"
             { (yyval.listlogicexp_) = new ListLOGICEXP(); (yyval.listlogicexp_)->push_back((yyvsp[0].logicexp_)); result->listlogicexp_ = (yyval.listlogicexp_); }
#line 2089 "Parser.C"
    break;

  case 73:
#line 292 "wosm.y"
                                { (yyvsp[0].listlogicexp_)->push_back((yyvsp[-2].logicexp_)); (yyval.listlogicexp_) = (yyvsp[0].listlogicexp_); result->listlogicexp_ = (yyval.listlogicexp_); }
#line 2095 "Parser.C"
    break;

  case 74:
#line 293 "wosm.y"
                { (yyval.listlogicexp_) = new ListLOGICEXP(); result->listlogicexp_ = (yyval.listlogicexp_); }
#line 2101 "Parser.C"
    break;

  case 75:
#line 294 "wosm.y"
             { (yyval.listlogicexp_) = new ListLOGICEXP(); (yyval.listlogicexp_)->push_back((yyvsp[0].logicexp_)); result->listlogicexp_ = (yyval.listlogicexp_); }
#line 2107 "Parser.C"
    break;

  case 76:
#line 295 "wosm.y"
                                { (yyvsp[0].listlogicexp_)->push_back((yyvsp[-2].logicexp_)); (yyval.listlogicexp_) = (yyvsp[0].listlogicexp_); result->listlogicexp_ = (yyval.listlogicexp_); }
#line 2113 "Parser.C"
    break;

  case 77:
#line 297 "wosm.y"
                          { std::reverse((yyvsp[0].listaritexp_)->begin(),(yyvsp[0].listaritexp_)->end()) ;(yyval.exp_) = new Exp((yyvsp[-1].aritexp_), (yyvsp[0].listaritexp_)); result->exp_ = (yyval.exp_); }
#line 2119 "Parser.C"
    break;

  case 78:
#line 299 "wosm.y"
               { (yyval.aritop_) = new ARITOP1(); result->aritop_ = (yyval.aritop_); }
#line 2125 "Parser.C"
    break;

  case 79:
#line 300 "wosm.y"
           { (yyval.aritop_) = new ARITOP2(); result->aritop_ = (yyval.aritop_); }
#line 2131 "Parser.C"
    break;

  case 80:
#line 301 "wosm.y"
          { (yyval.aritop_) = new ARITOP3(); result->aritop_ = (yyval.aritop_); }
#line 2137 "Parser.C"
    break;

  case 81:
#line 302 "wosm.y"
           { (yyval.aritop_) = new ARITOP4(); result->aritop_ = (yyval.aritop_); }
#line 2143 "Parser.C"
    break;

  case 82:
#line 304 "wosm.y"
                             { (yyval.aritexp_) = new AritExp((yyvsp[-2].value_), (yyvsp[-1].aritop_), (yyvsp[0].value_)); result->aritexp_ = (yyval.aritexp_); }
#line 2149 "Parser.C"
    break;

  case 83:
#line 306 "wosm.y"
                          { (yyval.listaritexp_) = new ListARITEXP(); result->listaritexp_ = (yyval.listaritexp_); }
#line 2155 "Parser.C"
    break;

  case 84:
#line 307 "wosm.y"
            { (yyval.listaritexp_) = new ListARITEXP(); (yyval.listaritexp_)->push_back((yyvsp[0].aritexp_)); result->listaritexp_ = (yyval.listaritexp_); }
#line 2161 "Parser.C"
    break;

  case 85:
#line 308 "wosm.y"
                              { (yyvsp[0].listaritexp_)->push_back((yyvsp[-2].aritexp_)); (yyval.listaritexp_) = (yyvsp[0].listaritexp_); result->listaritexp_ = (yyval.listaritexp_); }
#line 2167 "Parser.C"
    break;

  case 86:
#line 309 "wosm.y"
                { (yyval.listaritexp_) = new ListARITEXP(); result->listaritexp_ = (yyval.listaritexp_); }
#line 2173 "Parser.C"
    break;

  case 87:
#line 310 "wosm.y"
            { (yyval.listaritexp_) = new ListARITEXP(); (yyval.listaritexp_)->push_back((yyvsp[0].aritexp_)); result->listaritexp_ = (yyval.listaritexp_); }
#line 2179 "Parser.C"
    break;

  case 88:
#line 311 "wosm.y"
                               { (yyvsp[0].listaritexp_)->push_back((yyvsp[-2].aritexp_)); (yyval.listaritexp_) = (yyvsp[0].listaritexp_); result->listaritexp_ = (yyval.listaritexp_); }
#line 2185 "Parser.C"
    break;

  case 89:
#line 312 "wosm.y"
                { (yyval.listaritexp_) = new ListARITEXP(); result->listaritexp_ = (yyval.listaritexp_); }
#line 2191 "Parser.C"
    break;

  case 90:
#line 313 "wosm.y"
            { (yyval.listaritexp_) = new ListARITEXP(); (yyval.listaritexp_)->push_back((yyvsp[0].aritexp_)); result->listaritexp_ = (yyval.listaritexp_); }
#line 2197 "Parser.C"
    break;

  case 91:
#line 314 "wosm.y"
                              { (yyvsp[0].listaritexp_)->push_back((yyvsp[-2].aritexp_)); (yyval.listaritexp_) = (yyvsp[0].listaritexp_); result->listaritexp_ = (yyval.listaritexp_); }
#line 2203 "Parser.C"
    break;

  case 92:
#line 315 "wosm.y"
                { (yyval.listaritexp_) = new ListARITEXP(); result->listaritexp_ = (yyval.listaritexp_); }
#line 2209 "Parser.C"
    break;

  case 93:
#line 316 "wosm.y"
            { (yyval.listaritexp_) = new ListARITEXP(); (yyval.listaritexp_)->push_back((yyvsp[0].aritexp_)); result->listaritexp_ = (yyval.listaritexp_); }
#line 2215 "Parser.C"
    break;

  case 94:
#line 317 "wosm.y"
                               { (yyvsp[0].listaritexp_)->push_back((yyvsp[-2].aritexp_)); (yyval.listaritexp_) = (yyvsp[0].listaritexp_); result->listaritexp_ = (yyval.listaritexp_); }
#line 2221 "Parser.C"
    break;


#line 2225 "Parser.C"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, scanner, result, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, scanner, result, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner, result);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, result, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, result);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 320 "wosm.y"



/* Entrypoint: parse PROGRAM* from file. */
PROGRAM* pPROGRAM(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}

/* Entrypoint: parse PROGRAM* from string. */
PROGRAM* psPROGRAM(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}

/* Entrypoint: parse VARDECL* from file. */
VARDECL* pVARDECL(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.vardecl_;
  }
}

/* Entrypoint: parse VARDECL* from string. */
VARDECL* psVARDECL(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.vardecl_;
  }
}

/* Entrypoint: parse VAR* from file. */
VAR* pVAR(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.var_;
  }
}

/* Entrypoint: parse VAR* from string. */
VAR* psVAR(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.var_;
  }
}

/* Entrypoint: parse ListVAR* from file. */
ListVAR* pListVAR(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listvar_;
  }
}

/* Entrypoint: parse ListVAR* from string. */
ListVAR* psListVAR(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listvar_;
  }
}

/* Entrypoint: parse TYPE* from file. */
TYPE* pTYPE(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse TYPE* from string. */
TYPE* psTYPE(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse POINTER* from file. */
POINTER* pPOINTER(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.pointer_;
  }
}

/* Entrypoint: parse POINTER* from string. */
POINTER* psPOINTER(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.pointer_;
  }
}

/* Entrypoint: parse AST* from file. */
AST* pAST(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.ast_;
  }
}

/* Entrypoint: parse AST* from string. */
AST* psAST(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.ast_;
  }
}

/* Entrypoint: parse ListAST* from file. */
ListAST* pListAST(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listast_;
  }
}

/* Entrypoint: parse ListAST* from string. */
ListAST* psListAST(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listast_;
  }
}

/* Entrypoint: parse CONSTDECL* from file. */
CONSTDECL* pCONSTDECL(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.constdecl_;
  }
}

/* Entrypoint: parse CONSTDECL* from string. */
CONSTDECL* psCONSTDECL(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.constdecl_;
  }
}

/* Entrypoint: parse CONST* from file. */
CONST* pCONST(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.const_;
  }
}

/* Entrypoint: parse CONST* from string. */
CONST* psCONST(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.const_;
  }
}

/* Entrypoint: parse ListCONST* from file. */
ListCONST* pListCONST(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listconst_;
  }
}

/* Entrypoint: parse ListCONST* from string. */
ListCONST* psListCONST(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listconst_;
  }
}

/* Entrypoint: parse VALUE* from file. */
VALUE* pVALUE(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.value_;
  }
}

/* Entrypoint: parse VALUE* from string. */
VALUE* psVALUE(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.value_;
  }
}

/* Entrypoint: parse FUNCDECL* from file. */
FUNCDECL* pFUNCDECL(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.funcdecl_;
  }
}

/* Entrypoint: parse FUNCDECL* from string. */
FUNCDECL* psFUNCDECL(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.funcdecl_;
  }
}

/* Entrypoint: parse FUNCTION* from file. */
FUNCTION* pFUNCTION(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.function_;
  }
}

/* Entrypoint: parse FUNCTION* from string. */
FUNCTION* psFUNCTION(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.function_;
  }
}

/* Entrypoint: parse ListFUNCTION* from file. */
ListFUNCTION* pListFUNCTION(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listfunction_;
  }
}

/* Entrypoint: parse ListFUNCTION* from string. */
ListFUNCTION* psListFUNCTION(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listfunction_;
  }
}

/* Entrypoint: parse RETURN* from file. */
RETURN* pRETURN(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.return_;
  }
}

/* Entrypoint: parse RETURN* from string. */
RETURN* psRETURN(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.return_;
  }
}

/* Entrypoint: parse PARAM* from file. */
PARAM* pPARAM(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.param_;
  }
}

/* Entrypoint: parse PARAM* from string. */
PARAM* psPARAM(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.param_;
  }
}

/* Entrypoint: parse ListPARAM* from file. */
ListPARAM* pListPARAM(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listparam_->begin(), result.listparam_->end());
    return result.listparam_;
  }
}

/* Entrypoint: parse ListPARAM* from string. */
ListPARAM* psListPARAM(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listparam_->begin(), result.listparam_->end());
    return result.listparam_;
  }
}

/* Entrypoint: parse BLOCKPROG* from file. */
BLOCKPROG* pBLOCKPROG(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blockprog_;
  }
}

/* Entrypoint: parse BLOCKPROG* from string. */
BLOCKPROG* psBLOCKPROG(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blockprog_;
  }
}

/* Entrypoint: parse CMD* from file. */
CMD* pCMD(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.cmd_;
  }
}

/* Entrypoint: parse CMD* from string. */
CMD* psCMD(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.cmd_;
  }
}

/* Entrypoint: parse ListCMD* from file. */
ListCMD* pListCMD(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listcmd_;
  }
}

/* Entrypoint: parse ListCMD* from string. */
ListCMD* psListCMD(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listcmd_;
  }
}

/* Entrypoint: parse IF* from file. */
IF* pIF(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.if_;
  }
}

/* Entrypoint: parse IF* from string. */
IF* psIF(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.if_;
  }
}

/* Entrypoint: parse IFELSE* from file. */
IFELSE* pIFELSE(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.ifelse_;
  }
}

/* Entrypoint: parse IFELSE* from string. */
IFELSE* psIFELSE(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.ifelse_;
  }
}

/* Entrypoint: parse WHILE* from file. */
WHILE* pWHILE(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.while_;
  }
}

/* Entrypoint: parse WHILE* from string. */
WHILE* psWHILE(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.while_;
  }
}

/* Entrypoint: parse FOR* from file. */
FOR* pFOR(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.for_;
  }
}

/* Entrypoint: parse FOR* from string. */
FOR* psFOR(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.for_;
  }
}

/* Entrypoint: parse GOTO* from file. */
GOTO* pGOTO(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.goto_;
  }
}

/* Entrypoint: parse GOTO* from string. */
GOTO* psGOTO(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.goto_;
  }
}

/* Entrypoint: parse ASSIGMENT* from file. */
ASSIGMENT* pASSIGMENT(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assigment_;
  }
}

/* Entrypoint: parse ASSIGMENT* from string. */
ASSIGMENT* psASSIGMENT(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assigment_;
  }
}

/* Entrypoint: parse INCREMENT* from file. */
INCREMENT* pINCREMENT(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.increment_;
  }
}

/* Entrypoint: parse INCREMENT* from string. */
INCREMENT* psINCREMENT(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.increment_;
  }
}

/* Entrypoint: parse COND* from file. */
COND* pCOND(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.cond_;
  }
}

/* Entrypoint: parse COND* from string. */
COND* psCOND(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.cond_;
  }
}

/* Entrypoint: parse LOGICOP* from file. */
LOGICOP* pLOGICOP(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.logicop_;
  }
}

/* Entrypoint: parse LOGICOP* from string. */
LOGICOP* psLOGICOP(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.logicop_;
  }
}

/* Entrypoint: parse LOGICEXP* from file. */
LOGICEXP* pLOGICEXP(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.logicexp_;
  }
}

/* Entrypoint: parse LOGICEXP* from string. */
LOGICEXP* psLOGICEXP(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.logicexp_;
  }
}

/* Entrypoint: parse ListLOGICEXP* from file. */
ListLOGICEXP* pListLOGICEXP(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listlogicexp_->begin(), result.listlogicexp_->end());
    return result.listlogicexp_;
  }
}

/* Entrypoint: parse ListLOGICEXP* from string. */
ListLOGICEXP* psListLOGICEXP(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listlogicexp_->begin(), result.listlogicexp_->end());
    return result.listlogicexp_;
  }
}

/* Entrypoint: parse EXP* from file. */
EXP* pEXP(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse EXP* from string. */
EXP* psEXP(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse ARITOP* from file. */
ARITOP* pARITOP(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.aritop_;
  }
}

/* Entrypoint: parse ARITOP* from string. */
ARITOP* psARITOP(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.aritop_;
  }
}

/* Entrypoint: parse ARITEXP* from file. */
ARITEXP* pARITEXP(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.aritexp_;
  }
}

/* Entrypoint: parse ARITEXP* from string. */
ARITEXP* psARITEXP(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.aritexp_;
  }
}

/* Entrypoint: parse ListARITEXP* from file. */
ListARITEXP* pListARITEXP(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listaritexp_->begin(), result.listaritexp_->end());
    return result.listaritexp_;
  }
}

/* Entrypoint: parse ListARITEXP* from string. */
ListARITEXP* psListARITEXP(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = wosm__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = wosm__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  wosm__delete_buffer(buf, scanner);
  wosm_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listaritexp_->begin(), result.listaritexp_->end());
    return result.listaritexp_;
  }
}



