#include "pch.hpp"
YYRValue& gml_Script_scrButtonCheck( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrButtonCheckPressed( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrPlayerJump( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrButtonCheckReleased( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrPlayerVJump( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrPlayerShoot( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrKillPlayer( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_hspeed;
extern YYVAR self_;
extern YYVAR g_VAR_sprite_index;
extern YYVAR g_VAR_vspeed;
extern YYVAR self_s;
extern YYVAR g_VAR_gravity;
extern YYVAR g_VAR_xprevious;
extern YYVAR g_VAR_yprevious;
extern YYVAR g_Script_gml_Object_objPlayer_Step_0;
extern YYVAR g_FUNC_instance_place;
extern YYVAR g_FUNC_place_meeting;
extern YYVAR g_FUNC_audio_play_sound;
extern YYVAR g_FUNC_move_contact_solid;
extern YYVAR g_FUNC_floor;
#ifndef __YYNODEFS
DValue gs_constArg0_E7779383 = { 19, 0, VALUE_REAL };
DValue gs_constArg1_E7779383 = { 75, 0, VALUE_REAL };
DValue gs_constArg2_E7779383 = { 76, 0, VALUE_REAL };
DValue gs_constArg3_E7779383 = { 11, 0, VALUE_REAL };
DValue gs_constArg4_E7779383 = { 20, 0, VALUE_REAL };
DValue gs_constArg5_E7779383 = { 9, 0, VALUE_REAL };
DValue gs_constArg6_E7779383 = { 2, 0, VALUE_REAL };
DValue gs_constArg7_E7779383 = { 0, 0, VALUE_REAL };
DValue gs_constArg8_E7779383 = { 25, 0, VALUE_REAL };
DValue gs_constArg9_E7779383 = { 270, 0, VALUE_REAL };
DValue gs_constArg10_E7779383 = { 90, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_E7779383;
extern DValue gs_constArg1_E7779383;
extern DValue gs_constArg2_E7779383;
extern DValue gs_constArg3_E7779383;
extern DValue gs_constArg4_E7779383;
extern DValue gs_constArg5_E7779383;
extern DValue gs_constArg6_E7779383;
extern DValue gs_constArg7_E7779383;
extern DValue gs_constArg8_E7779383;
extern DValue gs_constArg9_E7779383;
extern DValue gs_constArg10_E7779383;
#endif // __YYNODEFS

void gml_Object_objPlayer_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objPlayer_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objPlayer_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[9];
YYRValue __Args__[9];
YYRValue & global_leftButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_leftButton);
YYRValue local_L;
YYRValue & global_rightButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_rightButton);
YYRValue local_R;
YYRValue local_h;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue local_slipBlockTouching;
YYRValue local_notOnBlock;
YYRValue local_onVineR;
YYRValue local_onVineL;
YYRValue sbuiltin_hspeed;
YYRValue oslipBlockTouching19E8176BD_slip;
YYRValue sbuiltin_sprite_index;
YYRValue sbuiltin_vspeed;
YYRValue local_slideBlockTouching;
YYRValue oslideBlockTouching199D30944_slide;
YYRValue & global_jumpButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_jumpButton);
YYRValue & global_shootButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_shootButton);
YYRValue & global_suicideButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_suicideButton);
YYRValue & global_adAlign = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_adAlign);
YYRValue & global_alignLeftButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_alignLeftButton);
YYRValue & global_alignRightButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_alignRightButton);
YYRValue local_moveLimit;
YYRValue sbuiltin_gravity;
YYRValue local_xLast;
YYRValue local_yLast;
YYRValue local_hLast;
YYRValue local_vLast;
YYRValue local_onSlope;
YYRValue local_slopeCheck;
YYRValue local_hTest;
YYRValue local_vTest;
YYRValue sbuiltin_xprevious;
YYRValue sbuiltin_yprevious;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(4);
bool sc480 = false;
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_leftButton);
__pArgs__[0] = &__Args__[0];
if ((bool)gml_Script_scrButtonCheck(pSelf,pOther,__ret1__,1,&__pArgs__[0])) { sc480=true; } else 
{
bool sc481 = false;
if ((bool)0){
FREE_RValue( &__ret2__ );
__Args__[1] = /* context id changed from 120 to 1129*/(global_leftButton);
__pArgs__[1] = &__Args__[1];
sc481 = ((bool)gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret2__,1,&__pArgs__[1]));
 } 

