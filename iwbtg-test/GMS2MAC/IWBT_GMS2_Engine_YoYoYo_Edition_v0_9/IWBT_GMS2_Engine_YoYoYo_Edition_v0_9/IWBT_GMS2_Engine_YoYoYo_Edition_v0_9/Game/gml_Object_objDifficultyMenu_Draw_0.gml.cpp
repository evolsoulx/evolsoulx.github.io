#include "pch.hpp"
YYRValue& gml_Script_scrDrawButtonInfo( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Object_objDifficultyMenu_Draw_0;
extern YYVAR g_FUNC_draw_text;
extern YYVAR g_FUNC_string;
#ifndef __YYNODEFS
char g_pString360_2E0D53E2[] = {
0x44, 0x65, 0x61, 0x74, 0x68, 0x73, 0x3a, 0x20, 0x00,                                                // Deaths: .
};
char g_pString361_2E0D53E2[] = {
0x54, 0x69, 0x6d, 0x65, 0x3a, 0x20, 0x00,                                                            // Time: .
};
char g_pString363_2E0D53E2[] = {
0x3c, 0x20, 0x4c, 0x6f, 0x61, 0x64, 0x20, 0x67, 0x61, 0x6d, 0x65, 0x20, 0x3e, 0x00,                  // < Load game >.
};
char g_pString364_2E0D53E2[] = {
0x3c, 0x20, 0x4d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x20, 0x3e, 0x00,                                    // < Medium >.
};
char g_pString365_2E0D53E2[] = {
0x3c, 0x20, 0x48, 0x61, 0x72, 0x64, 0x20, 0x3e, 0x00,                                                // < Hard >.
};
char g_pString366_2E0D53E2[] = {
0x3c, 0x20, 0x56, 0x65, 0x72, 0x79, 0x20, 0x48, 0x61, 0x72, 0x64, 0x20, 0x3e, 0x00,                  // < Very Hard >.
};
char g_pString367_2E0D53E2[] = {
0x3c, 0x20, 0x49, 0x6d, 0x70, 0x6f, 0x73, 0x73, 0x69, 0x62, 0x6c, 0x65, 0x20, 0x3e, 0x00,            // < Impossible >.
};
char g_pString368_2E0D53E2[] = {
0x41, 0x72, 0x65, 0x20, 0x79, 0x6f, 0x75, 0x20, 0x73, 0x75, 0x72, 0x65, 0x0a, 0x79, 0x6f, 0x75,      // Are you sure.you
0x20, 0x77, 0x61, 0x6e, 0x74, 0x20, 0x74, 0x6f, 0x0a, 0x6f, 0x76, 0x65, 0x72, 0x77, 0x72, 0x69,      //  want to.overwri
0x74, 0x65, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x73, 0x61, 0x76, 0x65, 0x3f, 0x00,                  // te this save?.
};
char g_pString369_2E0D53E2[] = {
0x3c, 0x20, 0x59, 0x65, 0x73, 0x20, 0x3e, 0x00,                                                      // < Yes >.
};
char g_pString370_2E0D53E2[] = {
0x3c, 0x20, 0x4e, 0x6f, 0x20, 0x3e, 0x00,                                                            // < No >.
};
char g_pString373_2E0D53E2[] = {
0x4d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x00,                                                            // Medium.
};
char g_pString374_2E0D53E2[] = {
0x48, 0x61, 0x72, 0x64, 0x00,                                                                        // Hard.
};
char g_pString375_2E0D53E2[] = {
0x56, 0x65, 0x72, 0x79, 0x20, 0x48, 0x61, 0x72, 0x64, 0x00,                                          // Very Hard.
};
char g_pString376_2E0D53E2[] = {
0x49, 0x6d, 0x70, 0x6f, 0x73, 0x73, 0x69, 0x62, 0x6c, 0x65, 0x00,                                    // Impossible.
};
char g_pString377_2E0D53E2[] = {
0x43, 0x6c, 0x65, 0x61, 0x72, 0x21, 0x21, 0x00,                                                      // Clear!!.
};
char g_pString380_2E0D53E2[] = {
0x4e, 0x6f, 0x20, 0x44, 0x61, 0x74, 0x61, 0x00,                                                      // No Data.
};
DValue gs_constArg0_2E0D53E2 = { 1, 0, VALUE_REAL };
#else
extern char g_pString360_2E0D53E2[];
extern char g_pString361_2E0D53E2[];
extern char g_pString363_2E0D53E2[];
extern char g_pString364_2E0D53E2[];
extern char g_pString365_2E0D53E2[];
extern char g_pString366_2E0D53E2[];
extern char g_pString367_2E0D53E2[];
extern char g_pString368_2E0D53E2[];
extern char g_pString369_2E0D53E2[];
extern char g_pString370_2E0D53E2[];
extern char g_pString373_2E0D53E2[];
extern char g_pString374_2E0D53E2[];
extern char g_pString375_2E0D53E2[];
extern char g_pString376_2E0D53E2[];
extern char g_pString377_2E0D53E2[];
extern char g_pString380_2E0D53E2[];
extern DValue gs_constArg0_2E0D53E2;
#endif // __YYNODEFS

void gml_Object_objDifficultyMenu_Draw_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objDifficultyMenu_Draw_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objDifficultyMenu_Draw_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue local_i;
YYRValue local_difSelectText;
YYRValue local_warnSelectText;
YYRValue local_difficultyText;
YYRValue local_bossArray;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;



YY_STACKTRACE_LINE(3);
local_i=0;
;
bool ___f358___ = true;
while( true ) {
if (!___f358___) {

/* local */local_i+=1;
;
}
___f358___ = false;
bool ___b359___ = ((/* local */local_i < 3));
if (!___b359___) break;
{

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
YYGML_draw_set_colour((int)0);
;

YY_STACKTRACE_LINE(5);
YYGML_draw_set_halign((int)0);
;

YY_STACKTRACE_LINE(6);
YYGML_draw_set_valign((int)0);
;

YY_STACKTRACE_LINE(7);
YYGML_draw_set_font((int)0);
;

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret1__ );
YYRValue* sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to sself_xSelector */
YYRValue* sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to sself_xSeperation */
YYRValue* sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to sself_ySelector */
YYRValue* sself_str_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_str); /* set ContextID to sself_str_30529165 */
__Args__[0] = ((/* First usage */(*sself_xSelector) + (/* local */local_i * /* First usage */(*sself_xSeperation))) + 2);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */(*sself_ySelector);
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */(*sself_str_30529165)[(int)(/* local */local_i)];
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(11);
YYGML_draw_set_font((int)3);
;

YY_STACKTRACE_LINE(13);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
YYRValue* sself_deaths_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_deaths); /* set ContextID to sself_deaths_30529165 */
__Args__[0] = /* First usage */(*sself_deaths_30529165)[(int)(/* local */local_i)];
__pArgs__[0] = &__Args__[0];
__Args__[1] = (((*sself_xSelector) + (/* local */local_i * (*sself_xSeperation))) + 10);
__pArgs__[1] = &__Args__[1];
__Args__[2] = ((*sself_ySelector) + 70);
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue((const char*)g_pString360_2E0D53E2) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret1__ );
YYRValue* sself_timeStr_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_timeStr); /* set ContextID to sself_timeStr_30529165 */
__Args__[0] = (((*sself_xSelector) + (/* local */local_i * (*sself_xSeperation))) + 10);
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((*sself_ySelector) + 90);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue((const char*)g_pString361_2E0D53E2) + /* First usage */(*sself_timeStr_30529165)[(int)(/* local */local_i)]);
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(16);
YYGML_draw_set_halign((int)1);
;

