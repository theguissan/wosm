/* File generated by the BNF Converter (bnfc 2.9.4). */

/*** Visitor Design Pattern Skeleton. ***/
/* This implements the common visitor design pattern.
   Note that this method uses Visitor-traversal of lists, so
   List->accept() does NOT traverse the list. This allows different
   algorithms to use context information differently. */

#include "Skeleton.H"
#include "PalavrasReservadas.h"
#include <iostream>


void Skeleton::visitPROGRAM(PROGRAM *t) {} //abstract class
void Skeleton::visitVARDECL(VARDECL *t) {} //abstract class
void Skeleton::visitVAR(VAR *t) {} //abstract class
void Skeleton::visitTYPE(TYPE *t) {} //abstract class
void Skeleton::visitPOINTER(POINTER *t) {} //abstract class
void Skeleton::visitAST(AST *t) {} //abstract class
void Skeleton::visitCONSTDECL(CONSTDECL *t) {} //abstract class
void Skeleton::visitCONST(CONST *t) {} //abstract class
void Skeleton::visitVALUE(VALUE *t) {} //abstract class
void Skeleton::visitFUNCDECL(FUNCDECL *t) {} //abstract class
void Skeleton::visitFUNCTION(FUNCTION *t) {} //abstract class
void Skeleton::visitRETURN(RETURN *t) {} //abstract class
void Skeleton::visitPARAM(PARAM *t) {} //abstract class
void Skeleton::visitBLOCKPROG(BLOCKPROG *t) {} //abstract class
void Skeleton::visitCMD(CMD *t) {} //abstract class
void Skeleton::visitIF(IF *t) {} //abstract class
void Skeleton::visitIFELSE(IFELSE *t) {} //abstract class
void Skeleton::visitWHILE(WHILE *t) {} //abstract class
void Skeleton::visitFOR(FOR *t) {} //abstract class
void Skeleton::visitGOTO(GOTO *t) {} //abstract class
void Skeleton::visitASSIGMENT(ASSIGMENT *t) {} //abstract class
void Skeleton::visitINCREMENT(INCREMENT *t) {} //abstract class
void Skeleton::visitCOND(COND *t) {} //abstract class
void Skeleton::visitLOGICOP(LOGICOP *t) {} //abstract class
void Skeleton::visitLOGICEXP(LOGICEXP *t) {} //abstract class
void Skeleton::visitEXP(EXP *t) {} //abstract class
void Skeleton::visitARITOP(ARITOP *t) {} //abstract class
void Skeleton::visitARITEXP(ARITEXP *t) {} //abstract class

void Skeleton::visitProgram(Program *program)
{
  /* Code For Program Goes Here */

  visitIdent(program->ident_);
  if (program->vardecl_) program->vardecl_->accept(this);
  if (program->constdecl_) program->constdecl_->accept(this);
  if (program->funcdecl_) program->funcdecl_->accept(this);
  if (program->blockprog_) program->blockprog_->accept(this);

}

void Skeleton::visitVDecl(VDecl *v_decl)
{
  /* Code For VDecl Goes Here */

  if (v_decl->listvar_) v_decl->listvar_->accept(this);

}

void Skeleton::visitVDeclVoid(VDeclVoid *v_decl_void)
{
  /* Code For VDeclVoid Goes Here */


}

void Skeleton::visitVar(Var *var)
{
  /* Code For Var Goes Here */

  if (var->type_) var->type_->accept(this);

  verificar(var->ident_);


  visitIdent(var->ident_);

}

void verificar(std::string termo ) {
  for(int i = 0; i < 15; i++) {
    if(termo == palavras[i] ) {
      std::cout << "Identificador inválido, não use palavras reservadas" <<std::endl;
    }
  }

}


void Skeleton::visitVarAssig(VarAssig *var_assig)
{
  /* Code For VarAssig Goes Here */

  if (var_assig->type_) var_assig->type_->accept(this);
  visitIdent(var_assig->ident_);
  if (var_assig->value_) var_assig->value_->accept(this);

}

void Skeleton::visitVarV(VarV *var_v)
{
  /* Code For VarV Goes Here */

  if (var_v->type_) var_v->type_->accept(this);
  visitIdent(var_v->ident_);
  visitInteger(var_v->integer_);

}