sc480 = (sc481);
 } 

local_L=sc480;
;

YY_STACKTRACE_LINE(5);
bool sc482 = false;
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_rightButton);
__pArgs__[0] = &__Args__[0];
if ((bool)gml_Script_scrButtonCheck(pSelf,pOther,__ret1__,1,&__pArgs__[0])) { sc482=true; } else 
{
bool sc483 = false;
if ((bool)0){
FREE_RValue( &__ret2__ );
__Args__[1] = /* context id changed from 120 to 1131*/(global_rightButton);
__pArgs__[1] = &__Args__[1];
sc483 = ((bool)gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret2__,1,&__pArgs__[1]));
 } 

sc482 = (sc483);
 } 

local_R=sc482;
;

YY_STACKTRACE_LINE(7);
local_h=0;
;

YYRValue* sself_frozen = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_frozen); /* set ContextID to sself_frozen */
if(!((BOOL_RValue( /* First usage */(*sself_frozen) )))) {

YY_STACKTRACE_LINE(9);

YY_STACKTRACE_LINE(10);
if(BOOL_RValue( /* local */local_R )) {

YY_STACKTRACE_LINE(10);

YY_STACKTRACE_LINE(11);
local_h=1;
;
;
}
else {

if(BOOL_RValue( /* local */local_L )) {

YY_STACKTRACE_LINE(12);

YY_STACKTRACE_LINE(13);
local_h=-1;
;
;
}
;
}
;
;
}
;

YY_STACKTRACE_LINE(18);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* First usage */sbuiltin_y + /* First usage */(global_grav));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_E7779383;
__pArgs__[2] = &__Args__[2];
local_slipBlockTouching=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_instance_place.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(21);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
local_notOnBlock=YYGML_place_free(pSelf,(float)(float)(/* volatile */sbuiltin_x.asReal()),(float)(/* volatile */sbuiltin_y + (global_grav)));
;

YY_STACKTRACE_LINE(22);
bool sc484 = false;
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x + 1);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_E7779383;
__pArgs__[2] = &__Args__[2];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0])){
sc484 = (/* local */local_notOnBlock.asBool());
 } 

local_onVineR=sc484;
;

YY_STACKTRACE_LINE(23);
bool sc485 = false;
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x - 1);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg2_E7779383;
__pArgs__[2] = &__Args__[2];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0])){
sc485 = (/* local */local_notOnBlock.asBool());
 } 

local_onVineL=sc485;
;

YY_STACKTRACE_LINE(25);
if((/* local */local_h != 0)) {

YY_STACKTRACE_LINE(25);

bool sc486 = false;
if (!((BOOL_RValue( /* local */local_onVineR )))){
sc486 = (!((BOOL_RValue( /* local */local_onVineL ))));
 } 

if(sc486) {

YY_STACKTRACE_LINE(26);

YY_STACKTRACE_LINE(27);
YYRValue* sself_xScale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xScale); /* set ContextID to 1140 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_xScale))=/* local */local_h;
PopContextStack(1)
;
;
;
}
;

bool sc488 = false;
bool sc487 = false;
if ((/* local */local_h == -1)){
sc487 = (!((BOOL_RValue( /* local */local_onVineR ))));
 } 

if (sc487) { sc488=true; } else 
{
bool sc489 = false;
if ((/* local */local_h == 1)){
sc489 = (!((BOOL_RValue( /* local */local_onVineL ))));
 } 

sc488 = (sc489);
 } 

