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
#define yyparse ifparse
#define yylex   iflex
#define yyerror iferror
#define yylval  iflval
#define yychar  ifchar
#define yydebug ifdebug
#define yynerrs ifnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF_OPEN = 258,
     IF_CLOSE = 259,
     IF_PLUS = 260,
     IF_MINUS = 261,
     IF_MUL = 262,
     IF_DIV = 263,
     IF_MULMUL = 264,
     IF_AND = 265,
     IF_POW = 266,
     IF_OR = 267,
     IF_EQUAL = 268,
     IF_NEQUAL = 269,
     IF_LESSE = 270,
     IF_GREATERE = 271,
     IF_LESS = 272,
     IF_GREATER = 273,
     IF_ANDAND = 274,
     IF_OROR = 275,
     IF_NOT = 276,
     IF_DOLLAR = 277,
     IF_MATCH = 278,
     IF_DEFINED = 279,
     IF_CONCAT = 280,
     IF_COMMA = 281,
     IF_TEXT_VALUE = 282,
     IF_IDENTIFIER_VALUE = 283,
     IF_FLOAT_VALUE = 284
   };
#endif
/* Tokens.  */
#define IF_OPEN 258
#define IF_CLOSE 259
#define IF_PLUS 260
#define IF_MINUS 261
#define IF_MUL 262
#define IF_DIV 263
#define IF_MULMUL 264
#define IF_AND 265
#define IF_POW 266
#define IF_OR 267
#define IF_EQUAL 268
#define IF_NEQUAL 269
#define IF_LESSE 270
#define IF_GREATERE 271
#define IF_LESS 272
#define IF_GREATER 273
#define IF_ANDAND 274
#define IF_OROR 275
#define IF_NOT 276
#define IF_DOLLAR 277
#define IF_MATCH 278
#define IF_DEFINED 279
#define IF_CONCAT 280
#define IF_COMMA 281
#define IF_TEXT_VALUE 282
#define IF_IDENTIFIER_VALUE 283
#define IF_FLOAT_VALUE 284




/* Copy the first part of user declarations.  */
#line 1 "ifexpr.y"

//////////////////////////////////////////////////////////////////////
//
//                             Pixie
//
// Copyright � 1999 - 2003, Okan Arikan
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
//  File				:	ifexpr.y
//  Classes				:	-
//  Description			:	Parser for the IF expressions
//
////////////////////////////////////////////////////////////////////////
#undef alloca
#include <string.h>

#include "common/os.h"
#include "ri_config.h"
#include "error.h"
#include "rendererc.h"
#include "renderer.h"
#include "rendererContext.h"

int							iflex(void );		// Forward definition for stupid yacc
void						iferror(const char *,...);