void Skeleton::visitVarAssigV(VarAssigV *var_assig_v)
{
  /* Code For VarAssigV Goes Here */

  if (var_assig_v->type_) var_assig_v->type_->accept(this);
  visitIdent(var_assig_v->ident_);
  visitInteger(var_assig_v->integer_);
  if (var_assig_v->value_) var_assig_v->value_->accept(this);

}

void Skeleton::visitTYPE_int(TYPE_int *type_int)
{
  /* Code For TYPE_int Goes Here */


}

void Skeleton::visitTYPE_double(TYPE_double *type_double)
{
  /* Code For TYPE_double Goes Here */


}

void Skeleton::visitTYPE_char(TYPE_char *type_char)
{
  /* Code For TYPE_char Goes Here */


}

void Skeleton::visitTYPEPOINTER(TYPEPOINTER *typepointer)
{
  /* Code For TYPEPOINTER Goes Here */

  if (typepointer->pointer_) typepointer->pointer_->accept(this);

}

void Skeleton::visitPointerInt(PointerInt *pointer_int)
{
  /* Code For PointerInt Goes Here */

  if (pointer_int->listast_) pointer_int->listast_->accept(this);

}

void Skeleton::visitPointerDouble(PointerDouble *pointer_double)
{
  /* Code For PointerDouble Goes Here */

  if (pointer_double->listast_) pointer_double->listast_->accept(this);

}

void Skeleton::visitPointerChar(PointerChar *pointer_char)
{
  /* Code For PointerChar Goes Here */

  if (pointer_char->listast_) pointer_char->listast_->accept(this);

}

void Skeleton::visitAst(Ast *ast)
{
  /* Code For Ast Goes Here */


}

void Skeleton::visitCDecl(CDecl *c_decl)
{
  /* Code For CDecl Goes Here */

  if (c_decl->listconst_) c_decl->listconst_->accept(this);

}

void Skeleton::visitCDeclVoid(CDeclVoid *c_decl_void)
{
  /* Code For CDeclVoid Goes Here */


}

void Skeleton::visitConst(Const *const_)
{
  /* Code For Const Goes Here */

  if (const_->type_) const_->type_->accept(this);
  visitIdent(const_->ident_);
  if (const_->value_) const_->value_->accept(this);

}

void Skeleton::visitVALUEInteger(VALUEInteger *value_integer)
{
  /* Code For VALUEInteger Goes Here */

  visitInteger(value_integer->integer_);

}

void Skeleton::visitVALUEDouble(VALUEDouble *value_double)
{
  /* Code For VALUEDouble Goes Here */

  visitDouble(value_double->double_);

}

void Skeleton::visitVALUEEXP(VALUEEXP *valueexp)
{
  /* Code For VALUEEXP Goes Here */

  if (valueexp->exp_) valueexp->exp_->accept(this);

}

void Skeleton::visitFDecl(FDecl *f_decl)
{
  /* Code For FDecl Goes Here */

  if (f_decl->listfunction_) f_decl->listfunction_->accept(this);

}

void Skeleton::visitFDeclVoid(FDeclVoid *f_decl_void)
{
  /* Code For FDeclVoid Goes Here */


}

void Skeleton::visitFunction(Function *function)
{
  /* Code For Function Goes Here */

  if (function->return_) function->return_->accept(this);
  visitIdent(function->ident_);

}

void Skeleton::visitFunctionP(FunctionP *function_p)
{
  /* Code For FunctionP Goes Here */

  if (function_p->return_) function_p->return_->accept(this);
  visitIdent(function_p->ident_);
  if (function_p->listparam_) function_p->listparam_->accept(this);

}

void Skeleton::visitRETURN_int(RETURN_int *return_int)
{
  /* Code For RETURN_int Goes Here */


}

void Skeleton::visitRETURN_double(RETURN_double *return_double)
{
  /* Code For RETURN_double Goes Here */


}

void Skeleton::visitRETURN_char(RETURN_char *return_char)
{
  /* Code For RETURN_char Goes Here */


}

