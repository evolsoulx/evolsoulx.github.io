#include "pch.hpp"
YYRValue& gml_Script_scrButtonCheckPressed( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrSaveConfig( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrToggleMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrButtonCheck( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_layer;
extern YYVAR g_Script_gml_Object_objOptionsMenu_Step_0;
extern YYVAR g_FUNC_audio_play_sound;
extern YYVAR g_FUNC_room_goto;
extern YYVAR g_FUNC_window_set_fullscreen;
extern YYVAR g_FUNC_instance_create_layer;
extern YYVAR g_FUNC_audio_master_gain;
#ifndef __YYNODEFS
DValue gs_constArg0_699A94BD = { 0, 0, VALUE_REAL };
DValue gs_constArg1_699A94BD = { 2, 0, VALUE_REAL };
DValue gs_constArg2_699A94BD = { 4, 0, VALUE_REAL };
DValue gs_constArg3_699A94BD = { 5, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_699A94BD;
extern DValue gs_constArg1_699A94BD;
extern DValue gs_constArg2_699A94BD;
extern DValue gs_constArg3_699A94BD;
#endif // __YYNODEFS

void gml_Object_objOptionsMenu_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objOptionsMenu_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objOptionsMenu_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue & global_menuUpButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuUpButton);
YYRValue & global_menuDownButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuDownButton);
YYRValue & global_menuBackButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuBackButton);
YYRValue & global_menuSelectPrev = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuSelectPrev);
YYRValue & global_menuAcceptButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuAcceptButton);
YYRValue & global_fullscreenMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_fullscreenMode);
YYRValue & global_smoothingMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_smoothingMode);
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue sbuiltin_layer;
YYRValue & global_menuRightButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuRightButton);
YYRValue & global_volumeLevel = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_volumeLevel);
YYRValue & global_menuLeftButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuLeftButton);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(4);
YYRValue* sself_playerIndex = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_playerIndex); /* set ContextID to 93 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_playerIndex))=((/* First usage */(*sself_playerIndex) + 0.2) % 4);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuUpButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(7);

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constArg0_699A94BD;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_699A94BD;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg0_699A94BD;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_audio_play_sound.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(9);
YYRValue* sself_optionSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_optionSelect); /* set ContextID to 829 */
/* First usage */(*sself_optionSelect)-=1;
;

if(((*sself_optionSelect) < 0)) {

YY_STACKTRACE_LINE(10);

YY_STACKTRACE_LINE(11);
sself_optionSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_optionSelect); /* set ContextID to 830 */
YYRValue* sself_optionNum = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_optionNum); /* set ContextID to sself_optionNum */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_optionSelect))=(/* First usage */(*sself_optionNum) - 1);
PopContextStack(1)
;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(13);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuDownButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(13);

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constArg0_699A94BD;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_699A94BD;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg0_699A94BD;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_audio_play_sound.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(15);
YYRValue* sself_optionSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_optionSelect); /* set ContextID to 832 */
/* context id changed from 830 to 832*/(*sself_optionSelect)+=1;
;

YYRValue* sself_optionNum = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_optionNum); /* set ContextID to sself_optionNum */
if(((*sself_optionSelect) > (/* context id changed from 830 to 832*/(*sself_optionNum) - 1))) {

YY_STACKTRACE_LINE(16);

YY_STACKTRACE_LINE(17);
sself_optionSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_optionSelect); /* set ContextID to 833 */
(*sself_optionSelect)=0;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(19);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuBackButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(19);

YY_STACKTRACE_LINE(20);
FREE_RValue( &__ret2__ );
gml_Script_scrSaveConfig(pSelf,pOther,__ret2__,0,NULL);
;


