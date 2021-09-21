#include "pch.hpp"
YYRValue& gml_Script_scrSaveConfig( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Script_scrLoadConfig;
extern YYVAR g_Script_gml_GlobalScript_scrLoadConfig;
extern YYVAR g_FUNC_clamp;
extern YYVAR g_FUNC_floor;
extern YYVAR g_FUNC_audio_master_gain;
extern YYVAR g_FUNC_window_set_fullscreen;
extern YYVAR g_FUNC_ini_close;
#ifndef __YYNODEFS
char g_pString5_0C7B2C59[] = {
0x63, 0x6f, 0x6e, 0x66, 0x69, 0x67, 0x2e, 0x69, 0x6e, 0x69, 0x00,                                    // config.ini.
};
char g_pString6_0C7B2C59[] = {
0x73, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x73, 0x00,                                                // settings.
};
char g_pString7_0C7B2C59[] = {
0x6d, 0x75, 0x74, 0x65, 0x5f, 0x6d, 0x75, 0x73, 0x69, 0x63, 0x00,                                    // mute_music.
};
char g_pString8_0C7B2C59[] = {
0x76, 0x6f, 0x6c, 0x75, 0x6d, 0x65, 0x5f, 0x6c, 0x65, 0x76, 0x65, 0x6c, 0x00,                        // volume_level.
};
char g_pString9_0C7B2C59[] = {
0x66, 0x75, 0x6c, 0x6c, 0x73, 0x63, 0x72, 0x65, 0x65, 0x6e, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x00,      // fullscreen_mode.
     // 
};
char g_pString10_0C7B2C59[] = {
0x73, 0x6d, 0x6f, 0x6f, 0x74, 0x68, 0x69, 0x6e, 0x67, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x00,            // smoothing_mode.
};
char g_pString11_0C7B2C59[] = {
0x63, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x73, 0x00,                                                // controls.
};
char g_pString12_0C7B2C59[] = {
0x6c, 0x65, 0x66, 0x74, 0x00,                                                                        // left.
};
char g_pString13_0C7B2C59[] = {
0x72, 0x69, 0x67, 0x68, 0x74, 0x00,                                                                  // right.
};
char g_pString14_0C7B2C59[] = {
0x75, 0x70, 0x00,                                                                                    // up.
};
char g_pString15_0C7B2C59[] = {
0x64, 0x6f, 0x77, 0x6e, 0x00,                                                                        // down.
};
char g_pString16_0C7B2C59[] = {
0x6a, 0x75, 0x6d, 0x70, 0x00,                                                                        // jump.
};
char g_pString17_0C7B2C59[] = {
0x73, 0x68, 0x6f, 0x6f, 0x74, 0x00,                                                                  // shoot.
};
char g_pString18_0C7B2C59[] = {
0x72, 0x65, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00,                                                      // restart.
};
char g_pString19_0C7B2C59[] = {
0x73, 0x6b, 0x69, 0x70, 0x00,                                                                        // skip.
};
char g_pString20_0C7B2C59[] = {
0x73, 0x75, 0x69, 0x63, 0x69, 0x64, 0x65, 0x00,                                                      // suicide.
};
char g_pString21_0C7B2C59[] = {
0x70, 0x61, 0x75, 0x73, 0x65, 0x00,                                                                  // pause.
};
char g_pString22_0C7B2C59[] = {
0x61, 0x6c, 0x69, 0x67, 0x6e, 0x5f, 0x6c, 0x65, 0x66, 0x74, 0x00,                                    // align_left.
};
char g_pString23_0C7B2C59[] = {
0x61, 0x6c, 0x69, 0x67, 0x6e, 0x5f, 0x72, 0x69, 0x67, 0x68, 0x74, 0x00,                              // align_right.
};
char g_pString24_0C7B2C59[] = {
0x63, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c, 0x65, 0x72, 0x00,                                    // controller.
};
char g_pString25_0C7B2C59[] = {
0x69, 0x6e, 0x64, 0x65, 0x78, 0x00,                                                                  // index.
};
DValue gs_constArg0_0C7B2C59 = { 0, 0, VALUE_REAL };
DValue gs_constArg1_0C7B2C59 = { 100, 0, VALUE_REAL };
#else
extern char g_pString5_0C7B2C59[];
extern char g_pString6_0C7B2C59[];
extern char g_pString7_0C7B2C59[];
extern char g_pString8_0C7B2C59[];
extern char g_pString9_0C7B2C59[];
extern char g_pString10_0C7B2C59[];
extern char g_pString11_0C7B2C59[];
extern char g_pString12_0C7B2C59[];
extern char g_pString13_0C7B2C59[];
extern char g_pString14_0C7B2C59[];
extern char g_pString15_0C7B2C59[];
extern char g_pString16_0C7B2C59[];
extern char g_pString17_0C7B2C59[];
extern char g_pString18_0C7B2C59[];
extern char g_pString19_0C7B2C59[];
extern char g_pString20_0C7B2C59[];
extern char g_pString21_0C7B2C59[];
extern char g_pString22_0C7B2C59[];
extern char g_pString23_0C7B2C59[];
extern char g_pString24_0C7B2C59[];
extern char g_pString25_0C7B2C59[];
extern DValue gs_constArg0_0C7B2C59;
extern DValue gs_constArg1_0C7B2C59;
#endif // __YYNODEFS

YYRValue& gml_Script_scrLoadConfig( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrLoadConfig( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrLoadConfig", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue & global_muteMusic = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_muteMusic);
YYRValue & global_volumeLevel = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_volumeLevel);
YYRValue & global_fullscreenMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_fullscreenMode);
YYRValue & global_smoothingMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_smoothingMode);
YYRValue & global_leftButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_leftButton);
YYRValue & global_rightButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_rightButton);
YYRValue & global_upButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_upButton);
YYRValue & global_downButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_downButton);
YYRValue & global_jumpButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_jumpButton);
YYRValue & global_shootButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_shootButton);
YYRValue & global_restartButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_restartButton);
YYRValue & global_skipButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_skipButton);
YYRValue & global_suicideButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_suicideButton);
YYRValue & global_pauseButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_pauseButton);
YYRValue & global_alignLeftButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_alignLeftButton);
YYRValue & global_alignRightButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_alignRightButton);
YYRValue & global_menuLeftButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuLeftButton);
YYRValue & global_menuRightButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuRightButton);
YYRValue & global_menuUpButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuUpButton);
YYRValue & global_menuDownButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuDownButton);
YYRValue & global_menuAcceptButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuAcceptButton);
YYRValue & global_menuBackButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuBackButton);
YYRValue & global_menuOptionsButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuOptionsButton);
YYRValue & global_controllerIndex = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_controllerIndex);
YYRValue __ret1__(0);
YYRValue __ret2__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrLoadConfig.val );

