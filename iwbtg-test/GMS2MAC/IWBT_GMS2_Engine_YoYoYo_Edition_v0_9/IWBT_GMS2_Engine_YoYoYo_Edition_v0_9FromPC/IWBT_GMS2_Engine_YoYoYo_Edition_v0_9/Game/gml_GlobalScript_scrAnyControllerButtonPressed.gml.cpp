#include "pch.hpp"
extern YYVAR g_Script_gml_Script_scrAnyControllerButtonPressed;
extern YYVAR g_Script_gml_GlobalScript_scrAnyControllerButtonPressed;
extern YYVAR g_FUNC_NewGMLArray;
extern YYVAR g_FUNC_array_length_1d;
extern YYVAR g_FUNC_gamepad_button_check_pressed;
#ifndef __YYNODEFS
DValue gs_constArg0_F36556C7 = { 32769, 0, VALUE_REAL };
DValue gs_constArg1_F36556C7 = { 32770, 0, VALUE_REAL };
DValue gs_constArg2_F36556C7 = { 32771, 0, VALUE_REAL };
DValue gs_constArg3_F36556C7 = { 32772, 0, VALUE_REAL };
DValue gs_constArg4_F36556C7 = { 32781, 0, VALUE_REAL };
DValue gs_constArg5_F36556C7 = { 32782, 0, VALUE_REAL };
DValue gs_constArg6_F36556C7 = { 32783, 0, VALUE_REAL };
DValue gs_constArg7_F36556C7 = { 32784, 0, VALUE_REAL };
DValue gs_constArg8_F36556C7 = { 32780, 0, VALUE_REAL };
DValue gs_constArg9_F36556C7 = { 32779, 0, VALUE_REAL };
DValue gs_constArg10_F36556C7 = { 32777, 0, VALUE_REAL };
DValue gs_constArg11_F36556C7 = { 32778, 0, VALUE_REAL };
DValue gs_constArg12_F36556C7 = { 32774, 0, VALUE_REAL };
DValue gs_constArg13_F36556C7 = { 32776, 0, VALUE_REAL };
DValue gs_constArg14_F36556C7 = { 32773, 0, VALUE_REAL };
DValue gs_constArg15_F36556C7 = { 32775, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_F36556C7;
extern DValue gs_constArg1_F36556C7;
extern DValue gs_constArg2_F36556C7;
extern DValue gs_constArg3_F36556C7;
extern DValue gs_constArg4_F36556C7;
extern DValue gs_constArg5_F36556C7;
extern DValue gs_constArg6_F36556C7;
extern DValue gs_constArg7_F36556C7;
extern DValue gs_constArg8_F36556C7;
extern DValue gs_constArg9_F36556C7;
extern DValue gs_constArg10_F36556C7;
extern DValue gs_constArg11_F36556C7;
extern DValue gs_constArg12_F36556C7;
extern DValue gs_constArg13_F36556C7;
extern DValue gs_constArg14_F36556C7;
extern DValue gs_constArg15_F36556C7;
#endif // __YYNODEFS

YYRValue& gml_Script_scrAnyControllerButtonPressed( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrAnyControllerButtonPressed( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrAnyControllerButtonPressed", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[16];
YYRValue __Args__[16];
YYRValue local_buttonArr;
YYRValue local_buttonArrLength;
YYRValue local_i;
YYRValue & global_controllerIndex = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_controllerIndex);
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrAnyControllerButtonPressed.val );

static bool sInitialised = false;


YY_STACKTRACE_LINE(6);
YYGML_array_set_owner((long)1345273);
;

FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_F36556C7;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_F36556C7;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg2_F36556C7;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg3_F36556C7;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg4_F36556C7;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg5_F36556C7;
__pArgs__[5] = &__Args__[5];
__Args__[6] = (YYRValue*)&gs_constArg6_F36556C7;
__pArgs__[6] = &__Args__[6];
__Args__[7] = (YYRValue*)&gs_constArg7_F36556C7;
__pArgs__[7] = &__Args__[7];
__Args__[8] = (YYRValue*)&gs_constArg8_F36556C7;
__pArgs__[8] = &__Args__[8];
__Args__[9] = (YYRValue*)&gs_constArg9_F36556C7;
__pArgs__[9] = &__Args__[9];
__Args__[10] = (YYRValue*)&gs_constArg10_F36556C7;
__pArgs__[10] = &__Args__[10];
__Args__[11] = (YYRValue*)&gs_constArg11_F36556C7;
__pArgs__[11] = &__Args__[11];
__Args__[12] = (YYRValue*)&gs_constArg12_F36556C7;
__pArgs__[12] = &__Args__[12];
__Args__[13] = (YYRValue*)&gs_constArg13_F36556C7;
__pArgs__[13] = &__Args__[13];
__Args__[14] = (YYRValue*)&gs_constArg14_F36556C7;
__pArgs__[14] = &__Args__[14];
__Args__[15] = (YYRValue*)&gs_constArg15_F36556C7;
__pArgs__[15] = &__Args__[15];
local_buttonArr=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,16,g_FUNC_NewGMLArray.val,&__pArgs__[0]);
;
;

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_buttonArr;
local_buttonArrLength=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_array_length_1d.val,&__pArgs__[0]);
;


YY_STACKTRACE_LINE(10);
local_i=0;
;
bool ___f195___ = true;
while( true ) {
if (!___f195___) {

++/* local */local_i;
;
}
___f195___ = false;
bool ___b196___ = ((/* local */local_i < /* local */local_buttonArrLength));
if (!___b196___) break;
{

YY_STACKTRACE_LINE(10);

FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_controllerIndex);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* context id changed from 517 to 520*/local_buttonArr[(int)(/* local */local_i)];
__pArgs__[1] = &__Args__[1];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_gamepad_button_check_pressed.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(11);

YY_STACKTRACE_LINE(12);
_result = /* volatile */local_buttonArr[(int)(/* local */local_i)];
return _result;
;
;
}
;
;
}
}
;

YY_STACKTRACE_LINE(16);
_result = -1;
return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrAnyControllerButtonPressed( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrAnyControllerButtonPressed( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrAnyControllerButtonPressed", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sself_scrAnyControllerButtonPressed_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrAnyControllerButtonPressed); /* set ContextID to 18 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrAnyControllerButtonPressed_4ABE50B2)) = (YYRValue(gml_Script_scrAnyControllerButtonPressed, pSelf)), PopContextStack();
;
return _result;
}
#endif
