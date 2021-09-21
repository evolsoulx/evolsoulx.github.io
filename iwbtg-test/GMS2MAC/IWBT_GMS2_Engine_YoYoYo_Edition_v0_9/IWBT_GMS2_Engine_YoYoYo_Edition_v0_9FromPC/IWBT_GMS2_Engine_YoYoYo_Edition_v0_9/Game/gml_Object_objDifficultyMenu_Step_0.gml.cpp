#include "pch.hpp"
YYRValue& gml_Script_scrButtonCheckPressed( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrLoadGame( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Object_objDifficultyMenu_Step_0;
extern YYVAR g_FUNC_room_goto;
extern YYVAR g_FUNC_audio_play_sound;
extern YYVAR g_FUNC_file_exists;
extern YYVAR g_FUNC_string;
extern YYVAR g_FUNC_file_delete;
#ifndef __YYNODEFS
char g_pString356_E7286783[] = {
0x44, 0x61, 0x74, 0x61, 0x5c, 0x73, 0x61, 0x76, 0x65, 0x00,                                          // Data.save.
};
DValue gs_constArg0_E7286783 = { 3, 0, VALUE_REAL };
DValue gs_constArg1_E7286783 = { 0, 0, VALUE_REAL };
DValue gs_constArg2_E7286783 = { 1, 0, VALUE_REAL };
#else
extern char g_pString356_E7286783[];
extern DValue gs_constArg0_E7286783;
extern DValue gs_constArg1_E7286783;
extern DValue gs_constArg2_E7286783;
#endif // __YYNODEFS

void gml_Object_objDifficultyMenu_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objDifficultyMenu_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objDifficultyMenu_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[5];
YYRValue __Args__[5];
YYRValue & global_menuOptionsButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuOptionsButton);
YYRValue & global_menuSelectPrev = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuSelectPrev);
YYRValue & global_menuLeftButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuLeftButton);
YYRValue & global_menuRightButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuRightButton);
YYRValue & global_menuBackButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuBackButton);
YYRValue & global_menuAcceptButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuAcceptButton);
YYRValue & global_saveNum = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_saveNum);
YYRValue & global_gameStarted = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gameStarted);
YYRValue & global_autosave = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_autosave);
YYRValue & global_difficulty = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_difficulty);
YYRValue & global_startRoom = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_startRoom);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(4);
YYRValue* sself_appleIndex = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_appleIndex); /* set ContextID to 89 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_appleIndex))=((/* First usage */(*sself_appleIndex) + 0.06666666666666667) % 2);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(5);
YYRValue* sself_playerIndex = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_playerIndex); /* set ContextID to 89 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_playerIndex))=((/* First usage */(*sself_playerIndex) + 0.2) % 4);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuOptionsButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(8);


YY_STACKTRACE_LINE(9);
YYGML_array_set_owner((long)231103);
;

YYRValue* sself_fileSelect = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_fileSelect); /* set ContextID to sself_fileSelect */
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuSelectPrev))((int)(0))=/* First usage */(*sself_fileSelect);
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_E7286783;
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_room_goto.val,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(11);

YY_STACKTRACE_LINE(12);
YYRValue* sself_difSelectMode = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_difSelectMode); /* set ContextID to sself_difSelectMode */
if(!((BOOL_RValue( /* First usage */(*sself_difSelectMode) )))) {

YY_STACKTRACE_LINE(12);

YY_STACKTRACE_LINE(13);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuLeftButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(13);

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_audio_play_sound.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(15);
YYRValue* sself_fileSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_fileSelect); /* set ContextID to 718 */
/* context id changed from 714 to 718*/(*sself_fileSelect)-=1;
;

if(((*sself_fileSelect) < 0)) {

YY_STACKTRACE_LINE(16);

YY_STACKTRACE_LINE(17);
sself_fileSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_fileSelect); /* set ContextID to 719 */
(*sself_fileSelect)=2;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(19);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuRightButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(19);

YY_STACKTRACE_LINE(20);
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_audio_play_sound.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(21);
YYRValue* sself_fileSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_fileSelect); /* set ContextID to 721 */
/* context id changed from 719 to 721*/(*sself_fileSelect)+=1;
;

if(((*sself_fileSelect) > 2)) {

YY_STACKTRACE_LINE(22);

YY_STACKTRACE_LINE(23);
sself_fileSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_fileSelect); /* set ContextID to 722 */
(*sself_fileSelect)=0;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(25);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuBackButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(25);


YY_STACKTRACE_LINE(26);
YYGML_array_set_owner((long)231103);
;