if(sc488) {

YY_STACKTRACE_LINE(30);

YY_STACKTRACE_LINE(31);
if((/* local */local_slipBlockTouching == -4)) {

YY_STACKTRACE_LINE(31);

YY_STACKTRACE_LINE(32);
YYRValue* sself_maxHSpeed = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_maxHSpeed); /* set ContextID to sself_maxHSpeed */
sbuiltin_hspeed=(/* First usage */(*sself_maxHSpeed) * /* local */local_h);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;
;
}
else {

YY_STACKTRACE_LINE(33);

YY_STACKTRACE_LINE(34);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
YYGML_Variable_GetValue( /* local */local_slipBlockTouching, kVARID_self_slip, (int)ARRAY_INDEX_NO_INDEX, &oslipBlockTouching19E8176BD_slip );
/* volatile */sbuiltin_hspeed+=(/* First usage */oslipBlockTouching19E8176BD_slip * /* local */local_h);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;

YYRValue* sself_maxHSpeed = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_maxHSpeed); /* set ContextID to sself_maxHSpeed */
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
if(((YYGML_abs((double)/* volatile */sbuiltin_hspeed.asReal())-(/* context id changed from 1145 to 1146*/(*sself_maxHSpeed)))>g_GMLMathEpsilon )) {

YY_STACKTRACE_LINE(36);

YY_STACKTRACE_LINE(37);
sself_maxHSpeed = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_maxHSpeed); /* set ContextID to 1148 */
sbuiltin_hspeed=(/* context id changed from 1146 to 1148*/(*sself_maxHSpeed) * /* local */local_h);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
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

YY_STACKTRACE_LINE(42);
sbuiltin_sprite_index=8;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
;
;
}
else {

YY_STACKTRACE_LINE(43);

YY_STACKTRACE_LINE(44);
if((/* local */local_slipBlockTouching == -4)) {

YY_STACKTRACE_LINE(44);

YY_STACKTRACE_LINE(45);
sbuiltin_hspeed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;
;
}
else {

YY_STACKTRACE_LINE(46);

YY_STACKTRACE_LINE(47);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
if((/* volatile */sbuiltin_hspeed > 0)) {

YY_STACKTRACE_LINE(47);

YY_STACKTRACE_LINE(48);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
YYGML_Variable_GetValue( /* local */local_slipBlockTouching, kVARID_self_slip, (int)ARRAY_INDEX_NO_INDEX, &oslipBlockTouching19E8176BD_slip );
/* volatile */sbuiltin_hspeed-=/* context id changed from 1146 to 1152*/oslipBlockTouching19E8176BD_slip;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;

Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
if((/* volatile */sbuiltin_hspeed <= 0)) {

YY_STACKTRACE_LINE(50);

YY_STACKTRACE_LINE(51);
sbuiltin_hspeed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;
;
}
;
;
}
else {

Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
if((/* volatile */sbuiltin_hspeed < 0)) {

YY_STACKTRACE_LINE(53);

YY_STACKTRACE_LINE(54);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
YYGML_Variable_GetValue( /* local */local_slipBlockTouching, kVARID_self_slip, (int)ARRAY_INDEX_NO_INDEX, &oslipBlockTouching19E8176BD_slip );
/* volatile */sbuiltin_hspeed+=/* context id changed from 1152 to 1156*/oslipBlockTouching19E8176BD_slip;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;

Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
if((/* volatile */sbuiltin_hspeed >= 0)) {

YY_STACKTRACE_LINE(56);

YY_STACKTRACE_LINE(57);
sbuiltin_hspeed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
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

YY_STACKTRACE_LINE(62);
sbuiltin_sprite_index=5;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
;
;
}
;

YY_STACKTRACE_LINE(66);
YYRValue* sself_onPlatform = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onPlatform); /* set ContextID to sself_onPlatform */
if(!((BOOL_RValue( /* First usage */(*sself_onPlatform) )))) {

YY_STACKTRACE_LINE(66);

YY_STACKTRACE_LINE(67);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
if(((/* First usage */sbuiltin_vspeed * /* context id changed from 120 to 1159*/(global_grav)) < -0.05)) {

YY_STACKTRACE_LINE(67);

YY_STACKTRACE_LINE(68);
sbuiltin_sprite_index=6;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
;
;
}
else {

Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
if(((/* volatile */sbuiltin_vspeed * /* context id changed from 1159 to 1161*/(global_grav)) > 0.05)) {

YY_STACKTRACE_LINE(69);

YY_STACKTRACE_LINE(70);
sbuiltin_sprite_index=7;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
;
;
}
;
}
;
;
}
else {

YY_STACKTRACE_LINE(72);

FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* volatile */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y + (4 * /* context id changed from 1161 to 1163*/(global_grav)));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg3_E7779383;
__pArgs__[2] = &__Args__[2];
if(!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]) )))) {

YY_STACKTRACE_LINE(73);

YY_STACKTRACE_LINE(74);
sself_onPlatform = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_onPlatform); /* set ContextID to 1164 */
(*sself_onPlatform)=0;
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(79);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* volatile */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y + /* context id changed from 1163 to 120*/(global_grav));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg4_E7779383;
__pArgs__[2] = &__Args__[2];
local_slideBlockTouching=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_instance_place.val,&__pArgs__[0]);
;

