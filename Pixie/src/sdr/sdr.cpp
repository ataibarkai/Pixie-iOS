/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse sdrparse
#define yylex   sdrlex
#define yyerror sdrerror
#define yylval  sdrlval
#define yychar  sdrchar
#define yydebug sdrdebug
#define yynerrs sdrnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SCRL_PARAMETERS = 258,
     SCRL_VARIABLES = 259,
     SCRL_INIT = 260,
     SCRL_CODE = 261,
     SCRL_OUTPUT = 262,
     SCRL_VARYING = 263,
     SCRL_UNIFORM = 264,
     SCRL_BOOLEAN = 265,
     SCRL_FLOAT = 266,
     SCRL_COLOR = 267,
     SCRL_VECTOR = 268,
     SCRL_NORMAL = 269,
     SCRL_POINT = 270,
     SCRL_MATRIX = 271,
     SCRL_STRING = 272,
     SCRL_SURFACE = 273,
     SCRL_DISPLACEMENT = 274,
     SCRL_IMAGER = 275,
     SCRL_LIGHTSOURCE = 276,
     SCRL_VOLUME = 277,
     SCRL_GENERIC = 278,
     SCRL_DSO = 279,
     SCRL_DOT = 280,
     SCRL_COLON = 281,
     SCRL_EQUAL = 282,
     SCRL_OPEN_PARANTHESIS = 283,
     SCRL_CLOSE_PARANTHESIS = 284,
     SCRL_OPEN_SQR_PARANTHESIS = 285,
     SCRL_CLOSE_SQR_PARANTHESIS = 286,
     SCRL_COMMA = 287,
     SCRL_NL = 288,
     SCRL_TEXT_VALUE = 289,
     SCRL_IDENTIFIER_VALUE = 290,
     SCRL_LABEL_VALUE = 291,
     SCRL_FLOAT_VALUE = 292
   };
#endif
/* Tokens.  */
#define SCRL_PARAMETERS 258
#define SCRL_VARIABLES 259
#define SCRL_INIT 260
#define SCRL_CODE 261
#define SCRL_OUTPUT 262
#define SCRL_VARYING 263
#define SCRL_UNIFORM 264
#define SCRL_BOOLEAN 265
#define SCRL_FLOAT 266
#define SCRL_COLOR 267
#define SCRL_VECTOR 268
#define SCRL_NORMAL 269
#define SCRL_POINT 270
#define SCRL_MATRIX 271
#define SCRL_STRING 272
#define SCRL_SURFACE 273
#define SCRL_DISPLACEMENT 274
#define SCRL_IMAGER 275
#define SCRL_LIGHTSOURCE 276
#define SCRL_VOLUME 277
#define SCRL_GENERIC 278
#define SCRL_DSO 279
#define SCRL_DOT 280
#define SCRL_COLON 281
#define SCRL_EQUAL 282
#define SCRL_OPEN_PARANTHESIS 283
#define SCRL_CLOSE_PARANTHESIS 284
#define SCRL_OPEN_SQR_PARANTHESIS 285
#define SCRL_CLOSE_SQR_PARANTHESIS 286
#define SCRL_COMMA 287
#define SCRL_NL 288
#define SCRL_TEXT_VALUE 289
#define SCRL_IDENTIFIER_VALUE 290
#define SCRL_LABEL_VALUE 291
#define SCRL_FLOAT_VALUE 292




/* Copy the first part of user declarations.  */
#line 1 "sdr.y"

//////////////////////////////////////////////////////////////////////
//
//                             Pixie
//
// Copyright © 1999 - 2003, Okan Arikan
//
// Contact: okan@cs.utexas.edu
//
//	This library is free software; you can redistribute it and/or
//	modify it under the terms of the GNU Lesser General Public
//	License as published by the Free Software Foundation; either
//	version 2.1 of the License, or (at your option) any later version.
//
//	This library is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//	Lesser General Public License for more details.
//
//	You should have received a copy of the GNU Lesser General Public
//	License along with this library; if not, write to the Free Software
//	Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
//
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
//
//  File				:	sl.y
//  Classes				:	-
//  Description			:	This is the parser file for CShader
//
////////////////////////////////////////////////////////////////////////
#undef alloca
#include <math.h>
#include <string.h>

#include "common/algebra.h"
#include "common/os.h"
#include "sdr.h"

/////////////////////////////////////////////////////////////////////////////////////
//   First some temporary data structures used during the script parsing


// Some forward definitions
		void							sdrerror(const char *);		// Forward definition for stupid yacc
		int								sdrlex(void );				// Forward definition for stupid yacc




		TSdrParameter	*parameters;
		TSdrParameter	*currentParameter;
		UDefaultVal		*currentDefaultItem;
		int				numArrayItemsRemaining;
		ESdrShaderType	shaderType;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union
