/* File generated by the BNF Converter (bnfc 2.9.4). */

#ifndef ABSYN_HEADER
#define ABSYN_HEADER

#include<string>
#include<vector>

//C++ Abstract Syntax Interface.

/********************   TypeDef Section    ********************/

typedef int Integer;
typedef char Char;
typedef double Double;
typedef std::string String;
typedef std::string Ident;




/********************   Forward Declarations    ********************/

class PROGRAM;
class VARDECL;
class VAR;
class TYPE;
class POINTER;
class AST;
class CONSTDECL;
class CONST;
class VALUE;
class FUNCDECL;
class FUNCTION;
class RETURN;
class PARAM;
class BLOCKPROG;
class CMD;
class IF;
class IFELSE;
class WHILE;
class FOR;
class GOTO;
class ASSIGMENT;
class INCREMENT;
class COND;
class LOGICOP;
class LOGICEXP;
class EXP;
class ARITOP;
class ARITEXP;
class Program;
class VDecl;
class VDeclVoid;
class Var;
class VarAssig;
class VarV;
class VarAssigV;
class TYPE_int;
class TYPE_double;
class TYPE_char;
class TYPEPOINTER;
class PointerInt;
class PointerDouble;
class PointerChar;
class Ast;
class CDecl;
class CDeclVoid;
class Const;
class VALUEInteger;
class VALUEDouble;
class VALUEEXP;
class FDecl;
class FDeclVoid;
class Function;
class FunctionP;
class RETURN_int;
class RETURN_double;
class RETURN_char;
class RETURN_void;
class Param;
class BlockProg;
class CMDIF;
class CMDIFELSE;
class CMDWHILE;
class CMDFOR;
class CMDGOTO;
class CMDASSIGMENT;
class If;
class IfElse;
class While;
class For;
class Goto;
class Assigment;
class AssigmentV;
class Increment;
class IncrementV;
class Cond;
class LOGICOP1;
class LOGICOP2;
class LOGICOP3;
class LOGICOP4;
class LOGICOP5;
class LOGICOP6;
class LOGICOP7;
class LOGICOP8;
class LogicExp;
class Exp;
class ARITOP1;
class ARITOP2;
class ARITOP3;
class ARITOP4;
class AritExp;
class ListVAR;
class ListAST;
class ListCONST;
class ListFUNCTION;
class ListPARAM;
class ListCMD;
class ListLOGICEXP;
class ListARITEXP;