static bool sInitialised = false;

YY_STACKTRACE_LINE(5);
YYGML_ini_open((const char*)(const char*)g_pString5_0C7B2C59);
;

YY_STACKTRACE_LINE(8);
(global_muteMusic)=YYGML_ini_read_real((const char*)(const char*)g_pString6_0C7B2C59,(const char*)(const char*)g_pString7_0C7B2C59,(double)0);
;

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = YYGML_ini_read_real((const char*)(const char*)g_pString6_0C7B2C59,(const char*)(const char*)g_pString8_0C7B2C59,(double)100);
__pArgs__[0] = &__Args__[0];
__Args__[1] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_floor.val,&__pArgs__[0]);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_0C7B2C59;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_0C7B2C59;
__pArgs__[3] = &__Args__[3];
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_volumeLevel))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_clamp.val,&__pArgs__[1]);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
__Args__[0] = ((global_volumeLevel) / (double)100);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_audio_master_gain.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(13);
(global_fullscreenMode)=YYGML_ini_read_real((const char*)(const char*)g_pString6_0C7B2C59,(const char*)(const char*)g_pString9_0C7B2C59,(double)0);
;

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret1__ );
__Args__[0] = (global_fullscreenMode);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_window_set_fullscreen.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(16);
(global_smoothingMode)=YYGML_ini_read_real((const char*)(const char*)g_pString6_0C7B2C59,(const char*)(const char*)g_pString10_0C7B2C59,(double)0);
;


