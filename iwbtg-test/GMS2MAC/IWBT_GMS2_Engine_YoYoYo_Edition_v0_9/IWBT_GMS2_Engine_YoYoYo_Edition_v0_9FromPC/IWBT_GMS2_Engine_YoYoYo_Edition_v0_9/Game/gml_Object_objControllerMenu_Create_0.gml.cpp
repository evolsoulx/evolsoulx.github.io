#include "pch.hpp"
YYRValue& gml_Script_scrGetControllerStr( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Object_objControllerMenu_Create_0;
extern YYVAR g_FUNC_string;
#ifndef __YYNODEFS
char g_pString429_7BD8D9D2[] = {
0x43, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c, 0x65, 0x72, 0x20, 0x49, 0x6e, 0x64, 0x65, 0x78,      // Controller Index
0x00,                                                                                                // .
};
char g_pString430_7BD8D9D2[] = {
0x4c, 0x65, 0x66, 0x74, 0x20, 0x42, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x00,                              // Left Button.
};
char g_pString431_7BD8D9D2[] = {
0x52, 0x69, 0x67, 0x68, 0x74, 0x20, 0x42, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x00,                        // Right Button.
};
char g_pString432_7BD8D9D2[] = {
0x55, 0x70, 0x20, 0x42, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x00,                                          // Up Button.
};
char g_pString433_7BD8D9D2[] = {
0x44, 0x6f, 0x77, 0x6e, 0x20, 0x42, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x00,                              // Down Button.
};
char g_pString434_7BD8D9D2[] = {
0x4a, 0x75, 0x6d, 0x70, 0x20, 0x42, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x00,                              // Jump Button.
};
char g_pString435_7BD8D9D2[] = {
0x53, 0x68, 0x6f, 0x6f, 0x74, 0x20, 0x42, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x00,                        // Shoot Button.
};
char g_pString436_7BD8D9D2[] = {
0x52, 0x65, 0x73, 0x74, 0x61, 0x72, 0x74, 0x20, 0x42, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x00,            // Restart Button.
};
char g_pString437_7BD8D9D2[] = {
0x53, 0x6b, 0x69, 0x70, 0x20, 0x42, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x00,                              // Skip Button.
};
char g_pString438_7BD8D9D2[] = {
0x53, 0x75, 0x69, 0x63, 0x69, 0x64, 0x65, 0x20, 0x42, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x00,            // Suicide Button.
};
char g_pString439_7BD8D9D2[] = {
0x50, 0x61, 0x75, 0x73, 0x65, 0x20, 0x42, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x00,                        // Pause Button.
};
char g_pString440_7BD8D9D2[] = {
0x52, 0x65, 0x73, 0x65, 0x74, 0x20, 0x43, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x73, 0x00,            // Reset Controls.
};
char g_pString441_7BD8D9D2[] = {
0x00,                                                                                                // .
};
char g_pString442_7BD8D9D2[] = {
0x44, 0x69, 0x73, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x00,                                                // Disabled.
};
#else
extern char g_pString429_7BD8D9D2[];
extern char g_pString430_7BD8D9D2[];
extern char g_pString431_7BD8D9D2[];
extern char g_pString432_7BD8D9D2[];
extern char g_pString433_7BD8D9D2[];
extern char g_pString434_7BD8D9D2[];
extern char g_pString435_7BD8D9D2[];
extern char g_pString436_7BD8D9D2[];
extern char g_pString437_7BD8D9D2[];
extern char g_pString438_7BD8D9D2[];
extern char g_pString439_7BD8D9D2[];
extern char g_pString440_7BD8D9D2[];
extern char g_pString441_7BD8D9D2[];
extern char g_pString442_7BD8D9D2[];
#endif // __YYNODEFS

void gml_Object_objControllerMenu_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objControllerMenu_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objControllerMenu_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue & global_controllerIndex = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_controllerIndex);
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
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(3);
YYRValue* sself_buttonSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_buttonSelect); /* set ContextID to 101 */
(*sself_buttonSelect)=0;
;

YY_STACKTRACE_LINE(5);
YYRValue* sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xSelector); /* set ContextID to 101 */
(*sself_xSelector)=120;
;

YY_STACKTRACE_LINE(6);
YYRValue* sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_ySelector); /* set ContextID to 101 */
(*sself_ySelector)=29;
;

YY_STACKTRACE_LINE(7);
YYRValue* sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xSeperation); /* set ContextID to 101 */
(*sself_xSeperation)=560;
;

YY_STACKTRACE_LINE(8);
YYRValue* sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_ySeperation); /* set ContextID to 101 */
(*sself_ySeperation)=40;
;

YY_STACKTRACE_LINE(10);
YYRValue* sself_settingButton = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_settingButton); /* set ContextID to 101 */
(*sself_settingButton)=0;
;

YY_STACKTRACE_LINE(11);
YYRValue* sself_resetPrompt = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_resetPrompt); /* set ContextID to 101 */
(*sself_resetPrompt)=0;
;