static	CRendererContext	*context	=	NULL;
static	int					silent		=	FALSE;
static	int					result		=	0;	// 0 - FALSE
												// 1 - TRUE
												// 2 - error



	///////////////////////////////////////////////////////////////////////
	// Class				:	CExpr
	// Description			:	Holds an expression value
	// Comments				:
	class CExpr {
	public:
			EVariableType	type;				// The type of the expression
			const void		*value;				// Value of the expression
			float			floatValue;
			int				intValue;
			char			*stringValue;
	};

	///////////////////////////////////////////////////////////////////////
	// Function				:	getString
	// Description			:	Take the expression and form a string
	// Return Value			:	The string
	// Comments				:
	static	inline	const char	*getString(const CExpr &expr) {	
		const void 	*value = expr.value;
		
		switch (expr.type) {
			case TYPE_FLOAT:
			case TYPE_COLOR:
			case TYPE_VECTOR:
			case TYPE_NORMAL:
			case TYPE_POINT:
			case TYPE_MATRIX:
			case TYPE_QUAD:
			case TYPE_DOUBLE:
				break;
			case TYPE_STRING:
				if (value == NULL)	return expr.stringValue;
				else				return *((const char **) value);
			case TYPE_INTEGER:
			default:
				break;
		};
		
		error(CODE_SYNTAX,"Unable to cast a string in the expression\n");
		
		return "__nonsense__";
	}


	///////////////////////////////////////////////////////////////////////
	// Function				:	getFloat
	// Description			:	Take the expression and form a float
	// Return Value			:	The float
	// Comments				:
	static	inline	float		getFloat(const CExpr &expr) {
		const void	*value = expr.value;
				
		switch (expr.type) {
			case TYPE_FLOAT:
				if (value == NULL)	return expr.floatValue;
				else				return *((float *) value);
			case TYPE_COLOR:
			case TYPE_VECTOR:
			case TYPE_NORMAL:
			case TYPE_POINT:
			case TYPE_MATRIX:
			case TYPE_QUAD:
			case TYPE_DOUBLE:
			case TYPE_STRING:
				break;
			case TYPE_INTEGER:
				if (value == NULL)	return (float) expr.intValue;
				else				return (float) *((int *) value);
			default:
				break;
		};
		
		error(CODE_SYNTAX,"Unable to cast a float in the expression\n");
		
		return 0;
	}

	///////////////////////////////////////////////////////////////////////
	// Function				:	getInt
	// Description			:	Take the expression and form an int
	// Return Value			:	The int
	// Comments				:
	static	inline	int		getInt(const CExpr &expr) {
		const void	*value = expr.value;
		
		switch (expr.type) {
			case TYPE_FLOAT:
				if (value == NULL)	return (int) expr.floatValue;
				else				return (int) *((float *) value);
			case TYPE_COLOR:
			case TYPE_VECTOR:
			case TYPE_NORMAL:
			case TYPE_POINT:
			case TYPE_MATRIX:
			case TYPE_QUAD:
			case TYPE_DOUBLE:
			case TYPE_STRING:
				break;
			case TYPE_INTEGER:
				if (value == NULL)	return expr.intValue;
				else				return *((int *) value);
			default:
				break;
		};
		
		error(CODE_SYNTAX,"Unable to cast an integer in the expression\n");
		
		return 0;
	}

	///////////////////////////////////////////////////////////////////////
	// Function				:	setFloat
	// Description			:	Create a float expression
	// Return Value			:
	// Comments				:
	static	inline	void		setFloat(CExpr &expr,float val) {
		expr.type		=	TYPE_FLOAT;
		expr.value		=	NULL;
		expr.floatValue	=	val;
	}

	///////////////////////////////////////////////////////////////////////
	// Function				:	setInt
	// Description			:	Create an int expression
	// Return Value			:
	// Comments				:
	static	inline	void		setInt(CExpr &expr,int val) {
		expr.type		=	TYPE_INTEGER;
		expr.value		=	NULL;
		expr.intValue	=	val;
	}

	///////////////////////////////////////////////////////////////////////
	// Function				:	findExpr
	// Description			:	Find a float expression
	// Return Value			:
	// Comments				:
	static	void				findExpr(CExpr &expr,const char *name,const char *decl=NULL,int attributes=FALSE,int typeSet=FALSE) {
		const char	*p;
		
		if (strncmp(name,"Attribute:",10) == 0) {
			name	+=	10;
			
			findExpr(expr,name,NULL,TRUE,TRUE);
		} else if (strncmp(name,"Option:",7) == 0) {
			name	+=	7;
			
			findExpr(expr,name,NULL,FALSE,TRUE);
		} else if ((p = strchr(name,':')) != NULL) {
			char category[256];		
				
			assert((p-name) < 255);				// Sanity check
			strncpy(category,name,p-name);		// Copy the category
			category[p-name]		=	'\0';	// Make sure it terminates
			
			findExpr(expr,p+1,category,attributes,typeSet);
		} else {
			
			if (attributes) {
				// Lookup the attributes
				CAttributes	*cAttributes	=	context->getAttributes(TRUE);
				
				if (cAttributes->find(name,decl,expr.type,expr.value,expr.intValue,expr.floatValue) == FALSE) {
					if (typeSet == FALSE) {
						COptions	*cOptions		=	context->getOptions();
						if (cOptions->find(name,decl,expr.type,expr.value,expr.intValue,expr.floatValue) == FALSE) {
							if (!silent) error(CODE_BADTOKEN,"Failed to find variable \"%s\"\n",name);
							result	=	FALSE;
						}
					} else {
						if (!silent) error(CODE_BADTOKEN,"Failed to find variable \"%s\"\n",name);
						result	=	FALSE;
					}
				}
			} else {
				// Lookup the options
				COptions	*cOptions		=	context->getOptions();
				
				if (cOptions->find(name,decl,expr.type,expr.value,expr.intValue,expr.floatValue) == FALSE) {
					if (typeSet == FALSE) {
						CAttributes	*cAttributes	=	context->getAttributes(TRUE);
						if (cAttributes->find(name,decl,expr.type,expr.value,expr.intValue,expr.floatValue) == FALSE) {
							if (!silent) error(CODE_BADTOKEN,"Failed to find variable \"%s\"\n",name);
							result	=	FALSE;
						}
					} else {
						if (!silent) error(CODE_BADTOKEN,"Failed to find variable \"%s\"\n",name);
						result	=	FALSE;
					}
				}
			}
		}
	}




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
#line 250 "ifexpr.y"
slval {
	char	*string;
	CExpr	expr;
	float	real;
}
/* Line 193 of yacc.c.  */
#line 418 "ifexpr.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 431 "ifexpr.cpp"

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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   346

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  3
/* YYNRULES -- Number of rules.  */
#define YYNRULES  27
/* YYNRULES -- Number of states.  */
#define YYNSTATES  60

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    13,    15,    17,    21,    25,
      29,    33,    37,    41,    45,    49,    53,    57,    61,    65,
      69,    73,    77,    81,    84,    88,    93,    98
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      31,     0,    -1,    32,    -1,    22,    28,    -1,    22,     3,
      32,     4,    -1,    29,    -1,    27,    -1,    32,     5,    32,
      -1,    32,     6,    32,    -1,    32,     7,    32,    -1,    32,
       8,    32,    -1,    32,    10,    32,    -1,    32,    12,    32,
      -1,    32,    11,    32,    -1,    32,    13,    32,    -1,    32,
      14,    32,    -1,    32,    18,    32,    -1,    32,    17,    32,
      -1,    32,    16,    32,    -1,    32,    15,    32,    -1,    32,
      23,    32,    -1,    32,    19,    32,    -1,    32,    20,    32,
      -1,    21,    32,    -1,     3,    32,     4,    -1,    24,     3,
      32,     4,    -1,    24,     3,    28,     4,    -1,    25,     3,
      32,    26,    32,     4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   304,   304,   318,   325,   334,   339,   348,   355,   362,
     369,   378,   385,   392,   401,   412,   423,   434,   445,   456,
     469,   479,   486,   493,   501,   510,   529,   550
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF_OPEN", "IF_CLOSE", "IF_PLUS",
  "IF_MINUS", "IF_MUL", "IF_DIV", "IF_MULMUL", "IF_AND", "IF_POW", "IF_OR",
  "IF_EQUAL", "IF_NEQUAL", "IF_LESSE", "IF_GREATERE", "IF_LESS",
  "IF_GREATER", "IF_ANDAND", "IF_OROR", "IF_NOT", "IF_DOLLAR", "IF_MATCH",
  "IF_DEFINED", "IF_CONCAT", "IF_COMMA", "IF_TEXT_VALUE",
  "IF_IDENTIFIER_VALUE", "IF_FLOAT_VALUE", "$accept", "start", "ifExpr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    30,    31,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     4,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     4,     4,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     6,     5,     0,     2,
       0,    23,     0,     3,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    13,    12,    14,    15,    19,    18,    17,
      16,    21,    22,    20,     4,    26,    25,     0,     0,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     8,     9
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -19
static const yytype_int16 yypact[] =
{
      39,    39,    39,     4,     0,     1,   -19,   -19,     2,   166,
      87,   -18,    39,   -19,    12,    39,   -19,    39,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    39,    39,   -19,   107,     5,   127,    64,   298,   304,
      34,   318,    32,   -18,   323,   185,   204,   242,   223,   280,
     261,    24,   278,   -19,   -19,   -19,   -19,    39,   147,   -19
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -19,   -19,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      10,    11,    16,    14,    15,    32,     0,    12,     0,    55,
       0,    34,     0,    36,    37,     1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    13,     2,     3,    22,     4,     5,     0,     6,
      35,     7,     1,    22,    21,    22,    23,    32,     0,     0,
       0,    30,    31,    30,    31,    32,    58,    32,     0,     0,
       2,     3,     0,     4,     5,     0,     6,     0,     7,    17,
      18,    19,    20,     0,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,     0,     0,    32,     0,     0,
      57,    33,    17,    18,    19,    20,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     0,     0,
      32,    54,    17,    18,    19,    20,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     0,     0,
      32,    56,    17,    18,    19,    20,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     0,     0,
      32,    59,    17,    18,    19,    20,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     0,     0,
      32,    17,    18,    19,    20,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,     0,     0,    32,
      17,    18,    19,    20,     0,    21,    22,    23,     0,    25,
      26,    27,    28,    29,    30,    31,     0,     0,    32,    17,
      18,    19,    20,     0,    21,    22,    23,     0,     0,    26,
      27,    28,    29,    30,    31,     0,     0,    32,    17,    18,
      19,    20,     0,    21,    22,    23,     0,     0,    26,     0,
      28,    29,    30,    31,     0,     0,    32,    17,    18,    19,
      20,     0,    21,    22,    23,     0,     0,     0,     0,    28,
      29,    30,    31,     0,     0,    32,    17,    18,    19,    20,
       0,    21,    22,    23,     0,     0,     0,     0,    28,     0,
      30,    31,     0,     0,    32,    17,    18,    19,    20,    22,
      21,    22,    23,     0,     0,     0,     0,    30,     0,    30,
      31,    32,     0,    32,    18,    19,    20,     0,    21,    22,
      23,    19,    20,     0,    21,    22,    23,    30,    31,     0,
       0,    32,     0,    30,    31,    19,     0,    32,    21,    22,
      23,     0,     0,    21,    22,     0,     0,    30,    31,     0,
       0,    32,    30,    31,     0,     0,    32
};

