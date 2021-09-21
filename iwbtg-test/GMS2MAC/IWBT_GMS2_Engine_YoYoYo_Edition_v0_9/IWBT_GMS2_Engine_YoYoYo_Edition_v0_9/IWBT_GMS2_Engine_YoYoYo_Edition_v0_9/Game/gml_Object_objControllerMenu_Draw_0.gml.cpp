#include "pch.hpp"
YYRValue& gml_Script_scrDrawButtonInfo( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Object_objControllerMenu_Draw_0;
extern YYVAR g_FUNC_draw_text;
extern YYVAR g_FUNC_gamepad_is_connected;
extern YYVAR g_FUNC_gamepad_get_description;
#ifndef __YYNODEFS
char g_pString455_68FD4EFD[] = {
0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x62, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x20, 0x74, 0x6f, 0x20,      // Press button to 
0x73, 0x65, 0x74, 0x00,                                                                              // set.
};
char g_pString457_68FD4EFD[] = {
0x43, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x73, 0x20, 0x72, 0x65, 0x73, 0x65, 0x74, 0x21, 0x00,      // Controls reset!.
     // 
};
char g_pString458_68FD4EFD[] = {
0x43, 0x75, 0x72, 0x72, 0x65, 0x6e, 0x74, 0x20, 0x63, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c,      // Current controll
0x65, 0x72, 0x3a, 0x20, 0x00,                                                                        // er: .
};
char g_pString459_68FD4EFD[] = {
0x4e, 0x6f, 0x6e, 0x65, 0x00,                                                                        // None.
};
DValue gs_constArg0_68FD4EFD = { 0, 0, VALUE_REAL };
#else
extern char g_pString455_68FD4EFD[];
extern char g_pString457_68FD4EFD[];
extern char g_pString458_68FD4EFD[];
extern char g_pString459_68FD4EFD[];
extern DValue gs_constArg0_68FD4EFD;
#endif // __YYNODEFS

void gml_Object_objControllerMenu_Draw_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objControllerMenu_Draw_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objControllerMenu_Draw_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue local_i;
YYRValue & global_controllerIndex = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_controllerIndex);
YYRValue local_controllerText;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(3);
YYGML_draw_set_colour((int)0);
;

YY_STACKTRACE_LINE(4);
YYGML_draw_set_font((int)1);
;

YY_STACKTRACE_LINE(5);
YYGML_draw_set_valign((int)0);
;


YY_STACKTRACE_LINE(7);
local_i=0;
;
bool ___f452___ = true;
while( true ) {
if (!___f452___) {

/* local */local_i+=1;
;
}
___f452___ = false;
bool ___b453___ = ((/* local */local_i < 12));
if (!___b453___) break;
{

YY_STACKTRACE_LINE(7);

YY_STACKTRACE_LINE(8);
YYGML_draw_set_halign((int)0);
;

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
YYRValue* sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to sself_xSelector */
YYRValue* sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to sself_ySelector */
YYRValue* sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySeperation); /* set ContextID to sself_ySeperation */
YYRValue* sself_strSelect_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_strSelect); /* set ContextID to sself_strSelect_30529165 */
__Args__[0] = /* First usage */(*sself_xSelector);
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((/* First usage */(*sself_ySelector) + (/* local */local_i * /* First usage */(*sself_ySeperation))) + 32);
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */(*sself_strSelect_30529165)[(int)(/* local */local_i)];
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(13);
YYGML_draw_set_halign((int)2);
;

bool sc454 = false;
YYRValue* sself_settingButton = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_settingButton); /* set ContextID to sself_settingButton */
if (!((BOOL_RValue( /* First usage */(*sself_settingButton) )))) { sc454=true; } else 
{
YYRValue* sself_buttonSelect = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_buttonSelect); /* set ContextID to sself_buttonSelect */
sc454 = ((/* local */local_i != /* First usage */(*sself_buttonSelect)));
 } 

if(sc454) {

YY_STACKTRACE_LINE(16);

YY_STACKTRACE_LINE(17);
FREE_RValue( &__ret1__ );
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 1098 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 1098 */
sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySeperation); /* set ContextID to 1098 */
YYRValue* sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to sself_xSeperation */
YYRValue* sself_strButton_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_strButton); /* set ContextID to sself_strButton_30529165 */
__Args__[0] = (/* context id changed from 1095 to 1098*/(*sself_xSelector) + /* First usage */(*sself_xSeperation));
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((/* context id changed from 1095 to 1098*/(*sself_ySelector) + (/* local */local_i * /* context id changed from 1095 to 1098*/(*sself_ySeperation))) + 32);
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */(*sself_strButton_30529165)[(int)(/* local */local_i)];
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
;