if((/* local */local_slideBlockTouching != -4)) {

YY_STACKTRACE_LINE(81);

YY_STACKTRACE_LINE(82);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
YYGML_Variable_GetValue( /* local */local_slideBlockTouching, kVARID_self_slide, (int)ARRAY_INDEX_NO_INDEX, &oslideBlockTouching199D30944_slide );
/* volatile */sbuiltin_hspeed+=/* First usage */oslideBlockTouching199D30944_slide;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;
;
}
;

YYRValue* sself_maxVSpeed = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_maxVSpeed); /* set ContextID to sself_maxVSpeed */
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
if(((YYGML_abs((double)/* volatile */sbuiltin_vspeed.asReal())-(/* First usage */(*sself_maxVSpeed)))>g_GMLMathEpsilon )) {

YY_STACKTRACE_LINE(86);

YY_STACKTRACE_LINE(87);
sself_maxVSpeed = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_maxVSpeed); /* set ContextID to 1167 */
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
sbuiltin_vspeed=(YYGML_sign((double)/* volatile */sbuiltin_vspeed.asReal()) * /* context id changed from 120 to 1167*/(*sself_maxVSpeed));
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;
;
}
;

if(!((BOOL_RValue( (*sself_frozen) )))) {

YY_STACKTRACE_LINE(91);

FREE_RValue( &__ret1__ );
sself_frozen = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_frozen); /* set ContextID to 1168 */
__Args__[0] = /* First usage */(global_jumpButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(92);

YY_STACKTRACE_LINE(93);
FREE_RValue( &__ret2__ );
gml_Script_scrPlayerJump(pSelf,pOther,__ret2__,0,NULL);
;
;
}
;

FREE_RValue( &__ret1__ );
__Args__[0] = (global_jumpButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckReleased(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(95);

YY_STACKTRACE_LINE(96);
FREE_RValue( &__ret2__ );
gml_Script_scrPlayerVJump(pSelf,pOther,__ret2__,0,NULL);
;
;
}
;

FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_shootButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(98);

YY_STACKTRACE_LINE(99);
FREE_RValue( &__ret2__ );
gml_Script_scrPlayerShoot(pSelf,pOther,__ret2__,0,NULL);
;
;
}
;

FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_suicideButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(101);

YY_STACKTRACE_LINE(102);
FREE_RValue( &__ret2__ );
gml_Script_scrKillPlayer(pSelf,pOther,__ret2__,0,NULL);
;
;
}
;
;
}
;

bool sc490 = false;
if (/* First usage */(global_adAlign).asBool()){
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* volatile */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y + /* context id changed from 120 to 1173*/(global_grav));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg5_E7779383;
__pArgs__[2] = &__Args__[2];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0])){
sself_frozen = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_frozen); /* set ContextID to 1174 */
sc490 = (!((BOOL_RValue( /* context id changed from 1168 to 1174*/(*sself_frozen) ))));
 }  } 

if(sc490) {

YY_STACKTRACE_LINE(107);

FREE_RValue( &__ret2__ );
__Args__[3] = /* First usage */(global_alignLeftButton);
__pArgs__[3] = &__Args__[3];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret2__,1,&__pArgs__[3]) )) {

YY_STACKTRACE_LINE(108);

YY_STACKTRACE_LINE(109);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
/* volatile */sbuiltin_hspeed-=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;
;
}
;

FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_alignRightButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(111);

YY_STACKTRACE_LINE(112);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
/* volatile */sbuiltin_hspeed+=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;
;
}
;
;
}
;

bool sc491 = false;
if (/* local */local_onVineL.asBool()) { sc491=true; } else 
{
sc491 = (/* local */local_onVineR.asBool());
 } 

