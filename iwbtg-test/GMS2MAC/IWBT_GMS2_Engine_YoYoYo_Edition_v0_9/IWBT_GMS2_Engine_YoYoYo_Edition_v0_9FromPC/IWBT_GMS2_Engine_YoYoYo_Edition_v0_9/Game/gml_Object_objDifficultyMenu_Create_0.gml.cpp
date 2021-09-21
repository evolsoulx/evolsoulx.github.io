#include "pch.hpp"
extern YYVAR g_Script_gml_Object_objDifficultyMenu_Create_0;
extern YYVAR g_FUNC_file_exists;
extern YYVAR g_FUNC_string;
extern YYVAR g_FUNC_file_text_open_read;
extern YYVAR g_FUNC_ds_map_create;
extern YYVAR g_FUNC_ds_map_read;
extern YYVAR g_FUNC_base64_decode;
extern YYVAR g_FUNC_file_text_read_string;
extern YYVAR g_FUNC_file_text_close;
extern YYVAR g_FUNC_ds_map_find_value;
extern YYVAR g_FUNC_is_undefined;
extern YYVAR g_FUNC_array_create;
extern YYVAR g_FUNC_ds_map_destroy;
extern YYVAR g_FUNC_floor;
#ifndef __YYNODEFS
char g_pString341_E8900206[] = {
0x53, 0x61, 0x76, 0x65, 0x20, 0x31, 0x00,                                                            // Save 1.
};
char g_pString342_E8900206[] = {
0x53, 0x61, 0x76, 0x65, 0x20, 0x32, 0x00,                                                            // Save 2.
};
char g_pString343_E8900206[] = {
0x53, 0x61, 0x76, 0x65, 0x20, 0x33, 0x00,                                                            // Save 3.
};
char g_pString346_E8900206[] = {
0x44, 0x61, 0x74, 0x61, 0x5c, 0x73, 0x61, 0x76, 0x65, 0x00,                                          // Data.save.
};
char g_pString347_E8900206[] = {
0x64, 0x65, 0x61, 0x74, 0x68, 0x73, 0x00,                                                            // deaths.
};
char g_pString348_E8900206[] = {
0x74, 0x69, 0x6d, 0x65, 0x00,                                                                        // time.
};
char g_pString349_E8900206[] = {
0x64, 0x69, 0x66, 0x66, 0x69, 0x63, 0x75, 0x6c, 0x74, 0x79, 0x00,                                    // difficulty.
};
char g_pString350_E8900206[] = {
0x73, 0x61, 0x76, 0x65, 0x42, 0x6f, 0x73, 0x73, 0x49, 0x74, 0x65, 0x6d, 0x00,                        // saveBossItem.
};
char g_pString351_E8900206[] = {
0x73, 0x61, 0x76, 0x65, 0x47, 0x61, 0x6d, 0x65, 0x43, 0x6c, 0x65, 0x61, 0x72, 0x00,                  // saveGameClear.
};
char g_pString352_E8900206[] = {
0x3a, 0x00,                                                                                          // :.
};
DValue gs_constArg0_E8900206 = { 8, 0, VALUE_REAL };
DValue gs_constArg1_E8900206 = { 0, 0, VALUE_REAL };
#else
extern char g_pString341_E8900206[];
extern char g_pString342_E8900206[];
extern char g_pString343_E8900206[];
extern char g_pString346_E8900206[];
extern char g_pString347_E8900206[];
extern char g_pString348_E8900206[];
extern char g_pString349_E8900206[];
extern char g_pString350_E8900206[];
extern char g_pString351_E8900206[];
extern char g_pString352_E8900206[];
extern DValue gs_constArg0_E8900206;
extern DValue gs_constArg1_E8900206;
#endif // __YYNODEFS

void gml_Object_objDifficultyMenu_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objDifficultyMenu_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objDifficultyMenu_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue & global_menuSelectPrev = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuSelectPrev);
YYRValue local_i;
YYRValue local_f;
YYRValue local_saveMap;
YYRValue local_t;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;


YY_STACKTRACE_LINE(3);
YYRValue* sself_xSelector = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xSelector); /* set ContextID to 88 */
(*sself_xSelector)=96;
;

YY_STACKTRACE_LINE(4);
YYRValue* sself_ySelector = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_ySelector); /* set ContextID to 88 */
(*sself_ySelector)=160;
;

