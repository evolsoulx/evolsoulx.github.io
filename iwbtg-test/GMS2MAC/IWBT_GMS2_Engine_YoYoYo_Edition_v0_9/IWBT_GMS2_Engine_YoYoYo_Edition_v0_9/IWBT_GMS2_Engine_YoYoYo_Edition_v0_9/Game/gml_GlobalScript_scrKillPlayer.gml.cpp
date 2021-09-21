#include "pch.hpp"
YYRValue& gml_Script_scrSaveGame( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_layer;
extern YYVAR g_Script_gml_Script_scrKillPlayer;
extern YYVAR g_Script_gml_GlobalScript_scrKillPlayer;
extern YYVAR g_FUNC_audio_play_sound;
extern YYVAR g_FUNC_audio_pause_sound;
extern YYVAR g_FUNC_instance_create_layer;
extern YYVAR g_FUNC_room_restart;
#ifndef __YYNODEFS
char g_pString216_D7AE91D3[] = {
0x57, 0x6f, 0x72, 0x6c, 0x64, 0x00,                                                                  // World.
};
DValue gs_constArg0_D7AE91D3 = { 4, 0, VALUE_REAL };
DValue gs_constArg1_D7AE91D3 = { 0, 0, VALUE_REAL };
DValue gs_constArg2_D7AE91D3 = { 11, 0, VALUE_REAL };
DValue gs_constArg3_D7AE91D3 = { 1, 0, VALUE_REAL };
DValue gs_constArg4_D7AE91D3 = { 16, 0, VALUE_REAL };
DValue gs_constArg5_D7AE91D3 = { 70, 0, VALUE_REAL };
#else
extern char g_pString216_D7AE91D3[];
extern DValue gs_constArg0_D7AE91D3;
extern DValue gs_constArg1_D7AE91D3;
extern DValue gs_constArg2_D7AE91D3;
extern DValue gs_constArg3_D7AE91D3;
extern DValue gs_constArg4_D7AE91D3;
extern DValue gs_constArg5_D7AE91D3;
#endif // __YYNODEFS

YYRValue& gml_Script_scrKillPlayer( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrKillPlayer( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrKillPlayer", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue & global_noDeath = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_noDeath);
YYRValue & global_debugNoDeath = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugNoDeath);
YYRValue & global_gameStarted = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gameStarted);
YYRValue & global_deathSound = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_deathSound);
YYRValue & global_muteMusic = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_muteMusic);
YYRValue & global_deathMusicMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_deathMusicMode);
YYRValue & global_currentMusic = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_currentMusic);
YYRValue & global_gameOverMusic = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gameOverMusic);
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue sbuiltin_layer;
YYRValue & global_deaths = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_deaths);
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrKillPlayer.val );

static bool sInitialised = false;

bool sc208 = false;
if (YYGML_instance_exists(pSelf,pOther,(int)12)){
bool sc209 = false;
if (!((BOOL_RValue( /* First usage */(global_noDeath) )))){
sc209 = (!((BOOL_RValue( /* First usage */(global_debugNoDeath) ))));
 } 

sc208 = (sc209);
 } 

if(sc208) {

YY_STACKTRACE_LINE(5);

YY_STACKTRACE_LINE(6);
if(BOOL_RValue( /* First usage */(global_gameStarted) )) {

YY_STACKTRACE_LINE(6);

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_D7AE91D3;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_D7AE91D3;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_D7AE91D3;
__pArgs__[2] = &__Args__[2];
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_deathSound))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
PopContextStack(1)
;
;

if(!((BOOL_RValue( /* First usage */(global_muteMusic) )))) {

YY_STACKTRACE_LINE(12);

YY_STACKTRACE_LINE(13);
if((/* First usage */(global_deathMusicMode) == 1)) {

YY_STACKTRACE_LINE(13);

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_currentMusic);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_audio_pause_sound.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(16);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg2_D7AE91D3;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg3_D7AE91D3;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_D7AE91D3;
__pArgs__[2] = &__Args__[2];
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_gameOverMusic))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
PopContextStack(1)
;
;
;
}
else {

if((/* context id changed from 553 to 555*/(global_deathMusicMode) == 2)) {

YY_STACKTRACE_LINE(17);

SWithIterator ___wi211___;
int ___wc212___ = YYGML_NewWithIterator( &___wi211___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, 0);
if (___wc212___ > 0 ) {
do {

YY_STACKTRACE_LINE(18);

YY_STACKTRACE_LINE(19);
YYGML_event_user(pSelf,pOther,(int)0);
;
;
} while(YYGML_WithIteratorNext( &___wi211___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi211___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;

YY_STACKTRACE_LINE(22);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg2_D7AE91D3;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg3_D7AE91D3;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_D7AE91D3;
__pArgs__[2] = &__Args__[2];
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_gameOverMusic))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
PopContextStack(1)
;
;
;
}
;
}
;
;
}
;

SWithIterator ___wi214___;
int ___wc215___ = YYGML_NewWithIterator( &___wi214___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, 12);
if (___wc215___ > 0 ) {
do {

YY_STACKTRACE_LINE(26);

YY_STACKTRACE_LINE(27);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_layer.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_layer );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */sbuiltin_layer;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg4_D7AE91D3;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,4,g_FUNC_instance_create_layer.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(28);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
;
} while(YYGML_WithIteratorNext( &___wi214___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi214___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;

YY_STACKTRACE_LINE(31);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg1_D7AE91D3;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_D7AE91D3;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString216_D7AE91D3;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg5_D7AE91D3;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,4,g_FUNC_instance_create_layer.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(33);
++/* First usage */(global_deaths);
;

YY_STACKTRACE_LINE(35);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg1_D7AE91D3;
__pArgs__[0] = &__Args__[0];
gml_Script_scrSaveGame(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(36);

SWithIterator ___wi218___;
int ___wc219___ = YYGML_NewWithIterator( &___wi218___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, 12);
if (___wc219___ > 0 ) {
do {

YY_STACKTRACE_LINE(39);

YY_STACKTRACE_LINE(40);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
;
} while(YYGML_WithIteratorNext( &___wi218___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi218___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;

YY_STACKTRACE_LINE(43);
FREE_RValue( &__ret1__ );
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_room_restart.val,NULL);
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
YYRValue& gml_GlobalScript_scrKillPlayer( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrKillPlayer( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrKillPlayer", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sself_scrKillPlayer_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrKillPlayer); /* set ContextID to 23 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrKillPlayer_4ABE50B2)) = (YYRValue(gml_Script_scrKillPlayer, pSelf)), PopContextStack();
;
return _result;
}
#endif
