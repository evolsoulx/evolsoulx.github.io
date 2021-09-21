#include "pch.hpp"
extern YYVAR g_Script_gml_Script_scrPlayMusic;
extern YYVAR g_Script_gml_GlobalScript_scrPlayMusic;
extern YYVAR g_FUNC_audio_stop_sound;
extern YYVAR g_FUNC_audio_play_sound;
#ifndef __YYNODEFS
DValue gs_constArg0_025DF09E = { 1, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_025DF09E;
#endif // __YYNODEFS

YYRValue& gml_Script_scrPlayMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrPlayMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrPlayMusic", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue local_songID;
YYRValue local_loopSong;
YYRValue & global_muteMusic = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_muteMusic);
YYRValue & global_currentMusicID = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_currentMusicID);
YYRValue & global_currentMusic = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_currentMusic);
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrPlayMusic.val );

static bool sInitialised = false;

YY_STACKTRACE_LINE(7);
local_songID=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(8);
local_loopSong=(*YY_GET_ARG(_args, (int)(1), _count));
;

if(!((BOOL_RValue( /* First usage */(global_muteMusic) )))) {

YY_STACKTRACE_LINE(10);

if((/* First usage */(global_currentMusicID) != /* local */local_songID)) {

YY_STACKTRACE_LINE(11);

YY_STACKTRACE_LINE(12);
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_currentMusicID))=/* local */local_songID;
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_currentMusic);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_audio_stop_sound.val,&__pArgs__[0]);
;

if((/* local */local_songID != -1)) {

YY_STACKTRACE_LINE(16);

YY_STACKTRACE_LINE(17);
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 494 to 495*/(global_currentMusicID);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_025DF09E;
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_loopSong;
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_currentMusic))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
PopContextStack(1)
;
;
;
}
;
;
}
;
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrPlayMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrPlayMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrPlayMusic", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(5);
YYRValue* sself_scrPlayMusic_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrPlayMusic); /* set ContextID to 13 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrPlayMusic_4ABE50B2)) = (YYRValue(gml_Script_scrPlayMusic, pSelf)), PopContextStack();
;
return _result;
}
#endif