/********************   Visitor Interfaces    ********************/
class Visitor
{
public:
  virtual ~Visitor() {}
  virtual void visitPROGRAM(PROGRAM *p) = 0;
  virtual void visitVARDECL(VARDECL *p) = 0;
  virtual void visitVAR(VAR *p) = 0;
  virtual void visitTYPE(TYPE *p) = 0;
  virtual void visitPOINTER(POINTER *p) = 0;
  virtual void visitAST(AST *p) = 0;
  virtual void visitCONSTDECL(CONSTDECL *p) = 0;
  virtual void visitCONST(CONST *p) = 0;
  virtual void visitVALUE(VALUE *p) = 0;
  virtual void visitFUNCDECL(FUNCDECL *p) = 0;
  virtual void visitFUNCTION(FUNCTION *p) = 0;
  virtual void visitRETURN(RETURN *p) = 0;
  virtual void visitPARAM(PARAM *p) = 0;
  virtual void visitBLOCKPROG(BLOCKPROG *p) = 0;
  virtual void visitCMD(CMD *p) = 0;
  virtual void visitIF(IF *p) = 0;
  virtual void visitIFELSE(IFELSE *p) = 0;
  virtual void visitWHILE(WHILE *p) = 0;
  virtual void visitFOR(FOR *p) = 0;
  virtual void visitGOTO(GOTO *p) = 0;
  virtual void visitASSIGMENT(ASSIGMENT *p) = 0;
  virtual void visitINCREMENT(INCREMENT *p) = 0;
  virtual void visitCOND(COND *p) = 0;
  virtual void visitLOGICOP(LOGICOP *p) = 0;
  virtual void visitLOGICEXP(LOGICEXP *p) = 0;
  virtual void visitEXP(EXP *p) = 0;
  virtual void visitARITOP(ARITOP *p) = 0;
  virtual void visitARITEXP(ARITEXP *p) = 0;
  virtual void visitProgram(Program *p) = 0;
  virtual void visitVDecl(VDecl *p) = 0;
  virtual void visitVDeclVoid(VDeclVoid *p) = 0;
  virtual void visitVar(Var *p) = 0;
  virtual void visitVarAssig(VarAssig *p) = 0;
  virtual void visitVarV(VarV *p) = 0;
  virtual void visitVarAssigV(VarAssigV *p) = 0;
  virtual void visitTYPE_int(TYPE_int *p) = 0;
  virtual void visitTYPE_double(TYPE_double *p) = 0;
  virtual void visitTYPE_char(TYPE_char *p) = 0;
  virtual void visitTYPEPOINTER(TYPEPOINTER *p) = 0;
  virtual void visitPointerInt(PointerInt *p) = 0;
  virtual void visitPointerDouble(PointerDouble *p) = 0;
  virtual void visitPointerChar(PointerChar *p) = 0;
  virtual void visitAst(Ast *p) = 0;
  virtual void visitCDecl(CDecl *p) = 0;
  virtual void visitCDeclVoid(CDeclVoid *p) = 0;
  virtual void visitConst(Const *p) = 0;
  virtual void visitVALUEInteger(VALUEInteger *p) = 0;
  virtual void visitVALUEDouble(VALUEDouble *p) = 0;
  virtual void visitVALUEEXP(VALUEEXP *p) = 0;
  virtual void visitFDecl(FDecl *p) = 0;
  virtual void visitFDeclVoid(FDeclVoid *p) = 0;
  virtual void visitFunction(Function *p) = 0;
  virtual void visitFunctionP(FunctionP *p) = 0;
  virtual void visitRETURN_int(RETURN_int *p) = 0;
  virtual void visitRETURN_double(RETURN_double *p) = 0;
  virtual void visitRETURN_char(RETURN_char *p) = 0;
  virtual void visitRETURN_void(RETURN_void *p) = 0;
  virtual void visitParam(Param *p) = 0;
  virtual void visitBlockProg(BlockProg *p) = 0;
  virtual void visitCMDIF(CMDIF *p) = 0;
  virtual void visitCMDIFELSE(CMDIFELSE *p) = 0;
  virtual void visitCMDWHILE(CMDWHILE *p) = 0;
  virtual void visitCMDFOR(CMDFOR *p) = 0;
  virtual void visitCMDGOTO(CMDGOTO *p) = 0;
  virtual void visitCMDASSIGMENT(CMDASSIGMENT *p) = 0;
  virtual void visitIf(If *p) = 0;
  virtual void visitIfElse(IfElse *p) = 0;
  virtual void visitWhile(While *p) = 0;
  virtual void visitFor(For *p) = 0;
  virtual void visitGoto(Goto *p) = 0;
  virtual void visitAssigment(Assigment *p) = 0;
  virtual void visitAssigmentV(AssigmentV *p) = 0;
  virtual void visitIncrement(Increment *p) = 0;
  virtual void visitIncrementV(IncrementV *p) = 0;
  virtual void visitCond(Cond *p) = 0;
  virtual void visitLOGICOP1(LOGICOP1 *p) = 0;
  virtual void visitLOGICOP2(LOGICOP2 *p) = 0;
  virtual void visitLOGICOP3(LOGICOP3 *p) = 0;
  virtual void visitLOGICOP4(LOGICOP4 *p) = 0;
  virtual void visitLOGICOP5(LOGICOP5 *p) = 0;
  virtual void visitLOGICOP6(LOGICOP6 *p) = 0;
  virtual void visitLOGICOP7(LOGICOP7 *p) = 0;
  virtual void visitLOGICOP8(LOGICOP8 *p) = 0;
  virtual void visitLogicExp(LogicExp *p) = 0;
  virtual void visitExp(Exp *p) = 0;
  virtual void visitARITOP1(ARITOP1 *p) = 0;
  virtual void visitARITOP2(ARITOP2 *p) = 0;
  virtual void visitARITOP3(ARITOP3 *p) = 0;
  virtual void visitARITOP4(ARITOP4 *p) = 0;
  virtual void visitAritExp(AritExp *p) = 0;
  virtual void visitListVAR(ListVAR *p) = 0;
  virtual void visitListAST(ListAST *p) = 0;
  virtual void visitListCONST(ListCONST *p) = 0;
  virtual void visitListFUNCTION(ListFUNCTION *p) = 0;
  virtual void visitListPARAM(ListPARAM *p) = 0;
  virtual void visitListCMD(ListCMD *p) = 0;
  virtual void visitListLOGICEXP(ListLOGICEXP *p) = 0;
  virtual void visitListARITEXP(ListARITEXP *p) = 0;


  virtual void visitInteger(Integer x) = 0;
  virtual void visitChar(Char x) = 0;
  virtual void visitDouble(Double x) = 0;
  virtual void visitString(String x) = 0;
  virtual void visitIdent(Ident x) = 0;

};