if(sc491) {

YY_STACKTRACE_LINE(117);

YY_STACKTRACE_LINE(118);
if(BOOL_RValue( /* local */local_onVineR )) {

YY_STACKTRACE_LINE(118);

YY_STACKTRACE_LINE(119);
YYRValue* sself_xScale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xScale); /* set ContextID to 1180 */
(*sself_xScale)=-1;
;
;
}
else {

YY_STACKTRACE_LINE(120);

YY_STACKTRACE_LINE(121);
YYRValue* sself_xScale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xScale); /* set ContextID to 1181 */
(*sself_xScale)=1;
;
;
}
;

YY_STACKTRACE_LINE(124);
sbuiltin_vspeed=(2 * /* context id changed from 1173 to 1179*/(global_grav));
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;

YY_STACKTRACE_LINE(125);
sbuiltin_sprite_index=9;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
;

bool sc493 = false;
bool sc492 = false;
if (/* local */local_onVineL.asBool()){
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 1131 to 1182*/(global_rightButton);
__pArgs__[0] = &__Args__[0];
sc492 = ((bool)gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]));
 } 

if (sc492) { sc493=true; } else 
{
bool sc494 = false;
if (/* local */local_onVineR.asBool()){
FREE_RValue( &__ret2__ );
__Args__[1] = /* context id changed from 1129 to 1184*/(global_leftButton);
__pArgs__[1] = &__Args__[1];
sc494 = ((bool)gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret2__,1,&__pArgs__[1]));
 } 

sc493 = (sc494);
 } 

if(sc493) {

YY_STACKTRACE_LINE(128);

YY_STACKTRACE_LINE(129);
FREE_RValue( &__ret3__ );
__Args__[2] = /* context id changed from 1168 to 1185*/(global_jumpButton);
__pArgs__[2] = &__Args__[2];
if(BOOL_RValue( gml_Script_scrButtonCheck(pSelf,pOther,__ret3__,1,&__pArgs__[2]) )) {

YY_STACKTRACE_LINE(129);

YY_STACKTRACE_LINE(130);
if(BOOL_RValue( /* local */local_onVineR )) {

YY_STACKTRACE_LINE(130);

YY_STACKTRACE_LINE(131);
sbuiltin_hspeed=-15;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;
;
}
else {

YY_STACKTRACE_LINE(132);

YY_STACKTRACE_LINE(133);
sbuiltin_hspeed=15;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;
;
}
;

YY_STACKTRACE_LINE(136);
sbuiltin_vspeed=(-9 * /* context id changed from 1179 to 1186*/(global_grav));
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;

YY_STACKTRACE_LINE(137);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg6_E7779383;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg7_E7779383;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg7_E7779383;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(138);
sbuiltin_sprite_index=6;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
;
;
}
else {

YY_STACKTRACE_LINE(139);

YY_STACKTRACE_LINE(140);
if(BOOL_RValue( /* local */local_onVineR )) {

YY_STACKTRACE_LINE(140);

YY_STACKTRACE_LINE(141);
sbuiltin_hspeed=-3;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;
;
}
else {

YY_STACKTRACE_LINE(142);

YY_STACKTRACE_LINE(143);
sbuiltin_hspeed=3;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;
;
}
;

YY_STACKTRACE_LINE(146);
sbuiltin_sprite_index=7;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
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

bool sc495 = false;
if (YYGML_instance_exists(pSelf,pOther,(int)25)){
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
sc495 = ((/* volatile */sbuiltin_hspeed != 0));
 } 

if(sc495) {

YY_STACKTRACE_LINE(153);

YY_STACKTRACE_LINE(154);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
local_moveLimit=YYGML_abs((double)/* volatile */sbuiltin_hspeed.asReal());
;

YY_STACKTRACE_LINE(156);
;

YY_STACKTRACE_LINE(157);
;

YY_STACKTRACE_LINE(158);
;

bool sc496 = false;
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_gravity.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_gravity );
__Args__[0] = (/* volatile */sbuiltin_x + /* volatile */sbuiltin_hspeed);
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((/* volatile */sbuiltin_y + /* volatile */sbuiltin_vspeed) + /* First usage */sbuiltin_gravity);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg8_E7779383;
__pArgs__[2] = &__Args__[2];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0])){
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_gravity.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_gravity );
if ((((/* volatile */sbuiltin_vspeed + /* volatile */sbuiltin_gravity) * /* context id changed from 1186 to 1194*/(global_grav)) > 0)){
sc496 = (/* local */local_notOnBlock.asBool());
 }  } 