YYRValue* sself_buttonSelect = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_buttonSelect); /* set ContextID to sself_buttonSelect */
if((/* local */local_i == /* context id changed from 1097 to 1095*/(*sself_buttonSelect))) {

YY_STACKTRACE_LINE(21);

YY_STACKTRACE_LINE(22);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 1100 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 1100 */
sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySeperation); /* set ContextID to 1100 */
YYRValue* sself_playerIndex = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_playerIndex); /* set ContextID to sself_playerIndex */
YYGML_draw_sprite(pSelf,(int)5,(int)(int)(int64)((int)(int64)/* First usage */(*sself_playerIndex).asReal()),(float)(/* context id changed from 1098 to 1100*/(*sself_xSelector) - 20),(float)((/* context id changed from 1098 to 1100*/(*sself_ySelector) + (/* local */local_i * /* context id changed from 1098 to 1100*/(*sself_ySeperation))) + 47));
;

sself_settingButton = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_settingButton); /* set ContextID to 1100 */
if(BOOL_RValue( /* context id changed from 1095 to 1100*/(*sself_settingButton) )) {

YY_STACKTRACE_LINE(25);

YY_STACKTRACE_LINE(26);
FREE_RValue( &__ret1__ );
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 1101 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 1101 */
sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySeperation); /* set ContextID to 1101 */
YYRValue* sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to sself_xSeperation */
__Args__[0] = (/* context id changed from 1100 to 1101*/(*sself_xSelector) + /* context id changed from 1098 to 1101*/(*sself_xSeperation));
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((/* context id changed from 1100 to 1101*/(*sself_ySelector) + (/* local */local_i * /* context id changed from 1100 to 1101*/(*sself_ySeperation))) + 32);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString455_68FD4EFD;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
;
;
}
;

bool sc456 = false;
YYRValue* sself_resetPrompt = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_resetPrompt); /* set ContextID to sself_resetPrompt */
if (/* First usage */(*sself_resetPrompt).asBool()){
sc456 = ((/* local */local_i == 11));
 } 

if(sc456) {

YY_STACKTRACE_LINE(31);

YY_STACKTRACE_LINE(32);
FREE_RValue( &__ret1__ );
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 1103 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 1103 */
sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySeperation); /* set ContextID to 1103 */
YYRValue* sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to sself_xSeperation */
__Args__[0] = (/* context id changed from 1101 to 1103*/(*sself_xSelector) + /* context id changed from 1101 to 1103*/(*sself_xSeperation));
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((/* context id changed from 1101 to 1103*/(*sself_ySelector) + (/* local */local_i * /* context id changed from 1101 to 1103*/(*sself_ySeperation))) + 32);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString457_68FD4EFD;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
;
;
}
}
;

if((/* First usage */(global_controllerIndex) != -1)) {

YY_STACKTRACE_LINE(37);

YY_STACKTRACE_LINE(38);
YYGML_draw_set_colour((int)128);
;

YY_STACKTRACE_LINE(39);
YYGML_draw_set_font((int)3);
;

YY_STACKTRACE_LINE(40);
YYGML_draw_set_halign((int)0);
;

YY_STACKTRACE_LINE(42);
local_controllerText=(const char*)g_pString458_68FD4EFD;
;

YY_STACKTRACE_LINE(44);
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 104 to 1104*/(global_controllerIndex);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_gamepad_is_connected.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(44);

YY_STACKTRACE_LINE(45);
FREE_RValue( &__ret2__ );
__Args__[1] = /* context id changed from 1104 to 1105*/(global_controllerIndex);
__pArgs__[1] = &__Args__[1];
/* local */local_controllerText+=YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_gamepad_get_description.val,&__pArgs__[1]);
;
;
}
else {

YY_STACKTRACE_LINE(46);

YY_STACKTRACE_LINE(47);
/* local */local_controllerText+=(const char*)g_pString459_68FD4EFD;
;
;
}
;

YY_STACKTRACE_LINE(50);
FREE_RValue( &__ret1__ );
YYRValue* sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to sself_xSelector */
YYRValue* sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to sself_ySelector */
YYRValue* sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySeperation); /* set ContextID to sself_ySeperation */
__Args__[0] = (/* context id changed from 1103 to 1104*/(*sself_xSelector) + 2);
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((/* context id changed from 1103 to 1104*/(*sself_ySelector) + (12 * /* context id changed from 1103 to 1104*/(*sself_ySeperation))) + 34);
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_controllerText;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(52);
YYGML_draw_set_colour((int)0);
;
;
}
;

YY_STACKTRACE_LINE(56);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_68FD4EFD;
__pArgs__[0] = &__Args__[0];
gml_Script_scrDrawButtonInfo(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;
}
#endif