bool sc362 = false;
YYRValue* sself_difSelectMode = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_difSelectMode); /* set ContextID to sself_difSelectMode */
if (/* First usage */(*sself_difSelectMode).asBool()){
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 770 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 770 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 770 */
YYRValue* sself_fileSelect = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_fileSelect); /* set ContextID to sself_fileSelect */
sc362 = ((/* local */local_i == /* First usage */(*sself_fileSelect)));
 } 

if(sc362) {

YY_STACKTRACE_LINE(18);

YY_STACKTRACE_LINE(19);
YYRValue* sself_warnText = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_warnText); /* set ContextID to sself_warnText */
if(!((BOOL_RValue( /* First usage */(*sself_warnText) )))) {

YY_STACKTRACE_LINE(19);

YY_STACKTRACE_LINE(20);
;

YY_STACKTRACE_LINE(22);
YYRValue* sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_difSelect); /* set ContextID to sself_difSelect */
if((/* First usage */(*sself_difSelect) == -1)) {

YY_STACKTRACE_LINE(22);

YY_STACKTRACE_LINE(23);
local_difSelectText=(const char*)g_pString363_2E0D53E2;
;
;
}
else {

YY_STACKTRACE_LINE(24);
sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_difSelect); /* set ContextID to 774 */
if((/* context id changed from 772 to 774*/(*sself_difSelect) == 0)) {

YY_STACKTRACE_LINE(24);

YY_STACKTRACE_LINE(25);
local_difSelectText=(const char*)g_pString364_2E0D53E2;
;
;
}
else {

YY_STACKTRACE_LINE(26);
sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_difSelect); /* set ContextID to 776 */
if((/* context id changed from 774 to 776*/(*sself_difSelect) == 1)) {

YY_STACKTRACE_LINE(26);

YY_STACKTRACE_LINE(27);
local_difSelectText=(const char*)g_pString365_2E0D53E2;
;
;
}
else {

YY_STACKTRACE_LINE(28);
sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_difSelect); /* set ContextID to 778 */
if((/* context id changed from 776 to 778*/(*sself_difSelect) == 2)) {

YY_STACKTRACE_LINE(28);

YY_STACKTRACE_LINE(29);
local_difSelectText=(const char*)g_pString366_2E0D53E2;
;
;
}
else {

YY_STACKTRACE_LINE(30);

YY_STACKTRACE_LINE(31);
local_difSelectText=(const char*)g_pString367_2E0D53E2;
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

YY_STACKTRACE_LINE(34);
FREE_RValue( &__ret1__ );
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 772 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 772 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 772 */
__Args__[0] = ((/* context id changed from 770 to 772*/(*sself_xSelector) + (/* local */local_i * /* context id changed from 770 to 772*/(*sself_xSeperation))) + 65);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* context id changed from 770 to 772*/(*sself_ySelector) + 49);
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_difSelectText;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(35);

