#include "pch.hpp"
extern YYVAR g_Script_gml_Script_scrSetWindowCaption;
extern YYVAR g_Script_gml_GlobalScript_scrSetWindowCaption;
extern YYVAR g_FUNC_string;
extern YYVAR g_FUNC_floor;
extern YYVAR g_FUNC_window_get_caption;
#ifndef __YYNODEFS
char g_pString87_A1B42EAA[] = {
0x3a, 0x00,                                                                                          // :.
};
char g_pString88_A1B42EAA[] = {
0x20, 0x2d, 0x20, 0x44, 0x65, 0x61, 0x74, 0x68, 0x73, 0x3a, 0x20, 0x00,                              //  - Deaths: .
};
char g_pString89_A1B42EAA[] = {
0x20, 0x54, 0x69, 0x6d, 0x65, 0x3a, 0x20, 0x00,                                                      //  Time: .
};
#else
extern char g_pString87_A1B42EAA[];
extern char g_pString88_A1B42EAA[];
extern char g_pString89_A1B42EAA[];
#endif // __YYNODEFS

YYRValue& gml_Script_scrSetWindowCaption( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrSetWindowCaption( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrSetWindowCaption", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue & global_windowCaptionDef = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_windowCaptionDef);
YYRValue local_windowCaption;
YYRValue & global_gameStarted = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gameStarted);
YYRValue & global_time = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_time);
YYRValue local_t;
YYRValue local_timeStr;
YYRValue & global_deaths = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_deaths);
YYRValue __ret1__(0);
YYRValue __ret2__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrSetWindowCaption.val );

static bool sInitialised = false;

YY_STACKTRACE_LINE(5);
local_windowCaption=/* First usage */(global_windowCaptionDef);
;

if(BOOL_RValue( /* First usage */(global_gameStarted) )) {

YY_STACKTRACE_LINE(7);

YY_STACKTRACE_LINE(8);
local_t=/* First usage */(global_time);
;

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret1__ );
__Args__[0] = yyfdiv((long long)((long long)/* local */local_t.asInt64()), (long long)3600);
__pArgs__[0] = &__Args__[0];
local_timeStr=(YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]) + YYRValue((const char*)g_pString87_A1B42EAA));
;

YY_STACKTRACE_LINE(10);
local_t=yyfmod(/* local */local_t.asReal(), 3600);
;

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
__Args__[0] = yyfdiv((long long)((long long)/* local */local_t.asInt64()), (long long)600);
__pArgs__[0] = &__Args__[0];
/* local */local_timeStr+=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(12);
local_t=yyfmod(/* local */local_t.asReal(), 600);
;

YY_STACKTRACE_LINE(13);
FREE_RValue( &__ret1__ );
__Args__[0] = yyfdiv((long long)((long long)/* local */local_t.asInt64()), (long long)60);
__pArgs__[0] = &__Args__[0];
/* local */local_timeStr+=(YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]) + YYRValue((const char*)g_pString87_A1B42EAA));
;

YY_STACKTRACE_LINE(14);
local_t=yyfmod(/* local */local_t.asReal(), 60);
;

YY_STACKTRACE_LINE(15);
FREE_RValue( &__ret1__ );
__Args__[0] = yyfdiv((long long)((long long)/* local */local_t.asInt64()), (long long)10);
__pArgs__[0] = &__Args__[0];
/* local */local_timeStr+=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(16);
local_t=yyfmod(/* local */local_t.asReal(), 10);
;

YY_STACKTRACE_LINE(17);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local_t;
__Args__[1] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_floor.val,&__pArgs__[0]);
__pArgs__[1] = &__Args__[1];
/* local */local_timeStr+=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(19);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_deaths);
__pArgs__[0] = &__Args__[0];
/* local */local_windowCaption+=(((YYRValue((const char*)g_pString88_A1B42EAA) + YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0])) + YYRValue((const char*)g_pString89_A1B42EAA)) + /* local */local_timeStr);
;
;
}
;

FREE_RValue( &__ret1__ );
if((/* local */local_windowCaption != YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_window_get_caption.val,NULL))) {

YY_STACKTRACE_LINE(22);

YY_STACKTRACE_LINE(23);
YYGML_window_set_caption((const char*)/* local */local_windowCaption.GetString());
;
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrSetWindowCaption( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrSetWindowCaption( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrSetWindowCaption", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sself_scrSetWindowCaption_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrSetWindowCaption); /* set ContextID to 7 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrSetWindowCaption_4ABE50B2)) = (YYRValue(gml_Script_scrSetWindowCaption, pSelf)), PopContextStack();
;
return _result;
}
#endif