class Visitable
{
 public:
  virtual ~Visitable() {}
  virtual void accept(Visitor *v) = 0;
};


/********************   Abstract Syntax Classes    ********************/

class PROGRAM : public Visitable
{
public:
  virtual PROGRAM *clone() const = 0;

};

class VARDECL : public Visitable
{
public:
  virtual VARDECL *clone() const = 0;

};

class VAR : public Visitable
{
public:
  virtual VAR *clone() const = 0;

};

class TYPE : public Visitable
{
public:
  virtual TYPE *clone() const = 0;

};

class POINTER : public Visitable
{
public:
  virtual POINTER *clone() const = 0;

};

class AST : public Visitable
{
public:
  virtual AST *clone() const = 0;

};

class CONSTDECL : public Visitable
{
public:
  virtual CONSTDECL *clone() const = 0;

};

class CONST : public Visitable
{
public:
  virtual CONST *clone() const = 0;

};

class VALUE : public Visitable
{
public:
  virtual VALUE *clone() const = 0;

};

class FUNCDECL : public Visitable
{
public:
  virtual FUNCDECL *clone() const = 0;

};

class FUNCTION : public Visitable
{
public:
  virtual FUNCTION *clone() const = 0;

};

class RETURN : public Visitable
{
public:
  virtual RETURN *clone() const = 0;

};

class PARAM : public Visitable
{
public:
  virtual PARAM *clone() const = 0;

};

class BLOCKPROG : public Visitable
{
public:
  virtual BLOCKPROG *clone() const = 0;

};

class CMD : public Visitable
{
public:
  virtual CMD *clone() const = 0;

};

class IF : public Visitable
{
public:
  virtual IF *clone() const = 0;

};

class IFELSE : public Visitable
{
public:
  virtual IFELSE *clone() const = 0;

};

class WHILE : public Visitable
{
public:
  virtual WHILE *clone() const = 0;

};

class FOR : public Visitable
{
public:
  virtual FOR *clone() const = 0;

};

class GOTO : public Visitable
{
public:
  virtual GOTO *clone() const = 0;

};

class ASSIGMENT : public Visitable
{
public:
  virtual ASSIGMENT *clone() const = 0;

};

class INCREMENT : public Visitable
{
public:
  virtual INCREMENT *clone() const = 0;

};

class COND : public Visitable
{
public:
  virtual COND *clone() const = 0;

};

class LOGICOP : public Visitable
{
public:
  virtual LOGICOP *clone() const = 0;

};

class LOGICEXP : public Visitable
{
public:
  virtual LOGICEXP *clone() const = 0;

};

class EXP : public Visitable
{
public:
  virtual EXP *clone() const = 0;

};

class ARITOP : public Visitable
{
public:
  virtual ARITOP *clone() const = 0;

};

class ARITEXP : public Visitable
{
public:
  virtual ARITEXP *clone() const = 0;

};



class Program : public PROGRAM
{
public:
  Ident ident_;
  VARDECL *vardecl_;
  CONSTDECL *constdecl_;
  FUNCDECL *funcdecl_;
  BLOCKPROG *blockprog_;

  Program(const Program &);
  Program &operator=(const Program &);
  Program(Ident p1, VARDECL *p2, CONSTDECL *p3, FUNCDECL *p4, BLOCKPROG *p5);
  ~Program();
  virtual void accept(Visitor *v);
  virtual Program *clone() const;
  void swap(Program &);
};

class VDecl : public VARDECL
{
public:
  ListVAR *listvar_;

  VDecl(const VDecl &);
  VDecl &operator=(const VDecl &);
  VDecl(ListVAR *p1);
  ~VDecl();
  virtual void accept(Visitor *v);
  virtual VDecl *clone() const;
  void swap(VDecl &);
};

class VDeclVoid : public VARDECL
{
public:

  VDeclVoid(const VDeclVoid &);
  VDeclVoid &operator=(const VDeclVoid &);
  VDeclVoid();
  ~VDeclVoid();
  virtual void accept(Visitor *v);
  virtual VDeclVoid *clone() const;
  void swap(VDeclVoid &);
};

class Var : public VAR
{
public:
  TYPE *type_;
  Ident ident_;

  Var(const Var &);
  Var &operator=(const Var &);
  Var(TYPE *p1, Ident p2);
  ~Var();
  virtual void accept(Visitor *v);
  virtual Var *clone() const;
  void swap(Var &);
};

class VarAssig : public VAR
{
public:
  TYPE *type_;
  Ident ident_;
  VALUE *value_;

