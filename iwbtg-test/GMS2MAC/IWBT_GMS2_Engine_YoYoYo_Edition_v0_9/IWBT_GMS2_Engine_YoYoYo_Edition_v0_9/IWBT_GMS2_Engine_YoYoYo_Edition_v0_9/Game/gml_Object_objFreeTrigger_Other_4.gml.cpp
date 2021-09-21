#include "pch.hpp"
extern YYVAR g_Script_gml_Object_objFreeTrigger_Other_4;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objFreeTrigger_Other_4( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objFreeTrigger_Other_4( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objFreeTrigger_Other_4", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue & global_trigger = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_trigger);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;



YYGML_array_set_owner((long)231088);
;

YYRValue* sself_trg = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_trg); /* set ContextID to sself_trg */
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_trigger))((int)(/* First usage */(*sself_trg)))=0;
PopContextStack(2)
;
;
;
}
#endif