YY_STACKTRACE_LINE(19);
YYGML_array_set_owner((long)624337);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_leftButton))((int)(0))=YYGML_ini_read_real((const char*)(const char*)g_pString11_0C7B2C59,(const char*)(const char*)g_pString12_0C7B2C59,(double)37);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(20);
YYGML_array_set_owner((long)624338);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_rightButton))((int)(0))=YYGML_ini_read_real((const char*)(const char*)g_pString11_0C7B2C59,(const char*)(const char*)g_pString13_0C7B2C59,(double)39);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(21);
YYGML_array_set_owner((long)624339);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_upButton))((int)(0))=YYGML_ini_read_real((const char*)(const char*)g_pString11_0C7B2C59,(const char*)(const char*)g_pString14_0C7B2C59,(double)38);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(22);
YYGML_array_set_owner((long)624340);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_downButton))((int)(0))=YYGML_ini_read_real((const char*)(const char*)g_pString11_0C7B2C59,(const char*)(const char*)g_pString15_0C7B2C59,(double)40);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(23);
YYGML_array_set_owner((long)624341);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_jumpButton))((int)(0))=YYGML_ini_read_real((const char*)(const char*)g_pString11_0C7B2C59,(const char*)(const char*)g_pString16_0C7B2C59,(double)16);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(24);
YYGML_array_set_owner((long)624342);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_shootButton))((int)(0))=YYGML_ini_read_real((const char*)(const char*)g_pString11_0C7B2C59,(const char*)(const char*)g_pString17_0C7B2C59,(double)90);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(25);
YYGML_array_set_owner((long)624343);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_restartButton))((int)(0))=YYGML_ini_read_real((const char*)(const char*)g_pString11_0C7B2C59,(const char*)(const char*)g_pString18_0C7B2C59,(double)82);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(26);
YYGML_array_set_owner((long)624344);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_skipButton))((int)(0))=YYGML_ini_read_real((const char*)(const char*)g_pString11_0C7B2C59,(const char*)(const char*)g_pString19_0C7B2C59,(double)83);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(27);
YYGML_array_set_owner((long)624345);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_suicideButton))((int)(0))=YYGML_ini_read_real((const char*)(const char*)g_pString11_0C7B2C59,(const char*)(const char*)g_pString20_0C7B2C59,(double)81);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(28);
YYGML_array_set_owner((long)624346);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_pauseButton))((int)(0))=YYGML_ini_read_real((const char*)(const char*)g_pString11_0C7B2C59,(const char*)(const char*)g_pString21_0C7B2C59,(double)80);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(29);
YYGML_array_set_owner((long)624347);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_alignLeftButton))((int)(0))=YYGML_ini_read_real((const char*)(const char*)g_pString11_0C7B2C59,(const char*)(const char*)g_pString22_0C7B2C59,(double)65);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(30);
YYGML_array_set_owner((long)624348);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_alignRightButton))((int)(0))=YYGML_ini_read_real((const char*)(const char*)g_pString11_0C7B2C59,(const char*)(const char*)g_pString23_0C7B2C59,(double)68);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(33);
YYGML_array_set_owner((long)624349);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuLeftButton))((int)(0))=37;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(34);
YYGML_array_set_owner((long)624350);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuRightButton))((int)(0))=39;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(35);
YYGML_array_set_owner((long)624351);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuUpButton))((int)(0))=38;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(36);
YYGML_array_set_owner((long)624352);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuDownButton))((int)(0))=40;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(37);
YYGML_array_set_owner((long)624353);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuAcceptButton))((int)(0))=16;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(38);
YYGML_array_set_owner((long)624354);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuBackButton))((int)(0))=90;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(39);
YYGML_array_set_owner((long)624355);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuOptionsButton))((int)(0))=13;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(41);

YY_STACKTRACE_LINE(43);
(global_controllerIndex)=YYGML_ini_read_real((const char*)(const char*)g_pString24_0C7B2C59,(const char*)(const char*)g_pString25_0C7B2C59,(double)-1);
;


