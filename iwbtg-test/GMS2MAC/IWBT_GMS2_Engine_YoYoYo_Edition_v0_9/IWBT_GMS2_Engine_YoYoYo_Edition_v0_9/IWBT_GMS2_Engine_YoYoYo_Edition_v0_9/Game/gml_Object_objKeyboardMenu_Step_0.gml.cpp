#include "pch.hpp"
YYRValue& gml_Script_scrButtonCheckPressed( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrSaveConfig( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrAnyControllerButtonPressed( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrGetKeyStr( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_layer;
extern YYVAR g_VAR_alarm;
extern YYVAR g_VAR_keyboard_key;
extern YYVAR g_Script_gml_Object_objKeyboardMenu_Step_0;
extern YYVAR g_FUNC_audio_play_sound;
extern YYVAR g_FUNC_instance_create_layer;
extern YYVAR g_FUNC_keyboard_check_pressed;
#ifndef __YYNODEFS
char g_pString419_D08174D3[] = {
0x00,                                                                                                // .
};
DValue gs_constArg0_D08174D3 = { 0, 0, VALUE_REAL };
DValue gs_constArg1_D08174D3 = { 3, 0, VALUE_REAL };
DValue gs_constArg2_D08174D3 = { 1, 0, VALUE_REAL };
#else
extern char g_pString419_D08174D3[];
extern DValue gs_constArg0_D08174D3;
extern DValue gs_constArg1_D08174D3;
extern DValue gs_constArg2_D08174D3;
#endif // __YYNODEFS

void gml_Object_objKeyboardMenu_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objKeyboardMenu_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objKeyboardMenu_Step_0", 0 );
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
YYRValue global_builtin_keyboard_key;
YYRValue local_keyChange;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YYRValue* sself_playerIndex = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_playerIndex); /* set ContextID to 98 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_playerIndex))=((/* First usage */(*sself_playerIndex) + 0.2) % 4);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(7);
YYRValue* sself_settingKey = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_settingKey); /* set ContextID to sself_settingKey */
if(!((BOOL_RValue( /* First usage */(*sself_settingKey) )))) {

YY_STACKTRACE_LINE(7);

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuUpButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(8);

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constArg0_D08174D3;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_D08174D3;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg0_D08174D3;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_audio_play_sound.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(10);
YYRValue* sself_keySelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_keySelect); /* set ContextID to 899 */
/* First usage */(*sself_keySelect)-=1;
;

if(((*sself_keySelect) < 0)) {

YY_STACKTRACE_LINE(11);

YY_STACKTRACE_LINE(12);
sself_keySelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_keySelect); /* set ContextID to 900 */
(*sself_keySelect)=10;
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
__Args__[1] = (YYRValue*)&gs_constArg0_D08174D3;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_D08174D3;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg0_D08174D3;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_audio_play_sound.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(16);
YYRValue* sself_keySelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_keySelect); /* set ContextID to 902 */
/* context id changed from 900 to 902*/(*sself_keySelect)+=1;
;

if(((*sself_keySelect) > 10)) {

YY_STACKTRACE_LINE(17);

YY_STACKTRACE_LINE(18);
sself_keySelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_keySelect); /* set ContextID to 903 */
(*sself_keySelect)=0;
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
__Args__[3] = (YYRValue*)&gs_constArg1_D08174D3;
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

YY_STACKTRACE_LINE(25);
YYRValue* sself_keySelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_keySelect); /* set ContextID to 907 */
if((/* context id changed from 903 to 907*/(*sself_keySelect) != 10)) {

YY_STACKTRACE_LINE(25);

YY_STACKTRACE_LINE(26);
sself_settingKey = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_settingKey); /* set ContextID to 908 */
(*sself_settingKey)=1;
;
;
}
else {

YY_STACKTRACE_LINE(27);


YY_STACKTRACE_LINE(28);
YYGML_array_set_owner((long)231121);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_leftButton))((int)(0))=37;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(29);
YYGML_array_set_owner((long)231122);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_rightButton))((int)(0))=39;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(30);
YYGML_array_set_owner((long)231123);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_upButton))((int)(0))=38;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(31);
YYGML_array_set_owner((long)231124);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_downButton))((int)(0))=40;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(32);
YYGML_array_set_owner((long)231125);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_jumpButton))((int)(0))=16;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(33);
YYGML_array_set_owner((long)231126);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_shootButton))((int)(0))=90;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(34);
YYGML_array_set_owner((long)231127);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_restartButton))((int)(0))=82;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(35);
YYGML_array_set_owner((long)231128);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_skipButton))((int)(0))=83;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(36);
YYGML_array_set_owner((long)231129);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_suicideButton))((int)(0))=81;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(37);
YYGML_array_set_owner((long)231130);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_pauseButton))((int)(0))=80;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(40);
YYRValue* sself_resetPrompt = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_resetPrompt); /* set ContextID to 909 */
(*sself_resetPrompt)=1;
;