  VarAssig(const VarAssig &);
  VarAssig &operator=(const VarAssig &);
  VarAssig(TYPE *p1, Ident p2, VALUE *p3);
  ~VarAssig();
  virtual void accept(Visitor *v);
  virtual VarAssig *clone() const;
  void swap(VarAssig &);
};

class VarV : public VAR
{
public:
  TYPE *type_;
  Ident ident_;
  Integer integer_;

  VarV(const VarV &);
  VarV &operator=(const VarV &);
  VarV(TYPE *p1, Ident p2, Integer p3);
  ~VarV();
  virtual void accept(Visitor *v);
  virtual VarV *clone() const;
  void swap(VarV &);
};

class VarAssigV : public VAR
{
public:
  TYPE *type_;
  Ident ident_;
  Integer integer_;
  VALUE *value_;

  VarAssigV(const VarAssigV &);
  VarAssigV &operator=(const VarAssigV &);
  VarAssigV(TYPE *p1, Ident p2, Integer p3, VALUE *p4);
  ~VarAssigV();
  virtual void accept(Visitor *v);
  virtual VarAssigV *clone() const;
  void swap(VarAssigV &);
};

class TYPE_int : public TYPE
{
public:

  TYPE_int(const TYPE_int &);
  TYPE_int &operator=(const TYPE_int &);
  TYPE_int();
  ~TYPE_int();
  virtual void accept(Visitor *v);
  virtual TYPE_int *clone() const;
  void swap(TYPE_int &);
};

class TYPE_double : public TYPE
{
public:

  TYPE_double(const TYPE_double &);
  TYPE_double &operator=(const TYPE_double &);
  TYPE_double();
  ~TYPE_double();
  virtual void accept(Visitor *v);
  virtual TYPE_double *clone() const;
  void swap(TYPE_double &);
};

class TYPE_char : public TYPE
{
public:

  TYPE_char(const TYPE_char &);
  TYPE_char &operator=(const TYPE_char &);
  TYPE_char();
  ~TYPE_char();
  virtual void accept(Visitor *v);
  virtual TYPE_char *clone() const;
  void swap(TYPE_char &);
};

class TYPEPOINTER : public TYPE
{
public:
  POINTER *pointer_;

  TYPEPOINTER(const TYPEPOINTER &);
  TYPEPOINTER &operator=(const TYPEPOINTER &);
  TYPEPOINTER(POINTER *p1);
  ~TYPEPOINTER();
  virtual void accept(Visitor *v);
  virtual TYPEPOINTER *clone() const;
  void swap(TYPEPOINTER &);
};

class PointerInt : public POINTER
{
public:
  ListAST *listast_;

  PointerInt(const PointerInt &);
  PointerInt &operator=(const PointerInt &);
  PointerInt(ListAST *p1);
  ~PointerInt();
  virtual void accept(Visitor *v);
  virtual PointerInt *clone() const;
  void swap(PointerInt &);
};

class PointerDouble : public POINTER
{
public:
  ListAST *listast_;

  PointerDouble(const PointerDouble &);
  PointerDouble &operator=(const PointerDouble &);
  PointerDouble(ListAST *p1);
  ~PointerDouble();
  virtual void accept(Visitor *v);
  virtual PointerDouble *clone() const;
  void swap(PointerDouble &);
};

class PointerChar : public POINTER
{
public:
  ListAST *listast_;

  PointerChar(const PointerChar &);
  PointerChar &operator=(const PointerChar &);
  PointerChar(ListAST *p1);
  ~PointerChar();
  virtual void accept(Visitor *v);
  virtual PointerChar *clone() const;
  void swap(PointerChar &);
};

class Ast : public AST
{
public:

  Ast(const Ast &);
  Ast &operator=(const Ast &);
  Ast();
  ~Ast();
  virtual void accept(Visitor *v);
  virtual Ast *clone() const;
  void swap(Ast &);
};

class CDecl : public CONSTDECL
{
public:
  ListCONST *listconst_;

  CDecl(const CDecl &);
  CDecl &operator=(const CDecl &);
  CDecl(ListCONST *p1);
  ~CDecl();
  virtual void accept(Visitor *v);
  virtual CDecl *clone() const;
  void swap(CDecl &);
};

class CDeclVoid : public CONSTDECL
{
public:

  CDeclVoid(const CDeclVoid &);
  CDeclVoid &operator=(const CDeclVoid &);
  CDeclVoid();
  ~CDeclVoid();
  virtual void accept(Visitor *v);
  virtual CDeclVoid *clone() const;
  void swap(CDeclVoid &);
};

