#include "pch.hpp"
YYRValue& gml_Script_scrDrawButtonInfo( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Object_objOptionsMenu_Draw_0;
extern YYVAR g_FUNC_draw_text;
extern YYVAR g_FUNC_string;
#ifndef __YYNODEFS
char g_pString393_39C84E83[] = {
0x4f, 0x66, 0x66, 0x00,                                                                              // Off.
};
char g_pString394_39C84E83[] = {
0x4f, 0x6e, 0x00,                                                                                    // On.
};
char g_pString395_39C84E83[] = {
0x25, 0x00,                                                                                          // %.
};
char g_pString396_39C84E83[] = {
0x46, 0x75, 0x6c, 0x6c, 0x73, 0x63, 0x72, 0x65, 0x65, 0x6e, 0x00,                                    // Fullscreen.
};
char g_pString397_39C84E83[] = {
0x57, 0x69, 0x6e, 0x64, 0x6f, 0x77, 0x65, 0x64, 0x00,                                                // Windowed.
};
DValue gs_constArg0_39C84E83 = { 0, 0, VALUE_REAL };
#else
extern char g_pString393_39C84E83[];
extern char g_pString394_39C84E83[];
extern char g_pString395_39C84E83[];
extern char g_pString396_39C84E83[];
extern char g_pString397_39C84E83[];
extern DValue gs_constArg0_39C84E83;
#endif // __YYNODEFS

void gml_Object_objOptionsMenu_Draw_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objOptionsMenu_Draw_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objOptionsMenu_Draw_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue local_i;
YYRValue & global_muteMusic = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_muteMusic);
YYRValue & global_volumeLevel = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_volumeLevel);
YYRValue & global_fullscreenMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_fullscreenMode);
YYRValue & global_smoothingMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_smoothingMode);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(3);
YYGML_draw_set_colour((int)0);
;

YY_STACKTRACE_LINE(4);
YYGML_draw_set_font((int)0);
;

YY_STACKTRACE_LINE(5);
YYGML_draw_set_halign((int)0);
;

YY_STACKTRACE_LINE(6);
YYGML_draw_set_valign((int)0);
;


YY_STACKTRACE_LINE(9);
local_i=0;
;
bool ___f391___ = true;
while( true ) {
if (!___f391___) {

++/* local */local_i;
;
}
___f391___ = false;
YYRValue* sself_optionNum = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_optionNum); /* set ContextID to sself_optionNum */
bool ___b392___ = ((/* local */local_i < /* First usage */(*sself_optionNum)));
if (!___b392___) break;
{

YY_STACKTRACE_LINE(9);

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret1__ );
YYRValue* sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to sself_xSelector */
YYRValue* sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to sself_ySelector */
YYRValue* sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySeperation); /* set ContextID to sself_ySeperation */
YYRValue* sself_strSelect_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_strSelect); /* set ContextID to sself_strSelect_30529165 */
__Args__[0] = /* First usage */(*sself_xSelector);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* First usage */(*sself_ySelector) + (/* First usage */(*sself_ySeperation) * /* local */local_i));
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */(*sself_strSelect_30529165)[(int)(/* local */local_i)];
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
}
;

YY_STACKTRACE_LINE(13);
YYGML_draw_set_halign((int)2);
;