if(sc496) {

YY_STACKTRACE_LINE(161);

YY_STACKTRACE_LINE(163);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
local_xLast=/* volatile */sbuiltin_x;
;

YY_STACKTRACE_LINE(164);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
local_yLast=/* volatile */sbuiltin_y;
;

YY_STACKTRACE_LINE(165);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
local_hLast=/* volatile */sbuiltin_hspeed;
;

YY_STACKTRACE_LINE(166);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
local_vLast=/* volatile */sbuiltin_vspeed;
;

YY_STACKTRACE_LINE(168);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_gravity.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_gravity );
/* volatile */sbuiltin_vspeed+=/* volatile */sbuiltin_gravity;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;

YY_STACKTRACE_LINE(170);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
/* volatile */sbuiltin_x+=/* volatile */sbuiltin_hspeed;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
;

YY_STACKTRACE_LINE(171);
sbuiltin_hspeed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;

Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
if(!(YYGML_place_free(pSelf,(float)(float)(/* volatile */sbuiltin_x.asReal()),(float)(/* volatile */sbuiltin_y + /* volatile */sbuiltin_vspeed)))) {

YY_STACKTRACE_LINE(174);

YY_STACKTRACE_LINE(175);
if((/* context id changed from 1194 to 1197*/(global_grav) == 1)) {

YY_STACKTRACE_LINE(175);

YY_STACKTRACE_LINE(176);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
__Args__[0] = (YYRValue*)&gs_constArg9_E7779383;
__pArgs__[0] = &__Args__[0];
__Args__[1] = YYGML_abs((double)/* volatile */sbuiltin_vspeed.asReal());
__pArgs__[1] = &__Args__[1];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_move_contact_solid.val,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(177);

YY_STACKTRACE_LINE(178);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
__Args__[0] = (YYRValue*)&gs_constArg10_E7779383;
__pArgs__[0] = &__Args__[0];
__Args__[1] = YYGML_abs((double)/* volatile */sbuiltin_vspeed.asReal());
__pArgs__[1] = &__Args__[1];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_move_contact_solid.val,&__pArgs__[0]);
;
;
}
;

YY_STACKTRACE_LINE(180);
sbuiltin_vspeed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;
;
}
;

YY_STACKTRACE_LINE(183);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
/* volatile */sbuiltin_y+=/* volatile */sbuiltin_vspeed;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
;

YY_STACKTRACE_LINE(185);
bool sc497 = false;
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
if (!(YYGML_place_free(pSelf,(float)(float)(/* volatile */sbuiltin_x.asReal()),(float)(/* volatile */sbuiltin_y + /* context id changed from 1197 to 1196*/(global_grav))))){
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
sc497 = (YYGML_place_free(pSelf,(float)(float)(/* volatile */sbuiltin_x.asReal()),(float)(float)(/* volatile */sbuiltin_y.asReal())));
 } 

if(sc497) {

YY_STACKTRACE_LINE(185);

YY_STACKTRACE_LINE(186);
YYRValue* sself_djump = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_djump); /* set ContextID to 1201 */
(*sself_djump)=1;
;

YY_STACKTRACE_LINE(187);
local_notOnBlock=0;
;
;
}
else {

YY_STACKTRACE_LINE(188);

YY_STACKTRACE_LINE(189);
sbuiltin_x=/* local */local_xLast;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
;

YY_STACKTRACE_LINE(190);
sbuiltin_y=/* local */local_yLast;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
;

YY_STACKTRACE_LINE(191);
sbuiltin_hspeed=/* local */local_hLast;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;

YY_STACKTRACE_LINE(192);
sbuiltin_vspeed=/* local */local_vLast;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;
;
}
;
;
}
;

if(!((BOOL_RValue( /* local */local_notOnBlock )))) {

YY_STACKTRACE_LINE(197);

YY_STACKTRACE_LINE(198);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* volatile */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y + /* context id changed from 1196 to 1203*/(global_grav));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg8_E7779383;
__pArgs__[2] = &__Args__[2];
local_onSlope=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(200);
local_slopeCheck=1;
;

YY_STACKTRACE_LINE(201);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
local_hTest=/* volatile */sbuiltin_hspeed;
;