static const yytype_int8 yycheck[] =
{
       1,     2,     0,     3,     3,    23,    -1,     3,    -1,     4,
      -1,    12,    -1,    14,    15,     3,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    28,    21,    22,    11,    24,    25,    -1,    27,
      28,    29,     3,    11,    10,    11,    12,    23,    -1,    -1,
      -1,    19,    20,    19,    20,    23,    57,    23,    -1,    -1,
      21,    22,    -1,    24,    25,    -1,    27,    -1,    29,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      26,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
       5,     6,     7,     8,    -1,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,     5,
       6,     7,     8,    -1,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,     5,     6,
       7,     8,    -1,    10,    11,    12,    -1,    -1,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    23,     5,     6,     7,
       8,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,    23,     5,     6,     7,     8,
      -1,    10,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,
      19,    20,    -1,    -1,    23,     5,     6,     7,     8,    11,
      10,    11,    12,    -1,    -1,    -1,    -1,    19,    -1,    19,
      20,    23,    -1,    23,     6,     7,     8,    -1,    10,    11,
      12,     7,     8,    -1,    10,    11,    12,    19,    20,    -1,
      -1,    23,    -1,    19,    20,     7,    -1,    23,    10,    11,
      12,    -1,    -1,    10,    11,    -1,    -1,    19,    20,    -1,
      -1,    23,    19,    20,    -1,    -1,    23
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    21,    22,    24,    25,    27,    29,    31,    32,
      32,    32,     3,    28,     3,     3,     0,     5,     6,     7,
       8,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    23,     4,    32,    28,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,     4,     4,     4,    26,    32,     4
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
        case 2:
#line 305 "ifexpr.y"
    {
					// If no result set so far
					if (result == 2) {
					
						////////////////////////////////////////////////////////////////////
						// Compute the value of the expression
						if ((yyvsp[(1) - (1)].expr).type == TYPE_STRING)	result	=	TRUE;
						else						result	=	(getFloat((yyvsp[(1) - (1)].expr)) != 0);
					}
				;}
    break;

  case 3:
#line 320 "ifexpr.y"
    {
					// Find the variable here
					findExpr((yyval.expr),(yyvsp[(2) - (2)].string));
				;}
    break;

  case 4:
#line 329 "ifexpr.y"
    {
					// Find the variable here
					findExpr((yyval.expr),getString((yyvsp[(3) - (4)].expr)));
				;}
    break;

  case 5:
#line 335 "ifexpr.y"
    {					
					setFloat((yyval.expr),(yyvsp[(1) - (1)].real));
				;}
    break;

  case 6:
#line 340 "ifexpr.y"
    {
					(yyval.expr).type			=	TYPE_STRING;
					(yyval.expr).value		=	NULL;
					(yyval.expr).stringValue	=	(yyvsp[(1) - (1)].string);
				;}
    break;

  case 7:
#line 351 "ifexpr.y"
    {
					setFloat((yyval.expr),getFloat((yyvsp[(1) - (3)].expr)) + getFloat((yyvsp[(3) - (3)].expr)));
				;}
    break;

  case 8:
#line 358 "ifexpr.y"
    {
					setFloat((yyval.expr),getFloat((yyvsp[(1) - (3)].expr)) - getFloat((yyvsp[(3) - (3)].expr)));
				;}
    break;

  case 9:
#line 365 "ifexpr.y"
    {
					setFloat((yyval.expr),getFloat((yyvsp[(1) - (3)].expr)) * getFloat((yyvsp[(3) - (3)].expr)));
				;}
    break;

  case 10:
#line 372 "ifexpr.y"
    {
					setFloat((yyval.expr),getFloat((yyvsp[(1) - (3)].expr)) / getFloat((yyvsp[(3) - (3)].expr)));
				;}
    break;

  case 11:
#line 381 "ifexpr.y"
    {
					setInt((yyval.expr),getInt((yyvsp[(1) - (3)].expr)) & getInt((yyvsp[(3) - (3)].expr)));
				;}
    break;

  case 12:
#line 388 "ifexpr.y"
    {
					setInt((yyval.expr),getInt((yyvsp[(1) - (3)].expr)) | getInt((yyvsp[(3) - (3)].expr)));
				;}
    break;

  case 13:
#line 395 "ifexpr.y"
    {
					setInt((yyval.expr),getInt((yyvsp[(1) - (3)].expr)) ^ getInt((yyvsp[(3) - (3)].expr)));
				;}
    break;

  case 14:
#line 404 "ifexpr.y"
    {
					if ((yyvsp[(1) - (3)].expr).type == TYPE_STRING || (yyvsp[(3) - (3)].expr).type == TYPE_STRING) {
						setInt((yyval.expr),strcmp(getString((yyvsp[(1) - (3)].expr)),getString((yyvsp[(3) - (3)].expr))) == 0);
					} else {
						setInt((yyval.expr),getFloat((yyvsp[(1) - (3)].expr)) == getFloat((yyvsp[(3) - (3)].expr)));
					}
				;}
    break;

  case 15:
#line 415 "ifexpr.y"
    {
					if ((yyvsp[(1) - (3)].expr).type == TYPE_STRING || (yyvsp[(3) - (3)].expr).type == TYPE_STRING) {
						setInt((yyval.expr),strcmp(getString((yyvsp[(1) - (3)].expr)),getString((yyvsp[(3) - (3)].expr))) != 0);
					} else {
						setInt((yyval.expr),getFloat((yyvsp[(1) - (3)].expr)) != getFloat((yyvsp[(3) - (3)].expr)));
					}
				;}
    break;

  case 16:
#line 426 "ifexpr.y"
    {
					if ((yyvsp[(1) - (3)].expr).type == TYPE_STRING || (yyvsp[(3) - (3)].expr).type == TYPE_STRING) {
						setInt((yyval.expr),strcmp(getString((yyvsp[(1) - (3)].expr)),getString((yyvsp[(3) - (3)].expr))) > 0);
					} else {
						setInt((yyval.expr),getFloat((yyvsp[(1) - (3)].expr)) > getFloat((yyvsp[(3) - (3)].expr)));
					}
				;}
    break;

  case 17:
#line 437 "ifexpr.y"
    {
					if ((yyvsp[(1) - (3)].expr).type == TYPE_STRING || (yyvsp[(3) - (3)].expr).type == TYPE_STRING) {
						setInt((yyval.expr),strcmp(getString((yyvsp[(1) - (3)].expr)),getString((yyvsp[(3) - (3)].expr))) < 0);
					} else {
						setInt((yyval.expr),getFloat((yyvsp[(1) - (3)].expr)) < getFloat((yyvsp[(3) - (3)].expr)));
					}
				;}
    break;

  case 18:
#line 448 "ifexpr.y"
    {
					if ((yyvsp[(1) - (3)].expr).type == TYPE_STRING || (yyvsp[(3) - (3)].expr).type == TYPE_STRING) {
						setInt((yyval.expr),strcmp(getString((yyvsp[(1) - (3)].expr)),getString((yyvsp[(3) - (3)].expr))) >= 0);
					} else {
						setInt((yyval.expr),getFloat((yyvsp[(1) - (3)].expr)) >= getFloat((yyvsp[(3) - (3)].expr)));
					}
				;}
    break;

  case 19:
#line 459 "ifexpr.y"
    {
					if ((yyvsp[(1) - (3)].expr).type == TYPE_STRING || (yyvsp[(3) - (3)].expr).type == TYPE_STRING) {
						setInt((yyval.expr),strcmp(getString((yyvsp[(1) - (3)].expr)),getString((yyvsp[(3) - (3)].expr))) <= 0);
					} else {
						setInt((yyval.expr),getFloat((yyvsp[(1) - (3)].expr)) <= getFloat((yyvsp[(3) - (3)].expr)));
					}
				;}
    break;

  case 20:
#line 472 "ifexpr.y"
    {
					// FIXME: Implement pattern matching
					setInt((yyval.expr),strcmp(getString((yyvsp[(1) - (3)].expr)),getString((yyvsp[(3) - (3)].expr))) == 0);
				;}
    break;

  case 21:
#line 482 "ifexpr.y"
    {
					setInt((yyval.expr),getInt((yyvsp[(1) - (3)].expr)) && getInt((yyvsp[(3) - (3)].expr)));
				;}
    break;

  case 22:
#line 489 "ifexpr.y"
    {
					setInt((yyval.expr),getInt((yyvsp[(1) - (3)].expr)) || getInt((yyvsp[(3) - (3)].expr)));
				;}
    break;

  case 23:
#line 495 "ifexpr.y"
    {
					setInt((yyval.expr),! getInt((yyvsp[(2) - (2)].expr)));
				;}
    break;

  case 24:
#line 504 "ifexpr.y"
    {
					(yyval.expr)	=	(yyvsp[(2) - (3)].expr);
				;}
    break;

  case 25:
#line 514 "ifexpr.y"
    {
					CExpr e;
					// save previous result & silent status
					int prevResult = result;
					int prevSilent = silent;
					silent = TRUE;
					result = TRUE;
					// lookup (result will be false if it fails)
					findExpr(e,getString((yyvsp[(3) - (4)].expr)));
					setInt((yyval.expr),result == TRUE);
					// restore state
					result = prevResult;
					silent = prevSilent;
				;}
    break;

  case 26:
#line 533 "ifexpr.y"
    {
					CExpr e;
					// save previous result & silent status
					int prevResult = result;
					int prevSilent = silent;
					silent = TRUE;
					result = TRUE;
					// lookup (result will be false if it fails)
					findExpr(e,(yyvsp[(3) - (4)].string));
					setInt((yyval.expr),result == TRUE);
					// restore state
					result = prevResult;
					silent = prevSilent;
				;}
    break;

  case 27:
#line 556 "ifexpr.y"
    {
					(yyval.expr).type			=	TYPE_STRING;
					(yyval.expr).value		=	NULL;
					(yyval.expr).stringValue	=	(char *) ralloc((int) strlen(getString((yyvsp[(3) - (6)].expr))) + (int) strlen(getString((yyvsp[(5) - (6)].expr))) + 2,CRenderer::globalMemory);
					strcpy((yyval.expr).stringValue,getString((yyvsp[(3) - (6)].expr)));
					strcat((yyval.expr).stringValue,getString((yyvsp[(5) - (6)].expr)));
				;}
    break;


/* Line 1267 of yacc.c.  */
#line 1964 "ifexpr.cpp"
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


#line 565 "ifexpr.y"


#include "lex.if.cpp"


///////////////////////////////////////////////////////////////////////
// Function				:	ifParse
// Description			:	Parse an if statement
// Return Value			:	TRUE/FALSE
// Comments				:
int		CRendererContext::ifParse(const char *expr) {

	// Begin a new page
	memBegin(CRenderer::globalMemory);
	
	YY_BUFFER_STATE savedState	=	YY_CURRENT_BUFFER;		// Save the old buffer
	YY_BUFFER_STATE	newState;

	// Save the necessary info
	context			=	this;
	result			=	2;
	silent			=	FALSE;

	newState		=	if_scan_string(expr);				// Create a new buffer
	ifparse();												// Scan the buffer
	if_delete_buffer(newState);								// Ditch the buffer

	if_switch_to_buffer( savedState );						// Switch to the old buffer

	// Restore the memory page
	memEnd(CRenderer::globalMemory);
	
	return result;
}

///////////////////////////////////////////////////////////////////////
// Function				:	dsoerror
// Description			:	Count the parse errors
// Return Value			:
// Comments				:
void	iferror(const char *,...) {
	// What do we do in the case of an error ?
	warning(CODE_BADTOKEN,"Condition parse error\n");
}