(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_menuSelectPrev))((int)(0))=0;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(27);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg2_E7286783;
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_room_goto.val,&__pArgs__[0]);
;
;
}
else {

FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuAcceptButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(28);

YY_STACKTRACE_LINE(32);

YY_STACKTRACE_LINE(33);
sself_difSelectMode = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difSelectMode); /* set ContextID to 727 */
(*sself_difSelectMode)=1;
;

YY_STACKTRACE_LINE(34);
YYRValue* sself_fileSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_fileSelect); /* set ContextID to 727 */
YYRValue* sself_exists_02310BB7 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_exists); /* set ContextID to sself_exists_02310BB7 */
if(BOOL_RValue( /* First usage */(*sself_exists_02310BB7)[(int)(/* context id changed from 722 to 727*/(*sself_fileSelect))] )) {

YY_STACKTRACE_LINE(34);

YY_STACKTRACE_LINE(35);
YYRValue* sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difSelect); /* set ContextID to 729 */
(*sself_difSelect)=-1;
;
;
}
else {

YY_STACKTRACE_LINE(36);

YY_STACKTRACE_LINE(37);
YYRValue* sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difSelect); /* set ContextID to 730 */
(*sself_difSelect)=0;
;
;
}
;
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

YY_STACKTRACE_LINE(41);

YY_STACKTRACE_LINE(42);
YYRValue* sself_warnText = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_warnText); /* set ContextID to sself_warnText */
if(!((BOOL_RValue( /* First usage */(*sself_warnText) )))) {

YY_STACKTRACE_LINE(42);

YY_STACKTRACE_LINE(43);
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 717 to 732*/(global_menuLeftButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(43);

YY_STACKTRACE_LINE(44);
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_audio_play_sound.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(45);
YYRValue* sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difSelect); /* set ContextID to 733 */
/* context id changed from 730 to 733*/(*sself_difSelect)-=1;
;

bool sc354 = false;
if (((*sself_difSelect) < -1)) { sc354=true; } else 
{
bool sc355 = false;
sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difSelect); /* set ContextID to 734 */
if ((/* context id changed from 733 to 734*/(*sself_difSelect) == -1)){
YYRValue* sself_fileSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_fileSelect); /* set ContextID to 735 */
YYRValue* sself_exists_9302D77E = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_exists); /* set ContextID to sself_exists_9302D77E */
sc355 = (!((BOOL_RValue( /* First usage */(*sself_exists_9302D77E)[(int)(/* context id changed from 727 to 735*/(*sself_fileSelect))] ))));
 } 

sc354 = (sc355);
 } 

if(sc354) {

YY_STACKTRACE_LINE(46);

YY_STACKTRACE_LINE(47);
sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difSelect); /* set ContextID to 737 */
(*sself_difSelect)=3;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(50);
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 720 to 738*/(global_menuRightButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(50);

YY_STACKTRACE_LINE(51);
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_audio_play_sound.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(52);
YYRValue* sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difSelect); /* set ContextID to 739 */
/* context id changed from 737 to 739*/(*sself_difSelect)+=1;
;

if(((*sself_difSelect) > 3)) {

YY_STACKTRACE_LINE(53);

YY_STACKTRACE_LINE(54);
sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difSelect); /* set ContextID to 740 */
YYRValue* sself_fileSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_fileSelect); /* set ContextID to 740 */
YYRValue* sself_exists_EADA5B85 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_exists); /* set ContextID to sself_exists_EADA5B85 */
if(BOOL_RValue( /* First usage */(*sself_exists_EADA5B85)[(int)(/* context id changed from 735 to 740*/(*sself_fileSelect))] )) {

YY_STACKTRACE_LINE(54);

YY_STACKTRACE_LINE(55);
sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difSelect); /* set ContextID to 742 */
(*sself_difSelect)=-1;
;
;
}
else {

YY_STACKTRACE_LINE(56);

YY_STACKTRACE_LINE(57);
sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difSelect); /* set ContextID to 743 */
(*sself_difSelect)=0;
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

