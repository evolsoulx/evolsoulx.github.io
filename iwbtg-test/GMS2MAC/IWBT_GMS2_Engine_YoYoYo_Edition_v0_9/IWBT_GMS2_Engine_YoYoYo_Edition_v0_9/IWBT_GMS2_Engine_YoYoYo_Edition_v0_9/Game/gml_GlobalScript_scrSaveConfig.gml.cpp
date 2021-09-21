#include "pch.hpp"
extern YYVAR g_Script_gml_Script_scrSaveConfig;
extern YYVAR g_Script_gml_GlobalScript_scrSaveConfig;
extern YYVAR g_FUNC_ini_close;
#ifndef __YYNODEFS
char g_pString27_5400B444[] = {
0x63, 0x6f, 0x6e, 0x66, 0x69, 0x67, 0x2e, 0x69, 0x6e, 0x69, 0x00,                                    // config.ini.
};
char g_pString28_5400B444[] = {
0x73, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x73, 0x00,                                                // settings.
};
char g_pString29_5400B444[] = {
0x6d, 0x75, 0x74, 0x65, 0x5f, 0x6d, 0x75, 0x73, 0x69, 0x63, 0x00,                                    // mute_music.
};
char g_pString30_5400B444[] = {
0x76, 0x6f, 0x6c, 0x75, 0x6d, 0x65, 0x5f, 0x6c, 0x65, 0x76, 0x65, 0x6c, 0x00,                        // volume_level.
};
char g_pString31_5400B444[] = {
0x66, 0x75, 0x6c, 0x6c, 0x73, 0x63, 0x72, 0x65, 0x65, 0x6e, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x00,      // fullscreen_mode.
     // 
};
char g_pString32_5400B444[] = {
0x73, 0x6d, 0x6f, 0x6f, 0x74, 0x68, 0x69, 0x6e, 0x67, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x00,            // smoothing_mode.
};
char g_pString33_5400B444[] = {
0x63, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x73, 0x00,                                                // controls.
};
char g_pString34_5400B444[] = {
0x6c, 0x65, 0x66, 0x74, 0x00,                                                                        // left.
};
char g_pString35_5400B444[] = {
0x72, 0x69, 0x67, 0x68, 0x74, 0x00,                                                                  // right.
};
char g_pString36_5400B444[] = {
0x75, 0x70, 0x00,                                                                                    // up.
};
char g_pString37_5400B444[] = {
0x64, 0x6f, 0x77, 0x6e, 0x00,                                                                        // down.
};
char g_pString38_5400B444[] = {
0x6a, 0x75, 0x6d, 0x70, 0x00,                                                                        // jump.
};
char g_pString39_5400B444[] = {
0x73, 0x68, 0x6f, 0x6f, 0x74, 0x00,                                                                  // shoot.
};
char g_pString40_5400B444[] = {
0x72, 0x65, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00,                                                      // restart.
};
char g_pString41_5400B444[] = {
0x73, 0x6b, 0x69, 0x70, 0x00,                                                                        // skip.
};
char g_pString42_5400B444[] = {
0x73, 0x75, 0x69, 0x63, 0x69, 0x64, 0x65, 0x00,                                                      // suicide.
};
char g_pString43_5400B444[] = {
0x70, 0x61, 0x75, 0x73, 0x65, 0x00,                                                                  // pause.
};
char g_pString44_5400B444[] = {
0x61, 0x6c, 0x69, 0x67, 0x6e, 0x5f, 0x6c, 0x65, 0x66, 0x74, 0x00,                                    // align_left.
};
char g_pString45_5400B444[] = {
0x61, 0x6c, 0x69, 0x67, 0x6e, 0x5f, 0x72, 0x69, 0x67, 0x68, 0x74, 0x00,                              // align_right.
};
char g_pString46_5400B444[] = {
0x63, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c, 0x65, 0x72, 0x00,                                    // controller.
};
char g_pString47_5400B444[] = {
0x69, 0x6e, 0x64, 0x65, 0x78, 0x00,                                                                  // index.
};
#else
extern char g_pString27_5400B444[];
extern char g_pString28_5400B444[];
extern char g_pString29_5400B444[];
extern char g_pString30_5400B444[];
extern char g_pString31_5400B444[];
extern char g_pString32_5400B444[];
extern char g_pString33_5400B444[];
extern char g_pString34_5400B444[];
extern char g_pString35_5400B444[];
extern char g_pString36_5400B444[];
extern char g_pString37_5400B444[];
extern char g_pString38_5400B444[];
extern char g_pString39_5400B444[];
extern char g_pString40_5400B444[];
extern char g_pString41_5400B444[];
extern char g_pString42_5400B444[];
extern char g_pString43_5400B444[];
extern char g_pString44_5400B444[];
extern char g_pString45_5400B444[];
extern char g_pString46_5400B444[];
extern char g_pString47_5400B444[];
#endif // __YYNODEFS

