#include "pch.hpp"
YYRValue& gml_Script_scrAnyControllerButtonPressed( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrButtonCheckPressed( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrSaveConfig( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrSaveGame( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrLoadGame( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrButtonCheck( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrSetWindowCaption( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrToggleMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_application_surface;
extern YYVAR g_VAR_alarm;
extern YYVAR g_VAR_delta_time;
extern YYVAR g_VAR_mouse_x;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_mouse_y;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_room;
extern YYVAR g_VAR_room_last;
extern YYVAR g_VAR_room_first;
extern YYVAR g_VAR_image_alpha;
extern YYVAR g_VAR_image_blend;
extern YYVAR g_Script_gml_Object_objWorld_Step_0;
extern YYVAR g_FUNC_gpu_set_texfilter;
extern YYVAR g_FUNC_keyboard_check_pressed;
extern YYVAR g_FUNC_instance_deactivate_all;
extern YYVAR g_FUNC_sprite_create_from_surface;
extern YYVAR g_FUNC_surface_get_width;
extern YYVAR g_FUNC_surface_get_height;
extern YYVAR g_FUNC_application_surface_draw_enable;
extern YYVAR g_FUNC_instance_activate_all;
extern YYVAR g_FUNC_sprite_delete;
extern YYVAR g_FUNC_io_clear;
extern YYVAR g_FUNC_audio_stop_sound;
extern YYVAR g_FUNC_audio_resume_sound;
extern YYVAR g_FUNC_audio_sound_gain;
extern YYVAR g_FUNC_audio_master_gain;
extern YYVAR g_FUNC_audio_play_sound;
extern YYVAR g_FUNC_room_goto_previous;
extern YYVAR g_FUNC_window_set_fullscreen;
#ifndef __YYNODEFS
DValue gs_constArg0_35B0F212 = { 1, 0, VALUE_REAL };
DValue gs_constArg1_35B0F212 = { 0, 0, VALUE_REAL };
DValue gs_constArg2_35B0F212 = { 8, 0, VALUE_REAL };
DValue gs_constArg3_35B0F212 = { 45, 0, VALUE_REAL };
DValue gs_constArg4_35B0F212 = { 5, 0, VALUE_REAL };
DValue gs_constArg5_35B0F212 = { 46, 0, VALUE_REAL };
DValue gs_constArg6_35B0F212 = { 36, 0, VALUE_REAL };
DValue gs_constArg7_35B0F212 = { 35, 0, VALUE_REAL };
DValue gs_constArg8_35B0F212 = { 33, 0, VALUE_REAL };
DValue gs_constArg9_35B0F212 = { 34, 0, VALUE_REAL };
DValue gs_constArg10_35B0F212 = { 27, 0, VALUE_REAL };
DValue gs_constArg11_35B0F212 = { 113, 0, VALUE_REAL };
DValue gs_constArg12_35B0F212 = { 115, 0, VALUE_REAL };
DValue gs_constArg13_35B0F212 = { 77, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_35B0F212;
extern DValue gs_constArg1_35B0F212;
extern DValue gs_constArg2_35B0F212;
extern DValue gs_constArg3_35B0F212;
extern DValue gs_constArg4_35B0F212;
extern DValue gs_constArg5_35B0F212;
extern DValue gs_constArg6_35B0F212;
extern DValue gs_constArg7_35B0F212;
extern DValue gs_constArg8_35B0F212;
extern DValue gs_constArg9_35B0F212;
extern DValue gs_constArg10_35B0F212;
extern DValue gs_constArg11_35B0F212;
extern DValue gs_constArg12_35B0F212;
extern DValue gs_constArg13_35B0F212;
#endif // __YYNODEFS

void gml_Object_objWorld_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objWorld_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objWorld_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[11];
YYRValue __Args__[11];
YYRValue & global_smoothingMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_smoothingMode);
YYRValue & global_controllerIndex = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_controllerIndex);
YYRValue & global_controllerMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_controllerMode);
YYRValue & global_controllerDelay = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_controllerDelay);
YYRValue & global_gameStarted = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gameStarted);
YYRValue & global_pauseDelay = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_pauseDelay);
YYRValue & global_pauseButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_pauseButton);
YYRValue & global_gamePaused = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gamePaused);
YYRValue & global_noPause = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_noPause);
YYRValue global_builtin_application_surface;
YYRValue & global_pauseSpr = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_pauseSpr);
YYRValue & global_restartButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_restartButton);
YYRValue & global_deathSound = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_deathSound);
YYRValue & global_gameOverMusic = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gameOverMusic);
YYRValue & global_currentMusic = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_currentMusic);
YYRValue & global_musicFading = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_musicFading);
YYRValue & global_currentGain = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_currentGain);
YYRValue sbuiltin_alarm_62DEE183;
YYRValue & global_timeMicro = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_timeMicro);
YYRValue global_builtin_delta_time;
YYRValue & global_time = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_time);
YYRValue & global_upButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_upButton);
YYRValue & global_volumeLevel = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_volumeLevel);
YYRValue & global_downButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_downButton);
YYRValue & global_debugMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugMode);
YYRValue global_builtin_mouse_x;
YYRValue sbuiltin_x;
YYRValue global_builtin_mouse_y;
YYRValue sbuiltin_y;
YYRValue & global_debugOverlay = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugOverlay);
YYRValue & global_debugShowHitbox = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugShowHitbox);
YYRValue & global_debugNoDeath = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugNoDeath);
YYRValue & global_debugInfJump = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugInfJump);
YYRValue global_builtin_room;
YYRValue global_builtin_room_last;
YYRValue global_builtin_room_first;
YYRValue & global_debugVisuals = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugVisuals);
YYRValue sbuiltin_image_alpha;
YYRValue sbuiltin_image_blend;
YYRValue & global_fullscreenMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_fullscreenMode);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;


FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_smoothingMode);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_gpu_set_texfilter.val,&__pArgs__[0]);
;

bool sc292 = false;
if ((bool)1){
sc292 = ((/* First usage */(global_controllerIndex) != -1));
 } 

if(sc292) {

YY_STACKTRACE_LINE(7);

YY_STACKTRACE_LINE(8);
if(!((BOOL_RValue( /* First usage */(global_controllerMode) )))) {

YY_STACKTRACE_LINE(8);

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_35B0F212;
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(9);

YY_STACKTRACE_LINE(10);
(global_controllerDelay)=-1;
;
;
}
else {

FREE_RValue( &__ret1__ );
if((gml_Script_scrAnyControllerButtonPressed(pSelf,pOther,__ret1__,0,NULL) != -1)) {

YY_STACKTRACE_LINE(11);

if((/* context id changed from 598 to 600*/(global_controllerDelay) == -1)) {

YY_STACKTRACE_LINE(12);

YY_STACKTRACE_LINE(13);
(global_controllerDelay)=5;
;
;
}
;
;
}
;
}
;
;
}
else {

YY_STACKTRACE_LINE(16);

YY_STACKTRACE_LINE(17);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_35B0F212;
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(17);

if((/* context id changed from 601 to 603*/(global_controllerDelay) == -1)) {

YY_STACKTRACE_LINE(18);

YY_STACKTRACE_LINE(19);
(global_controllerDelay)=5;
;
;
}
;
;
}
else {

FREE_RValue( &__ret1__ );
if((gml_Script_scrAnyControllerButtonPressed(pSelf,pOther,__ret1__,0,NULL) != -1)) {

YY_STACKTRACE_LINE(21);

YY_STACKTRACE_LINE(22);
(global_controllerDelay)=-1;
;
;
}
;
}
;
;
}
;