#line 58 "sdr.y"
slval {
	float			real;
	char			string[64];
	matrix			m;
	vector			v;
	TSdrParameter *parameter;
}
/* Line 193 of yacc.c.  */
#line 244 "sdr.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 257 "sdr.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNRULES -- Number of states.  */
#define YYNSTATES  313

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    14,    15,    18,    21,    28,    30,    36,
      38,    41,    42,    44,    46,    47,    50,    53,    56,    59,
      62,    67,    71,    72,    73,    77,    78,    81,    83,    85,
      87,    89,    91,    93,    95,    97,    99,   102,   105,   107,
     112,   115,   116,   125,   131,   135,   138,   139,   142,   147,
     148,   157,   163,   167,   170,   171,   172,   177,   178,   187,
     193,   194,   199,   200,   209,   215,   219,   220,   224,   225,
     226,   231,   232,   241,   247,   248,   253,   254,   263,   269,
     291,   296,   299,   300,   309,   315,   319,   339,   342,   343,
     348,   351,   352,   356,   360,   364,   368,   372,   376,   380,
     384,   387,   393,   396,   402,   405,   411,   414,   420,   423,
     429,   432,   438,   441,   447,   450,   456,   460,   464,   468,
     469,   470,   478,   480,   482,   484,   487,   488,   491,   494,
     496,   498,   500,   502,   510,   544
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      39,     0,    -1,    45,    46,    80,     5,    33,    91,     6,
      33,    91,    40,    -1,    -1,    33,    40,    -1,    34,    37,
      -1,    34,    30,    37,    37,    37,    31,    -1,    37,    -1,
      30,    37,    37,    37,    31,    -1,    41,    -1,    27,    42,
      -1,    -1,     9,    -1,     8,    -1,    -1,    18,    33,    -1,
      19,    33,    -1,    21,    33,    -1,    22,    33,    -1,    20,
      33,    -1,     3,    26,    33,    47,    -1,    47,    48,    33,
      -1,    -1,    -1,    49,    52,    51,    -1,    -1,    50,    51,
      -1,    53,    -1,    57,    -1,    61,    -1,    64,    -1,    70,
      -1,    73,    -1,    76,    -1,     9,    -1,     8,    -1,     7,
       9,    -1,     7,     8,    -1,     7,    -1,    11,    35,    27,
      37,    -1,    11,    35,    -1,    -1,    11,    35,    30,    37,
      31,    27,    54,    55,    -1,    11,    35,    30,    37,    31,
      -1,    30,    56,    31,    -1,    56,    37,    -1,    -1,    17,
      35,    -1,    17,    35,    27,    34,    -1,    -1,    17,    35,
      30,    37,    31,    27,    58,    59,    -1,    17,    35,    30,
      37,    31,    -1,    30,    60,    31,    -1,    60,    34,    -1,
      -1,    -1,    12,    35,    62,    43,    -1,    -1,    12,    35,
      30,    37,    31,    27,    63,    67,    -1,    12,    35,    30,
      37,    31,    -1,    -1,    13,    35,    65,    43,    -1,    -1,
      13,    35,    30,    37,    31,    27,    66,    67,    -1,    13,
      35,    30,    37,    31,    -1,    30,    68,    31,    -1,    -1,
      68,    69,    42,    -1,    -1,    -1,    14,    35,    71,    43,
      -1,    -1,    14,    35,    30,    37,    31,    27,    72,    67,
      -1,    14,    35,    30,    37,    31,    -1,    -1,    15,    35,
      74,    43,    -1,    -1,    15,    35,    30,    37,    31,    27,
      75,    67,    -1,    15,    35,    30,    37,    31,    -1,    16,
      35,    27,    30,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    37,    31,
      -1,    16,    35,    27,    37,    -1,    16,    35,    -1,    -1,
      16,    35,    30,    37,    31,    27,    77,    78,    -1,    16,
      35,    30,    37,    31,    -1,    30,    79,    31,    -1,    79,
      30,    37,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    31,    -1,    79,
      37,    -1,    -1,     4,    26,    33,    81,    -1,    81,    82,
      -1,    -1,    44,    83,    33,    -1,    44,    84,    33,    -1,
      44,    85,    33,    -1,    44,    87,    33,    -1,    44,    86,
      33,    -1,    44,    88,    33,    -1,    44,    89,    33,    -1,
      44,    90,    33,    -1,    10,    35,    -1,    10,    35,    30,
      37,    31,    -1,    11,    35,    -1,    11,    35,    30,    37,
      31,    -1,    17,    35,    -1,    17,    35,    30,    37,    31,
      -1,    13,    35,    -1,    13,    35,    30,    37,    31,    -1,
      12,    35,    -1,    12,    35,    30,    37,    31,    -1,    14,
      35,    -1,    14,    35,    30,    37,    31,    -1,    15,    35,
      -1,    15,    35,    30,    37,    31,    -1,    16,    35,    -1,
      16,    35,    30,    37,    31,    -1,    91,    96,    33,    -1,
      91,    97,    33,    -1,    91,    92,    33,    -1,    -1,    -1,
      24,    35,    93,    28,    34,    29,    95,    -1,    35,    -1,
      19,    -1,    18,    -1,    98,    95,    -1,    -1,    94,    95,
      -1,    36,    26,    -1,    34,    -1,    36,    -1,    35,    -1,
      37,    -1,    28,    37,    32,    37,    32,    37,    29,    -1,
      28,    37,    32,    37,    32,    37,    32,    37,    32,    37,
      32,    37,    32,    37,    32,    37,    32,    37,    32,    37,
      32,    37,    32,    37,    32,    37,    32,    37,    32,    37,
      32,    37,    29,    -1,    28,    34,    29,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   111,   111,   123,   125,   129,   139,   153,   161,   174,
     179,   182,   190,   194,   198,   203,   209,   215,   221,   227,
     235,   242,   248,   253,   253,   266,   266,   281,   283,   285,
     287,   289,   291,   293,   298,   304,   310,   317,   324,   332,
     343,   358,   352,   369,   387,   398,   410,   414,   423,   440,
     434,   451,   469,   480,   492,   498,   496,   515,   509,   526,
     550,   548,   567,   561,   578,   600,   612,   611,   625,   631,
     629,   648,   642,   659,   683,   681,   700,   694,   711,   733,
     778,   806,   838,   832,   850,   886,   897,   944,   970,   974,
     981,   983,   987,   991,   995,   999,  1003,  1007,  1011,  1015,
    1021,  1026,  1037,  1042,  1052,  1057,  1067,  1072,  1082,  1087,
    1097,  1102,  1112,  1117,  1127,  1132,  1142,  1146,  1150,  1153,
    1159,  1157,  1170,  1174,  1178,  1184,  1189,  1194,  1201,  1208,
    1212,  1216,  1220,  1224,  1234,  1270
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SCRL_PARAMETERS", "SCRL_VARIABLES",
  "SCRL_INIT", "SCRL_CODE", "SCRL_OUTPUT", "SCRL_VARYING", "SCRL_UNIFORM",
  "SCRL_BOOLEAN", "SCRL_FLOAT", "SCRL_COLOR", "SCRL_VECTOR", "SCRL_NORMAL",
  "SCRL_POINT", "SCRL_MATRIX", "SCRL_STRING", "SCRL_SURFACE",
  "SCRL_DISPLACEMENT", "SCRL_IMAGER", "SCRL_LIGHTSOURCE", "SCRL_VOLUME",
  "SCRL_GENERIC", "SCRL_DSO", "SCRL_DOT", "SCRL_COLON", "SCRL_EQUAL",
  "SCRL_OPEN_PARANTHESIS", "SCRL_CLOSE_PARANTHESIS",
  "SCRL_OPEN_SQR_PARANTHESIS", "SCRL_CLOSE_SQR_PARANTHESIS", "SCRL_COMMA",
  "SCRL_NL", "SCRL_TEXT_VALUE", "SCRL_IDENTIFIER_VALUE",
  "SCRL_LABEL_VALUE", "SCRL_FLOAT_VALUE", "$accept", "start",
  "slEmptySpace", "slVectorIn", "slVector", "slVectorInit", "slContainer",
  "slType", "slParameterDefinitions", "slParameters", "slParameter", "@1",
  "@2", "slRegularParameter", "slGlobalParameterContainer",
  "slFloatParameter", "@3", "slFloatArrayInitializer",
  "slFloatArrayInitializerItems", "slStringParameter", "@4",
  "slStringArrayInitializer", "slStringArrayInitializerItems",
  "slColorParameter", "@5", "@6", "slVectorParameter", "@7", "@8",
  "slVectorArrayInitializer", "slVectorArrayInitializerItems", "@9",
  "slNormalParameter", "@10", "@11", "slPointParameter", "@12", "@13",
  "slMatrixParameter", "@14", "slMatrixArrayInitializer",
  "slMatrixArrayInitializerItems", "slVariableDefinitions", "slVariables",
  "slVariable", "slBooleanVariable", "slFloatVariable", "slStringVariable",
  "slVectorVariable", "slColorVariable", "slNormalVariable",
  "slPointVariable", "slMatrixVariable", "slCode", "slDSO", "@15",
  "slOpcode", "slOperandList", "slStatement", "slLabelDefinition",
  "slOperand", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    41,    41,    42,
      43,    43,    44,    44,    44,    45,    45,    45,    45,    45,
      46,    47,    47,    49,    48,    50,    48,    51,    51,    51,
      51,    51,    51,    51,    52,    52,    52,    52,    52,    53,
      53,    54,    53,    53,    55,    56,    56,    57,    57,    58,
      57,    57,    59,    60,    60,    62,    61,    63,    61,    61,
      65,    64,    66,    64,    64,    67,    69,    68,    68,    71,
      70,    72,    70,    70,    74,    73,    75,    73,    73,    76,
      76,    76,    77,    76,    76,    78,    79,    79,    79,    80,
      81,    81,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    83,    84,    84,    85,    85,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    91,    91,    91,
      93,    92,    94,    94,    94,    95,    95,    96,    97,    98,
      98,    98,    98,    98,    98,    98
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    10,     0,     2,     2,     6,     1,     5,     1,
       2,     0,     1,     1,     0,     2,     2,     2,     2,     2,
       4,     3,     0,     0,     3,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     4,
       2,     0,     8,     5,     3,     2,     0,     2,     4,     0,
       8,     5,     3,     2,     0,     0,     4,     0,     8,     5,
       0,     4,     0,     8,     5,     3,     0,     3,     0,     0,
       4,     0,     8,     5,     0,     4,     0,     8,     5,    21,
       4,     2,     0,     8,     5,     3,    19,     2,     0,     4,
       2,     0,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     5,     2,     5,     2,     5,     2,     5,     2,     5,
       2,     5,     2,     5,     2,     5,     3,     3,     3,     0,
       0,     7,     1,     1,     1,     2,     0,     2,     2,     1,
       1,     1,     1,     7,    33,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,    15,    16,
      19,    17,    18,     1,     0,     0,     0,     0,     0,    22,
       0,     0,    25,    91,   119,     0,     0,     0,    14,     0,
      21,    38,    35,    34,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,    30,    31,    32,    33,
      13,    12,     0,    90,     0,   124,   123,     0,   122,     0,
       0,   126,     0,     0,    37,    36,    24,    40,    55,    60,
      69,    74,    81,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   128,   118,     0,   129,   131,   130,   132,   127,
     126,   116,   117,     0,     0,     0,    11,     0,    11,     0,
      11,     0,    11,     0,     0,     0,     0,   100,   102,   108,
     106,   110,   112,   114,   104,    92,    93,    94,    96,    95,
      97,    98,    99,     3,     0,     0,     0,   125,    39,     0,
       0,     0,    56,     0,    61,     0,    70,     0,    75,     0,
      80,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     2,     0,   135,     0,    43,    59,     0,
       0,     7,     9,    10,    64,    73,    78,     0,    84,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       0,    41,    57,     0,     0,     5,    62,    71,    76,     0,
      82,    49,   101,   103,   109,   107,   111,   113,   115,   105,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,    46,    42,    68,    58,     0,     0,
      63,    72,    77,     0,    88,    83,    54,    50,   133,     0,
       0,    66,     8,     0,     0,     0,     0,     0,    44,    45,
      65,     0,     6,     0,     0,    85,    87,    52,    53,     0,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,   134
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,   163,   172,   173,   142,    52,     7,    15,    22,
      25,    26,    27,    42,    34,    43,   212,   225,   240,    44,
     221,   237,   246,    45,   106,   213,    46,   108,   216,   227,
     241,   251,    47,   110,   217,    48,   112,   218,    49,   220,
     235,   245,    18,    28,    53,    82,    83,    84,    85,    86,
      87,    88,    89,    29,    60,   134,    61,    99,    62,    63,
     100
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -156
static const yytype_int16 yypact[] =
{
      24,    26,    31,    44,    53,    54,    58,    71,  -156,  -156,
    -156,  -156,  -156,  -156,    62,    74,    56,    64,    86,  -156,
      59,    60,    -2,  -156,  -156,    61,    73,    38,    52,    -5,
    -156,    19,  -156,  -156,    38,    63,    65,    66,    67,    68,
      69,    70,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,    22,  -156,    75,  -156,  -156,    72,  -156,    80,
      76,   -12,    78,    79,  -156,  -156,  -156,    -1,    83,    84,
      85,    87,    39,    41,    81,    88,    89,    90,    91,    92,
      93,    94,    97,    98,    99,   100,   101,   102,   103,   104,
    -156,  -156,  -156,  -156,    36,  -156,  -156,  -156,  -156,  -156,
     -12,  -156,  -156,    82,   105,   106,    95,   107,    95,   108,
      95,   109,    95,    10,   110,   114,   112,   111,   120,   121,
     122,   123,   124,   125,   126,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,   -15,   129,   130,   128,  -156,  -156,   127,
     131,   -22,  -156,   132,  -156,   133,  -156,   134,  -156,   135,
    -156,   136,  -156,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   150,  -156,   151,  -156,   147,   113,   146,   149,
      11,  -156,  -156,  -156,   160,   161,   162,   153,   164,   165,
     163,   166,   167,   168,   169,   170,   171,   172,  -156,   175,
     173,  -156,  -156,   156,   158,  -156,  -156,  -156,  -156,   159,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
     -12,   174,   176,   177,   178,   179,   177,   177,   177,   180,
     182,   183,  -156,    43,  -156,  -156,  -156,  -156,   187,   184,
    -156,  -156,  -156,   185,  -156,  -156,  -156,  -156,  -156,   186,
      25,   188,  -156,   189,   190,   -20,    45,   192,  -156,  -156,
    -156,   -22,  -156,   191,   193,  -156,  -156,  -156,  -156,   194,
    -156,   195,   196,   197,   198,   199,   200,   201,   202,   208,
     204,   205,   206,   207,   209,   213,   210,   211,   212,   214,
     215,   218,   216,   217,   219,   220,   221,   223,   203,   222,
     224,  -156,   225,   228,   226,   227,   229,   233,   230,   231,
     232,   238,   240,   235,  -156,   241,   237,   243,   239,   245,
     242,   181,  -156
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,   -67,  -156,  -155,   -45,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,   244,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -133,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,     7,  -156,  -156,  -156,  -100,  -156,  -156,
    -156
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -90
static const yytype_int16 yytable[] =
{
     137,    54,   -20,    55,    56,   -23,   -23,   -23,   169,    57,
     254,   255,   170,    55,    56,   171,    94,   256,   162,    57,
      58,    59,    95,    96,    97,    98,   103,    64,    65,   104,
      58,    59,    74,    75,    76,    77,    78,    79,    80,    81,
     149,   194,     1,     2,     3,     4,     5,   150,   195,    35,
      36,    37,    38,    39,    40,    41,   248,   -89,    13,     8,
      50,    51,   249,   144,     9,   146,   113,   148,   115,   114,
     135,   116,   238,   136,    14,   239,   257,    10,    17,   258,
      31,    32,    33,   230,   231,   232,    11,    12,    16,    19,
      20,    21,    23,    24,    30,   188,   260,   133,    67,     0,
      68,    69,    70,    71,    72,    73,    92,    91,    90,    93,
     222,   101,   102,   105,   107,   109,   117,   111,     0,   138,
       0,     0,   141,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,     0,     0,
     191,   154,   139,   140,   143,   145,   147,   151,   152,   153,
     155,   156,   157,   158,   159,   160,   161,   164,   167,   165,
     166,     0,   168,   174,   175,   176,     0,   178,   179,     0,
       0,     0,   177,   192,     0,   180,   181,   182,   183,   184,
     185,   186,   187,   162,   190,   189,   193,   196,   197,   198,
     199,   200,   201,   214,   202,   215,   219,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   224,   226,     0,     0,
     312,   223,   234,   236,     0,   228,   229,   233,   242,   250,
     252,   243,   244,   247,   259,     0,     0,   253,   261,   266,
     262,   263,   264,   265,   291,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   278,   277,   279,   280,   281,
     284,   282,   283,   285,   286,   290,   287,   288,   289,   292,
     295,   293,   294,   296,   297,   299,   298,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,    66,   311
};

static const yytype_int16 yycheck[] =
{
     100,     6,     4,    18,    19,     7,     8,     9,    30,    24,
      30,    31,    34,    18,    19,    37,    28,    37,    33,    24,
      35,    36,    34,    35,    36,    37,    27,     8,     9,    30,
      35,    36,    10,    11,    12,    13,    14,    15,    16,    17,
      30,    30,    18,    19,    20,    21,    22,    37,    37,    11,
      12,    13,    14,    15,    16,    17,    31,     5,     0,    33,
       8,     9,    37,   108,    33,   110,    27,   112,    27,    30,
      34,    30,    29,    37,     3,    32,    31,    33,     4,    34,
       7,     8,     9,   216,   217,   218,    33,    33,    26,    33,
      26,     5,    33,    33,    33,   162,   251,    90,    35,    -1,
      35,    35,    35,    35,    35,    35,    26,    35,    33,    33,
     210,    33,    33,    30,    30,    30,    35,    30,    -1,    37,
      -1,    -1,    27,    35,    35,    35,    35,    35,    35,    35,
      33,    33,    33,    33,    33,    33,    33,    33,    -1,    -1,
      27,    30,    37,    37,    37,    37,    37,    37,    34,    37,
      30,    30,    30,    30,    30,    30,    30,    28,    31,    29,
      32,    -1,    31,    31,    31,    31,    -1,    31,    31,    -1,
      -1,    -1,    37,    27,    -1,    37,    37,    37,    37,    37,
      37,    37,    37,    33,    37,    34,    37,    27,    27,    27,
      37,    27,    27,    37,    31,    37,    37,    31,    31,    31,
      31,    31,    31,    31,    29,    32,    30,    30,    -1,    -1,
      29,    37,    30,    30,    -1,    37,    37,    37,    31,    31,
      31,    37,    37,    37,    32,    -1,    -1,    37,    37,    32,
      37,    37,    37,    37,    31,    37,    37,    37,    37,    37,
      32,    37,    37,    37,    37,    32,    37,    37,    37,    37,
      32,    37,    37,    37,    37,    32,    37,    37,    37,    37,
      32,    37,    37,    37,    37,    32,    37,    37,    37,    37,
      32,    31,    37,    32,    37,    32,    37,    32,    34,    37
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    19,    20,    21,    22,    39,    45,    33,    33,
      33,    33,    33,     0,     3,    46,    26,     4,    80,    33,
      26,     5,    47,    33,    33,    48,    49,    50,    81,    91,
      33,     7,     8,     9,    52,    11,    12,    13,    14,    15,
      16,    17,    51,    53,    57,    61,    64,    70,    73,    76,
       8,     9,    44,    82,     6,    18,    19,    24,    35,    36,
      92,    94,    96,    97,     8,     9,    51,    35,    35,    35,
      35,    35,    35,    35,    10,    11,    12,    13,    14,    15,
      16,    17,    83,    84,    85,    86,    87,    88,    89,    90,
      33,    35,    26,    33,    28,    34,    35,    36,    37,    95,
      98,    33,    33,    27,    30,    30,    62,    30,    65,    30,
      71,    30,    74,    27,    30,    27,    30,    35,    35,    35,
      35,    35,    35,    35,    35,    33,    33,    33,    33,    33,
      33,    33,    33,    91,    93,    34,    37,    95,    37,    37,
      37,    27,    43,    37,    43,    37,    43,    37,    43,    30,
      37,    37,    34,    37,    30,    30,    30,    30,    30,    30,
      30,    30,    33,    40,    28,    29,    32,    31,    31,    30,
      34,    37,    41,    42,    31,    31,    31,    37,    31,    31,
      37,    37,    37,    37,    37,    37,    37,    37,    40,    34,
      37,    27,    27,    37,    30,    37,    27,    27,    27,    37,
      27,    27,    31,    31,    31,    31,    31,    31,    31,    31,
      29,    32,    54,    63,    37,    37,    66,    72,    75,    37,
      77,    58,    95,    37,    30,    55,    30,    67,    37,    37,
      67,    67,    67,    37,    30,    78,    30,    59,    29,    32,
      56,    68,    31,    37,    37,    79,    60,    37,    31,    37,
      31,    69,    31,    37,    30,    31,    37,    31,    34,    32,
      42,    37,    37,    37,    37,    37,    32,    37,    37,    37,
      37,    37,    32,    37,    37,    37,    37,    37,    32,    37,
      37,    37,    37,    37,    32,    37,    37,    37,    37,    37,
      32,    31,    37,    37,    37,    32,    37,    37,    37,    32,
      37,    37,    37,    32,    31,    37,    32,    37,    32,    37,
      32,    37,    29
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 131 "sdr.y"
    {
				currentParameter->space			=	strdup((yyvsp[(1) - (2)].string));
				currentDefaultItem->vector		=	new float[3];
				currentDefaultItem->vector[0]	=	(yyvsp[(2) - (2)].real);
				currentDefaultItem->vector[1]	=	(yyvsp[(2) - (2)].real);
				currentDefaultItem->vector[2]	=	(yyvsp[(2) - (2)].real);
			;}
    break;

  case 6:
#line 145 "sdr.y"
    {
				currentParameter->space			=	strdup((yyvsp[(1) - (6)].string));
				currentDefaultItem->vector		=	new float[3];
				currentDefaultItem->vector[0]	=	(yyvsp[(3) - (6)].real);
				currentDefaultItem->vector[1]	=	(yyvsp[(4) - (6)].real);
				currentDefaultItem->vector[2]	=	(yyvsp[(5) - (6)].real);
			;}
    break;

  case 7:
#line 154 "sdr.y"
    {
				currentDefaultItem->vector		=	new float[3];
				currentDefaultItem->vector[0]	=	(yyvsp[(1) - (1)].real);
				currentDefaultItem->vector[1]	=	(yyvsp[(1) - (1)].real);
				currentDefaultItem->vector[2]	=	(yyvsp[(1) - (1)].real);
			;}
    break;

  case 8:
#line 166 "sdr.y"
    {
				currentDefaultItem->vector		=	new float[3];
				currentDefaultItem->vector[0]	=	(yyvsp[(2) - (5)].real);
				currentDefaultItem->vector[1]	=	(yyvsp[(3) - (5)].real);
				currentDefaultItem->vector[2]	=	(yyvsp[(4) - (5)].real);
			;}
    break;

  case 9:
#line 175 "sdr.y"
    {
			;}
    break;

  case 11:
#line 182 "sdr.y"
    {
					currentParameter->defaultValue.vector		=	new float[3];
					currentParameter->defaultValue.vector[0]	=	0;
					currentParameter->defaultValue.vector[1]	=	0;
					currentParameter->defaultValue.vector[2]	=	0;
			;}
    break;

  case 12:
#line 191 "sdr.y"
    {
				;}
    break;

  case 13:
#line 195 "sdr.y"
    {
				;}
    break;

  case 14:
#line 198 "sdr.y"
    {
				;}
    break;

  case 15:
#line 205 "sdr.y"
    {
			shaderType	=	SHADER_SURFACE;
		;}
    break;

  case 16:
#line 211 "sdr.y"
    {
			shaderType	=	SHADER_DISPLACEMENT;
		;}
    break;

  case 17:
#line 217 "sdr.y"
    {
			shaderType	=	SHADER_LIGHT;
		;}
    break;

  case 18:
#line 223 "sdr.y"
    {
			shaderType	=	SHADER_VOLUME;
		;}
    break;

  case 19:
#line 229 "sdr.y"
    {
			shaderType	=	SHADER_IMAGER;
		;}
    break;

  case 21:
#line 245 "sdr.y"
    {
		;}
    break;

  case 22:
#line 248 "sdr.y"
    {
		;}
    break;

  case 23:
#line 253 "sdr.y"
    {
			currentParameter						=	new TSdrParameter;
			currentParameter->space					=	NULL;
			currentParameter->numItems				=	1;
			currentParameter->defaultValue.string	=	NULL;
		;}
    break;

  case 24:
#line 261 "sdr.y"
    {
			currentParameter->next	=	parameters;
			parameters				=	currentParameter;
		;}
    break;

  case 25:
#line 266 "sdr.y"
    {
			currentParameter						=	new TSdrParameter;
			currentParameter->space					=	NULL;
			currentParameter->numItems				=	1;
			currentParameter->defaultValue.string	=	NULL;
			currentParameter->container				=	CONTAINER_UNIFORM;
		;}
    break;

  case 26:
#line 274 "sdr.y"
    {
			currentParameter->next	=	parameters;
			parameters				=	currentParameter;
		;}
    break;

  case 34:
#line 299 "sdr.y"
    {
			currentParameter->container	=	CONTAINER_UNIFORM;
			currentParameter->writable	=	FALSE;
		;}
    break;

  case 35:
#line 305 "sdr.y"
    {
			currentParameter->container	=	CONTAINER_VARYING;
			currentParameter->writable	=	FALSE;
		;}
    break;

  case 36:
#line 312 "sdr.y"
    {
			currentParameter->container	=	CONTAINER_UNIFORM;
			currentParameter->writable	=	TRUE;
		;}
    break;

  case 37:
#line 319 "sdr.y"
    {
			currentParameter->container	=	CONTAINER_VARYING;
			currentParameter->writable	=	TRUE;
		;}
    break;

  case 38:
#line 325 "sdr.y"
    {
			currentParameter->container	=	CONTAINER_UNIFORM;
			currentParameter->writable	=	TRUE;
		;}
    break;

  case 39:
#line 336 "sdr.y"
    {
			currentParameter->type					=	TYPE_FLOAT;
			currentParameter->name					=	strdup((yyvsp[(2) - (4)].string));
			currentParameter->defaultValue.scalar	=	(yyvsp[(4) - (4)].real);
			currentParameter->numItems				=	1;
		;}
    break;

  case 40:
#line 345 "sdr.y"
    {
			currentParameter->type					=	TYPE_FLOAT;
			currentParameter->name					=	strdup((yyvsp[(2) - (2)].string));
			currentParameter->defaultValue.scalar	=	0;
			currentParameter->numItems				=	1;
		;}
    break;

  case 41:
#line 358 "sdr.y"
    {
			currentParameter->type					=	TYPE_FLOAT;
			currentParameter->name					=	strdup((yyvsp[(2) - (6)].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[(4) - (6)].real)];
			currentParameter->numItems				=	(int) (yyvsp[(4) - (6)].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			numArrayItemsRemaining = currentParameter->numItems;
		;}
    break;

  case 43:
#line 374 "sdr.y"
    {
			currentParameter->type					=	TYPE_FLOAT;
			currentParameter->name					=	strdup((yyvsp[(2) - (5)].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[(4) - (5)].real)];
			currentParameter->numItems				=	(int) (yyvsp[(4) - (5)].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			for(int i=0;i<currentParameter->numItems;i++)
				currentDefaultItem[i].scalar = 0;
		;}
    break;

  case 44:
#line 390 "sdr.y"
    {
			if(numArrayItemsRemaining){
				sdrerror("Wrong number of items in array initializer\n");
			}
		;}
    break;

  case 45:
#line 400 "sdr.y"
    {
			if(numArrayItemsRemaining){
				currentDefaultItem->scalar = (yyvsp[(2) - (2)].real);
				currentDefaultItem++;
				numArrayItemsRemaining--;
			}
			else{
				sdrerror("Wrong number of items in array initializer\n");
			}
		;}
    break;

  case 47:
#line 416 "sdr.y"
    {
			currentParameter->type					=	TYPE_STRING;
			currentParameter->name					=	strdup((yyvsp[(2) - (2)].string));
			currentParameter->defaultValue.array	=	NULL;
			currentParameter->numItems				=	1;
		;}
    break;

  case 48:
#line 427 "sdr.y"
    {
			currentParameter->type					=	TYPE_STRING;
			currentParameter->name					=	strdup((yyvsp[(2) - (4)].string));
			currentParameter->defaultValue.string	=	strdup((yyvsp[(4) - (4)].string));
			currentParameter->numItems				=	1;
		;}
    break;

  case 49:
#line 440 "sdr.y"
    {
			currentParameter->type					=	TYPE_STRING;
			currentParameter->name					=	strdup((yyvsp[(2) - (6)].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[(4) - (6)].real)];
			currentParameter->numItems				=	(int) (yyvsp[(4) - (6)].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			numArrayItemsRemaining = currentParameter->numItems;
		;}
    break;

  case 51:
#line 456 "sdr.y"
    {
			currentParameter->type					=	TYPE_STRING;
			currentParameter->name					=	strdup((yyvsp[(2) - (5)].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[(4) - (5)].real)];
			currentParameter->numItems				=	(int) (yyvsp[(4) - (5)].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			for(int i=0;i<currentParameter->numItems;i++)
				currentDefaultItem[i].string = NULL;
		;}
    break;

  case 52:
#line 472 "sdr.y"
    {
			if(numArrayItemsRemaining){
				sdrerror("Wrong number of items in array initializer\n");
			}
		;}
    break;

  case 53:
#line 482 "sdr.y"
    {
			if(numArrayItemsRemaining){
				currentDefaultItem->string = strdup((yyvsp[(2) - (2)].string));
				currentDefaultItem++;
				numArrayItemsRemaining--;
			}
			else{
				sdrerror("Wrong number of items in array initializer\n");
			}
		;}
    break;

  case 55:
#line 498 "sdr.y"
    {
			currentParameter->type					=	TYPE_COLOR;
			currentParameter->name					=	strdup((yyvsp[(2) - (2)].string));
			currentParameter->numItems				=	1;
			
			currentDefaultItem = &currentParameter->defaultValue;
		;}
    break;

  case 56:
#line 506 "sdr.y"
    {
		;}
    break;

  case 57:
#line 515 "sdr.y"
    {
			currentParameter->type					=	TYPE_COLOR;
			currentParameter->name					=	strdup((yyvsp[(2) - (6)].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[(4) - (6)].real)];
			currentParameter->numItems				=	(int) (yyvsp[(4) - (6)].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			numArrayItemsRemaining = currentParameter->numItems;
		;}
    break;

  case 59:
#line 531 "sdr.y"
    {
			currentParameter->type					=	TYPE_COLOR;
			currentParameter->name					=	strdup((yyvsp[(2) - (5)].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[(4) - (5)].real)];
			currentParameter->numItems				=	(int) (yyvsp[(4) - (5)].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			for(int i=0;i<currentParameter->numItems;i++){
				currentDefaultItem[i].vector = new float[3];
				currentDefaultItem[i].vector[0] = 0;
				currentDefaultItem[i].vector[1] = 0;
				currentDefaultItem[i].vector[2] = 0;
			}
		;}
    break;

  case 60:
#line 550 "sdr.y"
    {
			currentParameter->type					=	TYPE_VECTOR;
			currentParameter->name					=	strdup((yyvsp[(2) - (2)].string));
			currentParameter->numItems				=	1;
			
			currentDefaultItem = &currentParameter->defaultValue;
		;}
    break;

  case 61:
#line 558 "sdr.y"
    {
		;}
    break;

  case 62:
#line 567 "sdr.y"
    {
			currentParameter->type					=	TYPE_VECTOR;
			currentParameter->name					=	strdup((yyvsp[(2) - (6)].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[(4) - (6)].real)];
			currentParameter->numItems				=	(int) (yyvsp[(4) - (6)].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			numArrayItemsRemaining = currentParameter->numItems;
		;}
    break;

  case 64:
#line 583 "sdr.y"
    {
			currentParameter->type					=	TYPE_VECTOR;
			currentParameter->name					=	strdup((yyvsp[(2) - (5)].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[(4) - (5)].real)];
			currentParameter->numItems				=	(int) (yyvsp[(4) - (5)].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			for(int i=0;i<currentParameter->numItems;i++){
				currentDefaultItem[i].vector = new float[3];
				currentDefaultItem[i].vector[0] = 0;
				currentDefaultItem[i].vector[1] = 0;
				currentDefaultItem[i].vector[2] = 0;
			}
		;}
    break;

  case 65:
#line 603 "sdr.y"
    {
			if(numArrayItemsRemaining){
				sdrerror("Wrong number of items in array initializer\n");
		}
		;}
    break;

  case 66:
#line 612 "sdr.y"
    {
			if(numArrayItemsRemaining){
				currentDefaultItem->vector = new float[3];
			}
			else{
				sdrerror("Wrong number of items in array initializer\n");
			}
		;}
    break;

  case 67:
#line 621 "sdr.y"
    {
			currentDefaultItem++;
			numArrayItemsRemaining--;
		;}
    break;

  case 69:
#line 631 "sdr.y"
    {
			currentParameter->type					=	TYPE_NORMAL;
			currentParameter->name					=	strdup((yyvsp[(2) - (2)].string));
			currentParameter->numItems				=	1;
			
			currentDefaultItem = &currentParameter->defaultValue;
		;}
    break;

  case 70:
#line 639 "sdr.y"
    {
		;}
    break;

  case 71:
#line 648 "sdr.y"
    {
			currentParameter->type					=	TYPE_NORMAL;
			currentParameter->name					=	strdup((yyvsp[(2) - (6)].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[(4) - (6)].real)];
			currentParameter->numItems				=	(int) (yyvsp[(4) - (6)].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			numArrayItemsRemaining = currentParameter->numItems;
		;}
    break;

  case 73:
#line 664 "sdr.y"
    {
			currentParameter->type					=	TYPE_NORMAL;
			currentParameter->name					=	strdup((yyvsp[(2) - (5)].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[(4) - (5)].real)];
			currentParameter->numItems				=	(int) (yyvsp[(4) - (5)].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			for(int i=0;i<currentParameter->numItems;i++){
				currentDefaultItem[i].vector = new float[3];
				currentDefaultItem[i].vector[0] = 0;
				currentDefaultItem[i].vector[1] = 0;
				currentDefaultItem[i].vector[3] = 0;
			}
		;}
    break;

  case 74:
#line 683 "sdr.y"
    {
			currentParameter->type					=	TYPE_POINT;
			currentParameter->name					=	strdup((yyvsp[(2) - (2)].string));
			currentParameter->numItems				=	1;
			
			currentDefaultItem = &currentParameter->defaultValue;
		;}
    break;

  case 75:
#line 691 "sdr.y"
    {
		;}
    break;

  case 76:
#line 700 "sdr.y"
    {
			currentParameter->type					=	TYPE_POINT;
			currentParameter->name					=	strdup((yyvsp[(2) - (6)].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[(4) - (6)].real)];
			currentParameter->numItems				=	(int) (yyvsp[(4) - (6)].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			numArrayItemsRemaining = currentParameter->numItems;
		;}
    break;

  case 78:
#line 716 "sdr.y"
    {
			currentParameter->type					=	TYPE_POINT;
			currentParameter->name					=	strdup((yyvsp[(2) - (5)].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[(4) - (5)].real)];
			currentParameter->numItems				=	(int) (yyvsp[(4) - (5)].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			for(int i=0;i<currentParameter->numItems;i++){
				currentDefaultItem[i].vector	= new float[3];
				currentDefaultItem[i].vector[0] = 0;
				currentDefaultItem[i].vector[1] = 0;
				currentDefaultItem[i].vector[2] = 0;
			}
		;}
    break;

  case 79:
#line 754 "sdr.y"
    {
			currentParameter->container					=	CONTAINER_UNIFORM;
			currentParameter->type						=	TYPE_MATRIX;
			currentParameter->name						=	strdup((yyvsp[(2) - (21)].string));
			currentParameter->defaultValue.matrix		=	new float[16];
			currentParameter->defaultValue.matrix[0]	=	(yyvsp[(5) - (21)].real);
			currentParameter->defaultValue.matrix[1]	=	(yyvsp[(6) - (21)].real);
			currentParameter->defaultValue.matrix[2]	=	(yyvsp[(7) - (21)].real);
			currentParameter->defaultValue.matrix[3]	=	(yyvsp[(8) - (21)].real);
			currentParameter->defaultValue.matrix[4]	=	(yyvsp[(9) - (21)].real);
			currentParameter->defaultValue.matrix[5]	=	(yyvsp[(10) - (21)].real);
			currentParameter->defaultValue.matrix[6]	=	(yyvsp[(11) - (21)].real);
			currentParameter->defaultValue.matrix[7]	=	(yyvsp[(12) - (21)].real);
			currentParameter->defaultValue.matrix[8]	=	(yyvsp[(13) - (21)].real);
			currentParameter->defaultValue.matrix[9]	=	(yyvsp[(14) - (21)].real);
			currentParameter->defaultValue.matrix[10]	=	(yyvsp[(15) - (21)].real);
			currentParameter->defaultValue.matrix[11]	=	(yyvsp[(16) - (21)].real);
			currentParameter->defaultValue.matrix[12]	=	(yyvsp[(17) - (21)].real);
			currentParameter->defaultValue.matrix[13]	=	(yyvsp[(18) - (21)].real);
			currentParameter->defaultValue.matrix[14]	=	(yyvsp[(19) - (21)].real);
			currentParameter->defaultValue.matrix[15]	=	(yyvsp[(20) - (21)].real);
			currentParameter->numItems					=	1;
		;}
    break;

  case 80:
#line 782 "sdr.y"
    {
			currentParameter->container					=	CONTAINER_UNIFORM;
			currentParameter->type						=	TYPE_MATRIX;
			currentParameter->name						=	strdup((yyvsp[(2) - (4)].string));
			currentParameter->defaultValue.matrix		=	new float[16];
			currentParameter->defaultValue.matrix[0]	=	(yyvsp[(4) - (4)].real);
			currentParameter->defaultValue.matrix[1]	=	0;
			currentParameter->defaultValue.matrix[2]	=	0;
			currentParameter->defaultValue.matrix[3]	=	0;
			currentParameter->defaultValue.matrix[4]	=	0;
			currentParameter->defaultValue.matrix[5]	=	(yyvsp[(4) - (4)].real);
			currentParameter->defaultValue.matrix[6]	=	0;
			currentParameter->defaultValue.matrix[7]	=	0;
			currentParameter->defaultValue.matrix[8]	=	0;
			currentParameter->defaultValue.matrix[9]	=	0;
			currentParameter->defaultValue.matrix[10]	=	(yyvsp[(4) - (4)].real);
			currentParameter->defaultValue.matrix[11]	=	0;
			currentParameter->defaultValue.matrix[12]	=	0;
			currentParameter->defaultValue.matrix[13]	=	0;
			currentParameter->defaultValue.matrix[14]	=	0;
			currentParameter->defaultValue.matrix[15]	=	(yyvsp[(4) - (4)].real);
			currentParameter->numItems					=	1;
		;}
    break;

  case 81:
#line 808 "sdr.y"
    {
			currentParameter->container					=	CONTAINER_UNIFORM;
			currentParameter->type						=	TYPE_MATRIX;
			currentParameter->name						=	strdup((yyvsp[(2) - (2)].string));
			currentParameter->defaultValue.matrix		=	new float[16];
			currentParameter->defaultValue.matrix[0]	=	1;
			currentParameter->defaultValue.matrix[1]	=	0;
			currentParameter->defaultValue.matrix[2]	=	0;
			currentParameter->defaultValue.matrix[3]	=	0;
			currentParameter->defaultValue.matrix[4]	=	0;
			currentParameter->defaultValue.matrix[5]	=	1;
			currentParameter->defaultValue.matrix[6]	=	0;
			currentParameter->defaultValue.matrix[7]	=	0;
			currentParameter->defaultValue.matrix[8]	=	0;
			currentParameter->defaultValue.matrix[9]	=	0;
			currentParameter->defaultValue.matrix[10]	=	1;
			currentParameter->defaultValue.matrix[11]	=	0;
			currentParameter->defaultValue.matrix[12]	=	0;
			currentParameter->defaultValue.matrix[13]	=	0;
			currentParameter->defaultValue.matrix[14]	=	0;
			currentParameter->defaultValue.matrix[15]	=	1;
			currentParameter->numItems					=	1;
		;}
    break;

  case 82:
#line 838 "sdr.y"
    {
			currentParameter->container					=	CONTAINER_UNIFORM;
			currentParameter->type						=	TYPE_MATRIX;
			currentParameter->name						=	strdup((yyvsp[(2) - (6)].string));
			currentParameter->defaultValue.array		=	new UDefaultVal[(int) (yyvsp[(4) - (6)].real)];
			currentParameter->numItems					=	(int) (yyvsp[(4) - (6)].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			numArrayItemsRemaining = currentParameter->numItems;
		;}
    break;

  case 84:
#line 855 "sdr.y"
    {
			currentParameter->container					=	CONTAINER_UNIFORM;
			currentParameter->type						=	TYPE_MATRIX;
			currentParameter->name						=	strdup((yyvsp[(2) - (5)].string));
			currentParameter->defaultValue.array		=	new UDefaultVal[(int) (yyvsp[(4) - (5)].real)];
			currentParameter->numItems					=	(int) (yyvsp[(4) - (5)].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			for(int i=0;i<currentParameter->numItems;i++){
				currentDefaultItem[i].matrix = new float[16];
				currentDefaultItem[i].matrix[0] = 1;
				currentDefaultItem[i].matrix[1] = 0;
				currentDefaultItem[i].matrix[2] = 0;
				currentDefaultItem[i].matrix[3] = 0;
				currentDefaultItem[i].matrix[4] = 0;
				currentDefaultItem[i].matrix[5] = 1;
				currentDefaultItem[i].matrix[6] = 0;
				currentDefaultItem[i].matrix[7] = 0;
				currentDefaultItem[i].matrix[8] = 0;
				currentDefaultItem[i].matrix[9] = 0;
				currentDefaultItem[i].matrix[10] = 1;
				currentDefaultItem[i].matrix[11] = 0;
				currentDefaultItem[i].matrix[12] = 0;
				currentDefaultItem[i].matrix[13] = 0;
				currentDefaultItem[i].matrix[14] = 0;
				currentDefaultItem[i].matrix[15] = 1;
			}
		;}
    break;

  case 85:
#line 889 "sdr.y"
    {
			if(numArrayItemsRemaining){
				sdrerror("Wrong number of items in array initializer\n");
			}
		;}
    break;

  case 86:
#line 916 "sdr.y"
    {
			if(numArrayItemsRemaining){
				currentDefaultItem->matrix = new float[16];
				currentDefaultItem->matrix[0] = (yyvsp[(3) - (19)].real);
				currentDefaultItem->matrix[1] = (yyvsp[(4) - (19)].real);
				currentDefaultItem->matrix[2] = (yyvsp[(5) - (19)].real);
				currentDefaultItem->matrix[3] = (yyvsp[(6) - (19)].real);
				currentDefaultItem->matrix[4] = (yyvsp[(7) - (19)].real);
				currentDefaultItem->matrix[5] = (yyvsp[(8) - (19)].real);
				currentDefaultItem->matrix[6] = (yyvsp[(9) - (19)].real);
				currentDefaultItem->matrix[7] = (yyvsp[(10) - (19)].real);
				currentDefaultItem->matrix[8] = (yyvsp[(11) - (19)].real);
				currentDefaultItem->matrix[9] = (yyvsp[(12) - (19)].real);
				currentDefaultItem->matrix[10] = (yyvsp[(13) - (19)].real);
				currentDefaultItem->matrix[11] = (yyvsp[(14) - (19)].real);
				currentDefaultItem->matrix[12] = (yyvsp[(15) - (19)].real);
				currentDefaultItem->matrix[13] = (yyvsp[(16) - (19)].real);
				currentDefaultItem->matrix[14] = (yyvsp[(17) - (19)].real);
				currentDefaultItem->matrix[15] = (yyvsp[(18) - (19)].real);
				
				currentDefaultItem++;
				numArrayItemsRemaining--;
			}
			else{
				sdrerror("Wrong number of items in array initializer\n");
			}
		;}
    break;

  case 87:
#line 946 "sdr.y"
    {
			if(numArrayItemsRemaining){
				currentDefaultItem->matrix = new float[16];
				currentDefaultItem->matrix[0] = (yyvsp[(2) - (2)].real);
				currentDefaultItem->matrix[1] = 0;
				currentDefaultItem->matrix[2] = 0;
				currentDefaultItem->matrix[3] = 0;
				currentDefaultItem->matrix[4] = 0;
				currentDefaultItem->matrix[5] = (yyvsp[(2) - (2)].real);
				currentDefaultItem->matrix[6] = 0;
				currentDefaultItem->matrix[7] = 0;
				currentDefaultItem->matrix[8] = 0;
				currentDefaultItem->matrix[9] = 0;
				currentDefaultItem->matrix[10] = (yyvsp[(2) - (2)].real);
				currentDefaultItem->matrix[11] = 0;
				currentDefaultItem->matrix[12] = 0;
				currentDefaultItem->matrix[13] = 0;
				currentDefaultItem->matrix[14] = 0;
				currentDefaultItem->matrix[15] = 1;
				
				currentDefaultItem++;
				numArrayItemsRemaining--;
			}
		;}
    break;

  case 100:
#line 1023 "sdr.y"
    {
		;}
    break;

  case 101:
#line 1031 "sdr.y"
    {
		;}
    break;

  case 102:
#line 1039 "sdr.y"
    {
		;}
    break;

  case 103:
#line 1047 "sdr.y"
    {
		;}
    break;

  case 104:
#line 1054 "sdr.y"
    {
		;}
    break;

  case 105:
#line 1062 "sdr.y"
    {
		;}
    break;

  case 106:
#line 1069 "sdr.y"
    {
		;}
    break;

  case 107:
#line 1077 "sdr.y"
    {
		;}
    break;

  case 108:
#line 1084 "sdr.y"
    {
		;}
    break;

  case 109:
#line 1092 "sdr.y"
    {
		;}
    break;

  case 110:
#line 1099 "sdr.y"
    {
		;}
    break;

  case 111:
#line 1107 "sdr.y"
    {
		;}
    break;

  case 112:
#line 1114 "sdr.y"
    {
		;}
    break;

  case 113:
#line 1122 "sdr.y"
    {
		;}
    break;

  case 114:
#line 1129 "sdr.y"
    {
		;}
    break;

  case 115:
#line 1137 "sdr.y"
    {
		;}
    break;

  case 120:
#line 1159 "sdr.y"
    {
		;}
    break;

  case 121:
#line 1165 "sdr.y"
    {
		;}
    break;

  case 122:
#line 1171 "sdr.y"
    {
		;}
    break;

  case 123:
#line 1175 "sdr.y"
    {
		;}
    break;

  case 124:
#line 1179 "sdr.y"
    {
		;}
    break;

  case 125:
#line 1186 "sdr.y"
    {
		;}
    break;

  case 126:
#line 1189 "sdr.y"
    {
		;}
    break;

  case 127:
#line 1196 "sdr.y"
    {
		;}
    break;

  case 128:
#line 1203 "sdr.y"
    {
		;}
    break;

  case 129:
#line 1209 "sdr.y"
    {
		;}
    break;

  case 130:
#line 1213 "sdr.y"
    {
		;}
    break;

  case 131:
#line 1217 "sdr.y"
    {
		;}
    break;

  case 132:
#line 1221 "sdr.y"
    {
		;}
    break;

  case 133:
#line 1231 "sdr.y"
    {
		;}
    break;

  case 134:
#line 1267 "sdr.y"
    {
		;}
    break;

  case 135:
#line 1273 "sdr.y"
    {
		;}
    break;


/* Line 1267 of yacc.c.  */
#line 2680 "sdr.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1277 "sdr.y"

#include "lex.sdr.cpp"

int	slLineno	=	0;

///////////////////////////////////////////////////////////////////////
// Function				:	sdrerror
// Description			:	Parser error function
// Return Value			:
// Comments				:
void			sdrerror(const char *s) {
	fprintf(stdout,"%s\n",s);
}


///////////////////////////////////////////////////////////////////////
// Function				:	sdrGet
// Description			:	Parse a shader
// Return Value			:
// Comments				:
TSdrShader		*sdrGet(const char *in,const char *searchpath) {
	TSdrShader		*cShader;
	char			tmp[512];
	const	char	*currentPath;
	char			*dest;

	sdrin	=	fopen(in,"r");

	if (sdrin == NULL) {
		if (searchpath != NULL) {
			for (dest=tmp,currentPath=searchpath;;) {
				if ((*currentPath == '\0') || (*currentPath == ':')) {		// End of the current path

					if ((dest - tmp) > 0) {		// Do we have anything to record ?
						dest--;

						if ((*dest == '/') || (*dest == '\\')) {	// The last character has to be a slash
							dest++;
						} else {
							dest++;
							*dest++	=	'/';
						}

						sprintf(dest,in);
						if (strstr(dest,".sdr") == NULL) {
							strcat(dest,".sdr");
						}

						osFixSlashes(tmp);

						if (strncmp(tmp,"\\\\",2) == 0) {
							tmp[1]	=	tmp[2];
							tmp[2]	=	':';
							tmp[3]	=	'\\';

							sdrin	=	fopen(tmp+1,"r");
						} else {
							sdrin	=	fopen(tmp,"r");
						}

						if (sdrin != NULL)	break;
					}

					dest			=	tmp;

					if (*currentPath == '\0')	break;

					currentPath++;
				} else if (*currentPath == '%') {
					const	char	*endOfCurrentPath	=	strchr(currentPath+1,'%');
					char			environmentVariable[OS_MAX_PATH_LENGTH];

					if (endOfCurrentPath!=NULL) {
						const	int		environmentLength	=	(int) (endOfCurrentPath - currentPath) - 1;
						const	char	*value;

						strncpy(environmentVariable,currentPath+1,environmentLength);
						environmentVariable[environmentLength]	=	'\0';

						value		=	osEnvironment(environmentVariable);
						if (value != NULL) {
							strcpy(dest,value);
							dest	+=	strlen(value);
						}

						currentPath	=	endOfCurrentPath+1;
					} else {
						currentPath++;
					}
				} else if ((*currentPath == '@') || (*currentPath == '&')) {
					currentPath++;
				} else {
					*dest++	=	*currentPath++;
				}
			}
		}
	}

	if (sdrin == NULL)	return NULL;

	parameters	=	NULL;

	sdrparse();

	fclose(sdrin);

	cShader	=	new TSdrShader;

	cShader->name		=	strdup(in);
	cShader->type		=	shaderType;
	cShader->parameters	=	parameters;

	return cShader;
}

///////////////////////////////////////////////////////////////////////
// Function				:	sdrDelete
// Description			:	Delete a shader
// Return Value			:
// Comments				:
void			sdrDelete(TSdrShader *cShader) {
	TSdrParameter	*cParameter;

	while((cParameter = cShader->parameters) != NULL) {
		cShader->parameters	=	cParameter->next;

		free(cParameter->name);
		if (cParameter->space != NULL) {
			free(cParameter->space);
		}

		if (cParameter->numItems == 1) {
			switch(cParameter->type) {
			case TYPE_FLOAT:
				break;
			case TYPE_VECTOR:
			case TYPE_NORMAL:
			case TYPE_POINT:
			case TYPE_COLOR:
				if (cParameter->defaultValue.vector != NULL) {
					delete [] cParameter->defaultValue.vector;
				}
				break;
			case TYPE_MATRIX:
				if (cParameter->defaultValue.matrix != NULL) {
					delete [] cParameter->defaultValue.matrix;
				}
				break;
			case TYPE_STRING:
				if (cParameter->defaultValue.string != NULL) {
					free(cParameter->defaultValue.string);
				}
				break;
			}
		}

		delete cParameter;
	}

	free(cShader->name);
	delete cShader;
}