while( true ) {
bool ___b498___ = (BOOL_RValue( /* local */local_slopeCheck ));
if (!___b498___) break;
{

YY_STACKTRACE_LINE(203);

YY_STACKTRACE_LINE(204);
local_vTest=0;
;

while( true ) {
bool sc501 = false;
bool sc499 = false;
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x + /* local */local_hTest);
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((/* volatile */sbuiltin_y - /* local */local_vTest) + /* context id changed from 1203 to 1206*/(global_grav));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg8_E7779383;
__pArgs__[2] = &__Args__[2];
if (!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]) )))) { sc499=true; } else 
{
bool sc500 = false;
if (/* local */local_onSlope.asBool()){
FREE_RValue( &__ret2__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[3] = (/* volatile */sbuiltin_x + /* local */local_hTest);
__pArgs__[3] = &__Args__[3];
__Args__[4] = ((/* volatile */sbuiltin_y - /* local */local_vTest) + /* context id changed from 1206 to 1208*/(global_grav));
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg5_E7779383;
__pArgs__[5] = &__Args__[5];
sc500 = (!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_place_meeting.val,&__pArgs__[3]) ))));
 } 

sc499 = (sc500);
 } 

if (sc499){
FREE_RValue( &__ret3__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
__Args__[6] = (/* local */local_moveLimit * (/* local */local_hTest / /* volatile */sbuiltin_hspeed));
__pArgs__[6] = &__Args__[6];
sc501 = (((/* local */local_vTest * /* context id changed from 1208 to 1209*/(global_grav)) > YYRValue( -YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,1,g_FUNC_floor.val,&__pArgs__[6]).asReal() )));
 } 

bool ___b502___ = (sc501);
if (!___b502___) break;
{

YY_STACKTRACE_LINE(206);

YY_STACKTRACE_LINE(207);
/* local */local_vTest-=/* context id changed from 1209 to 1210*/(global_grav);
;
;
}
}
;

YY_STACKTRACE_LINE(211);
bool sc503 = false;
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x + /* local */local_hTest);
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((/* volatile */sbuiltin_y - /* local */local_vTest) + /* context id changed from 1210 to 1205*/(global_grav));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg8_E7779383;
__pArgs__[2] = &__Args__[2];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0])) { sc503=true; } else 
{
bool sc504 = false;
if (/* local */local_onSlope.asBool()){
FREE_RValue( &__ret2__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[3] = (/* volatile */sbuiltin_x + /* local */local_hTest);
__pArgs__[3] = &__Args__[3];
__Args__[4] = ((/* volatile */sbuiltin_y - /* local */local_vTest) + /* context id changed from 1205 to 1212*/(global_grav));
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg5_E7779383;
__pArgs__[5] = &__Args__[5];
sc504 = ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_place_meeting.val,&__pArgs__[3]));
 } 

sc503 = (sc504);
 } 

if(sc503) {

YY_STACKTRACE_LINE(211);

YY_STACKTRACE_LINE(212);
bool sc505 = false;
if ((/* local */local_vTest != 0)){
FREE_RValue( &__ret3__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[6] = (/* volatile */sbuiltin_x + /* local */local_hTest);
__pArgs__[6] = &__Args__[6];
__Args__[7] = (/* volatile */sbuiltin_y - /* local */local_vTest);
__pArgs__[7] = &__Args__[7];
__Args__[8] = (YYRValue*)&gs_constArg5_E7779383;
__pArgs__[8] = &__Args__[8];
sc505 = (!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,3,g_FUNC_place_meeting.val,&__pArgs__[6]) ))));
 } 