YY_STACKTRACE_LINE(36);
FREE_RValue( &__ret1__ );
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 781 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 781 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 781 */
__Args__[0] = ((/* context id changed from 772 to 781*/(*sself_xSelector) + (/* local */local_i * /* context id changed from 772 to 781*/(*sself_xSeperation))) + 63);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* context id changed from 772 to 781*/(*sself_ySelector) - 100);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString368_2E0D53E2;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(38);
;

YY_STACKTRACE_LINE(40);
YYRValue* sself_warnSelect = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_warnSelect); /* set ContextID to sself_warnSelect */
if(BOOL_RValue( /* First usage */(*sself_warnSelect) )) {

YY_STACKTRACE_LINE(40);

YY_STACKTRACE_LINE(41);
local_warnSelectText=(const char*)g_pString369_2E0D53E2;
;
;
}
else {

YY_STACKTRACE_LINE(42);

YY_STACKTRACE_LINE(43);
local_warnSelectText=(const char*)g_pString370_2E0D53E2;
;
;
}
;

YY_STACKTRACE_LINE(46);
FREE_RValue( &__ret1__ );
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 781 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 781 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 781 */
__Args__[0] = (((*sself_xSelector) + (/* local */local_i * (*sself_xSeperation))) + 65);
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((*sself_ySelector) + 49);
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_warnSelectText;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(50);
YYRValue* sself_exists_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_exists); /* set ContextID to sself_exists_30529165 */
if(BOOL_RValue( /* First usage */(*sself_exists_30529165)[(int)(/* local */local_i)] )) {

YY_STACKTRACE_LINE(50);

bool sc371 = false;
sself_difSelectMode = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_difSelectMode); /* set ContextID to 785 */
if (!((BOOL_RValue( /* context id changed from 766 to 785*/(*sself_difSelectMode) )))) { sc371=true; } else 
{
bool sc372 = false;
sself_difSelectMode = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_difSelectMode); /* set ContextID to 786 */
if (/* context id changed from 785 to 786*/(*sself_difSelectMode).asBool()){
YYRValue* sself_fileSelect = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_fileSelect); /* set ContextID to sself_fileSelect */
sc372 = ((/* local */local_i != /* context id changed from 770 to 787*/(*sself_fileSelect)));
 } 