YYRValue& gml_Script_scrSaveConfig( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrSaveConfig( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrSaveConfig", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
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
YYRValue & global_controllerIndex = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_controllerIndex);
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrSaveConfig.val );

static bool sInitialised = false;

YY_STACKTRACE_LINE(5);
YYGML_ini_open((const char*)(const char*)g_pString27_5400B444);
;

YY_STACKTRACE_LINE(8);
YYGML_ini_write_real((const char*)(const char*)g_pString28_5400B444,(const char*)(const char*)g_pString29_5400B444,(double)/* First usage */(global_muteMusic).asReal());
;

YY_STACKTRACE_LINE(9);
YYGML_ini_write_real((const char*)(const char*)g_pString28_5400B444,(const char*)(const char*)g_pString30_5400B444,(double)/* First usage */(global_volumeLevel).asReal());
;

YY_STACKTRACE_LINE(10);
YYGML_ini_write_real((const char*)(const char*)g_pString28_5400B444,(const char*)(const char*)g_pString31_5400B444,(double)/* First usage */(global_fullscreenMode).asReal());
;

YY_STACKTRACE_LINE(11);
YYGML_ini_write_real((const char*)(const char*)g_pString28_5400B444,(const char*)(const char*)g_pString32_5400B444,(double)/* First usage */(global_smoothingMode).asReal());
;

YY_STACKTRACE_LINE(14);
YYGML_ini_write_real((const char*)(const char*)g_pString33_5400B444,(const char*)(const char*)g_pString34_5400B444,(double)/* First usage */(global_leftButton)[(int)(0)].asReal());
;

YY_STACKTRACE_LINE(15);
YYGML_ini_write_real((const char*)(const char*)g_pString33_5400B444,(const char*)(const char*)g_pString35_5400B444,(double)/* First usage */(global_rightButton)[(int)(0)].asReal());
;

YY_STACKTRACE_LINE(16);
YYGML_ini_write_real((const char*)(const char*)g_pString33_5400B444,(const char*)(const char*)g_pString36_5400B444,(double)/* First usage */(global_upButton)[(int)(0)].asReal());
;

YY_STACKTRACE_LINE(17);
YYGML_ini_write_real((const char*)(const char*)g_pString33_5400B444,(const char*)(const char*)g_pString37_5400B444,(double)/* First usage */(global_downButton)[(int)(0)].asReal());
;

YY_STACKTRACE_LINE(18);
YYGML_ini_write_real((const char*)(const char*)g_pString33_5400B444,(const char*)(const char*)g_pString38_5400B444,(double)/* First usage */(global_jumpButton)[(int)(0)].asReal());
;

YY_STACKTRACE_LINE(19);
YYGML_ini_write_real((const char*)(const char*)g_pString33_5400B444,(const char*)(const char*)g_pString39_5400B444,(double)/* First usage */(global_shootButton)[(int)(0)].asReal());
;

YY_STACKTRACE_LINE(20);
YYGML_ini_write_real((const char*)(const char*)g_pString33_5400B444,(const char*)(const char*)g_pString40_5400B444,(double)/* First usage */(global_restartButton)[(int)(0)].asReal());
;

YY_STACKTRACE_LINE(21);
YYGML_ini_write_real((const char*)(const char*)g_pString33_5400B444,(const char*)(const char*)g_pString41_5400B444,(double)/* First usage */(global_skipButton)[(int)(0)].asReal());
;

YY_STACKTRACE_LINE(22);
YYGML_ini_write_real((const char*)(const char*)g_pString33_5400B444,(const char*)(const char*)g_pString42_5400B444,(double)/* First usage */(global_suicideButton)[(int)(0)].asReal());
;

YY_STACKTRACE_LINE(23);
YYGML_ini_write_real((const char*)(const char*)g_pString33_5400B444,(const char*)(const char*)g_pString43_5400B444,(double)/* First usage */(global_pauseButton)[(int)(0)].asReal());
;