YY_STACKTRACE_LINE(41);
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
}
;
}
;
}
;
;
}
else {

YY_STACKTRACE_LINE(44);

YY_STACKTRACE_LINE(45);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg2_D08174D3;
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(45);

YY_STACKTRACE_LINE(46);
;

YY_STACKTRACE_LINE(48);
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_keyboard_key.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_keyboard_key );
local_keyChange=/* First usage */global_builtin_keyboard_key;
;

YY_STACKTRACE_LINE(51);
bool sc414 = false;
if ((/* local */local_keyChange == 160)) { sc414=true; } else 
{
sc414 = ((/* local */local_keyChange == 161));
 } 

if(sc414) {

YY_STACKTRACE_LINE(52);
local_keyChange=16;
;
}
;

YY_STACKTRACE_LINE(55);
YYRValue* sself_keySelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_keySelect); /* set ContextID to 922 */
YYRValue ___sw415___ = (/* context id changed from 907 to 922*/(*sself_keySelect));
int ___swc416___ = -1;
static SYYCaseEntry ___swcase417___[] = {
{ YYRValue(YYRValue(0)), 0},
{ YYRValue(YYRValue(1)), 1},
{ YYRValue(YYRValue(2)), 2},
{ YYRValue(YYRValue(3)), 3},
{ YYRValue(YYRValue(4)), 4},
{ YYRValue(YYRValue(5)), 5},
{ YYRValue(YYRValue(6)), 6},
{ YYRValue(YYRValue(7)), 7},
{ YYRValue(YYRValue(8)), 8},
{ YYRValue(YYRValue(9)), 9},
};
for( int ___swcount418___=0; ___swcount418___<sizeof(___swcase417___)/sizeof(___swcase417___[0]); ++___swcount418___) {
	if (___swcase417___[___swcount418___].entry == ___sw415___) {
		___swc416___ = ___swcase417___[___swcount418___].value;
		break;
	}
}
switch( ___swc416___ ) {
case 0: {


YY_STACKTRACE_LINE(57);
YYGML_array_set_owner((long)231121);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_leftButton))((int)(0))=/* local */local_keyChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(58);
break;
;
}
case 1: {


YY_STACKTRACE_LINE(60);
YYGML_array_set_owner((long)231122);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_rightButton))((int)(0))=/* local */local_keyChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(61);
break;
;
}
case 2: {


YY_STACKTRACE_LINE(63);
YYGML_array_set_owner((long)231123);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_upButton))((int)(0))=/* local */local_keyChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(64);
break;
;
}
case 3: {


YY_STACKTRACE_LINE(66);
YYGML_array_set_owner((long)231124);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_downButton))((int)(0))=/* local */local_keyChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(67);
break;
;
}
case 4: {


YY_STACKTRACE_LINE(69);
YYGML_array_set_owner((long)231125);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_jumpButton))((int)(0))=/* local */local_keyChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(70);
break;
;
}
case 5: {


YY_STACKTRACE_LINE(72);
YYGML_array_set_owner((long)231126);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_shootButton))((int)(0))=/* local */local_keyChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(73);
break;
;
}
case 6: {


YY_STACKTRACE_LINE(75);
YYGML_array_set_owner((long)231127);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_restartButton))((int)(0))=/* local */local_keyChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(76);
break;
;
}
case 7: {


YY_STACKTRACE_LINE(78);
YYGML_array_set_owner((long)231128);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_skipButton))((int)(0))=/* local */local_keyChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(79);
break;
;
}
case 8: {


YY_STACKTRACE_LINE(81);
YYGML_array_set_owner((long)231129);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_suicideButton))((int)(0))=/* local */local_keyChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(82);
break;
;
}
case 9: {


YY_STACKTRACE_LINE(84);
YYGML_array_set_owner((long)231130);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_pauseButton))((int)(0))=/* local */local_keyChange;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(85);
break;
;
}
}
;