YY_STACKTRACE_LINE(5);
YYRValue* sself_xSeperation = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xSeperation); /* set ContextID to 88 */
(*sself_xSeperation)=239;
;

YY_STACKTRACE_LINE(8);
YYRValue* sself_appleIndex = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_appleIndex); /* set ContextID to 88 */
(*sself_appleIndex)=0;
;

YY_STACKTRACE_LINE(9);
YYRValue* sself_playerIndex = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_playerIndex); /* set ContextID to 88 */
(*sself_playerIndex)=0;
;

YY_STACKTRACE_LINE(11);
YYRValue* sself_fileSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_fileSelect); /* set ContextID to 88 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_fileSelect))=/* First usage */(global_menuSelectPrev)[(int)(0)];
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(12);
YYRValue* sself_difSelectMode = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difSelectMode); /* set ContextID to 88 */
(*sself_difSelectMode)=0;
;

YY_STACKTRACE_LINE(13);
YYRValue* sself_difSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difSelect); /* set ContextID to 88 */
(*sself_difSelect)=0;
;


YY_STACKTRACE_LINE(15);
YYGML_array_set_owner((long)165670);
;

YYRValue* sself_str_62DEE183 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_str); /* set ContextID to 88 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_str_62DEE183))((int)(0))=(const char*)g_pString341_E8900206;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(16);
YYRValue* sself_str_7BC5D0C2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_str); /* set ContextID to 88 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_str_7BC5D0C2))((int)(1))=(const char*)g_pString342_E8900206;
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(17);
YYRValue* sself_str_50E88301 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_str); /* set ContextID to 88 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_str_50E88301))((int)(2))=(const char*)g_pString343_E8900206;
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(19);
YYRValue* sself_warnText = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_warnText); /* set ContextID to 88 */
(*sself_warnText)=0;
;

YY_STACKTRACE_LINE(20);
YYRValue* sself_warnSelect = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_warnSelect); /* set ContextID to 88 */
(*sself_warnSelect)=1;
;


YY_STACKTRACE_LINE(24);
local_i=0;
;
bool ___f344___ = true;
while( true ) {
if (!___f344___) {

++/* local */local_i;
;
}
___f344___ = false;
bool ___b345___ = ((/* local */local_i < 3));
if (!___b345___) break;
{

YY_STACKTRACE_LINE(24);

YY_STACKTRACE_LINE(25);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = (/* local */local_i + 1);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue((const char*)g_pString346_E8900206) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[1] = &__Args__[1];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_file_exists.val,&__pArgs__[1]) )) {

YY_STACKTRACE_LINE(25);


YY_STACKTRACE_LINE(27);
YYGML_array_set_owner((long)165673);
;

YYRValue* sself_exists_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_exists); /* set ContextID to 675 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_exists_30529165))((int)(/* local */local_i))=1;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(30);
;

YY_STACKTRACE_LINE(32);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = (/* local */local_i + 1);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue((const char*)g_pString346_E8900206) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[1] = &__Args__[1];
local_f=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_file_text_open_read.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(34);
FREE_RValue( &__ret1__ );
local_saveMap=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_ds_map_create.val,NULL);
;

YY_STACKTRACE_LINE(35);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
FREE_RValue( &__ret3__ );
__pArgs__[0] = &/* local */local_f;
__Args__[1] = YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,1,g_FUNC_file_text_read_string.val,&__pArgs__[0]);
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_saveMap;
__Args__[3] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_base64_decode.val,&__pArgs__[1]);
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_ds_map_read.val,&__pArgs__[2]);
;

YY_STACKTRACE_LINE(37);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_f;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_file_text_close.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(39);
if((/* local */local_saveMap != -1)) {

YY_STACKTRACE_LINE(39);


YY_STACKTRACE_LINE(40);
YYGML_array_set_owner((long)165538);
;

FREE_RValue( &__ret1__ );
YYRValue* sself_deaths_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_deaths); /* set ContextID to 677 */
__pArgs__[0] = &/* local */local_saveMap;
__Args__[1] = (const char*)g_pString347_E8900206;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_deaths_30529165))((int)(/* local */local_i))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_ds_map_find_value.val,&__pArgs__[0]);
PopContextStack(2)
;
;
;

FREE_RValue( &__ret1__ );
__Args__[0] = /* volatile */(*sself_deaths_30529165)[(int)(/* local */local_i)];
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_is_undefined.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(42);

