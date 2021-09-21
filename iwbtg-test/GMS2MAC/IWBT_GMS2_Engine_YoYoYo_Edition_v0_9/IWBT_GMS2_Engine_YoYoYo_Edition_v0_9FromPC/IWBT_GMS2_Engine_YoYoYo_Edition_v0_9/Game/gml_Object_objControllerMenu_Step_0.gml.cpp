#include "pch.hpp"
YYRValue& gml_Script_scrButtonCheckPressed( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrSaveConfig( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrAnyControllerButtonPressed( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrGetControllerStr( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_layer;
extern YYVAR g_VAR_alarm;
extern YYVAR g_Script_gml_Object_objControllerMenu_Step_0;
extern YYVAR g_FUNC_audio_play_sound;
extern YYVAR g_FUNC_instance_create_layer;
extern YYVAR g_FUNC_keyboard_check_pressed;
extern YYVAR g_FUNC_string;
#ifndef __YYNODEFS
char g_pString449_23CB82C9[] = {
0x00,                                                                                                // .
};
char g_pString450_23CB82C9[] = {
0x44, 0x69, 0x73, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x00,                                                // Disabled.
};
DValue gs_constArg0_23CB82C9 = { 0, 0, VALUE_REAL };
DValue gs_constArg1_23CB82C9 = { 3, 0, VALUE_REAL };
DValue gs_constArg2_23CB82C9 = { 1, 0, VALUE_REAL };
#else
extern char g_pString449_23CB82C9[];
extern char g_pString450_23CB82C9[];
extern DValue gs_constArg0_23CB82C9;
extern DValue gs_constArg1_23CB82C9;
extern DValue gs_constArg2_23CB82C9;
#endif // __YYNODEFS

void gml_Object_objControllerMenu_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objControllerMenu_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objControllerMenu_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue & global_menuUpButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuUpButton);
YYRValue & global_menuDownButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuDownButton);
YYRValue & global_menuBackButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuBackButton);
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue sbuiltin_layer;
YYRValue & global_menuAcceptButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuAcceptButton);
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
YYRValue sbuiltin_alarm_62DEE183;
YYRValue & global_menuRightButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuRightButton);
YYRValue & global_controllerIndex = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_controllerIndex);
YYRValue & global_menuLeftButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuLeftButton);
YYRValue local_buttonChange;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YYRValue* sself_playerIndex = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_playerIndex); /* set ContextID to 103 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_playerIndex))=((/* First usage */(*sself_playerIndex) + 0.2) % 4);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(7);
YYRValue* sself_settingButton = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_settingButton); /* set ContextID to sself_settingButton */
if(!((BOOL_RValue( /* First usage */(*sself_settingButton) )))) {

YY_STACKTRACE_LINE(7);

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuUpButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(8);

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constArg0_23CB82C9;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_23CB82C9;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg0_23CB82C9;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_audio_play_sound.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(10);
YYRValue* sself_buttonSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_buttonSelect); /* set ContextID to 1016 */
/* First usage */(*sself_buttonSelect)-=1;
;

if(((*sself_buttonSelect) < 0)) {

YY_STACKTRACE_LINE(11);

YY_STACKTRACE_LINE(12);
sself_buttonSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_buttonSelect); /* set ContextID to 1017 */
(*sself_buttonSelect)=11;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuDownButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(14);

YY_STACKTRACE_LINE(15);
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constArg0_23CB82C9;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_23CB82C9;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg0_23CB82C9;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_audio_play_sound.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(16);
YYRValue* sself_buttonSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_buttonSelect); /* set ContextID to 1019 */
/* context id changed from 1017 to 1019*/(*sself_buttonSelect)+=1;
;

if(((*sself_buttonSelect) > 11)) {

YY_STACKTRACE_LINE(17);

YY_STACKTRACE_LINE(18);
sself_buttonSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_buttonSelect); /* set ContextID to 1020 */
(*sself_buttonSelect)=0;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(20);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuBackButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(20);

YY_STACKTRACE_LINE(21);
FREE_RValue( &__ret2__ );
gml_Script_scrSaveConfig(pSelf,pOther,__ret2__,0,NULL);
;