void Skeleton::visitRETURN_void(RETURN_void *return_void)
{
  /* Code For RETURN_void Goes Here */


}

void Skeleton::visitParam(Param *param)
{
  /* Code For Param Goes Here */

  if (param->type_) param->type_->accept(this);
  visitIdent(param->ident_);

}

void Skeleton::visitBlockProg(BlockProg *block_prog)
{
  /* Code For BlockProg Goes Here */

  if (block_prog->listcmd_) block_prog->listcmd_->accept(this);

}

void Skeleton::visitCMDIF(CMDIF *cmdif)
{
  /* Code For CMDIF Goes Here */

  if (cmdif->if_) cmdif->if_->accept(this);

}

void Skeleton::visitCMDIFELSE(CMDIFELSE *cmdifelse)
{
  /* Code For CMDIFELSE Goes Here */

  if (cmdifelse->ifelse_) cmdifelse->ifelse_->accept(this);

}

void Skeleton::visitCMDWHILE(CMDWHILE *cmdwhile)
{
  /* Code For CMDWHILE Goes Here */

  if (cmdwhile->while_) cmdwhile->while_->accept(this);

}

void Skeleton::visitCMDFOR(CMDFOR *cmdfor)
{
  /* Code For CMDFOR Goes Here */

  if (cmdfor->for_) cmdfor->for_->accept(this);

}

void Skeleton::visitCMDGOTO(CMDGOTO *cmdgoto)
{
  /* Code For CMDGOTO Goes Here */

  if (cmdgoto->goto_) cmdgoto->goto_->accept(this);

}

void Skeleton::visitCMDASSIGMENT(CMDASSIGMENT *cmdassigment)
{
  /* Code For CMDASSIGMENT Goes Here */

  if (cmdassigment->assigment_) cmdassigment->assigment_->accept(this);

}

void Skeleton::visitIf(If *if_)
{
  /* Code For If Goes Here */

  if (if_->cond_) if_->cond_->accept(this);
  if (if_->listcmd_) if_->listcmd_->accept(this);

}

void Skeleton::visitIfElse(IfElse *if_else)
{
  /* Code For IfElse Goes Here */

  if (if_else->if_) if_else->if_->accept(this);
  if (if_else->listcmd_) if_else->listcmd_->accept(this);

}

void Skeleton::visitWhile(While *while_)
{
  /* Code For While Goes Here */

  if (while_->cond_) while_->cond_->accept(this);
  if (while_->listcmd_) while_->listcmd_->accept(this);

}

void Skeleton::visitFor(For *for_)
{
  /* Code For For Goes Here */

  if (for_->assigment_) for_->assigment_->accept(this);
  if (for_->cond_) for_->cond_->accept(this);
  if (for_->increment_) for_->increment_->accept(this);
  if (for_->listcmd_) for_->listcmd_->accept(this);

}

void Skeleton::visitGoto(Goto *goto_)
{
  /* Code For Goto Goes Here */

  visitIdent(goto_->ident_);

}

void Skeleton::visitAssigment(Assigment *assigment)
{
  /* Code For Assigment Goes Here */

  visitIdent(assigment->ident_);
  if (assigment->value_) assigment->value_->accept(this);

}

void Skeleton::visitAssigmentV(AssigmentV *assigment_v)
{
  /* Code For AssigmentV Goes Here */

  visitIdent(assigment_v->ident_);
  visitInteger(assigment_v->integer_);
  if (assigment_v->value_) assigment_v->value_->accept(this);

}

void Skeleton::visitIncrement(Increment *increment)
{
  /* Code For Increment Goes Here */

  visitIdent(increment->ident_);
  if (increment->value_) increment->value_->accept(this);

}

void Skeleton::visitIncrementV(IncrementV *increment_v)
{
  /* Code For IncrementV Goes Here */


}

void Skeleton::visitCond(Cond *cond)
{
  /* Code For Cond Goes Here */

  if (cond->logicexp_) cond->logicexp_->accept(this);
  if (cond->listlogicexp_) cond->listlogicexp_->accept(this);

}

void Skeleton::visitLOGICOP1(LOGICOP1 *logicop)
{
  /* Code For LOGICOP1 Goes Here */


}