YY_STACKTRACE_LINE(88);
sself_settingKey = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_settingKey); /* set ContextID to 922 */
(*sself_settingKey)=0;
;
;
}
else {

FREE_RValue( &__ret1__ );
if((gml_Script_scrAnyControllerButtonPressed(pSelf,pOther,__ret1__,0,NULL) != -1)) {

YY_STACKTRACE_LINE(89);

YY_STACKTRACE_LINE(90);
sself_settingKey = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_settingKey); /* set ContextID to 946 */
(*sself_settingKey)=0;
;
;
}
;
}
;
;
}
;


YY_STACKTRACE_LINE(95);
YYGML_array_set_owner((long)165687);
;

FREE_RValue( &__ret1__ );
YYRValue* sself_strKey_62DEE183 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strKey); /* set ContextID to 98 */
__Args__[0] = /* volatile */(global_leftButton)[(int)(0)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strKey_62DEE183))((int)(0))=gml_Script_scrGetKeyStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(96);
FREE_RValue( &__ret1__ );
YYRValue* sself_strKey_7BC5D0C2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strKey); /* set ContextID to 98 */
__Args__[0] = /* volatile */(global_rightButton)[(int)(0)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strKey_7BC5D0C2))((int)(1))=gml_Script_scrGetKeyStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(97);
FREE_RValue( &__ret1__ );
YYRValue* sself_strKey_50E88301 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strKey); /* set ContextID to 98 */
__Args__[0] = /* volatile */(global_upButton)[(int)(0)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strKey_50E88301))((int)(2))=gml_Script_scrGetKeyStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(98);
FREE_RValue( &__ret1__ );
YYRValue* sself_strKey_49F3B240 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strKey); /* set ContextID to 98 */
__Args__[0] = /* volatile */(global_downButton)[(int)(0)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strKey_49F3B240))((int)(3))=gml_Script_scrGetKeyStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(99);
FREE_RValue( &__ret1__ );
YYRValue* sself_strKey_06B22487 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strKey); /* set ContextID to 98 */
__Args__[0] = /* volatile */(global_jumpButton)[(int)(0)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strKey_06B22487))((int)(4))=gml_Script_scrGetKeyStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(100);
FREE_RValue( &__ret1__ );
YYRValue* sself_strKey_1FA915C6 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strKey); /* set ContextID to 98 */
__Args__[0] = /* volatile */(global_shootButton)[(int)(0)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strKey_1FA915C6))((int)(5))=gml_Script_scrGetKeyStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(101);
FREE_RValue( &__ret1__ );
YYRValue* sself_strKey_34844605 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strKey); /* set ContextID to 98 */
__Args__[0] = /* volatile */(global_restartButton)[(int)(0)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strKey_34844605))((int)(6))=gml_Script_scrGetKeyStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(102);
FREE_RValue( &__ret1__ );
YYRValue* sself_strKey_2D9F7744 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strKey); /* set ContextID to 98 */
__Args__[0] = /* volatile */(global_skipButton)[(int)(0)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strKey_2D9F7744))((int)(7))=gml_Script_scrGetKeyStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(103);
FREE_RValue( &__ret1__ );
YYRValue* sself_strKey_AA076B8B = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strKey); /* set ContextID to 98 */
__Args__[0] = /* volatile */(global_suicideButton)[(int)(0)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strKey_AA076B8B))((int)(8))=gml_Script_scrGetKeyStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(104);
FREE_RValue( &__ret1__ );
YYRValue* sself_strKey_B31C5ACA = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strKey); /* set ContextID to 98 */
__Args__[0] = /* volatile */(global_pauseButton)[(int)(0)];
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strKey_B31C5ACA))((int)(9))=gml_Script_scrGetKeyStr(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(106);
YYRValue* sself_strKey_A0592A2E = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_strKey); /* set ContextID to 98 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_strKey_A0592A2E))((int)(10))=(const char*)g_pString419_D08174D3;
PopContextStack(2)
;
;
}
#endif
