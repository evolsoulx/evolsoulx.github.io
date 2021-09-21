#include "pch.hpp"
extern YYVAR g_Script_gml_Script_scrButtonCheck;
extern YYVAR g_Script_gml_GlobalScript_scrButtonCheck;
extern YYVAR g_FUNC_gamepad_button_check;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_scrButtonCheck( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrButtonCheck( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrButtonCheck", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue local_buttonIn;
YYRValue & global_controllerMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_controllerMode);
YYRValue & global_controllerIndex = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_controllerIndex);
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrButtonCheck.val );

static bool sInitialised = false;

YY_STACKTRACE_LINE(6);
local_buttonIn=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(8);
if(!((BOOL_RValue( /* First usage */(global_controllerMode) )))) {

YY_STACKTRACE_LINE(8);

YY_STACKTRACE_LINE(9);
_result = YYGML_keyboard_check((int)(int)(int64)(/* context id changed from 499 to 500*/local_buttonIn[(int)(0)].asReal()));
return _result;
;
;
}
else {

YY_STACKTRACE_LINE(10);

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_controllerIndex);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */local_buttonIn[(int)(1)];
__pArgs__[1] = &__Args__[1];
_result = YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_gamepad_button_check.val,&__pArgs__[0]);
return _result;
;
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrButtonCheck( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrButtonCheck( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrButtonCheck", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(4);
YYRValue* sself_scrButtonCheck_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrButtonCheck); /* set ContextID to 15 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrButtonCheck_4ABE50B2)) = (YYRValue(gml_Script_scrButtonCheck, pSelf)), PopContextStack();
;
return _result;
}
#endif