YY_STACKTRACE_LINE(43);
sself_deaths_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_deaths); /* set ContextID to 680 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_deaths_30529165))((int)(/* local */local_i))=0;
PopContextStack(2)
;
;
;
}
;


YY_STACKTRACE_LINE(46);
YYGML_array_set_owner((long)165539);
;

FREE_RValue( &__ret1__ );
YYRValue* sself_time_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_time); /* set ContextID to 677 */
__pArgs__[0] = &/* local */local_saveMap;
__Args__[1] = (const char*)g_pString348_E8900206;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_time_30529165))((int)(/* local */local_i))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_ds_map_find_value.val,&__pArgs__[0]);
PopContextStack(2)
;
;
;

FREE_RValue( &__ret1__ );
__Args__[0] = /* volatile */(*sself_time_30529165)[(int)(/* local */local_i)];
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_is_undefined.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(47);

YY_STACKTRACE_LINE(48);
sself_time_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_time); /* set ContextID to 684 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_time_30529165))((int)(/* local */local_i))=0;
PopContextStack(2)
;
;
;
}
;


YY_STACKTRACE_LINE(51);
YYGML_array_set_owner((long)165537);
;

FREE_RValue( &__ret1__ );
YYRValue* sself_difficulty_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difficulty); /* set ContextID to 677 */
__pArgs__[0] = &/* local */local_saveMap;
__Args__[1] = (const char*)g_pString349_E8900206;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_difficulty_30529165))((int)(/* local */local_i))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_ds_map_find_value.val,&__pArgs__[0]);
PopContextStack(2)
;
;
;

FREE_RValue( &__ret1__ );
__Args__[0] = /* volatile */(*sself_difficulty_30529165)[(int)(/* local */local_i)];
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_is_undefined.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(52);

YY_STACKTRACE_LINE(53);
sself_difficulty_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difficulty); /* set ContextID to 688 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_difficulty_30529165))((int)(/* local */local_i))=0;
PopContextStack(2)
;
;
;
}
;


YY_STACKTRACE_LINE(56);
YYGML_array_set_owner((long)165674);
;

FREE_RValue( &__ret1__ );
YYRValue* sself_boss_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_boss); /* set ContextID to 677 */
__pArgs__[0] = &/* local */local_saveMap;
__Args__[1] = (const char*)g_pString350_E8900206;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_boss_30529165))((int)(/* local */local_i))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_ds_map_find_value.val,&__pArgs__[0]);
PopContextStack(2)
;
;
;

FREE_RValue( &__ret1__ );
__Args__[0] = /* volatile */(*sself_boss_30529165)[(int)(/* local */local_i)];
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_is_undefined.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(57);

YY_STACKTRACE_LINE(58);
FREE_RValue( &__ret2__ );
sself_boss_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_boss); /* set ContextID to 692 */
__Args__[1] = (YYRValue*)&gs_constArg0_E8900206;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_E8900206;
__pArgs__[2] = &__Args__[2];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_boss_30529165))((int)(/* local */local_i))=YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,2,g_FUNC_array_create.val,&__pArgs__[1]);
PopContextStack(2)
;
;
;
}
;


YY_STACKTRACE_LINE(61);
YYGML_array_set_owner((long)165675);
;

FREE_RValue( &__ret1__ );
YYRValue* sself_clear_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_clear); /* set ContextID to 677 */
__pArgs__[0] = &/* local */local_saveMap;
__Args__[1] = (const char*)g_pString351_E8900206;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_clear_30529165))((int)(/* local */local_i))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_ds_map_find_value.val,&__pArgs__[0]);
PopContextStack(2)
;
;
;

FREE_RValue( &__ret1__ );
__Args__[0] = /* volatile */(*sself_clear_30529165)[(int)(/* local */local_i)];
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_is_undefined.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(62);

YY_STACKTRACE_LINE(63);
sself_clear_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_clear); /* set ContextID to 696 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_clear_30529165))((int)(/* local */local_i))=0;
PopContextStack(2)
;
;
;
}
;

YY_STACKTRACE_LINE(66);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_saveMap;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_ds_map_destroy.val,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(67);


YY_STACKTRACE_LINE(69);
YYGML_array_set_owner((long)165538);
;

YYRValue* sself_deaths_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_deaths); /* set ContextID to 698 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_deaths_30529165))((int)(/* local */local_i))=0;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(70);
YYGML_array_set_owner((long)165539);
;