YY_STACKTRACE_LINE(22);
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
__Args__[3] = (YYRValue*)&gs_constArg1_23CB82C9;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,4,g_FUNC_instance_create_layer.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(23);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
;
}
else {

FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuAcceptButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(24);

YYRValue* sself_buttonSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_buttonSelect); /* set ContextID to 1024 */
if((/* context id changed from 1020 to 1024*/(*sself_buttonSelect) != 0)) {

YY_STACKTRACE_LINE(25);

YY_STACKTRACE_LINE(26);
sself_buttonSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_buttonSelect); /* set ContextID to 1025 */
if((/* context id changed from 1024 to 1025*/(*sself_buttonSelect) != 11)) {

YY_STACKTRACE_LINE(26);

YY_STACKTRACE_LINE(27);
sself_settingButton = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_settingButton); /* set ContextID to 1026 */
(*sself_settingButton)=1;
;
;
}
else {

YY_STACKTRACE_LINE(28);


YY_STACKTRACE_LINE(29);
YYGML_array_set_owner((long)231121);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_leftButton))((int)(1))=32783;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(30);
YYGML_array_set_owner((long)231122);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_rightButton))((int)(1))=32784;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(31);
YYGML_array_set_owner((long)231123);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_upButton))((int)(1))=32781;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(32);
YYGML_array_set_owner((long)231124);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_downButton))((int)(1))=32782;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(33);
YYGML_array_set_owner((long)231125);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_jumpButton))((int)(1))=32769;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(34);
YYGML_array_set_owner((long)231126);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_shootButton))((int)(1))=32771;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(35);
YYGML_array_set_owner((long)231127);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_restartButton))((int)(1))=32772;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(36);
YYGML_array_set_owner((long)231128);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_skipButton))((int)(1))=32770;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(37);
YYGML_array_set_owner((long)231129);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_suicideButton))((int)(1))=32777;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(38);
YYGML_array_set_owner((long)231130);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_pauseButton))((int)(1))=32778;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(41);
YYRValue* sself_resetPrompt = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_resetPrompt); /* set ContextID to 1027 */
(*sself_resetPrompt)=1;
;


YY_STACKTRACE_LINE(42);
YYGML_array_set_owner((long)68062);
;

sbuiltin_alarm_62DEE183=60;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_alarm.val, (int)0, &sbuiltin_alarm_62DEE183 );
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
}
;
}
;
}
;

YYRValue* sself_buttonSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_buttonSelect); /* set ContextID to 1015 */
if((/* context id changed from 1025 to 1015*/(*sself_buttonSelect) == 0)) {

YY_STACKTRACE_LINE(48);

YY_STACKTRACE_LINE(49);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuRightButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(49);

YY_STACKTRACE_LINE(50);
/* First usage */(global_controllerIndex)+=1;
;

if(((global_controllerIndex) > 11)) {

YY_STACKTRACE_LINE(51);

YY_STACKTRACE_LINE(52);
(global_controllerIndex)=-1;
;
;
}
;
;
}
else {

FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuLeftButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(54);

YY_STACKTRACE_LINE(55);
/* context id changed from 1041 to 1043*/(global_controllerIndex)-=1;
;

if(((global_controllerIndex) < -1)) {

YY_STACKTRACE_LINE(56);

YY_STACKTRACE_LINE(57);
(global_controllerIndex)=11;
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
;
;
}
else {

YY_STACKTRACE_LINE(61);

YY_STACKTRACE_LINE(62);
FREE_RValue( &__ret1__ );
local_buttonChange=gml_Script_scrAnyControllerButtonPressed(pSelf,pOther,__ret1__,0,NULL);
;

YY_STACKTRACE_LINE(64);
if((/* local */local_buttonChange != -1)) {

YY_STACKTRACE_LINE(64);

YY_STACKTRACE_LINE(66);
YYRValue* sself_buttonSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_buttonSelect); /* set ContextID to 1046 */
YYRValue ___sw445___ = (/* context id changed from 1015 to 1046*/(*sself_buttonSelect));
int ___swc446___ = -1;
static SYYCaseEntry ___swcase447___[] = {
{ YYRValue(YYRValue(1)), 0},
{ YYRValue(YYRValue(2)), 1},
{ YYRValue(YYRValue(3)), 2},
{ YYRValue(YYRValue(4)), 3},
{ YYRValue(YYRValue(5)), 4},
{ YYRValue(YYRValue(6)), 5},
{ YYRValue(YYRValue(7)), 6},
{ YYRValue(YYRValue(8)), 7},
{ YYRValue(YYRValue(9)), 8},
{ YYRValue(YYRValue(10)), 9},
};
for( int ___swcount448___=0; ___swcount448___<sizeof(___swcase447___)/sizeof(___swcase447___[0]); ++___swcount448___) {
	if (___swcase447___[___swcount448___].entry == ___sw445___) {
		___swc446___ = ___swcase447___[___swcount448___].value;
		break;
	}
}
switch( ___swc446___ ) {
case 0: {


YY_STACKTRACE_LINE(68);
YYGML_array_set_owner((long)231121);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_leftButton))((int)(1))=/* local */local_buttonChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(69);
break;
;
}
case 1: {


YY_STACKTRACE_LINE(71);
YYGML_array_set_owner((long)231122);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_rightButton))((int)(1))=/* local */local_buttonChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(72);
break;
;
}
case 2: {


YY_STACKTRACE_LINE(74);
YYGML_array_set_owner((long)231123);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_upButton))((int)(1))=/* local */local_buttonChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(75);
break;
;
}
case 3: {


YY_STACKTRACE_LINE(77);
YYGML_array_set_owner((long)231124);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_downButton))((int)(1))=/* local */local_buttonChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(78);
break;
;
}
case 4: {


YY_STACKTRACE_LINE(80);
YYGML_array_set_owner((long)231125);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_jumpButton))((int)(1))=/* local */local_buttonChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(81);
break;
;
}
case 5: {


YY_STACKTRACE_LINE(83);
YYGML_array_set_owner((long)231126);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_shootButton))((int)(1))=/* local */local_buttonChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(84);
break;
;
}
case 6: {


YY_STACKTRACE_LINE(86);
YYGML_array_set_owner((long)231127);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_restartButton))((int)(1))=/* local */local_buttonChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(87);
break;
;
}
case 7: {


YY_STACKTRACE_LINE(89);
YYGML_array_set_owner((long)231128);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_skipButton))((int)(1))=/* local */local_buttonChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(90);
break;
;
}
case 8: {


YY_STACKTRACE_LINE(92);
YYGML_array_set_owner((long)231129);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_suicideButton))((int)(1))=/* local */local_buttonChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(93);
break;
;
}
case 9: {


YY_STACKTRACE_LINE(95);
YYGML_array_set_owner((long)231130);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_pauseButton))((int)(1))=/* local */local_buttonChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(96);
break;
;
}
}
;

