#include "pch.hpp"
YYRValue& gml_Script_scrDrawButtonInfo( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Object_objKeyboardMenu_Draw_0;
extern YYVAR g_FUNC_draw_text;
#ifndef __YYNODEFS
char g_pString424_BEE7CE41[] = {
0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6b, 0x65, 0x79, 0x20, 0x74, 0x6f,      // Press the key to
0x20, 0x73, 0x65, 0x74, 0x00,                                                                        //  set.
};
char g_pString426_BEE7CE41[] = {
0x43, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x73, 0x20, 0x72, 0x65, 0x73, 0x65, 0x74, 0x21, 0x00,      // Controls reset!.
     // 
};
DValue gs_constArg0_BEE7CE41 = { 0, 0, VALUE_REAL };
#else
extern char g_pString424_BEE7CE41[];
extern char g_pString426_BEE7CE41[];
extern DValue gs_constArg0_BEE7CE41;
#endif // __YYNODEFS

void gml_Object_objKeyboardMenu_Draw_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objKeyboardMenu_Draw_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objKeyboardMenu_Draw_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue local_i;
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
bool ___f421___ = true;
while( true ) {
if (!___f421___) {

/* local */local_i+=1;
;
}
___f421___ = false;
bool ___b422___ = ((/* local */local_i < 11));
if (!___b422___) break;
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

bool sc423 = false;
YYRValue* sself_settingKey = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_settingKey); /* set ContextID to sself_settingKey */
if (!((BOOL_RValue( /* First usage */(*sself_settingKey) )))) { sc423=true; } else 
{
YYRValue* sself_keySelect = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_keySelect); /* set ContextID to sself_keySelect */
sc423 = ((/* local */local_i != /* First usage */(*sself_keySelect)));
 } 

if(sc423) {

YY_STACKTRACE_LINE(16);

YY_STACKTRACE_LINE(17);
FREE_RValue( &__ret1__ );
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 973 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 973 */
sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySeperation); /* set ContextID to 973 */
YYRValue* sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to sself_xSeperation */
YYRValue* sself_strKey_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_strKey); /* set ContextID to sself_strKey_30529165 */
__Args__[0] = (/* context id changed from 970 to 973*/(*sself_xSelector) + /* First usage */(*sself_xSeperation));
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((/* context id changed from 970 to 973*/(*sself_ySelector) + (/* local */local_i * /* context id changed from 970 to 973*/(*sself_ySeperation))) + 32);
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */(*sself_strKey_30529165)[(int)(/* local */local_i)];
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
;

YYRValue* sself_keySelect = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_keySelect); /* set ContextID to sself_keySelect */
if((/* local */local_i == /* context id changed from 972 to 970*/(*sself_keySelect))) {

YY_STACKTRACE_LINE(21);

YY_STACKTRACE_LINE(22);
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 975 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 975 */
sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySeperation); /* set ContextID to 975 */
YYRValue* sself_playerIndex = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_playerIndex); /* set ContextID to sself_playerIndex */
YYGML_draw_sprite(pSelf,(int)5,(int)(int)(int64)((int)(int64)/* First usage */(*sself_playerIndex).asReal()),(float)(/* context id changed from 973 to 975*/(*sself_xSelector) - 20),(float)((/* context id changed from 973 to 975*/(*sself_ySelector) + (/* local */local_i * /* context id changed from 973 to 975*/(*sself_ySeperation))) + 47));
;

sself_settingKey = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_settingKey); /* set ContextID to 975 */
if(BOOL_RValue( /* context id changed from 970 to 975*/(*sself_settingKey) )) {

YY_STACKTRACE_LINE(25);

YY_STACKTRACE_LINE(26);
FREE_RValue( &__ret1__ );
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 976 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 976 */
sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySeperation); /* set ContextID to 976 */
YYRValue* sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to sself_xSeperation */
__Args__[0] = (/* context id changed from 975 to 976*/(*sself_xSelector) + /* context id changed from 973 to 976*/(*sself_xSeperation));
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((/* context id changed from 975 to 976*/(*sself_ySelector) + (/* local */local_i * /* context id changed from 975 to 976*/(*sself_ySeperation))) + 32);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString424_BEE7CE41;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
;
;
}
;

bool sc425 = false;
YYRValue* sself_resetPrompt = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_resetPrompt); /* set ContextID to sself_resetPrompt */
if (/* First usage */(*sself_resetPrompt).asBool()){
sc425 = ((/* local */local_i == 10));
 } 

if(sc425) {

YY_STACKTRACE_LINE(31);

YY_STACKTRACE_LINE(32);
FREE_RValue( &__ret1__ );
sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSelector); /* set ContextID to 978 */
sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySelector); /* set ContextID to 978 */
sself_ySeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ySeperation); /* set ContextID to 978 */
YYRValue* sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xSeperation); /* set ContextID to sself_xSeperation */
__Args__[0] = (/* context id changed from 976 to 978*/(*sself_xSelector) + /* context id changed from 976 to 978*/(*sself_xSeperation));
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((/* context id changed from 976 to 978*/(*sself_ySelector) + (/* local */local_i * /* context id changed from 976 to 978*/(*sself_ySeperation))) + 32);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString426_BEE7CE41;
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

YY_STACKTRACE_LINE(37);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_BEE7CE41;
__pArgs__[0] = &__Args__[0];
gml_Script_scrDrawButtonInfo(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;
}
#endif
