#include "pch.hpp"
YYRValue& gml_Script_scrGetKeyStr( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrGetControllerStr( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Script_scrDrawButtonInfo;
extern YYVAR g_Script_gml_GlobalScript_scrDrawButtonInfo;
extern YYVAR g_FUNC_draw_text;
#ifndef __YYNODEFS
char g_pString91_DB431368[] = {
0x5b, 0x00,                                                                                          // [.
};
char g_pString92_DB431368[] = {
0x5d, 0x20, 0x42, 0x61, 0x63, 0x6b, 0x00,                                                            // ] Back.
};
char g_pString93_DB431368[] = {
0x5d, 0x20, 0x41, 0x63, 0x63, 0x65, 0x70, 0x74, 0x00,                                                // ] Accept.
};
char g_pString94_DB431368[] = {
0x5d, 0x20, 0x4f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x00,                                          // ] Options.
};
DValue gs_constArg0_DB431368 = { 34, 0, VALUE_REAL };
DValue gs_constArg1_DB431368 = { 576, 0, VALUE_REAL };
DValue gs_constArg2_DB431368 = { 766, 0, VALUE_REAL };
DValue gs_constArg3_DB431368 = { 400, 0, VALUE_REAL };
#else
extern char g_pString91_DB431368[];
extern char g_pString92_DB431368[];
extern char g_pString93_DB431368[];
extern char g_pString94_DB431368[];
extern DValue gs_constArg0_DB431368;
extern DValue gs_constArg1_DB431368;
extern DValue gs_constArg2_DB431368;
extern DValue gs_constArg3_DB431368;
#endif // __YYNODEFS

YYRValue& gml_Script_scrDrawButtonInfo( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrDrawButtonInfo( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrDrawButtonInfo", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue local_optionsText;
YYRValue & global_controllerMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_controllerMode);
YYRValue & global_menuBackButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuBackButton);
YYRValue local_backButton;
YYRValue & global_menuAcceptButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuAcceptButton);
YYRValue local_acceptButton;
YYRValue & global_menuOptionsButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuOptionsButton);
YYRValue local_optionsButton;
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrDrawButtonInfo.val );

static bool sInitialised = false;

YY_STACKTRACE_LINE(6);
local_optionsText=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(8);
;

YY_STACKTRACE_LINE(9);
;

YY_STACKTRACE_LINE(10);
;

YY_STACKTRACE_LINE(13);
if(!((BOOL_RValue( /* First usage */(global_controllerMode) )))) {

YY_STACKTRACE_LINE(13);

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuBackButton)[(int)(0)];
__pArgs__[0] = &__Args__[0];
local_backButton=gml_Script_scrGetKeyStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(15);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuAcceptButton)[(int)(0)];
__pArgs__[0] = &__Args__[0];
local_acceptButton=gml_Script_scrGetKeyStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(16);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuOptionsButton)[(int)(0)];
__pArgs__[0] = &__Args__[0];
local_optionsButton=gml_Script_scrGetKeyStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(17);

YY_STACKTRACE_LINE(18);
FREE_RValue( &__ret1__ );
__Args__[0] = /* volatile */(global_menuBackButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
local_backButton=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(19);
FREE_RValue( &__ret1__ );
__Args__[0] = /* volatile */(global_menuAcceptButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
local_acceptButton=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(20);
FREE_RValue( &__ret1__ );
__Args__[0] = /* volatile */(global_menuOptionsButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
local_optionsButton=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;
;
}
;

YY_STACKTRACE_LINE(24);
YYGML_draw_set_font((int)3);
;

YY_STACKTRACE_LINE(25);
YYGML_draw_set_halign((int)0);
;

YY_STACKTRACE_LINE(26);
YYGML_draw_set_valign((int)2);
;

YY_STACKTRACE_LINE(27);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_DB431368;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_DB431368;
__pArgs__[1] = &__Args__[1];
__Args__[2] = ((YYRValue((const char*)g_pString91_DB431368) + /* local */local_backButton) + YYRValue((const char*)g_pString92_DB431368));
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(28);
YYGML_draw_set_halign((int)2);
;

YY_STACKTRACE_LINE(29);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg2_DB431368;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_DB431368;
__pArgs__[1] = &__Args__[1];
__Args__[2] = ((YYRValue((const char*)g_pString91_DB431368) + /* local */local_acceptButton) + YYRValue((const char*)g_pString93_DB431368));
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;

if(BOOL_RValue( /* local */local_optionsText )) {

YY_STACKTRACE_LINE(32);

YY_STACKTRACE_LINE(33);
YYGML_draw_set_halign((int)1);
;

YY_STACKTRACE_LINE(34);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg3_DB431368;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_DB431368;
__pArgs__[1] = &__Args__[1];
__Args__[2] = ((YYRValue((const char*)g_pString91_DB431368) + /* local */local_optionsButton) + YYRValue((const char*)g_pString94_DB431368));
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrDrawButtonInfo( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrDrawButtonInfo( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrDrawButtonInfo", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(4);
YYRValue* sself_scrDrawButtonInfo_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrDrawButtonInfo); /* set ContextID to 8 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrDrawButtonInfo_4ABE50B2)) = (YYRValue(gml_Script_scrDrawButtonInfo, pSelf)), PopContextStack();
;
return _result;
}
#endif