YY_STACKTRACE_LINE(99);
sself_settingButton = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_settingButton); /* set ContextID to 1046 */
(*sself_settingButton)=0;
;
;
}
else {

FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg2_23CB82C9;
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(100);

YY_STACKTRACE_LINE(101);
sself_settingButton = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_settingButton); /* set ContextID to 1068 */
(*sself_settingButton)=0;
;
;
}
;
}
;
;
}
;


YY_STACKTRACE_LINE(106);
YYGML_array_set_owner((long)165691);
;

FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_62DEE183 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 103 */
__Args__[0] = /* context id changed from 1044 to 103*/(global_controllerIndex);
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_62DEE183))((int)(0))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]);
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(107);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_7BC5D0C2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 103 */
__Args__[0] = /* volatile */(global_leftButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_7BC5D0C2))((int)(1))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(108);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_50E88301 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 103 */
__Args__[0] = /* volatile */(global_rightButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_50E88301))((int)(2))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(109);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_49F3B240 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 103 */
__Args__[0] = /* volatile */(global_upButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_49F3B240))((int)(3))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(110);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_06B22487 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 103 */
__Args__[0] = /* volatile */(global_downButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_06B22487))((int)(4))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(111);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_1FA915C6 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 103 */
__Args__[0] = /* volatile */(global_jumpButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_1FA915C6))((int)(5))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(112);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_34844605 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 103 */
__Args__[0] = /* volatile */(global_shootButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_34844605))((int)(6))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(113);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_2D9F7744 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 103 */
__Args__[0] = /* volatile */(global_restartButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_2D9F7744))((int)(7))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(114);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_AA076B8B = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 103 */
__Args__[0] = /* volatile */(global_skipButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_AA076B8B))((int)(8))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(115);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_B31C5ACA = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 103 */
__Args__[0] = /* volatile */(global_suicideButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_B31C5ACA))((int)(9))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(116);
FREE_RValue( &__ret1__ );
YYRValue* sself_strButton_A0592A2E = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 103 */
__Args__[0] = /* volatile */(global_pauseButton)[(int)(1)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_A0592A2E))((int)(10))=gml_Script_scrGetControllerStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(117);
YYRValue* sself_strButton_B9421B6F = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 103 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_B9421B6F))((int)(11))=(const char*)g_pString449_23CB82C9;
PopContextStack(2)
;
;

if(((global_controllerIndex) == -1)) {

YY_STACKTRACE_LINE(119);

YY_STACKTRACE_LINE(120);
sself_strButton_62DEE183 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strButton); /* set ContextID to 1091 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strButton_62DEE183))((int)(0))=(const char*)g_pString450_23CB82C9;
PopContextStack(2)
;
;
;
}
;
}
#endif