void Skeleton::visitLOGICOP2(LOGICOP2 *logicop)
{
  /* Code For LOGICOP2 Goes Here */


}

void Skeleton::visitLOGICOP3(LOGICOP3 *logicop)
{
  /* Code For LOGICOP3 Goes Here */


}

void Skeleton::visitLOGICOP4(LOGICOP4 *logicop)
{
  /* Code For LOGICOP4 Goes Here */


}

void Skeleton::visitLOGICOP5(LOGICOP5 *logicop)
{
  /* Code For LOGICOP5 Goes Here */


}

void Skeleton::visitLOGICOP6(LOGICOP6 *logicop)
{
  /* Code For LOGICOP6 Goes Here */


}

void Skeleton::visitLOGICOP7(LOGICOP7 *logicop)
{
  /* Code For LOGICOP7 Goes Here */


}

void Skeleton::visitLOGICOP8(LOGICOP8 *logicop)
{
  /* Code For LOGICOP8 Goes Here */


}

void Skeleton::visitLogicExp(LogicExp *logic_exp)
{
  /* Code For LogicExp Goes Here */

  if (logic_exp->value_1) logic_exp->value_1->accept(this);
  if (logic_exp->logicop_) logic_exp->logicop_->accept(this);
  if (logic_exp->value_2) logic_exp->value_2->accept(this);

}

void Skeleton::visitExp(Exp *exp)
{
  /* Code For Exp Goes Here */

  if (exp->aritexp_) exp->aritexp_->accept(this);
  if (exp->listaritexp_) exp->listaritexp_->accept(this);

}

void Skeleton::visitARITOP1(ARITOP1 *aritop)
{
  /* Code For ARITOP1 Goes Here */


}

void Skeleton::visitARITOP2(ARITOP2 *aritop)
{
  /* Code For ARITOP2 Goes Here */


}

void Skeleton::visitARITOP3(ARITOP3 *aritop)
{
  /* Code For ARITOP3 Goes Here */


}

void Skeleton::visitARITOP4(ARITOP4 *aritop)
{
  /* Code For ARITOP4 Goes Here */


}

void Skeleton::visitAritExp(AritExp *arit_exp)
{
  /* Code For AritExp Goes Here */

  if (arit_exp->value_1) arit_exp->value_1->accept(this);
  if (arit_exp->aritop_) arit_exp->aritop_->accept(this);
  if (arit_exp->value_2) arit_exp->value_2->accept(this);

}


void Skeleton::visitListVAR(ListVAR *list_var)
{
  for (ListVAR::iterator i = list_var->begin() ; i != list_var->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListAST(ListAST *list_ast)
{
  for (ListAST::iterator i = list_ast->begin() ; i != list_ast->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListCONST(ListCONST *list_const)
{
  for (ListCONST::iterator i = list_const->begin() ; i != list_const->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListFUNCTION(ListFUNCTION *list_function)
{
  for (ListFUNCTION::iterator i = list_function->begin() ; i != list_function->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListPARAM(ListPARAM *list_param)
{
  for (ListPARAM::iterator i = list_param->begin() ; i != list_param->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListCMD(ListCMD *list_cmd)
{
  for (ListCMD::iterator i = list_cmd->begin() ; i != list_cmd->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListLOGICEXP(ListLOGICEXP *list_logicexp)
{
  for (ListLOGICEXP::iterator i = list_logicexp->begin() ; i != list_logicexp->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListARITEXP(ListARITEXP *list_aritexp)
{
  for (ListARITEXP::iterator i = list_aritexp->begin() ; i != list_aritexp->end() ; ++i)
  {
    (*i)->accept(this);
  }
}


void Skeleton::visitInteger(Integer x)
{
  /* Code for Integer Goes Here */
}

void Skeleton::visitChar(Char x)
{
  /* Code for Char Goes Here */
}

void Skeleton::visitDouble(Double x)
{
  /* Code for Double Goes Here */
}

void Skeleton::visitString(String x)
{
  /* Code for String Goes Here */
}

void Skeleton::visitIdent(Ident x)
{
  /* Code for Ident Goes Here */
}