if((/* context id changed from 606 to 596*/(global_controllerDelay) != -1)) {

YY_STACKTRACE_LINE(26);

YY_STACKTRACE_LINE(27);
if((/* context id changed from 596 to 607*/(global_controllerDelay) == 0)) {

YY_STACKTRACE_LINE(27);

YY_STACKTRACE_LINE(28);
(global_controllerMode)=!((BOOL_RValue( /* context id changed from 596 to 608*/(global_controllerMode) )));
;

YY_STACKTRACE_LINE(29);
(global_controllerDelay)=-1;
;
;
}
else {

YY_STACKTRACE_LINE(30);

YY_STACKTRACE_LINE(31);
/* context id changed from 608 to 609*/(global_controllerDelay)-=1;
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

if(BOOL_RValue( /* First usage */(global_gameStarted) )) {

YY_STACKTRACE_LINE(36);

YY_STACKTRACE_LINE(38);
if((/* First usage */(global_pauseDelay) <= 0)) {

YY_STACKTRACE_LINE(38);

FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_pauseButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(39);

YY_STACKTRACE_LINE(40);
if(!((BOOL_RValue( /* First usage */(global_gamePaused) )))) {

YY_STACKTRACE_LINE(40);

if(!((BOOL_RValue( /* First usage */(global_noPause) )))) {

YY_STACKTRACE_LINE(41);

YY_STACKTRACE_LINE(42);
(global_gamePaused)=1;
;

YY_STACKTRACE_LINE(43);
(global_pauseDelay)=25;
;

YY_STACKTRACE_LINE(45);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_35B0F212;
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_deactivate_all.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(48);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
FREE_RValue( &__ret3__ );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_application_surface.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_application_surface );
__Args__[0] = /* volatile */global_builtin_application_surface;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */global_builtin_application_surface;
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */global_builtin_application_surface;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_35B0F212;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg1_35B0F212;
__pArgs__[4] = &__Args__[4];
__Args__[5] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_surface_get_width.val,&__pArgs__[0]);
__pArgs__[5] = &__Args__[5];
__Args__[6] = YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,1,g_FUNC_surface_get_height.val,&__pArgs__[1]);
__pArgs__[6] = &__Args__[6];
__Args__[7] = (YYRValue*)&gs_constArg1_35B0F212;
__pArgs__[7] = &__Args__[7];
__Args__[8] = (YYRValue*)&gs_constArg1_35B0F212;
__pArgs__[8] = &__Args__[8];
__Args__[9] = (YYRValue*)&gs_constArg1_35B0F212;
__pArgs__[9] = &__Args__[9];
__Args__[10] = (YYRValue*)&gs_constArg1_35B0F212;
__pArgs__[10] = &__Args__[10];
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_pauseSpr))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,9,g_FUNC_sprite_create_from_surface.val,&__pArgs__[2]);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(51);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg1_35B0F212;
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_application_surface_draw_enable.val,&__pArgs__[0]);
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(53);

YY_STACKTRACE_LINE(54);
(global_gamePaused)=0;
;

YY_STACKTRACE_LINE(55);
(global_pauseDelay)=25;
;

YY_STACKTRACE_LINE(57);
FREE_RValue( &__ret1__ );
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_instance_activate_all.val,NULL);
;

YY_STACKTRACE_LINE(60);
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 614 to 615*/(global_pauseSpr);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_sprite_delete.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(63);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_35B0F212;
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_application_surface_draw_enable.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(65);
FREE_RValue( &__ret1__ );
gml_Script_scrSaveConfig(pSelf,pOther,__ret1__,0,NULL);
;

YY_STACKTRACE_LINE(67);
FREE_RValue( &__ret1__ );
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_io_clear.val,NULL);
;
;
}
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(70);

YY_STACKTRACE_LINE(71);
/* context id changed from 615 to 616*/(global_pauseDelay)-=1;
;
;
}
;

YY_STACKTRACE_LINE(74);
if(!((BOOL_RValue( /* context id changed from 615 to 610*/(global_gamePaused) )))) {

YY_STACKTRACE_LINE(74);

FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_restartButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(76);

YY_STACKTRACE_LINE(78);
FREE_RValue( &__ret2__ );
__Args__[1] = /* First usage */(global_deathSound);
__pArgs__[1] = &__Args__[1];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_audio_stop_sound.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(79);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_gameOverMusic);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_audio_stop_sound.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(82);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_currentMusic);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_audio_resume_sound.val,&__pArgs__[0]);
;

if(BOOL_RValue( /* First usage */(global_musicFading) )) {

YY_STACKTRACE_LINE(85);

YY_STACKTRACE_LINE(86);
(global_musicFading)=0;
;

YY_STACKTRACE_LINE(87);
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 618 to 619*/(global_currentMusic);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */(global_currentGain);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_35B0F212;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_sound_gain.val,&__pArgs__[0]);
;


YY_STACKTRACE_LINE(88);
YYGML_array_set_owner((long)68062);
;

sbuiltin_alarm_62DEE183=-1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_alarm.val, (int)0, &sbuiltin_alarm_62DEE183 );
;
;
;
}
;

YY_STACKTRACE_LINE(91);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg1_35B0F212;
__pArgs__[0] = &__Args__[0];
gml_Script_scrSaveGame(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(92);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg1_35B0F212;
__pArgs__[0] = &__Args__[0];
gml_Script_scrLoadGame(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;
;
}
;

bool sc293 = false;
if ((bool)1) { sc293=true; } else 
{
sc293 = (YYGML_instance_exists(pSelf,pOther,(int)12));
 } 

if(sc293) {

YY_STACKTRACE_LINE(96);

YY_STACKTRACE_LINE(97);
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_delta_time.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_delta_time );
/* First usage */(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_timeMicro))+=/* First usage */global_builtin_delta_time;
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(98);
/* First usage */(global_time)+=yyfdiv((long long)((long long)(global_timeMicro).asInt64()), (long long)1000000);
;