YY_STACKTRACE_LINE(24);
YYGML_ini_write_real((const char*)(const char*)g_pString33_5400B444,(const char*)(const char*)g_pString44_5400B444,(double)/* First usage */(global_alignLeftButton)[(int)(0)].asReal());
;

YY_STACKTRACE_LINE(25);
YYGML_ini_write_real((const char*)(const char*)g_pString33_5400B444,(const char*)(const char*)g_pString45_5400B444,(double)/* First usage */(global_alignRightButton)[(int)(0)].asReal());
;

YY_STACKTRACE_LINE(27);

YY_STACKTRACE_LINE(29);
YYGML_ini_write_real((const char*)(const char*)g_pString46_5400B444,(const char*)(const char*)g_pString47_5400B444,(double)/* First usage */(global_controllerIndex).asReal());
;

YY_STACKTRACE_LINE(30);
YYGML_ini_write_real((const char*)(const char*)g_pString46_5400B444,(const char*)(const char*)g_pString34_5400B444,(double)/* volatile */(global_leftButton)[(int)(1)].asReal());
;

YY_STACKTRACE_LINE(31);
YYGML_ini_write_real((const char*)(const char*)g_pString46_5400B444,(const char*)(const char*)g_pString35_5400B444,(double)/* volatile */(global_rightButton)[(int)(1)].asReal());
;

YY_STACKTRACE_LINE(32);
YYGML_ini_write_real((const char*)(const char*)g_pString46_5400B444,(const char*)(const char*)g_pString36_5400B444,(double)/* volatile */(global_upButton)[(int)(1)].asReal());
;

YY_STACKTRACE_LINE(33);
YYGML_ini_write_real((const char*)(const char*)g_pString46_5400B444,(const char*)(const char*)g_pString37_5400B444,(double)/* volatile */(global_downButton)[(int)(1)].asReal());
;

YY_STACKTRACE_LINE(34);
YYGML_ini_write_real((const char*)(const char*)g_pString46_5400B444,(const char*)(const char*)g_pString38_5400B444,(double)/* volatile */(global_jumpButton)[(int)(1)].asReal());
;

YY_STACKTRACE_LINE(35);
YYGML_ini_write_real((const char*)(const char*)g_pString46_5400B444,(const char*)(const char*)g_pString39_5400B444,(double)/* volatile */(global_shootButton)[(int)(1)].asReal());
;

YY_STACKTRACE_LINE(36);
YYGML_ini_write_real((const char*)(const char*)g_pString46_5400B444,(const char*)(const char*)g_pString40_5400B444,(double)/* volatile */(global_restartButton)[(int)(1)].asReal());
;

YY_STACKTRACE_LINE(37);
YYGML_ini_write_real((const char*)(const char*)g_pString46_5400B444,(const char*)(const char*)g_pString41_5400B444,(double)/* volatile */(global_skipButton)[(int)(1)].asReal());
;

YY_STACKTRACE_LINE(38);
YYGML_ini_write_real((const char*)(const char*)g_pString46_5400B444,(const char*)(const char*)g_pString42_5400B444,(double)/* volatile */(global_suicideButton)[(int)(1)].asReal());
;

YY_STACKTRACE_LINE(39);
YYGML_ini_write_real((const char*)(const char*)g_pString46_5400B444,(const char*)(const char*)g_pString43_5400B444,(double)/* volatile */(global_pauseButton)[(int)(1)].asReal());
;

YY_STACKTRACE_LINE(40);
YYGML_ini_write_real((const char*)(const char*)g_pString46_5400B444,(const char*)(const char*)g_pString44_5400B444,(double)/* volatile */(global_alignLeftButton)[(int)(1)].asReal());
;

YY_STACKTRACE_LINE(41);
YYGML_ini_write_real((const char*)(const char*)g_pString46_5400B444,(const char*)(const char*)g_pString45_5400B444,(double)/* volatile */(global_alignRightButton)[(int)(1)].asReal());
;
;

YY_STACKTRACE_LINE(44);
FREE_RValue( &__ret1__ );
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_ini_close.val,NULL);
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrSaveConfig( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrSaveConfig( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrSaveConfig", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sself_scrSaveConfig_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrSaveConfig); /* set ContextID to 4 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrSaveConfig_4ABE50B2)) = (YYRValue(gml_Script_scrSaveConfig, pSelf)), PopContextStack();
;
return _result;
}
#endif
