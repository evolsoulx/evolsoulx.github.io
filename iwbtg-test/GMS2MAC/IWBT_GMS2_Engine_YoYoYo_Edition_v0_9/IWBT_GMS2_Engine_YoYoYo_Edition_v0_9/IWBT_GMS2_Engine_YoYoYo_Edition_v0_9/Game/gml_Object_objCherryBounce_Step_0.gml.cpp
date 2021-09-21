#include "pch.hpp"
extern YYVAR g_Script_gml_Object_objCherryBounce_Step_0;
extern YYVAR g_FUNC_move_bounce_solid;
#ifndef __YYNODEFS
DValue gs_constArg0_E78BE623 = { 0, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_E78BE623;
#endif // __YYNODEFS

void gml_Object_objCherryBounce_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objCherryBounce_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objCherryBounce_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_E78BE623;
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_move_bounce_solid.val,&__pArgs__[0]);
;
}
#endif