class Const : public CONST
{
public:
  TYPE *type_;
  Ident ident_;
  VALUE *value_;

  Const(const Const &);
  Const &operator=(const Const &);
  Const(TYPE *p1, Ident p2, VALUE *p3);
  ~Const();
  virtual void accept(Visitor *v);
  virtual Const *clone() const;
  void swap(Const &);
};

class VALUEInteger : public VALUE
{
public:
  Integer integer_;

  VALUEInteger(const VALUEInteger &);
  VALUEInteger &operator=(const VALUEInteger &);
  VALUEInteger(Integer p1);
  ~VALUEInteger();
  virtual void accept(Visitor *v);
  virtual VALUEInteger *clone() const;
  void swap(VALUEInteger &);
};

class VALUEDouble : public VALUE
{
public:
  Double double_;

  VALUEDouble(const VALUEDouble &);
  VALUEDouble &operator=(const VALUEDouble &);
  VALUEDouble(Double p1);
  ~VALUEDouble();
  virtual void accept(Visitor *v);
  virtual VALUEDouble *clone() const;
  void swap(VALUEDouble &);
};

class VALUEEXP : public VALUE
{
public:
  EXP *exp_;

  VALUEEXP(const VALUEEXP &);
  VALUEEXP &operator=(const VALUEEXP &);
  VALUEEXP(EXP *p1);
  ~VALUEEXP();
  virtual void accept(Visitor *v);
  virtual VALUEEXP *clone() const;
  void swap(VALUEEXP &);
};

class FDecl : public FUNCDECL
{
public:
  ListFUNCTION *listfunction_;

  FDecl(const FDecl &);
  FDecl &operator=(const FDecl &);
  FDecl(ListFUNCTION *p1);
  ~FDecl();
  virtual void accept(Visitor *v);
  virtual FDecl *clone() const;
  void swap(FDecl &);
};

class FDeclVoid : public FUNCDECL
{
public:

  FDeclVoid(const FDeclVoid &);
  FDeclVoid &operator=(const FDeclVoid &);
  FDeclVoid();
  ~FDeclVoid();
  virtual void accept(Visitor *v);
  virtual FDeclVoid *clone() const;
  void swap(FDeclVoid &);
};

class Function : public FUNCTION
{
public:
  RETURN *return_;
  Ident ident_;

  Function(const Function &);
  Function &operator=(const Function &);
  Function(RETURN *p1, Ident p2);
  ~Function();
  virtual void accept(Visitor *v);
  virtual Function *clone() const;
  void swap(Function &);
};

class FunctionP : public FUNCTION
{
public:
  RETURN *return_;
  Ident ident_;
  ListPARAM *listparam_;

  FunctionP(const FunctionP &);
  FunctionP &operator=(const FunctionP &);
  FunctionP(RETURN *p1, Ident p2, ListPARAM *p3);
  ~FunctionP();
  virtual void accept(Visitor *v);
  virtual FunctionP *clone() const;
  void swap(FunctionP &);
};

class RETURN_int : public RETURN
{
public:

  RETURN_int(const RETURN_int &);
  RETURN_int &operator=(const RETURN_int &);
  RETURN_int();
  ~RETURN_int();
  virtual void accept(Visitor *v);
  virtual RETURN_int *clone() const;
  void swap(RETURN_int &);
};

class RETURN_double : public RETURN
{
public:

  RETURN_double(const RETURN_double &);
  RETURN_double &operator=(const RETURN_double &);
  RETURN_double();
  ~RETURN_double();
  virtual void accept(Visitor *v);
  virtual RETURN_double *clone() const;
  void swap(RETURN_double &);
};

class RETURN_char : public RETURN
{
public:

  RETURN_char(const RETURN_char &);
  RETURN_char &operator=(const RETURN_char &);
  RETURN_char();
  ~RETURN_char();
  virtual void accept(Visitor *v);
  virtual RETURN_char *clone() const;
  void swap(RETURN_char &);
};

class RETURN_void : public RETURN
{
public:

  RETURN_void(const RETURN_void &);
  RETURN_void &operator=(const RETURN_void &);
  RETURN_void();
  ~RETURN_void();
  virtual void accept(Visitor *v);
  virtual RETURN_void *clone() const;
  void swap(RETURN_void &);
};

class Param : public PARAM
{
public:
  TYPE *type_;
  Ident ident_;

  Param(const Param &);
  Param &operator=(const Param &);
  Param(TYPE *p1, Ident p2);
  ~Param();
  virtual void accept(Visitor *v);
  virtual Param *clone() const;
  void swap(Param &);
};

class BlockProg : public BLOCKPROG
{
public:
  ListCMD *listcmd_;

