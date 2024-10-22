/* File generated by the BNF Converter (bnfc 2.9.4). */

#ifndef PRINTER_HEADER
#define PRINTER_HEADER

#include "Absyn.H"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>


/* Certain applications may improve performance by changing the buffer size */
#define BUFFER_INITIAL 2000
/* You may wish to change _L_PAREN or _R_PAREN */
#define _L_PAREN '('
#define _R_PAREN ')'

class PrintAbsyn : public Visitor
{
 protected:
  int _n_, _i_;
  /* The following are simple heuristics for rendering terminals */
  /* You may wish to change them */
  void render(Char c);
  void render(String s);
  void render(const char *s);
  void indent(void);
  void backup(void);
  void onEmptyLine(void);
  void removeTrailingSpaces(void);
  void removeTrailingWhitespace(void);
 public:
  PrintAbsyn(void);
  ~PrintAbsyn(void);
  char *print(Visitable *v);

  void visitPROGRAM(PROGRAM *p); /* abstract class */
  void visitProgram(Program *p);
  void visitVARDECL(VARDECL *p); /* abstract class */
  void visitVDecl(VDecl *p);
  void visitVDeclVoid(VDeclVoid *p);
  void visitVAR(VAR *p); /* abstract class */
  void visitVar(Var *p);
  void visitVarAssig(VarAssig *p);
  void visitVarV(VarV *p);
  void visitVarAssigV(VarAssigV *p);
  void visitListVAR(ListVAR *p);
  void iterListVAR(ListVAR::const_iterator i, ListVAR::const_iterator j);
  void visitTYPE(TYPE *p); /* abstract class */
  void visitTYPE_int(TYPE_int *p);
  void visitTYPE_double(TYPE_double *p);
  void visitTYPE_char(TYPE_char *p);
  void visitTYPEPOINTER(TYPEPOINTER *p);
  void visitPOINTER(POINTER *p); /* abstract class */
  void visitPointerInt(PointerInt *p);
  void visitPointerDouble(PointerDouble *p);
  void visitPointerChar(PointerChar *p);
  void visitAST(AST *p); /* abstract class */
  void visitAst(Ast *p);
  void visitListAST(ListAST *p);
  void iterListAST(ListAST::const_iterator i, ListAST::const_iterator j);
  void visitCONSTDECL(CONSTDECL *p); /* abstract class */
  void visitCDecl(CDecl *p);
  void visitCDeclVoid(CDeclVoid *p);
  void visitCONST(CONST *p); /* abstract class */
  void visitConst(Const *p);
  void visitListCONST(ListCONST *p);
  void iterListCONST(ListCONST::const_iterator i, ListCONST::const_iterator j);
  void visitVALUE(VALUE *p); /* abstract class */
  void visitVALUEInteger(VALUEInteger *p);
  void visitVALUEDouble(VALUEDouble *p);
  void visitVALUEEXP(VALUEEXP *p);
  void visitFUNCDECL(FUNCDECL *p); /* abstract class */
  void visitFDecl(FDecl *p);
  void visitFDeclVoid(FDeclVoid *p);
  void visitFUNCTION(FUNCTION *p); /* abstract class */
  void visitFunction(Function *p);
  void visitFunctionP(FunctionP *p);
  void visitListFUNCTION(ListFUNCTION *p);
  void iterListFUNCTION(ListFUNCTION::const_iterator i, ListFUNCTION::const_iterator j);
  void visitRETURN(RETURN *p); /* abstract class */
  void visitRETURN_int(RETURN_int *p);
  void visitRETURN_double(RETURN_double *p);
  void visitRETURN_char(RETURN_char *p);
  void visitRETURN_void(RETURN_void *p);
  void visitPARAM(PARAM *p); /* abstract class */
  void visitParam(Param *p);
  void visitListPARAM(ListPARAM *p);
  void iterListPARAM(ListPARAM::const_iterator i, ListPARAM::const_iterator j);
  void visitBLOCKPROG(BLOCKPROG *p); /* abstract class */
  void visitBlockProg(BlockProg *p);
  void visitCMD(CMD *p); /* abstract class */
  void visitCMDIF(CMDIF *p);
  void visitCMDIFELSE(CMDIFELSE *p);
  void visitCMDWHILE(CMDWHILE *p);
  void visitCMDFOR(CMDFOR *p);
  void visitCMDGOTO(CMDGOTO *p);
  void visitCMDASSIGMENT(CMDASSIGMENT *p);
  void visitListCMD(ListCMD *p);
  void iterListCMD(ListCMD::const_iterator i, ListCMD::const_iterator j);
  void visitIF(IF *p); /* abstract class */
  void visitIf(If *p);
  void visitIFELSE(IFELSE *p); /* abstract class */
  void visitIfElse(IfElse *p);
  void visitWHILE(WHILE *p); /* abstract class */
  void visitWhile(While *p);
  void visitFOR(FOR *p); /* abstract class */
  void visitFor(For *p);
  void visitGOTO(GOTO *p); /* abstract class */
  void visitGoto(Goto *p);
  void visitASSIGMENT(ASSIGMENT *p); /* abstract class */
  void visitAssigment(Assigment *p);
  void visitAssigmentV(AssigmentV *p);
  void visitINCREMENT(INCREMENT *p); /* abstract class */
  void visitIncrement(Increment *p);
  void visitIncrementV(IncrementV *p);
  void visitCOND(COND *p); /* abstract class */
  void visitCond(Cond *p);
  void visitLOGICOP(LOGICOP *p); /* abstract class */
  void visitLOGICOP1(LOGICOP1 *p);
  void visitLOGICOP2(LOGICOP2 *p);
  void visitLOGICOP3(LOGICOP3 *p);
  void visitLOGICOP4(LOGICOP4 *p);
  void visitLOGICOP5(LOGICOP5 *p);
  void visitLOGICOP6(LOGICOP6 *p);
  void visitLOGICOP7(LOGICOP7 *p);
  void visitLOGICOP8(LOGICOP8 *p);
  void visitLOGICEXP(LOGICEXP *p); /* abstract class */
  void visitLogicExp(LogicExp *p);
  void visitListLOGICEXP(ListLOGICEXP *p);
  void iterListLOGICEXP(ListLOGICEXP::const_iterator i, ListLOGICEXP::const_iterator j);
  void visitEXP(EXP *p); /* abstract class */
  void visitExp(Exp *p);
  void visitARITOP(ARITOP *p); /* abstract class */
  void visitARITOP1(ARITOP1 *p);
  void visitARITOP2(ARITOP2 *p);
  void visitARITOP3(ARITOP3 *p);
  void visitARITOP4(ARITOP4 *p);
  void visitARITEXP(ARITEXP *p); /* abstract class */
  void visitAritExp(AritExp *p);
  void visitListARITEXP(ListARITEXP *p);
  void iterListARITEXP(ListARITEXP::const_iterator i, ListARITEXP::const_iterator j);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
 protected:
  char *buf_;
  size_t cur_, buf_size;