YY_STACKTRACE_LINE(21);
YYGML_array_set_owner((long)231103);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuSelectPrev))((int)(1))=0;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(22);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg1_699A94BD;
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_room_goto.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(23);
return;
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
YYRValue* sself_optionSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_optionSelect); /* set ContextID to 838 */
if((/* context id changed from 833 to 838*/(*sself_optionSelect) == 0)) {

YY_STACKTRACE_LINE(25);

YY_STACKTRACE_LINE(26);
FREE_RValue( &__ret2__ );
gml_Script_scrToggleMusic(pSelf,pOther,__ret2__,0,NULL);
;
;
}
else {

YY_STACKTRACE_LINE(27);
sself_optionSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_optionSelect); /* set ContextID to 840 */
if((/* context id changed from 838 to 840*/(*sself_optionSelect) == 2)) {

YY_STACKTRACE_LINE(27);

YY_STACKTRACE_LINE(28);
(global_fullscreenMode)=!((BOOL_RValue( /* First usage */(global_fullscreenMode) )));
;

YY_STACKTRACE_LINE(29);
FREE_RValue( &__ret1__ );
__Args__[0] = (global_fullscreenMode);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_window_set_fullscreen.val,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(30);
sself_optionSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_optionSelect); /* set ContextID to 842 */
if((/* context id changed from 840 to 842*/(*sself_optionSelect) == 3)) {

YY_STACKTRACE_LINE(30);

YY_STACKTRACE_LINE(31);
(global_smoothingMode)=!((BOOL_RValue( /* First usage */(global_smoothingMode) )));
;
;
}
else {

YY_STACKTRACE_LINE(32);
sself_optionSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_optionSelect); /* set ContextID to 844 */
if((/* context id changed from 842 to 844*/(*sself_optionSelect) == 4)) {

YY_STACKTRACE_LINE(32);

YY_STACKTRACE_LINE(33);
FREE_RValue( &__ret1__ );
gml_Script_scrSaveConfig(pSelf,pOther,__ret1__,0,NULL);
;


YY_STACKTRACE_LINE(34);
YYGML_array_set_owner((long)231103);
;

sself_optionSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_optionSelect); /* set ContextID to 845 */
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuSelectPrev))((int)(1))=/* context id changed from 844 to 845*/(*sself_optionSelect);
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(35);
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
__Args__[3] = (YYRValue*)&gs_constArg2_699A94BD;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,4,g_FUNC_instance_create_layer.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(36);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;

YY_STACKTRACE_LINE(37);
return;
;
;
}
else {

sself_optionSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_optionSelect); /* set ContextID to 847 */
if((/* context id changed from 845 to 847*/(*sself_optionSelect) == 5)) {

YY_STACKTRACE_LINE(38);

YY_STACKTRACE_LINE(39);
FREE_RValue( &__ret1__ );
gml_Script_scrSaveConfig(pSelf,pOther,__ret1__,0,NULL);
;


YY_STACKTRACE_LINE(40);
YYGML_array_set_owner((long)231103);
;

sself_optionSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_optionSelect); /* set ContextID to 848 */
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuSelectPrev))((int)(1))=/* context id changed from 847 to 848*/(*sself_optionSelect);
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(41);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_layer.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_layer );
__Args__[0] = /* volatile */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* volatile */sbuiltin_layer;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg3_699A94BD;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,4,g_FUNC_instance_create_layer.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(42);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;

YY_STACKTRACE_LINE(43);
return;
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

YYRValue* sself_optionSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_optionSelect); /* set ContextID to 93 */
if((/* context id changed from 848 to 93*/(*sself_optionSelect) == 1)) {

YY_STACKTRACE_LINE(48);

YY_STACKTRACE_LINE(49);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuRightButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheck(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(49);

if((/* First usage */(global_volumeLevel) < 100)) {

YY_STACKTRACE_LINE(50);

YY_STACKTRACE_LINE(51);
/* context id changed from 851 to 852*/(global_volumeLevel)+=1;
;
;
}
;

YY_STACKTRACE_LINE(53);
FREE_RValue( &__ret1__ );
__Args__[0] = (/* context id changed from 852 to 851*/(global_volumeLevel) / (double)100);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_audio_master_gain.val,&__pArgs__[0]);
;
;
}
else {

FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuLeftButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheck(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(54);

if((/* context id changed from 851 to 854*/(global_volumeLevel) > 0)) {

YY_STACKTRACE_LINE(55);

YY_STACKTRACE_LINE(56);
/* context id changed from 854 to 855*/(global_volumeLevel)-=1;
;
;
}
;

YY_STACKTRACE_LINE(58);
FREE_RValue( &__ret1__ );
__Args__[0] = (/* context id changed from 855 to 854*/(global_volumeLevel) / (double)100);
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
}
#endif