YY_STACKTRACE_LINE(60);
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 723 to 744*/(global_menuBackButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(60);

YY_STACKTRACE_LINE(61);
sself_difSelectMode = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difSelectMode); /* set ContextID to 745 */
(*sself_difSelectMode)=0;
;
;
}
else {

FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 726 to 746*/(global_menuAcceptButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(62);

YY_STACKTRACE_LINE(63);
YYRValue* sself_fileSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_fileSelect); /* set ContextID to 747 */
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_saveNum))=(/* context id changed from 740 to 747*/(*sself_fileSelect) + 1);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(65);
YYRValue* sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difSelect); /* set ContextID to 747 */
if((/* context id changed from 743 to 747*/(*sself_difSelect) == -1)) {

YY_STACKTRACE_LINE(65);

FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = /* context id changed from 747 to 748*/(global_saveNum);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue((const char*)g_pString356_E7286783) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[1] = &__Args__[1];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_file_exists.val,&__pArgs__[1]) )) {

YY_STACKTRACE_LINE(66);

YY_STACKTRACE_LINE(67);
FREE_RValue( &__ret3__ );
__Args__[2] = (YYRValue*)&gs_constArg2_E7286783;
__pArgs__[2] = &__Args__[2];
gml_Script_scrLoadGame(pSelf,pOther,__ret3__,1,&__pArgs__[2]);
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(69);

YY_STACKTRACE_LINE(70);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = /* context id changed from 748 to 750*/(global_saveNum);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue((const char*)g_pString356_E7286783) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[1] = &__Args__[1];
if(!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_file_exists.val,&__pArgs__[1]) )))) {

YY_STACKTRACE_LINE(70);

YY_STACKTRACE_LINE(71);
(global_gameStarted)=1;
;

YY_STACKTRACE_LINE(72);
(global_autosave)=1;
;

YY_STACKTRACE_LINE(74);
sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difSelect); /* set ContextID to 751 */
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_difficulty))=/* context id changed from 747 to 751*/(*sself_difSelect);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(76);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_startRoom);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_room_goto.val,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(77);

YY_STACKTRACE_LINE(78);
sself_warnText = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_warnText); /* set ContextID to 752 */
(*sself_warnText)=1;
;

YY_STACKTRACE_LINE(79);
YYRValue* sself_warnSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_warnSelect); /* set ContextID to 752 */
(*sself_warnSelect)=1;
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
;
}
else {

YY_STACKTRACE_LINE(83);

YY_STACKTRACE_LINE(84);
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 732 to 753*/(global_menuLeftButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(84);

YY_STACKTRACE_LINE(85);
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_audio_play_sound.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(86);
YYRValue* sself_warnSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_warnSelect); /* set ContextID to 754 */
(*sself_warnSelect)=!((BOOL_RValue( /* context id changed from 752 to 754*/(*sself_warnSelect) )));
;
;
}
else {

YY_STACKTRACE_LINE(87);
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 738 to 755*/(global_menuRightButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(87);

YY_STACKTRACE_LINE(88);
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_E7286783;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_audio_play_sound.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(89);
YYRValue* sself_warnSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_warnSelect); /* set ContextID to 756 */
(*sself_warnSelect)=!((BOOL_RValue( /* context id changed from 754 to 756*/(*sself_warnSelect) )));
;
;
}
else {

YY_STACKTRACE_LINE(90);
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 744 to 757*/(global_menuBackButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(90);

YY_STACKTRACE_LINE(91);
sself_warnText = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_warnText); /* set ContextID to 758 */
(*sself_warnText)=0;
;
;
}
else {

FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 746 to 759*/(global_menuAcceptButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(92);

YY_STACKTRACE_LINE(93);
YYRValue* sself_warnSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_warnSelect); /* set ContextID to 760 */
if(BOOL_RValue( /* context id changed from 756 to 760*/(*sself_warnSelect) )) {

YY_STACKTRACE_LINE(93);

FREE_RValue( &__ret2__ );
FREE_RValue( &__ret3__ );
__Args__[1] = /* context id changed from 750 to 761*/(global_saveNum);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue((const char*)g_pString356_E7286783) + YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,1,g_FUNC_string.val,&__pArgs__[1]));
__pArgs__[2] = &__Args__[2];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_file_exists.val,&__pArgs__[2]) )) {

YY_STACKTRACE_LINE(94);

YY_STACKTRACE_LINE(95);
FREE_RValue( &__ret4__ );
FREE_RValue( &__ret5__ );
__Args__[3] = /* context id changed from 761 to 762*/(global_saveNum);
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue((const char*)g_pString356_E7286783) + YYGML_CallLegacyFunction(pSelf,pOther,__ret5__,1,g_FUNC_string.val,&__pArgs__[3]));
__pArgs__[4] = &__Args__[4];
YYGML_CallLegacyFunction(pSelf,pOther,__ret4__,1,g_FUNC_file_delete.val,&__pArgs__[4]);
;
;
}
;

YY_STACKTRACE_LINE(98);
(global_gameStarted)=1;
;

YY_STACKTRACE_LINE(99);
(global_autosave)=1;
;

YY_STACKTRACE_LINE(101);
YYRValue* sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difSelect); /* set ContextID to 761 */
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_difficulty))=/* context id changed from 751 to 761*/(*sself_difSelect);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(103);
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 751 to 761*/(global_startRoom);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_room_goto.val,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(104);

YY_STACKTRACE_LINE(105);
sself_warnText = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_warnText); /* set ContextID to 763 */
(*sself_warnText)=0;
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
;
;
}
;
;
}
;
}
#endif
