#include "pch.hpp"
extern YYVAR g_VAR_image_yscale;
extern YYVAR g_Script_gml_Object_objJumpRefresher_Step_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objJumpRefresher_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objJumpRefresher_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objJumpRefresher_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue sbuiltin_image_yscale;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


sbuiltin_image_yscale=/* First usage */(global_grav);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_yscale );
;
}
#endif