  BlockProg(const BlockProg &);
  BlockProg &operator=(const BlockProg &);
  BlockProg(ListCMD *p1);
  ~BlockProg();
  virtual void accept(Visitor *v);
  virtual BlockProg *clone() const;
  void swap(BlockProg &);
};

class CMDIF : public CMD
{
public:
  IF *if_;

  CMDIF(const CMDIF &);
  CMDIF &operator=(const CMDIF &);
  CMDIF(IF *p1);
  ~CMDIF();
  virtual void accept(Visitor *v);
  virtual CMDIF *clone() const;
  void swap(CMDIF &);
};

class CMDIFELSE : public CMD
{
public:
  IFELSE *ifelse_;

  CMDIFELSE(const CMDIFELSE &);
  CMDIFELSE &operator=(const CMDIFELSE &);
  CMDIFELSE(IFELSE *p1);
  ~CMDIFELSE();
  virtual void accept(Visitor *v);
  virtual CMDIFELSE *clone() const;
  void swap(CMDIFELSE &);
};

class CMDWHILE : public CMD
{
public:
  WHILE *while_;

  CMDWHILE(const CMDWHILE &);
  CMDWHILE &operator=(const CMDWHILE &);
  CMDWHILE(WHILE *p1);
  ~CMDWHILE();
  virtual void accept(Visitor *v);
  virtual CMDWHILE *clone() const;
  void swap(CMDWHILE &);
};

class CMDFOR : public CMD
{
public:
  FOR *for_;

  CMDFOR(const CMDFOR &);
  CMDFOR &operator=(const CMDFOR &);
  CMDFOR(FOR *p1);
  ~CMDFOR();
  virtual void accept(Visitor *v);
  virtual CMDFOR *clone() const;
  void swap(CMDFOR &);
};

class CMDGOTO : public CMD
{
public:
  GOTO *goto_;

  CMDGOTO(const CMDGOTO &);
  CMDGOTO &operator=(const CMDGOTO &);
  CMDGOTO(GOTO *p1);
  ~CMDGOTO();
  virtual void accept(Visitor *v);
  virtual CMDGOTO *clone() const;
  void swap(CMDGOTO &);
};

class CMDASSIGMENT : public CMD
{
public:
  ASSIGMENT *assigment_;

  CMDASSIGMENT(const CMDASSIGMENT &);
  CMDASSIGMENT &operator=(const CMDASSIGMENT &);
  CMDASSIGMENT(ASSIGMENT *p1);
  ~CMDASSIGMENT();
  virtual void accept(Visitor *v);
  virtual CMDASSIGMENT *clone() const;
  void swap(CMDASSIGMENT &);
};

class If : public IF
{
public:
  COND *cond_;
  ListCMD *listcmd_;

  If(const If &);
  If &operator=(const If &);
  If(COND *p1, ListCMD *p2);
  ~If();
  virtual void accept(Visitor *v);
  virtual If *clone() const;
  void swap(If &);
};

class IfElse : public IFELSE
{
public:
  IF *if_;
  ListCMD *listcmd_;

  IfElse(const IfElse &);
  IfElse &operator=(const IfElse &);
  IfElse(IF *p1, ListCMD *p2);
  ~IfElse();
  virtual void accept(Visitor *v);
  virtual IfElse *clone() const;
  void swap(IfElse &);
};

class While : public WHILE
{
public:
  COND *cond_;
  ListCMD *listcmd_;

  While(const While &);
  While &operator=(const While &);
  While(COND *p1, ListCMD *p2);
  ~While();
  virtual void accept(Visitor *v);
  virtual While *clone() const;
  void swap(While &);
};

class For : public FOR
{
public:
  ASSIGMENT *assigment_;
  COND *cond_;
  INCREMENT *increment_;
  ListCMD *listcmd_;

  For(const For &);
  For &operator=(const For &);
  For(ASSIGMENT *p1, COND *p2, INCREMENT *p3, ListCMD *p4);
  ~For();
  virtual void accept(Visitor *v);
  virtual For *clone() const;
  void swap(For &);
};

class Goto : public GOTO
{
public:
  Ident ident_;

  Goto(const Goto &);
  Goto &operator=(const Goto &);
  Goto(Ident p1);
  ~Goto();
  virtual void accept(Visitor *v);
  virtual Goto *clone() const;
  void swap(Goto &);
};

class Assigment : public ASSIGMENT
{
public:
  Ident ident_;
  VALUE *value_;

  Assigment(const Assigment &);
  Assigment &operator=(const Assigment &);
  Assigment(Ident p1, VALUE *p2);
  ~Assigment();
  virtual void accept(Visitor *v);
  virtual Assigment *clone() const;
  void swap(Assigment &);
};