YY_STACKTRACE_LINE(17);
if(BOOL_RValue( /* First usage */(global_muteMusic) )) {

YY_STACKTRACE_LINE(17);

YY_STACKTRACE_LINE(18);
FREE_RValue( &__ret1__ );
YYRValue* sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to sself_xSelector */
YYRValue* sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to sself_xSeperation */
YYRValue* sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to sself_ySelector */
__Args__[0] = (/* context id changed from 858 to 860*/(*sself_xSelector) + /* First usage */(*sself_xSeperation));
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* context id changed from 858 to 860*/(*sself_ySelector);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString393_39C84E83;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(19);

YY_STACKTRACE_LINE(20);
FREE_RValue( &__ret1__ );
YYRValue* sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to sself_xSelector */
YYRValue* sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to sself_xSeperation */
YYRValue* sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to sself_ySelector */
__Args__[0] = (/* context id changed from 860 to 861*/(*sself_xSelector) + /* context id changed from 860 to 861*/(*sself_xSeperation));
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* context id changed from 860 to 861*/(*sself_ySelector);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString394_39C84E83;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
;

YY_STACKTRACE_LINE(23);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
YYRValue* sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to sself_xSelector */
YYRValue* sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to sself_xSeperation */
YYRValue* sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to sself_ySelector */
YYRValue* sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySeperation); /* set ContextID to sself_ySeperation */
__Args__[0] = /* First usage */(global_volumeLevel);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* context id changed from 861 to 94*/(*sself_xSelector) + /* context id changed from 861 to 94*/(*sself_xSeperation));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (/* context id changed from 861 to 94*/(*sself_ySelector) + /* context id changed from 858 to 94*/(*sself_ySeperation));
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]) + YYRValue((const char*)g_pString395_39C84E83));
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(25);
if(BOOL_RValue( /* First usage */(global_fullscreenMode) )) {

YY_STACKTRACE_LINE(25);

YY_STACKTRACE_LINE(26);
FREE_RValue( &__ret1__ );
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 862 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 862 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 862 */
sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySeperation); /* set ContextID to 862 */
__Args__[0] = (/* context id changed from 94 to 862*/(*sself_xSelector) + /* context id changed from 94 to 862*/(*sself_xSeperation));
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* context id changed from 94 to 862*/(*sself_ySelector) + (/* context id changed from 94 to 862*/(*sself_ySeperation) * 2));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString396_39C84E83;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(27);

YY_STACKTRACE_LINE(28);
FREE_RValue( &__ret1__ );
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 863 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 863 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 863 */
sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySeperation); /* set ContextID to 863 */
__Args__[0] = (/* context id changed from 862 to 863*/(*sself_xSelector) + /* context id changed from 862 to 863*/(*sself_xSeperation));
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* context id changed from 862 to 863*/(*sself_ySelector) + (/* context id changed from 862 to 863*/(*sself_ySeperation) * 2));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString397_39C84E83;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
;

YY_STACKTRACE_LINE(31);
if(BOOL_RValue( /* First usage */(global_smoothingMode) )) {

YY_STACKTRACE_LINE(31);

YY_STACKTRACE_LINE(32);
FREE_RValue( &__ret1__ );
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 864 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 864 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 864 */
sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySeperation); /* set ContextID to 864 */
__Args__[0] = (/* context id changed from 863 to 864*/(*sself_xSelector) + /* context id changed from 863 to 864*/(*sself_xSeperation));
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* context id changed from 863 to 864*/(*sself_ySelector) + (/* context id changed from 863 to 864*/(*sself_ySeperation) * 3));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString394_39C84E83;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(33);

YY_STACKTRACE_LINE(34);
FREE_RValue( &__ret1__ );
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 865 */
sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to 865 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 865 */
sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySeperation); /* set ContextID to 865 */
__Args__[0] = (/* context id changed from 864 to 865*/(*sself_xSelector) + /* context id changed from 864 to 865*/(*sself_xSeperation));
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* context id changed from 864 to 865*/(*sself_ySelector) + (/* context id changed from 864 to 865*/(*sself_ySeperation) * 3));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString393_39C84E83;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
;

YY_STACKTRACE_LINE(38);
YYRValue* sself_playerIndex = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_playerIndex); /* set ContextID to sself_playerIndex */
YYRValue* sself_optionSelect = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_optionSelect); /* set ContextID to sself_optionSelect */
YYGML_draw_sprite(pSelf,(int)5,(int)(int)(int64)((int)(int64)/* First usage */(*sself_playerIndex).asReal()),(float)(/* context id changed from 865 to 94*/(*sself_xSelector) - 16),(float)((/* context id changed from 865 to 94*/(*sself_ySelector) + (/* context id changed from 865 to 94*/(*sself_ySeperation) * /* First usage */(*sself_optionSelect))) + 19));
;

YY_STACKTRACE_LINE(41);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_39C84E83;
__pArgs__[0] = &__Args__[0];
gml_Script_scrDrawButtonInfo(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;
}
#endif