sc371 = (sc372);
 } 

if(sc371) {

YY_STACKTRACE_LINE(51);

YY_STACKTRACE_LINE(52);
;

YY_STACKTRACE_LINE(54);
YYRValue* sself_difficulty_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_difficulty); /* set ContextID to sself_difficulty_30529165 */
if((/* First usage */(*sself_difficulty_30529165)[(int)(/* local */local_i)] == 0)) {

YY_STACKTRACE_LINE(54);

YY_STACKTRACE_LINE(55);
local_difficultyText=(const char*)g_pString373_2E0D53E2;
;
;
}
else {

YY_STACKTRACE_LINE(56);
sself_difficulty_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_difficulty); /* set ContextID to 791 */
if((/* volatile */(*sself_difficulty_30529165)[(int)(/* local */local_i)] == 1)) {

YY_STACKTRACE_LINE(56);

YY_STACKTRACE_LINE(57);
local_difficultyText=(const char*)g_pString374_2E0D53E2;
;
;
}
else {

YY_STACKTRACE_LINE(58);
sself_difficulty_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_difficulty); /* set ContextID to 794 */
if((/* volatile */(*sself_difficulty_30529165)[(int)(/* local */local_i)] == 2)) {

YY_STACKTRACE_LINE(58);

YY_STACKTRACE_LINE(59);
local_difficultyText=(const char*)g_pString375_2E0D53E2;
;
;
}
else {

YY_STACKTRACE_LINE(60);

YY_STACKTRACE_LINE(61);
local_difficultyText=(const char*)g_pString376_2E0D53E2;
;
;
}
;
}
;
}
;

YY_STACKTRACE_LINE(64);
FREE_RValue( &__ret1__ );
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 788 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 788 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 788 */
__Args__[0] = ((/* context id changed from 781 to 788*/(*sself_xSelector) + (/* local */local_i * /* context id changed from 781 to 788*/(*sself_xSeperation))) + 65);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* context id changed from 781 to 788*/(*sself_ySelector) + 49);
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_difficultyText;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
;

YY_STACKTRACE_LINE(67);
YYGML_draw_set_font((int)1);
;

YYRValue* sself_clear_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_clear); /* set ContextID to sself_clear_30529165 */
if(BOOL_RValue( /* First usage */(*sself_clear_30529165)[(int)(/* local */local_i)] )) {

YY_STACKTRACE_LINE(69);

YY_STACKTRACE_LINE(70);
FREE_RValue( &__ret1__ );
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 799 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 799 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 799 */
__Args__[0] = ((/* context id changed from 788 to 799*/(*sself_xSelector) + (/* local */local_i * /* context id changed from 788 to 799*/(*sself_xSeperation))) + 63);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* context id changed from 788 to 799*/(*sself_ySelector) + 215);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString377_2E0D53E2;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
;

YY_STACKTRACE_LINE(73);
YYRValue* sself_boss_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_boss); /* set ContextID to sself_boss_30529165 */
local_bossArray=/* First usage */(*sself_boss_30529165)[(int)(/* local */local_i)];
;

if(BOOL_RValue( /* array index changed from System.Collections.Generic.List`1[System.String] to System.Collections.Generic.List`1[System.String]*/local_bossArray[(int)(0)] )) {

YY_STACKTRACE_LINE(75);

YY_STACKTRACE_LINE(76);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 802 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 802 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 802 */
YYGML_draw_sprite(pSelf,(int)52,(int)-1,(float)(/* context id changed from 799 to 802*/(*sself_xSelector) + (/* local */local_i * /* context id changed from 799 to 802*/(*sself_xSeperation))),(float)(/* context id changed from 799 to 802*/(*sself_ySelector) + 128));
;
;
}
;