class AssigmentV : public ASSIGMENT
{
public:
  Ident ident_;
  Integer integer_;
  VALUE *value_;

  AssigmentV(const AssigmentV &);
  AssigmentV &operator=(const AssigmentV &);
  AssigmentV(Ident p1, Integer p2, VALUE *p3);
  ~AssigmentV();
  virtual void accept(Visitor *v);
  virtual AssigmentV *clone() const;
  void swap(AssigmentV &);
};

class Increment : public INCREMENT
{
public:
  Ident ident_;
  VALUE *value_;

  Increment(const Increment &);
  Increment &operator=(const Increment &);
  Increment(Ident p1, VALUE *p2);
  ~Increment();
  virtual void accept(Visitor *v);
  virtual Increment *clone() const;
  void swap(Increment &);
};

class IncrementV : public INCREMENT
{
public:

  IncrementV(const IncrementV &);
  IncrementV &operator=(const IncrementV &);
  IncrementV();
  ~IncrementV();
  virtual void accept(Visitor *v);
  virtual IncrementV *clone() const;
  void swap(IncrementV &);
};

class Cond : public COND
{
public:
  LOGICEXP *logicexp_;
  ListLOGICEXP *listlogicexp_;

  Cond(const Cond &);
  Cond &operator=(const Cond &);
  Cond(LOGICEXP *p1, ListLOGICEXP *p2);
  ~Cond();
  virtual void accept(Visitor *v);
  virtual Cond *clone() const;
  void swap(Cond &);
};

class LOGICOP1 : public LOGICOP
{
public:

  LOGICOP1(const LOGICOP1 &);
  LOGICOP1 &operator=(const LOGICOP1 &);
  LOGICOP1();
  ~LOGICOP1();
  virtual void accept(Visitor *v);
  virtual LOGICOP1 *clone() const;
  void swap(LOGICOP1 &);
};

class LOGICOP2 : public LOGICOP
{
public:

  LOGICOP2(const LOGICOP2 &);
  LOGICOP2 &operator=(const LOGICOP2 &);
  LOGICOP2();
  ~LOGICOP2();
  virtual void accept(Visitor *v);
  virtual LOGICOP2 *clone() const;
  void swap(LOGICOP2 &);
};

class LOGICOP3 : public LOGICOP
{
public:

  LOGICOP3(const LOGICOP3 &);
  LOGICOP3 &operator=(const LOGICOP3 &);
  LOGICOP3();
  ~LOGICOP3();
  virtual void accept(Visitor *v);
  virtual LOGICOP3 *clone() const;
  void swap(LOGICOP3 &);
};

class LOGICOP4 : public LOGICOP
{
public:

  LOGICOP4(const LOGICOP4 &);
  LOGICOP4 &operator=(const LOGICOP4 &);
  LOGICOP4();
  ~LOGICOP4();
  virtual void accept(Visitor *v);
  virtual LOGICOP4 *clone() const;
  void swap(LOGICOP4 &);
};

class LOGICOP5 : public LOGICOP
{
public:

  LOGICOP5(const LOGICOP5 &);
  LOGICOP5 &operator=(const LOGICOP5 &);
  LOGICOP5();
  ~LOGICOP5();
  virtual void accept(Visitor *v);
  virtual LOGICOP5 *clone() const;
  void swap(LOGICOP5 &);
};

class LOGICOP6 : public LOGICOP
{
public:

  LOGICOP6(const LOGICOP6 &);
  LOGICOP6 &operator=(const LOGICOP6 &);
  LOGICOP6();
  ~LOGICOP6();
  virtual void accept(Visitor *v);
  virtual LOGICOP6 *clone() const;
  void swap(LOGICOP6 &);
};

class LOGICOP7 : public LOGICOP
{
public:

  LOGICOP7(const LOGICOP7 &);
  LOGICOP7 &operator=(const LOGICOP7 &);
  LOGICOP7();
  ~LOGICOP7();
  virtual void accept(Visitor *v);
  virtual LOGICOP7 *clone() const;
  void swap(LOGICOP7 &);
};

class LOGICOP8 : public LOGICOP
{
public:

  LOGICOP8(const LOGICOP8 &);
  LOGICOP8 &operator=(const LOGICOP8 &);
  LOGICOP8();
  ~LOGICOP8();
  virtual void accept(Visitor *v);
  virtual LOGICOP8 *clone() const;
  void swap(LOGICOP8 &);
};