  void inline bufAppend(const char *s)
  {
    size_t end = cur_ + strlen(s);
    if (end >= buf_size) {
      do buf_size *= 2; /* Double the buffer size */
      while (end >= buf_size);
      resizeBuffer();
    }
    strcpy(&buf_[cur_], s);
    cur_ = end;
  }

  void inline bufAppend(const char c)
  {
    if (cur_ + 1 >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    buf_[++cur_] = 0;
  }

  void inline bufAppend(String str)
  {
    const char *s = str.c_str();
    bufAppend(s);
  }
  void inline bufReset(void)
  {
    if (buf_) delete[] buf_;
    buf_size = BUFFER_INITIAL;
    buf_ = new char[buf_size];
    memset(buf_, 0, buf_size);
    cur_ = 0;
  }

  void inline resizeBuffer(void)
  {
    char *temp = new char[buf_size];
    if (buf_)
    {
      strcpy(temp, buf_);
      delete[] buf_;
    }
    buf_ = temp;
  }
};



class ShowAbsyn : public Visitor
{
 public:
  ShowAbsyn(void);
  ~ShowAbsyn(void);
  char *show(Visitable *v);

  void visitPROGRAM(PROGRAM *p); /* abstract class */
  void visitProgram(Program *p);
  void visitVARDECL(VARDECL *p); /* abstract class */
  void visitVDecl(VDecl *p);
  void visitVDeclVoid(VDeclVoid *p);
  void visitVAR(VAR *p); /* abstract class */
  void visitVar(Var *p);
  void visitVarAssig(VarAssig *p);
  void visitVarV(VarV *p);
  void visitVarAssigV(VarAssigV *p);
  void visitListVAR(ListVAR *p);
  void iterListVAR(ListVAR::const_iterator i, ListVAR::const_iterator j);
  void visitTYPE(TYPE *p); /* abstract class */
  void visitTYPE_int(TYPE_int *p);
  void visitTYPE_double(TYPE_double *p);
  void visitTYPE_char(TYPE_char *p);
  void visitTYPEPOINTER(TYPEPOINTER *p);
  void visitPOINTER(POINTER *p); /* abstract class */
  void visitPointerInt(PointerInt *p);
  void visitPointerDouble(PointerDouble *p);
  void visitPointerChar(PointerChar *p);
  void visitAST(AST *p); /* abstract class */
  void visitAst(Ast *p);
  void visitListAST(ListAST *p);
  void iterListAST(ListAST::const_iterator i, ListAST::const_iterator j);
  void visitCONSTDECL(CONSTDECL *p); /* abstract class */
  void visitCDecl(CDecl *p);
  void visitCDeclVoid(CDeclVoid *p);
  void visitCONST(CONST *p); /* abstract class */
  void visitConst(Const *p);
  void visitListCONST(ListCONST *p);
  void iterListCONST(ListCONST::const_iterator i, ListCONST::const_iterator j);
  void visitVALUE(VALUE *p); /* abstract class */
  void visitVALUEInteger(VALUEInteger *p);
  void visitVALUEDouble(VALUEDouble *p);
  void visitVALUEEXP(VALUEEXP *p);
  void visitFUNCDECL(FUNCDECL *p); /* abstract class */
  void visitFDecl(FDecl *p);
  void visitFDeclVoid(FDeclVoid *p);
  void visitFUNCTION(FUNCTION *p); /* abstract class */
  void visitFunction(Function *p);
  void visitFunctionP(FunctionP *p);
  void visitListFUNCTION(ListFUNCTION *p);
  void iterListFUNCTION(ListFUNCTION::const_iterator i, ListFUNCTION::const_iterator j);
  void visitRETURN(RETURN *p); /* abstract class */
  void visitRETURN_int(RETURN_int *p);
  void visitRETURN_double(RETURN_double *p);
  void visitRETURN_char(RETURN_char *p);
  void visitRETURN_void(RETURN_void *p);
  void visitPARAM(PARAM *p); /* abstract class */
  void visitParam(Param *p);
  void visitListPARAM(ListPARAM *p);
  void iterListPARAM(ListPARAM::const_iterator i, ListPARAM::const_iterator j);
  void visitBLOCKPROG(BLOCKPROG *p); /* abstract class */
  void visitBlockProg(BlockProg *p);
  void visitCMD(CMD *p); /* abstract class */
  void visitCMDIF(CMDIF *p);
  void visitCMDIFELSE(CMDIFELSE *p);
  void visitCMDWHILE(CMDWHILE *p);
  void visitCMDFOR(CMDFOR *p);
  void visitCMDGOTO(CMDGOTO *p);
  void visitCMDASSIGMENT(CMDASSIGMENT *p);
  void visitListCMD(ListCMD *p);
  void iterListCMD(ListCMD::const_iterator i, ListCMD::const_iterator j);
  void visitIF(IF *p); /* abstract class */
  void visitIf(If *p);
  void visitIFELSE(IFELSE *p); /* abstract class */
  void visitIfElse(IfElse *p);
  void visitWHILE(WHILE *p); /* abstract class */
  void visitWhile(While *p);
  void visitFOR(FOR *p); /* abstract class */
  void visitFor(For *p);
  void visitGOTO(GOTO *p); /* abstract class */
  void visitGoto(Goto *p);
  void visitASSIGMENT(ASSIGMENT *p); /* abstract class */
  void visitAssigment(Assigment *p);
  void visitAssigmentV(AssigmentV *p);
  void visitINCREMENT(INCREMENT *p); /* abstract class */
  void visitIncrement(Increment *p);
  void visitIncrementV(IncrementV *p);
  void visitCOND(COND *p); /* abstract class */
  void visitCond(Cond *p);
  void visitLOGICOP(LOGICOP *p); /* abstract class */
  void visitLOGICOP1(LOGICOP1 *p);
  void visitLOGICOP2(LOGICOP2 *p);
  void visitLOGICOP3(LOGICOP3 *p);
  void visitLOGICOP4(LOGICOP4 *p);
  void visitLOGICOP5(LOGICOP5 *p);
  void visitLOGICOP6(LOGICOP6 *p);
  void visitLOGICOP7(LOGICOP7 *p);
  void visitLOGICOP8(LOGICOP8 *p);
  void visitLOGICEXP(LOGICEXP *p); /* abstract class */
  void visitLogicExp(LogicExp *p);
  void visitListLOGICEXP(ListLOGICEXP *p);
  void iterListLOGICEXP(ListLOGICEXP::const_iterator i, ListLOGICEXP::const_iterator j);
  void visitEXP(EXP *p); /* abstract class */
  void visitExp(Exp *p);
  void visitARITOP(ARITOP *p); /* abstract class */
  void visitARITOP1(ARITOP1 *p);
  void visitARITOP2(ARITOP2 *p);
  void visitARITOP3(ARITOP3 *p);
  void visitARITOP4(ARITOP4 *p);
  void visitARITEXP(ARITEXP *p); /* abstract class */
  void visitAritExp(AritExp *p);
  void visitListARITEXP(ListARITEXP *p);
  void iterListARITEXP(ListARITEXP::const_iterator i, ListARITEXP::const_iterator j);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
 protected:
  char *buf_;
  size_t cur_, buf_size;

  void inline bufAppend(const char *s)
  {
    size_t end = cur_ + strlen(s);
    if (end >= buf_size) {
      do buf_size *= 2; /* Double the buffer size */
      while (end >= buf_size);
      resizeBuffer();
    }
    strcpy(&buf_[cur_], s);
    cur_ = end;
  }

  void inline bufAppend(const char c)
  {
    if (cur_ + 1 >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    buf_[++cur_] = 0;
  }

  void inline bufAppend(String str)
  {
    const char *s = str.c_str();
    bufAppend(s);
  }
  void inline bufReset(void)
  {
    if (buf_) delete[] buf_;
    buf_size = BUFFER_INITIAL;
    buf_ = new char[buf_size];
    memset(buf_, 0, buf_size);
    cur_ = 0;
  }

  void inline resizeBuffer(void)
  {
    char *temp = new char[buf_size];
    if (buf_)
    {
      strcpy(temp, buf_);
      delete[] buf_;
    }
    buf_ = temp;
  }
};




#endif