if(BOOL_RValue( /* volatile */local_bossArray[(int)(1)] )) {

YY_STACKTRACE_LINE(78);

YY_STACKTRACE_LINE(79);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 804 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 804 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 804 */
YYGML_draw_sprite(pSelf,(int)52,(int)-1,(float)((/* context id changed from 802 to 804*/(*sself_xSelector) + (/* local */local_i * /* context id changed from 802 to 804*/(*sself_xSeperation))) + 32),(float)(/* context id changed from 802 to 804*/(*sself_ySelector) + 128));
;
;
}
;

if(BOOL_RValue( /* volatile */local_bossArray[(int)(2)] )) {

YY_STACKTRACE_LINE(81);

YY_STACKTRACE_LINE(82);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 806 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 806 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 806 */
YYGML_draw_sprite(pSelf,(int)52,(int)-1,(float)((/* context id changed from 804 to 806*/(*sself_xSelector) + (/* local */local_i * /* context id changed from 804 to 806*/(*sself_xSeperation))) + 64),(float)(/* context id changed from 804 to 806*/(*sself_ySelector) + 128));
;
;
}
;

if(BOOL_RValue( /* volatile */local_bossArray[(int)(3)] )) {

YY_STACKTRACE_LINE(84);

YY_STACKTRACE_LINE(85);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 808 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 808 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 808 */
YYGML_draw_sprite(pSelf,(int)52,(int)-1,(float)((/* context id changed from 806 to 808*/(*sself_xSelector) + (/* local */local_i * /* context id changed from 806 to 808*/(*sself_xSeperation))) + 96),(float)(/* context id changed from 806 to 808*/(*sself_ySelector) + 128));
;
;
}
;

if(BOOL_RValue( /* volatile */local_bossArray[(int)(4)] )) {

YY_STACKTRACE_LINE(87);

YY_STACKTRACE_LINE(88);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 810 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 810 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 810 */
YYGML_draw_sprite(pSelf,(int)52,(int)-1,(float)(/* context id changed from 808 to 810*/(*sself_xSelector) + (/* local */local_i * /* context id changed from 808 to 810*/(*sself_xSeperation))),(float)(/* context id changed from 808 to 810*/(*sself_ySelector) + 160));
;
;
}
;

if(BOOL_RValue( /* volatile */local_bossArray[(int)(5)] )) {

YY_STACKTRACE_LINE(90);

YY_STACKTRACE_LINE(91);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 812 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 812 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 812 */
YYGML_draw_sprite(pSelf,(int)52,(int)-1,(float)((/* context id changed from 810 to 812*/(*sself_xSelector) + (/* local */local_i * /* context id changed from 810 to 812*/(*sself_xSeperation))) + 32),(float)(/* context id changed from 810 to 812*/(*sself_ySelector) + 160));
;
;
}
;

if(BOOL_RValue( /* volatile */local_bossArray[(int)(6)] )) {

YY_STACKTRACE_LINE(93);

YY_STACKTRACE_LINE(94);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 814 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 814 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 814 */
YYGML_draw_sprite(pSelf,(int)52,(int)-1,(float)((/* context id changed from 812 to 814*/(*sself_xSelector) + (/* local */local_i * /* context id changed from 812 to 814*/(*sself_xSeperation))) + 64),(float)(/* context id changed from 812 to 814*/(*sself_ySelector) + 160));
;
;
}
;

if(BOOL_RValue( /* volatile */local_bossArray[(int)(7)] )) {

YY_STACKTRACE_LINE(96);

YY_STACKTRACE_LINE(97);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 816 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 816 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 816 */
YYGML_draw_sprite(pSelf,(int)52,(int)-1,(float)((/* context id changed from 814 to 816*/(*sself_xSelector) + (/* local */local_i * /* context id changed from 814 to 816*/(*sself_xSeperation))) + 96),(float)(/* context id changed from 814 to 816*/(*sself_ySelector) + 160));
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(99);

bool sc378 = false;
sself_difSelectMode = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_difSelectMode); /* set ContextID to 817 */
if (!((BOOL_RValue( /* context id changed from 786 to 817*/(*sself_difSelectMode) )))) { sc378=true; } else 
{
bool sc379 = false;
sself_difSelectMode = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_difSelectMode); /* set ContextID to 818 */
if (/* context id changed from 817 to 818*/(*sself_difSelectMode).asBool()){
YYRValue* sself_fileSelect = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_fileSelect); /* set ContextID to sself_fileSelect */
sc379 = ((/* local */local_i != /* context id changed from 787 to 819*/(*sself_fileSelect)));
 } 