if(sc505) {

YY_STACKTRACE_LINE(212);

YY_STACKTRACE_LINE(213);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
/* volatile */sbuiltin_y-=/* local */local_vTest;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
;

YY_STACKTRACE_LINE(215);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
/* volatile */sbuiltin_x+=/* local */local_hTest;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
;

YY_STACKTRACE_LINE(216);
sbuiltin_hspeed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;

YY_STACKTRACE_LINE(218);
local_slopeCheck=0;
;
;
}
else {

YY_STACKTRACE_LINE(219);

YY_STACKTRACE_LINE(220);
if((/* local */local_hTest > 0)) {

YY_STACKTRACE_LINE(220);

YY_STACKTRACE_LINE(221);
/* local */local_hTest-=1;
;

if((/* local */local_hTest <= 0)) {

YY_STACKTRACE_LINE(222);

YY_STACKTRACE_LINE(223);
local_slopeCheck=0;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(225);
if((/* local */local_hTest < 0)) {

YY_STACKTRACE_LINE(225);

YY_STACKTRACE_LINE(226);
/* local */local_hTest+=1;
;

if((/* local */local_hTest >= 0)) {

YY_STACKTRACE_LINE(227);

YY_STACKTRACE_LINE(228);
local_slopeCheck=0;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(230);

YY_STACKTRACE_LINE(231);
local_slopeCheck=0;
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

YY_STACKTRACE_LINE(234);

YY_STACKTRACE_LINE(235);
local_slopeCheck=0;
;
;
}
;
;
}
}
;
;
}
;

FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x + /* volatile */sbuiltin_hspeed);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg8_E7779383;
__pArgs__[2] = &__Args__[2];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(241);

YY_STACKTRACE_LINE(242);
local_slopeCheck=1;
;

YY_STACKTRACE_LINE(243);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
local_hTest=/* volatile */sbuiltin_hspeed;
;

while( true ) {
bool ___b506___ = (BOOL_RValue( /* local */local_slopeCheck ));
if (!___b506___) break;
{

YY_STACKTRACE_LINE(245);

YY_STACKTRACE_LINE(246);
local_vTest=0;
;

while( true ) {
bool sc507 = false;
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x + /* local */local_hTest);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y - /* local */local_vTest);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg8_E7779383;
__pArgs__[2] = &__Args__[2];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0])){
FREE_RValue( &__ret2__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
__Args__[3] = (/* local */local_moveLimit * (/* local */local_hTest / /* volatile */sbuiltin_hspeed));
__pArgs__[3] = &__Args__[3];
sc507 = (((/* local */local_vTest * /* context id changed from 1212 to 1228*/(global_grav)) < YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_floor.val,&__pArgs__[3])));
 } 

bool ___b508___ = (sc507);
if (!___b508___) break;
{

YY_STACKTRACE_LINE(249);

YY_STACKTRACE_LINE(250);
/* local */local_vTest+=/* context id changed from 1228 to 1229*/(global_grav);
;
;
}
}
;

YY_STACKTRACE_LINE(254);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
if(YYGML_place_free(pSelf,(float)(/* volatile */sbuiltin_x + /* local */local_hTest),(float)(/* volatile */sbuiltin_y - /* local */local_vTest))) {

YY_STACKTRACE_LINE(254);

YY_STACKTRACE_LINE(255);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
/* volatile */sbuiltin_y-=/* local */local_vTest;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
;

YY_STACKTRACE_LINE(257);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
/* volatile */sbuiltin_x+=/* local */local_hTest;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
;

YY_STACKTRACE_LINE(258);
sbuiltin_hspeed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;

YY_STACKTRACE_LINE(260);
local_slopeCheck=0;
;
;
}
else {

YY_STACKTRACE_LINE(261);

YY_STACKTRACE_LINE(262);
if((/* local */local_hTest > 0)) {

YY_STACKTRACE_LINE(262);

YY_STACKTRACE_LINE(263);
/* local */local_hTest-=1;
;

if((/* local */local_hTest <= 0)) {

YY_STACKTRACE_LINE(264);

YY_STACKTRACE_LINE(265);
local_slopeCheck=0;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(267);
if((/* local */local_hTest < 0)) {

YY_STACKTRACE_LINE(267);

YY_STACKTRACE_LINE(268);
/* local */local_hTest+=1;
;

if((/* local */local_hTest >= 0)) {

YY_STACKTRACE_LINE(269);

YY_STACKTRACE_LINE(270);
local_slopeCheck=0;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(272);

YY_STACKTRACE_LINE(273);
local_slopeCheck=0;
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
}
;
;
}
;

YY_STACKTRACE_LINE(280);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
sbuiltin_xprevious=/* volatile */sbuiltin_x;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_xprevious.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_xprevious );
;

YY_STACKTRACE_LINE(281);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
sbuiltin_yprevious=/* volatile */sbuiltin_y;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_yprevious.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_yprevious );
;
;
}
;
}
#endif
