#include "pch.hpp"
YYRValue& gml_Script_scrGetMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrStopMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Script_scrToggleMusic;
extern YYVAR g_Script_gml_GlobalScript_scrToggleMusic;
extern YYVAR g_FUNC_audio_stop_sound;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_scrToggleMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrToggleMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrToggleMusic", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue & global_muteMusic = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_muteMusic);
YYRValue & global_gameStarted = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gameStarted);
YYRValue & global_gameOverMusic = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gameOverMusic);
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrToggleMusic.val );

static bool sInitialised = false;

YY_STACKTRACE_LINE(5);
(global_muteMusic)=!((BOOL_RValue( /* First usage */(global_muteMusic) )));
;

YY_STACKTRACE_LINE(7);
if(!((BOOL_RValue( (global_muteMusic) )))) {

YY_STACKTRACE_LINE(7);

bool sc183 = false;
if (YYGML_instance_exists(pSelf,pOther,(int)12)) { sc183=true; } else 
{
sc183 = (!((BOOL_RValue( /* First usage */(global_gameStarted) ))));
 } 

if(sc183) {

YY_STACKTRACE_LINE(8);

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret1__ );
gml_Script_scrGetMusic(pSelf,pOther,__ret1__,0,NULL);
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(11);

YY_STACKTRACE_LINE(12);
FREE_RValue( &__ret1__ );
gml_Script_scrStopMusic(pSelf,pOther,__ret1__,0,NULL);
;

YY_STACKTRACE_LINE(13);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_gameOverMusic);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_audio_stop_sound.val,&__pArgs__[0]);
;
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrToggleMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrToggleMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrToggleMusic", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sself_scrToggleMusic_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrToggleMusic); /* set ContextID to 11 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrToggleMusic_4ABE50B2)) = (YYRValue(gml_Script_scrToggleMusic, pSelf)), PopContextStack();
;
return _result;
}
#endif