YY_STACKTRACE_LINE(99);
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_timeMicro))=yyfmod((global_timeMicro).asReal(), 1000000);
PopContextStack(1)
;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(101);

YY_STACKTRACE_LINE(103);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_upButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheck(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(103);

if((/* First usage */(global_volumeLevel) < 100)) {

YY_STACKTRACE_LINE(104);

YY_STACKTRACE_LINE(105);
/* context id changed from 624 to 625*/(global_volumeLevel)+=1;
;
;
}
;

YY_STACKTRACE_LINE(107);
FREE_RValue( &__ret1__ );
__Args__[0] = (/* context id changed from 625 to 624*/(global_volumeLevel) / (double)100);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_audio_master_gain.val,&__pArgs__[0]);
;
;
}
else {

FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_downButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheck(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(108);

if((/* context id changed from 624 to 627*/(global_volumeLevel) > 0)) {

YY_STACKTRACE_LINE(109);

YY_STACKTRACE_LINE(110);
/* context id changed from 627 to 628*/(global_volumeLevel)-=1;
;
;
}
;

YY_STACKTRACE_LINE(112);
FREE_RValue( &__ret1__ );
__Args__[0] = (/* context id changed from 628 to 627*/(global_volumeLevel) / (double)100);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_audio_master_gain.val,&__pArgs__[0]);
;
;
}
;
}
;
;
}
;

YY_STACKTRACE_LINE(117);
FREE_RValue( &__ret1__ );
gml_Script_scrSetWindowCaption(pSelf,pOther,__ret1__,0,NULL);
;
;
}
;

bool sc294 = false;
if (/* First usage */(global_debugMode).asBool()){
if (/* context id changed from 79 to 629*/(global_gameStarted).asBool()){
sc294 = (!((BOOL_RValue( /* context id changed from 610 to 630*/(global_gamePaused) ))));
 }  } 

if(sc294) {

YY_STACKTRACE_LINE(121);

if(YYGML_keyboard_check((int)9)) {

YY_STACKTRACE_LINE(123);

SWithIterator ___wi296___;
int ___wc297___ = YYGML_NewWithIterator( &___wi296___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, 12);
if (___wc297___ > 0 ) {
do {

YY_STACKTRACE_LINE(124);

YY_STACKTRACE_LINE(125);
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_mouse_x.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_mouse_x );
sbuiltin_x=/* First usage */global_builtin_mouse_x;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
;

YY_STACKTRACE_LINE(126);
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_mouse_y.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_mouse_y );
sbuiltin_y=/* First usage */global_builtin_mouse_y;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
;
;
} while(YYGML_WithIteratorNext( &___wi296___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi296___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;
;
}
;

FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg2_35B0F212;
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(131);

YY_STACKTRACE_LINE(132);
(global_debugOverlay)=!((BOOL_RValue( /* First usage */(global_debugOverlay) )));
;
;
}
;

FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg3_35B0F212;
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(136);

SWithIterator ___wi299___;
int ___wc300___ = YYGML_NewWithIterator( &___wi299___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, 12);
if (___wc300___ > 0 ) {
do {

YY_STACKTRACE_LINE(137);

YY_STACKTRACE_LINE(138);
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constArg0_35B0F212;
__pArgs__[1] = &__Args__[1];
gml_Script_scrSaveGame(pSelf,pOther,__ret2__,1,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(139);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg4_35B0F212;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_35B0F212;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_35B0F212;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
;
;
} while(YYGML_WithIteratorNext( &___wi299___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi299___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;
;
}
;

FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg5_35B0F212;
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(144);

YY_STACKTRACE_LINE(145);
(global_debugShowHitbox)=!((BOOL_RValue( /* First usage */(global_debugShowHitbox) )));
;
;
}
;

FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg6_35B0F212;
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(149);

YY_STACKTRACE_LINE(150);
(global_debugNoDeath)=!((BOOL_RValue( /* First usage */(global_debugNoDeath) )));
;
;
}
;

FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg7_35B0F212;
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(154);

YY_STACKTRACE_LINE(155);
(global_debugInfJump)=!((BOOL_RValue( /* First usage */(global_debugInfJump) )));
;
;
}
;

bool sc301 = false;
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg8_35B0F212;
__pArgs__[0] = &__Args__[0];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0])){
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_last.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_last );
sc301 = ((/* First usage */global_builtin_room != /* First usage */global_builtin_room_last));
 } 