sc378 = (sc379);
 } 

if(sc378) {

YY_STACKTRACE_LINE(100);

YY_STACKTRACE_LINE(101);
FREE_RValue( &__ret1__ );
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 820 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 820 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 820 */
__Args__[0] = ((/* context id changed from 816 to 820*/(*sself_xSelector) + (/* local */local_i * /* context id changed from 816 to 820*/(*sself_xSeperation))) + 65);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* context id changed from 816 to 820*/(*sself_ySelector) + 49);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString380_2E0D53E2;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
;
;
}
;

YYRValue* sself_fileSelect = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_fileSelect); /* set ContextID to sself_fileSelect */
if((/* local */local_i == /* context id changed from 819 to 766*/(*sself_fileSelect))) {

YY_STACKTRACE_LINE(105);

YY_STACKTRACE_LINE(106);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 821 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 821 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 821 */
YYRValue* sself_appleIndex = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_appleIndex); /* set ContextID to sself_appleIndex */
YYGML_draw_sprite(pSelf,(int)36,(int)(int)(int64)((int)(int64)/* First usage */(*sself_appleIndex).asReal()),(float)((/* context id changed from 820 to 821*/(*sself_xSelector) + (/* local */local_i * /* context id changed from 820 to 821*/(*sself_xSeperation))) + 5),(float)(/* context id changed from 820 to 821*/(*sself_ySelector) + 310));
;

YY_STACKTRACE_LINE(107);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 821 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 821 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 821 */
YYGML_draw_sprite(pSelf,(int)36,(int)(int)(int64)((int)(int64)(*sself_appleIndex).asReal()),(float)(((*sself_xSelector) + (/* local */local_i * (*sself_xSeperation))) + 25),(float)((*sself_ySelector) + 310));
;

YY_STACKTRACE_LINE(108);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 821 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 821 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 821 */
YYGML_draw_sprite(pSelf,(int)36,(int)(int)(int64)((int)(int64)(*sself_appleIndex).asReal()),(float)(((*sself_xSelector) + (/* local */local_i * (*sself_xSeperation))) + 45),(float)((*sself_ySelector) + 310));
;

YY_STACKTRACE_LINE(109);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 821 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 821 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 821 */
YYRValue* sself_playerIndex = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_playerIndex); /* set ContextID to sself_playerIndex */
YYGML_draw_sprite(pSelf,(int)5,(int)(int)(int64)((int)(int64)/* First usage */(*sself_playerIndex).asReal()),(float)(((*sself_xSelector) + (/* local */local_i * (*sself_xSeperation))) + 65),(float)((*sself_ySelector) + 310));
;

YY_STACKTRACE_LINE(110);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 821 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 821 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 821 */
YYGML_draw_sprite(pSelf,(int)36,(int)(int)(int64)((int)(int64)(*sself_appleIndex).asReal()),(float)(((*sself_xSelector) + (/* local */local_i * (*sself_xSeperation))) + 85),(float)((*sself_ySelector) + 310));
;

YY_STACKTRACE_LINE(111);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 821 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 821 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 821 */
YYGML_draw_sprite(pSelf,(int)36,(int)(int)(int64)((int)(int64)(*sself_appleIndex).asReal()),(float)(((*sself_xSelector) + (/* local */local_i * (*sself_xSeperation))) + 105),(float)((*sself_ySelector) + 310));
;

YY_STACKTRACE_LINE(112);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 821 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 821 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 821 */
YYGML_draw_sprite(pSelf,(int)36,(int)(int)(int64)((int)(int64)(*sself_appleIndex).asReal()),(float)(((*sself_xSelector) + (/* local */local_i * (*sself_xSeperation))) + 125),(float)((*sself_ySelector) + 310));
;
;
}
;
;
}
}
;

YY_STACKTRACE_LINE(117);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_2E0D53E2;
__pArgs__[0] = &__Args__[0];
gml_Script_scrDrawButtonInfo(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;
}
#endif
