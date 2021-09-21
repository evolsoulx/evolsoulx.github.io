#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_objWarpStart_Draw_0;
extern YYVAR g_FUNC_draw_text;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objWarpStart_Draw_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objWarpStart_Draw_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objWarpStart_Draw_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YYGML_draw_self(pSelf);
;

YY_STACKTRACE_LINE(5);
YYGML_draw_set_colour((int)0);
;

YY_STACKTRACE_LINE(6);
YYGML_draw_set_font((int)3);
;

YY_STACKTRACE_LINE(7);
YYGML_draw_set_halign((int)1);
;

YY_STACKTRACE_LINE(8);
YYGML_draw_set_valign((int)0);
;

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
YYRValue* sself_difName = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_difName); /* set ContextID to sself_difName */
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* First usage */sbuiltin_x + 16);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* First usage */sbuiltin_y - 16);
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */(*sself_difName);
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
}
#endif