if(sc301) {

YY_STACKTRACE_LINE(159);

SWithIterator ___wi303___;
int ___wc304___ = YYGML_NewWithIterator( &___wi303___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, 12);
if (___wc304___ > 0 ) {
do {

YY_STACKTRACE_LINE(160);

YY_STACKTRACE_LINE(161);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
;
} while(YYGML_WithIteratorNext( &___wi303___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi303___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;

YY_STACKTRACE_LINE(163);
YYGML_room_goto_next();
;
;
}
;

bool sc305 = false;
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg9_35B0F212;
__pArgs__[0] = &__Args__[0];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0])){
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_first.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_first );
sc305 = ((/* volatile */global_builtin_room != /* First usage */global_builtin_room_first));
 } 

if(sc305) {

YY_STACKTRACE_LINE(167);

SWithIterator ___wi307___;
int ___wc308___ = YYGML_NewWithIterator( &___wi307___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, 12);
if (___wc308___ > 0 ) {
do {

YY_STACKTRACE_LINE(168);

YY_STACKTRACE_LINE(169);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
;
} while(YYGML_WithIteratorNext( &___wi307___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi307___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;

YY_STACKTRACE_LINE(171);
FREE_RValue( &__ret1__ );
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_room_goto_previous.val,NULL);
;
;
}
;
;
}
;

if(BOOL_RValue( /* First usage */(global_debugVisuals) )) {

YY_STACKTRACE_LINE(176);

SWithIterator ___wi310___;
int ___wc311___ = YYGML_NewWithIterator( &___wi310___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, 12);
if (___wc311___ > 0 ) {
do {

YY_STACKTRACE_LINE(177);

YY_STACKTRACE_LINE(178);
if(BOOL_RValue( /* context id changed from 638 to 647*/(global_debugNoDeath) )) {

YY_STACKTRACE_LINE(178);

YY_STACKTRACE_LINE(179);
sbuiltin_image_alpha=0.7;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
;
;
}
else {

YY_STACKTRACE_LINE(180);

YY_STACKTRACE_LINE(181);
sbuiltin_image_alpha=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
;
;
}
;

YY_STACKTRACE_LINE(184);
if(BOOL_RValue( /* context id changed from 639 to 647*/(global_debugInfJump) )) {

YY_STACKTRACE_LINE(184);

YY_STACKTRACE_LINE(185);
sbuiltin_image_blend=16711680;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_blend.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_blend );
;
;
}
else {

YY_STACKTRACE_LINE(186);

YY_STACKTRACE_LINE(187);
sbuiltin_image_blend=16777215;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_blend.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_blend );
;
;
}
;
;
} while(YYGML_WithIteratorNext( &___wi310___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi310___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;
;
}
;

FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg10_35B0F212;
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(195);

YY_STACKTRACE_LINE(196);
YYGML_game_end(0,NULL);
;

YY_STACKTRACE_LINE(197);
return;
;
;
}
;

FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg11_35B0F212;
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(201);

YY_STACKTRACE_LINE(202);
YYGML_game_restart();
;

YY_STACKTRACE_LINE(203);
return;
;
;
}
;

bool sc312 = false;
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg12_35B0F212;
__pArgs__[0] = &__Args__[0];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0])){
sc312 = (!((BOOL_RValue( /* context id changed from 630 to 654*/(global_gamePaused) ))));
 } 

if(sc312) {

YY_STACKTRACE_LINE(207);

YY_STACKTRACE_LINE(208);
(global_fullscreenMode)=!((BOOL_RValue( /* First usage */(global_fullscreenMode) )));
;

YY_STACKTRACE_LINE(209);
FREE_RValue( &__ret1__ );
__Args__[0] = (global_fullscreenMode);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_window_set_fullscreen.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(211);
FREE_RValue( &__ret1__ );
gml_Script_scrSaveConfig(pSelf,pOther,__ret1__,0,NULL);
;
;
}
;

bool sc313 = false;
if (YYGML_keyboard_check((int)17)){
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg13_35B0F212;
__pArgs__[0] = &__Args__[0];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0])){
sc313 = (!((BOOL_RValue( /* context id changed from 654 to 657*/(global_gamePaused) ))));
 }  } 

if(sc313) {

YY_STACKTRACE_LINE(215);

YY_STACKTRACE_LINE(216);
FREE_RValue( &__ret2__ );
gml_Script_scrToggleMusic(pSelf,pOther,__ret2__,0,NULL);
;

YY_STACKTRACE_LINE(218);
FREE_RValue( &__ret1__ );
gml_Script_scrSaveConfig(pSelf,pOther,__ret1__,0,NULL);
;
;
}
;
}
#endif