class LogicExp : public LOGICEXP
{
public:
  VALUE *value_1;
  LOGICOP *logicop_;
  VALUE *value_2;

  LogicExp(const LogicExp &);
  LogicExp &operator=(const LogicExp &);
  LogicExp(VALUE *p1, LOGICOP *p2, VALUE *p3);
  ~LogicExp();
  virtual void accept(Visitor *v);
  virtual LogicExp *clone() const;
  void swap(LogicExp &);
};

class Exp : public EXP
{
public:
  ARITEXP *aritexp_;
  ListARITEXP *listaritexp_;

  Exp(const Exp &);
  Exp &operator=(const Exp &);
  Exp(ARITEXP *p1, ListARITEXP *p2);
  ~Exp();
  virtual void accept(Visitor *v);
  virtual Exp *clone() const;
  void swap(Exp &);
};

class ARITOP1 : public ARITOP
{
public:

  ARITOP1(const ARITOP1 &);
  ARITOP1 &operator=(const ARITOP1 &);
  ARITOP1();
  ~ARITOP1();
  virtual void accept(Visitor *v);
  virtual ARITOP1 *clone() const;
  void swap(ARITOP1 &);
};

class ARITOP2 : public ARITOP
{
public:

  ARITOP2(const ARITOP2 &);
  ARITOP2 &operator=(const ARITOP2 &);
  ARITOP2();
  ~ARITOP2();
  virtual void accept(Visitor *v);
  virtual ARITOP2 *clone() const;
  void swap(ARITOP2 &);
};

class ARITOP3 : public ARITOP
{
public:

  ARITOP3(const ARITOP3 &);
  ARITOP3 &operator=(const ARITOP3 &);
  ARITOP3();
  ~ARITOP3();
  virtual void accept(Visitor *v);
  virtual ARITOP3 *clone() const;
  void swap(ARITOP3 &);
};

class ARITOP4 : public ARITOP
{
public:

  ARITOP4(const ARITOP4 &);
  ARITOP4 &operator=(const ARITOP4 &);
  ARITOP4();
  ~ARITOP4();
  virtual void accept(Visitor *v);
  virtual ARITOP4 *clone() const;
  void swap(ARITOP4 &);
};

class AritExp : public ARITEXP
{
public:
  VALUE *value_1;
  ARITOP *aritop_;
  VALUE *value_2;

  AritExp(const AritExp &);
  AritExp &operator=(const AritExp &);
  AritExp(VALUE *p1, ARITOP *p2, VALUE *p3);
  ~AritExp();
  virtual void accept(Visitor *v);
  virtual AritExp *clone() const;
  void swap(AritExp &);
};



class ListVAR : public Visitable, public std::vector<VAR*>
{
public:
  virtual void accept(Visitor *v);
  virtual ListVAR *clone() const;
};

ListVAR* consListVAR(VAR* x, ListVAR* xs);

class ListAST : public Visitable, public std::vector<AST*>
{
public:
  virtual void accept(Visitor *v);
  virtual ListAST *clone() const;
};

ListAST* consListAST(AST* x, ListAST* xs);

class ListCONST : public Visitable, public std::vector<CONST*>
{
public:
  virtual void accept(Visitor *v);
  virtual ListCONST *clone() const;
};

ListCONST* consListCONST(CONST* x, ListCONST* xs);

class ListFUNCTION : public Visitable, public std::vector<FUNCTION*>
{
public:
  virtual void accept(Visitor *v);
  virtual ListFUNCTION *clone() const;
};

ListFUNCTION* consListFUNCTION(FUNCTION* x, ListFUNCTION* xs);

class ListPARAM : public Visitable, public std::vector<PARAM*>
{
public:
  virtual void accept(Visitor *v);
  virtual ListPARAM *clone() const;
};

ListPARAM* consListPARAM(PARAM* x, ListPARAM* xs);

class ListCMD : public Visitable, public std::vector<CMD*>
{
public:
  virtual void accept(Visitor *v);
  virtual ListCMD *clone() const;
};

ListCMD* consListCMD(CMD* x, ListCMD* xs);

class ListLOGICEXP : public Visitable, public std::vector<LOGICEXP*>
{
public:
  virtual void accept(Visitor *v);
  virtual ListLOGICEXP *clone() const;
};

ListLOGICEXP* consListLOGICEXP(LOGICEXP* x, ListLOGICEXP* xs);

class ListARITEXP : public Visitable, public std::vector<ARITEXP*>
{
public:
  virtual void accept(Visitor *v);
  virtual ListARITEXP *clone() const;
};

ListARITEXP* consListARITEXP(ARITEXP* x, ListARITEXP* xs);





#endif