YY_STACKTRACE_LINE(44);
YYGML_array_set_owner((long)624337);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_leftButton))((int)(1))=YYGML_ini_read_real((const char*)(const char*)g_pString24_0C7B2C59,(const char*)(const char*)g_pString12_0C7B2C59,(double)32783);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(45);
YYGML_array_set_owner((long)624338);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_rightButton))((int)(1))=YYGML_ini_read_real((const char*)(const char*)g_pString24_0C7B2C59,(const char*)(const char*)g_pString13_0C7B2C59,(double)32784);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(46);
YYGML_array_set_owner((long)624339);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_upButton))((int)(1))=YYGML_ini_read_real((const char*)(const char*)g_pString24_0C7B2C59,(const char*)(const char*)g_pString14_0C7B2C59,(double)32781);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(47);
YYGML_array_set_owner((long)624340);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_downButton))((int)(1))=YYGML_ini_read_real((const char*)(const char*)g_pString24_0C7B2C59,(const char*)(const char*)g_pString15_0C7B2C59,(double)32782);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(48);
YYGML_array_set_owner((long)624341);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_jumpButton))((int)(1))=YYGML_ini_read_real((const char*)(const char*)g_pString24_0C7B2C59,(const char*)(const char*)g_pString16_0C7B2C59,(double)32769);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(49);
YYGML_array_set_owner((long)624342);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_shootButton))((int)(1))=YYGML_ini_read_real((const char*)(const char*)g_pString24_0C7B2C59,(const char*)(const char*)g_pString17_0C7B2C59,(double)32771);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(50);
YYGML_array_set_owner((long)624343);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_restartButton))((int)(1))=YYGML_ini_read_real((const char*)(const char*)g_pString24_0C7B2C59,(const char*)(const char*)g_pString18_0C7B2C59,(double)32772);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(51);
YYGML_array_set_owner((long)624344);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_skipButton))((int)(1))=YYGML_ini_read_real((const char*)(const char*)g_pString24_0C7B2C59,(const char*)(const char*)g_pString19_0C7B2C59,(double)32770);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(52);
YYGML_array_set_owner((long)624345);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_suicideButton))((int)(1))=YYGML_ini_read_real((const char*)(const char*)g_pString24_0C7B2C59,(const char*)(const char*)g_pString20_0C7B2C59,(double)32777);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(53);
YYGML_array_set_owner((long)624346);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_pauseButton))((int)(1))=YYGML_ini_read_real((const char*)(const char*)g_pString24_0C7B2C59,(const char*)(const char*)g_pString21_0C7B2C59,(double)32778);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(54);
YYGML_array_set_owner((long)624347);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_alignLeftButton))((int)(1))=YYGML_ini_read_real((const char*)(const char*)g_pString24_0C7B2C59,(const char*)(const char*)g_pString22_0C7B2C59,(double)32773);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(55);
YYGML_array_set_owner((long)624348);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_alignRightButton))((int)(1))=YYGML_ini_read_real((const char*)(const char*)g_pString24_0C7B2C59,(const char*)(const char*)g_pString23_0C7B2C59,(double)32774);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(58);
YYGML_array_set_owner((long)624349);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuLeftButton))((int)(1))=32783;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(59);
YYGML_array_set_owner((long)624350);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuRightButton))((int)(1))=32784;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(60);
YYGML_array_set_owner((long)624351);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuUpButton))((int)(1))=32781;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(61);
YYGML_array_set_owner((long)624352);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuDownButton))((int)(1))=32782;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(62);
YYGML_array_set_owner((long)624353);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuAcceptButton))((int)(1))=32769;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(63);
YYGML_array_set_owner((long)624354);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuBackButton))((int)(1))=32770;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(64);
YYGML_array_set_owner((long)624355);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuOptionsButton))((int)(1))=32777;
PopContextStack(2)
;
;
;
;

YY_STACKTRACE_LINE(67);
FREE_RValue( &__ret1__ );
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_ini_close.val,NULL);
;

YY_STACKTRACE_LINE(69);
FREE_RValue( &__ret1__ );
gml_Script_scrSaveConfig(pSelf,pOther,__ret1__,0,NULL);
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrLoadConfig( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrLoadConfig( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrLoadConfig", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sself_scrLoadConfig_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrLoadConfig); /* set ContextID to 3 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrLoadConfig_4ABE50B2)) = (YYRValue(gml_Script_scrLoadConfig, pSelf)), PopContextStack();
;
return _result;
}
#endif
