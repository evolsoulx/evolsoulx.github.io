#include "pch.hpp"
YYRValue& gml_Script_scrInitEngineOptions( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_application_surface;
extern YYVAR g_Script_gml_Script_scrInitGlobals;
extern YYVAR g_Script_gml_GlobalScript_scrInitGlobals;
extern YYVAR g_FUNC_array_create;
extern YYVAR g_FUNC_display_set_gui_size;
extern YYVAR g_FUNC_surface_get_width;
extern YYVAR g_FUNC_surface_get_height;
extern YYVAR g_FUNC_randomize;
#ifndef __YYNODEFS
char g_pString1_398AB232[] = {
0x00,                                                                                                // .
};
DValue gs_constArg0_398AB232 = { 8, 0, VALUE_REAL };
DValue gs_constArg1_398AB232 = { 0, 0, VALUE_REAL };
DValue gs_constArg2_398AB232 = { 50, 0, VALUE_REAL };
#else
extern char g_pString1_398AB232[];
extern DValue gs_constArg0_398AB232;
extern DValue gs_constArg1_398AB232;
extern DValue gs_constArg2_398AB232;
#endif // __YYNODEFS

YYRValue& gml_Script_scrInitGlobals( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrInitGlobals( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrInitGlobals", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue & global_saveNum = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_saveNum);
YYRValue & global_difficulty = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_difficulty);
YYRValue & global_deaths = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_deaths);
YYRValue & global_time = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_time);
YYRValue & global_timeMicro = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_timeMicro);
YYRValue & global_saveRoom = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_saveRoom);
YYRValue & global_savePlayerX = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_savePlayerX);
YYRValue & global_savePlayerY = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_savePlayerY);
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue & global_saveGrav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_saveGrav);
YYRValue & global_secretItem = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_secretItem);
YYRValue & global_saveSecretItem = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_saveSecretItem);
YYRValue & global_bossItem = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_bossItem);
YYRValue & global_saveBossItem = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_saveBossItem);
YYRValue & global_gameClear = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gameClear);
YYRValue & global_saveGameClear = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_saveGameClear);
YYRValue & global_trigger = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_trigger);
YYRValue & global_gameStarted = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gameStarted);
YYRValue & global_noPause = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_noPause);
YYRValue & global_autosave = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_autosave);
YYRValue & global_noDeath = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_noDeath);
YYRValue & global_infJump = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_infJump);
YYRValue & global_gamePaused = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gamePaused);
YYRValue & global_pauseSpr = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_pauseSpr);
YYRValue & global_pauseDelay = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_pauseDelay);
YYRValue & global_currentMusicID = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_currentMusicID);
YYRValue & global_currentMusic = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_currentMusic);
YYRValue & global_deathSound = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_deathSound);
YYRValue & global_gameOverMusic = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gameOverMusic);
YYRValue & global_musicFading = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_musicFading);
YYRValue & global_currentGain = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_currentGain);
YYRValue & global_menuSelectPrev = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuSelectPrev);
YYRValue global_builtin_application_surface;
YYRValue & global_controllerMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_controllerMode);
YYRValue & global_controllerDelay = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_controllerDelay);
YYRValue __ret1__(0);
YYRValue __ret2__(0);
YYRValue __ret3__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrInitGlobals.val );

static bool sInitialised = false;

YY_STACKTRACE_LINE(5);
FREE_RValue( &__ret1__ );
gml_Script_scrInitEngineOptions(pSelf,pOther,__ret1__,0,NULL);
;

YY_STACKTRACE_LINE(9);
(global_saveNum)=1;
;

YY_STACKTRACE_LINE(10);
(global_difficulty)=0;
;

YY_STACKTRACE_LINE(11);
(global_deaths)=0;
;

YY_STACKTRACE_LINE(12);
(global_time)=0;
;

YY_STACKTRACE_LINE(13);
(global_timeMicro)=0;
;

YY_STACKTRACE_LINE(14);
(global_saveRoom)=(const char*)g_pString1_398AB232;
;

YY_STACKTRACE_LINE(15);
(global_savePlayerX)=0;
;

YY_STACKTRACE_LINE(16);
(global_savePlayerY)=0;
;

YY_STACKTRACE_LINE(17);
(global_grav)=1;
;

YY_STACKTRACE_LINE(18);
(global_saveGrav)=1;
;

YY_STACKTRACE_LINE(20);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_398AB232;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_398AB232;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_secretItem))=(YYGML_array_set_owner((long)131072), YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_array_create.val,&__pArgs__[0]));
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(21);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_398AB232;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_398AB232;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_saveSecretItem))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_array_create.val,&__pArgs__[0]);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(23);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_398AB232;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_398AB232;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_bossItem))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_array_create.val,&__pArgs__[0]);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(24);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_398AB232;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_398AB232;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_saveBossItem))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_array_create.val,&__pArgs__[0]);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(26);
(global_gameClear)=0;
;

YY_STACKTRACE_LINE(27);
(global_saveGameClear)=0;
;

YY_STACKTRACE_LINE(29);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg2_398AB232;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_398AB232;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_trigger))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_array_create.val,&__pArgs__[0]);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(31);
(global_gameStarted)=0;
;

YY_STACKTRACE_LINE(32);
(global_noPause)=0;
;

YY_STACKTRACE_LINE(33);
(global_autosave)=0;
;

YY_STACKTRACE_LINE(34);
(global_noDeath)=0;
;

YY_STACKTRACE_LINE(35);
(global_infJump)=0;
;

YY_STACKTRACE_LINE(37);
(global_gamePaused)=0;
;

YY_STACKTRACE_LINE(38);
(global_pauseSpr)=-1;
;

YY_STACKTRACE_LINE(39);
(global_pauseDelay)=0;
;

YY_STACKTRACE_LINE(41);
(global_currentMusicID)=-1;
;

YY_STACKTRACE_LINE(42);
(global_currentMusic)=-1;
;

YY_STACKTRACE_LINE(43);
(global_deathSound)=-1;
;

YY_STACKTRACE_LINE(44);
(global_gameOverMusic)=-1;
;

YY_STACKTRACE_LINE(45);
(global_musicFading)=0;
;

YY_STACKTRACE_LINE(46);
(global_currentGain)=0;
;


YY_STACKTRACE_LINE(48);
YYGML_array_set_owner((long)362175);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuSelectPrev))((int)(0))=0;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(49);
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuSelectPrev))((int)(1))=0;
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(51);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
FREE_RValue( &__ret3__ );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_application_surface.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_application_surface );
__Args__[0] = /* First usage */global_builtin_application_surface;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */global_builtin_application_surface;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_surface_get_width.val,&__pArgs__[0]);
__pArgs__[2] = &__Args__[2];
__Args__[3] = YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,1,g_FUNC_surface_get_height.val,&__pArgs__[1]);
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_display_set_gui_size.val,&__pArgs__[2]);
;

YY_STACKTRACE_LINE(53);
(global_controllerMode)=0;
;

YY_STACKTRACE_LINE(54);
(global_controllerDelay)=-1;
;

YY_STACKTRACE_LINE(56);
FREE_RValue( &__ret1__ );
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_randomize.val,NULL);
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrInitGlobals( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrInitGlobals( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrInitGlobals", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sself_scrInitGlobals_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrInitGlobals); /* set ContextID to 1 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrInitGlobals_4ABE50B2)) = (YYRValue(gml_Script_scrInitGlobals, pSelf)), PopContextStack();
;
return _result;
}
#endif
