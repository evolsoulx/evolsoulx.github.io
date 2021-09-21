#include "pch.hpp"
extern YYVAR g_Script_gml_Script_scrStopMusic;
extern YYVAR g_Script_gml_GlobalScript_scrStopMusic;
extern YYVAR g_FUNC_audio_stop_sound;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_scrStopMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrStopMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrStopMusic", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue & global_currentMusicID = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_currentMusicID);
YYRValue & global_currentMusic = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_currentMusic);
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrStopMusic.val );

static bool sInitialised = false;

(global_currentMusicID)=-1;
;

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_currentMusic);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_audio_stop_sound.val,&__pArgs__[0]);
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrStopMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrStopMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrStopMusic", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sself_scrStopMusic_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrStopMusic); /* set ContextID to 14 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrStopMusic_4ABE50B2)) = (YYRValue(gml_Script_scrStopMusic, pSelf)), PopContextStack();
;
return _result;
}
#endif