YYRValue* sself_time_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_time); /* set ContextID to 698 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_time_30529165))((int)(/* local */local_i))=0;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(71);
YYGML_array_set_owner((long)165537);
;

YYRValue* sself_difficulty_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difficulty); /* set ContextID to 698 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_difficulty_30529165))((int)(/* local */local_i))=0;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(72);
YYGML_array_set_owner((long)165674);
;

FREE_RValue( &__ret1__ );
YYRValue* sself_boss_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_boss); /* set ContextID to 698 */
__Args__[0] = (YYRValue*)&gs_constArg0_E8900206;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_E8900206;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_boss_30529165))((int)(/* local */local_i))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_array_create.val,&__pArgs__[0]);
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(73);
YYGML_array_set_owner((long)165675);
;

YYRValue* sself_clear_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_clear); /* set ContextID to 698 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_clear_30529165))((int)(/* local */local_i))=0;
PopContextStack(2)
;
;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(75);


YY_STACKTRACE_LINE(76);
YYGML_array_set_owner((long)165673);
;

YYRValue* sself_exists_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_exists); /* set ContextID to 704 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_exists_30529165))((int)(/* local */local_i))=0;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(77);
YYGML_array_set_owner((long)165538);
;

YYRValue* sself_deaths_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_deaths); /* set ContextID to 704 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_deaths_30529165))((int)(/* local */local_i))=0;
PopContextStack(2)
;
;
;


YY_STACKTRACE_LINE(78);
YYGML_array_set_owner((long)165539);
;

YYRValue* sself_time_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_time); /* set ContextID to 704 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_time_30529165))((int)(/* local */local_i))=0;
PopContextStack(2)
;
;
;
;
}
;

YY_STACKTRACE_LINE(82);
YYRValue* sself_time_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_time); /* set ContextID to 674 */
local_t=/* volatile */(*sself_time_30529165)[(int)(/* local */local_i)];
;


YY_STACKTRACE_LINE(84);
YYGML_array_set_owner((long)165615);
;

FREE_RValue( &__ret1__ );
YYRValue* sself_timeStr_30529165 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_timeStr); /* set ContextID to 674 */
__Args__[0] = yyfdiv((long long)((long long)/* local */local_t.asInt64()), (long long)3600);
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_timeStr_30529165))((int)(/* local */local_i))=(YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]) + YYRValue((const char*)g_pString352_E8900206));
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(85);
local_t=yyfmod(/* local */local_t.asReal(), 3600);
;

YY_STACKTRACE_LINE(86);
FREE_RValue( &__ret1__ );
__Args__[0] = yyfdiv((long long)((long long)/* local */local_t.asInt64()), (long long)600);
__pArgs__[0] = &__Args__[0];
/* volatile */(PushContextStack( (YYObjectBase*)pSelf ), (*sself_timeStr_30529165))((int)(/* local */local_i))+=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(87);
local_t=yyfmod(/* local */local_t.asReal(), 600);
;

YY_STACKTRACE_LINE(88);
FREE_RValue( &__ret1__ );
__Args__[0] = yyfdiv((long long)((long long)/* local */local_t.asInt64()), (long long)60);
__pArgs__[0] = &__Args__[0];
/* volatile */(PushContextStack( (YYObjectBase*)pSelf ), (*sself_timeStr_30529165))((int)(/* local */local_i))+=(YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]) + YYRValue((const char*)g_pString352_E8900206));
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(89);
local_t=yyfmod(/* local */local_t.asReal(), 60);
;

YY_STACKTRACE_LINE(90);
FREE_RValue( &__ret1__ );
__Args__[0] = yyfdiv((long long)((long long)/* local */local_t.asInt64()), (long long)10);
__pArgs__[0] = &__Args__[0];
/* volatile */(PushContextStack( (YYObjectBase*)pSelf ), (*sself_timeStr_30529165))((int)(/* local */local_i))+=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]);
PopContextStack(2)
;
;

YY_STACKTRACE_LINE(91);
local_t=yyfmod(/* local */local_t.asReal(), 10);
;

YY_STACKTRACE_LINE(92);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local_t;
__Args__[1] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_floor.val,&__pArgs__[0]);
__pArgs__[1] = &__Args__[1];
/* volatile */(PushContextStack( (YYObjectBase*)pSelf ), (*sself_timeStr_30529165))((int)(/* local */local_i))+=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[1]);
PopContextStack(2)
;
;
;
}
}
;
}
#endif
