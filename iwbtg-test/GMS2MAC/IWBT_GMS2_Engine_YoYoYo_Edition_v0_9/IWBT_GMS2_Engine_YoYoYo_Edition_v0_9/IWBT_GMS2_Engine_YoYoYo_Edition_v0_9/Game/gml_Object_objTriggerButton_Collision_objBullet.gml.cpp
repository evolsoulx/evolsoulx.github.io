#include "pch.hpp"
extern YYVAR g_VAR_image_index;
extern YYVAR g_Script_gml_Object_objTriggerButton_Collision_objBullet;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objTriggerButton_Collision_objBullet( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objTriggerButton_Collision_objBullet( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objTriggerButton_Collision_objBullet", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_image_index;
YYRValue & global_trigger = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_trigger);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_index );
if((/* First usage */sbuiltin_image_index == 0)) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
sbuiltin_image_index=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_index );
;


YY_STACKTRACE_LINE(5);
YYGML_array_set_owner((long)231088);
;

YYRValue* sself_trg = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_trg); /* set ContextID to sself_trg */
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_trigger))((int)(/* First usage */(*sself_trg)))=1;
PopContextStack(2)
;
;
;
;
}
;
}
#endif
