#include "pch.hpp"
YYRValue& gml_Script_scrButtonCheckPressed( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_objSign_Step_0;
extern YYVAR g_FUNC_place_meeting;
#ifndef __YYNODEFS
DValue gs_constArg0_983E71E9 = { 12, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_983E71E9;
#endif // __YYNODEFS

void gml_Object_objSign_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objSign_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objSign_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue & global_upButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_upButton);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(3);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_983E71E9;
__pArgs__[2] = &__Args__[2];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(3);

FREE_RValue( &__ret2__ );
__Args__[3] = /* First usage */(global_upButton);
__pArgs__[3] = &__Args__[3];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret2__,1,&__pArgs__[3]) )) {

YY_STACKTRACE_LINE(4);

YY_STACKTRACE_LINE(5);
YYRValue* sself_showText = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_showText); /* set ContextID to 1358 */
(*sself_showText)=1;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(7);

YY_STACKTRACE_LINE(8);
YYRValue* sself_showText = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_showText); /* set ContextID to 1359 */
(*sself_showText)=0;
;
;
}
;
}
#endif