YY_STACKTRACE_LINE(13);
YYGML_array_set_owner((long)165683);
;

YYRValue* sself_strSelect_62DEE183 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strSelect); /* set ContextID to 101 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strSelect_62DEE183))((int)(0))=(const char*)g_pString429_7BD8D9D2;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(14);
YYRValue* sself_strSelect_7BC5D0C2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strSelect); /* set ContextID to 101 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strSelect_7BC5D0C2))((int)(1))=(const char*)g_pString430_7BD8D9D2;
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(15);
YYRValue* sself_strSelect_50E88301 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strSelect); /* set ContextID to 101 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strSelect_50E88301))((int)(2))=(const char*)g_pString431_7BD8D9D2;
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(16);
YYRValue* sself_strSelect_49F3B240 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strSelect); /* set ContextID to 101 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strSelect_49F3B240))((int)(3))=(const char*)g_pString432_7BD8D9D2;
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(17);
YYRValue* sself_strSelect_06B22487 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strSelect); /* set ContextID to 101 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strSelect_06B22487))((int)(4))=(const char*)g_pString433_7BD8D9D2;
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(18);
YYRValue* sself_strSelect_1FA915C6 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strSelect); /* set ContextID to 101 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strSelect_1FA915C6))((int)(5))=(const char*)g_pString434_7BD8D9D2;
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(19);
YYRValue* sself_strSelect_34844605 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strSelect); /* set ContextID to 101 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strSelect_34844605))((int)(6))=(const char*)g_pString435_7BD8D9D2;
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(20);
YYRValue* sself_strSelect_2D9F7744 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strSelect); /* set ContextID to 101 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strSelect_2D9F7744))((int)(7))=(const char*)g_pString436_7BD8D9D2;
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(21);
YYRValue* sself_strSelect_AA076B8B = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strSelect); /* set ContextID to 101 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strSelect_AA076B8B))((int)(8))=(const char*)g_pString437_7BD8D9D2;
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(22);
YYRValue* sself_strSelect_B31C5ACA = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strSelect); /* set ContextID to 101 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strSelect_B31C5ACA))((int)(9))=(const char*)g_pString438_7BD8D9D2;
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(23);
YYRValue* sself_strSelect_A0592A2E = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strSelect); /* set ContextID to 101 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strSelect_A0592A2E))((int)(10))=(const char*)g_pString439_7BD8D9D2;
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(24);
YYRValue* sself_strSelect_B9421B6F = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strSelect); /* set ContextID to 101 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strSelect_B9421B6F))((int)(11))=(const char*)g_pString440_7BD8D9D2;
PopContextStack(2)
;
;


YY_STACKTRACE_LINE(27);
YYGML_array_set_owner((long)165691);
;

FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_62DEE183 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 101 */
__Args__[0] = /* First usage */(global_controllerIndex);
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_62DEE183))((int)(0))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]);
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(28);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_7BC5D0C2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 101 */
__Args__[0] = /* First usage */(global_leftButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_7BC5D0C2))((int)(1))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(29);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_50E88301 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 101 */
__Args__[0] = /* First usage */(global_rightButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_50E88301))((int)(2))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(30);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_49F3B240 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 101 */
__Args__[0] = /* First usage */(global_upButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_49F3B240))((int)(3))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(31);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_06B22487 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 101 */
__Args__[0] = /* First usage */(global_downButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_06B22487))((int)(4))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(32);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_1FA915C6 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 101 */
__Args__[0] = /* First usage */(global_jumpButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_1FA915C6))((int)(5))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(33);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_34844605 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 101 */
__Args__[0] = /* First usage */(global_shootButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_34844605))((int)(6))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(34);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_2D9F7744 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 101 */
__Args__[0] = /* First usage */(global_restartButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_2D9F7744))((int)(7))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(35);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_AA076B8B = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 101 */
__Args__[0] = /* First usage */(global_skipButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_AA076B8B))((int)(8))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(36);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_B31C5ACA = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 101 */
__Args__[0] = /* First usage */(global_suicideButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_B31C5ACA))((int)(9))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(37);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_A0592A2E = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 101 */
__Args__[0] = /* First usage */(global_pauseButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_A0592A2E))((int)(10))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(38);
YYRValue* sself_strButton_B9421B6F = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 101 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_B9421B6F))((int)(11))=(const char*)g_pString441_7BD8D9D2;
PopContextStack(2)
;
;

if(((global_controllerIndex) == -1)) {

YY_STACKTRACE_LINE(40);

YY_STACKTRACE_LINE(41);
sself_strButton_62DEE183 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 1013 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_62DEE183))((int)(0))=(const char*)g_pString442_7BD8D9D2;
PopContextStack(2)
;
;
;
}
;

YY_STACKTRACE_LINE(46);
YYRValue* sself_playerIndex = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_playerIndex); /* set ContextID to 101 */
(*sself_playerIndex)=0;
;
}
#endif
