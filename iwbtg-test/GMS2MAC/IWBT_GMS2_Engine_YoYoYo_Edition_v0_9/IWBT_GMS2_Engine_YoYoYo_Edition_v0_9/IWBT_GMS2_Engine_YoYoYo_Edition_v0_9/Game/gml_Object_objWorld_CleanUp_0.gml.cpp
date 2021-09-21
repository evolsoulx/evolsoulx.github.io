#include "pch.hpp"
extern YYVAR g_Script_gml_Object_objWorld_CleanUp_0;
extern YYVAR g_FUNC_sprite_delete;
extern YYVAR g_FUNC_application_surface_draw_enable;
#ifndef __YYNODEFS
DValue gs_constArg0_5F7BFF4F = { 1, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_5F7BFF4F;
#endif // __YYNODEFS

void gml_Object_objWorld_CleanUp_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objWorld_CleanUp_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objWorld_CleanUp_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue & global_gamePaused = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gamePaused);
YYRValue & global_pauseSpr = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_pauseSpr);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;


if(BOOL_RValue( /* First usage */(global_gamePaused) )) {

YY_STACKTRACE_LINE(4);

YY_STACKTRACE_LINE(6);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_pauseSpr);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_sprite_delete.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_5F7BFF4F;
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_application_surface_draw_enable.val,&__pArgs__[0]);
;
;
}
;
}
#endif
