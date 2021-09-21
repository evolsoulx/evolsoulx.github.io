#include "pch.hpp"
extern YYVAR g_Script_gml_Object_objSecretItem_Other_4;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objSecretItem_Other_4( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objSecretItem_Other_4( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objSecretItem_Other_4", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue & global_secretItem = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_secretItem);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YYRValue* sself_itemNum = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_itemNum); /* set ContextID to sself_itemNum */
if(BOOL_RValue( /* First usage */(global_secretItem)[(int)(/* First usage */(*sself_itemNum))] )) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
;
}
;
}
#endif
