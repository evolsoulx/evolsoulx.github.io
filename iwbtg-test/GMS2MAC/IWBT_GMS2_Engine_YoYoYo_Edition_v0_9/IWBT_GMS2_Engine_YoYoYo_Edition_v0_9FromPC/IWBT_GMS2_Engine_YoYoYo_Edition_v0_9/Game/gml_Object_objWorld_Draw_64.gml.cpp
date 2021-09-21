#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_room;
extern YYVAR g_VAR_fps;
extern YYVAR g_VAR_fps_real;
extern YYVAR g_Script_gml_Object_objWorld_Draw_64;
extern YYVAR g_FUNC_display_get_gui_width;
extern YYVAR g_FUNC_display_get_gui_height;
extern YYVAR g_FUNC_draw_text;
extern YYVAR g_FUNC_string;
extern YYVAR g_FUNC_floor;
extern YYVAR g_FUNC_room_get_name;
#ifndef __YYNODEFS
char g_pString319_3FE38B7C[] = {
0x50, 0x41, 0x55, 0x53, 0x45, 0x00,                                                                  // PAUSE.
};
char g_pString320_3FE38B7C[] = {
0x3a, 0x00,                                                                                          // :.
};
char g_pString321_3FE38B7C[] = {
0x56, 0x6f, 0x6c, 0x75, 0x6d, 0x65, 0x3a, 0x20, 0x00,                                                // Volume: .
};
char g_pString322_3FE38B7C[] = {
0x25, 0x00,                                                                                          // %.
};
char g_pString323_3FE38B7C[] = {
0x44, 0x65, 0x61, 0x74, 0x68, 0x73, 0x3a, 0x20, 0x00,                                                // Deaths: .
};
char g_pString324_3FE38B7C[] = {
0x54, 0x69, 0x6d, 0x65, 0x3a, 0x20, 0x00,                                                            // Time: .
};
char g_pString325_3FE38B7C[] = {
0x58, 0x3a, 0x20, 0x00,                                                                              // X: .
};
char g_pString326_3FE38B7C[] = {
0x59, 0x3a, 0x20, 0x00,                                                                              // Y: .
};
char g_pString327_3FE38B7C[] = {
0x41, 0x6c, 0x69, 0x67, 0x6e, 0x3a, 0x20, 0x00,                                                      // Align: .
};
char g_pString328_3FE38B7C[] = {
0x52, 0x6f, 0x6f, 0x6d, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x3a, 0x20, 0x00,                              // Room name: .
};
char g_pString329_3FE38B7C[] = {
0x52, 0x6f, 0x6f, 0x6d, 0x20, 0x6e, 0x75, 0x6d, 0x62, 0x65, 0x72, 0x3a, 0x20, 0x00,                  // Room number: .
};
char g_pString330_3FE38B7C[] = {
0x47, 0x6f, 0x64, 0x20, 0x6d, 0x6f, 0x64, 0x65, 0x3a, 0x20, 0x00,                                    // God mode: .
};
char g_pString331_3FE38B7C[] = {
0x49, 0x6e, 0x66, 0x69, 0x6e, 0x69, 0x74, 0x65, 0x20, 0x6a, 0x75, 0x6d, 0x70, 0x3a, 0x20, 0x00,      // Infinite jump: .
     // 
};
char g_pString332_3FE38B7C[] = {
0x46, 0x50, 0x53, 0x3a, 0x20, 0x00,                                                                  // FPS: .
};
char g_pString333_3FE38B7C[] = {
0x52, 0x65, 0x61, 0x6c, 0x20, 0x46, 0x50, 0x53, 0x3a, 0x20, 0x00,                                    // Real FPS: .
};
char g_pString335_3FE38B7C[] = {
0x44, 0x65, 0x62, 0x75, 0x67, 0x20, 0x6d, 0x6f, 0x64, 0x65, 0x00,                                    // Debug mode.
};
DValue gs_constArg0_3FE38B7C = { 20, 0, VALUE_REAL };
DValue gs_constArg1_3FE38B7C = { 516, 0, VALUE_REAL };
DValue gs_constArg2_3FE38B7C = { 541, 0, VALUE_REAL };
DValue gs_constArg3_3FE38B7C = { 566, 0, VALUE_REAL };
DValue gs_constArg4_3FE38B7C = { 40, 0, VALUE_REAL };
DValue gs_constArg5_3FE38B7C = { 60, 0, VALUE_REAL };
DValue gs_constArg6_3FE38B7C = { 80, 0, VALUE_REAL };
DValue gs_constArg7_3FE38B7C = { 100, 0, VALUE_REAL };
DValue gs_constArg8_3FE38B7C = { 120, 0, VALUE_REAL };
DValue gs_constArg9_3FE38B7C = { 140, 0, VALUE_REAL };
DValue gs_constArg10_3FE38B7C = { 160, 0, VALUE_REAL };
DValue gs_constArg11_3FE38B7C = { 180, 0, VALUE_REAL };
DValue gs_constArg12_3FE38B7C = { 10, 0, VALUE_REAL };
#else
extern char g_pString319_3FE38B7C[];
extern char g_pString320_3FE38B7C[];
extern char g_pString321_3FE38B7C[];
extern char g_pString322_3FE38B7C[];
extern char g_pString323_3FE38B7C[];
extern char g_pString324_3FE38B7C[];
extern char g_pString325_3FE38B7C[];
extern char g_pString326_3FE38B7C[];
extern char g_pString327_3FE38B7C[];
extern char g_pString328_3FE38B7C[];
extern char g_pString329_3FE38B7C[];
extern char g_pString330_3FE38B7C[];
extern char g_pString331_3FE38B7C[];
extern char g_pString332_3FE38B7C[];
extern char g_pString333_3FE38B7C[];
extern char g_pString335_3FE38B7C[];
extern DValue gs_constArg0_3FE38B7C;
extern DValue gs_constArg1_3FE38B7C;
extern DValue gs_constArg2_3FE38B7C;
extern DValue gs_constArg3_3FE38B7C;
extern DValue gs_constArg4_3FE38B7C;
extern DValue gs_constArg5_3FE38B7C;
extern DValue gs_constArg6_3FE38B7C;
extern DValue gs_constArg7_3FE38B7C;
extern DValue gs_constArg8_3FE38B7C;
extern DValue gs_constArg9_3FE38B7C;
extern DValue gs_constArg10_3FE38B7C;
extern DValue gs_constArg11_3FE38B7C;
extern DValue gs_constArg12_3FE38B7C;
#endif // __YYNODEFS

void gml_Object_objWorld_Draw_64( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objWorld_Draw_64( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objWorld_Draw_64", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue & global_gamePaused = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gamePaused);
YYRValue & global_pauseSpr = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_pauseSpr);
YYRValue & global_time = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_time);
YYRValue local_t;
YYRValue local_timeStr;
YYRValue & global_volumeLevel = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_volumeLevel);
YYRValue & global_deaths = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_deaths);
YYRValue & global_debugOverlay = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugOverlay);
YYRValue i12000000000_x;
YYRValue local_drawX;
YYRValue i12000000000_y;
YYRValue local_drawY;
YYRValue local_drawAlign;
YYRValue global_builtin_room;
YYRValue & global_debugNoDeath = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugNoDeath);
YYRValue & global_debugInfJump = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugInfJump);
YYRValue global_builtin_fps;
YYRValue global_builtin_fps_real;
YYRValue & global_debugMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugMode);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;


if(BOOL_RValue( /* First usage */(global_gamePaused) )) {

YY_STACKTRACE_LINE(5);

YY_STACKTRACE_LINE(6);
YYGML_draw_sprite(pSelf,(int)(int)(int64)((int)(int64)/* First usage */(global_pauseSpr).asReal()),(int)-1,(float)0,(float)0);
;

YY_STACKTRACE_LINE(8);
YYGML_draw_set_colour((int)0);
;

YY_STACKTRACE_LINE(9);
YYGML_draw_set_alpha((float)0.4);
;

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
YYGML_draw_rectangle((float)-1,(float)-1,(float)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_display_get_gui_width.val,NULL).asReal(),(float)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,0,g_FUNC_display_get_gui_height.val,NULL).asReal(),(bool)0);
;

YY_STACKTRACE_LINE(13);
YYGML_draw_set_alpha((float)1);
;

YY_STACKTRACE_LINE(14);
YYGML_draw_set_colour((int)16777215);
;

YY_STACKTRACE_LINE(16);
YYGML_draw_set_font((int)0);
;

YY_STACKTRACE_LINE(17);
YYGML_draw_set_halign((int)1);
;

YY_STACKTRACE_LINE(18);
YYGML_draw_set_valign((int)1);
;

YY_STACKTRACE_LINE(20);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
FREE_RValue( &__ret3__ );
__Args__[0] = (YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,0,g_FUNC_display_get_gui_width.val,NULL) / (double)2);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,0,g_FUNC_display_get_gui_height.val,NULL) / (double)2);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString319_3FE38B7C;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(22);
YYGML_draw_set_font((int)2);
;

YY_STACKTRACE_LINE(23);
YYGML_draw_set_halign((int)0);
;

YY_STACKTRACE_LINE(24);
YYGML_draw_set_valign((int)0);
;

YY_STACKTRACE_LINE(26);
local_t=/* First usage */(global_time);
;

YY_STACKTRACE_LINE(27);
FREE_RValue( &__ret1__ );
__Args__[0] = yyfdiv((long long)((long long)/* local */local_t.asInt64()), (long long)3600);
__pArgs__[0] = &__Args__[0];
local_timeStr=(YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]) + YYRValue((const char*)g_pString320_3FE38B7C));
;

YY_STACKTRACE_LINE(28);
local_t=yyfmod(/* local */local_t.asReal(), 3600);
;

YY_STACKTRACE_LINE(29);
FREE_RValue( &__ret1__ );
__Args__[0] = yyfdiv((long long)((long long)/* local */local_t.asInt64()), (long long)600);
__pArgs__[0] = &__Args__[0];
/* local */local_timeStr+=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(30);
local_t=yyfmod(/* local */local_t.asReal(), 600);
;

YY_STACKTRACE_LINE(31);
FREE_RValue( &__ret1__ );
__Args__[0] = yyfdiv((long long)((long long)/* local */local_t.asInt64()), (long long)60);
__pArgs__[0] = &__Args__[0];
/* local */local_timeStr+=(YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]) + YYRValue((const char*)g_pString320_3FE38B7C));
;

YY_STACKTRACE_LINE(32);
local_t=yyfmod(/* local */local_t.asReal(), 60);
;

YY_STACKTRACE_LINE(33);
FREE_RValue( &__ret1__ );
__Args__[0] = yyfdiv((long long)((long long)/* local */local_t.asInt64()), (long long)10);
__pArgs__[0] = &__Args__[0];
/* local */local_timeStr+=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(34);
local_t=yyfmod(/* local */local_t.asReal(), 10);
;

YY_STACKTRACE_LINE(35);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local_t;
__Args__[1] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_floor.val,&__pArgs__[0]);
__pArgs__[1] = &__Args__[1];
/* local */local_timeStr+=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(37);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = /* First usage */(global_volumeLevel);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_3FE38B7C;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_3FE38B7C;
__pArgs__[2] = &__Args__[2];
__Args__[3] = ((YYRValue((const char*)g_pString321_3FE38B7C) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0])) + YYRValue((const char*)g_pString322_3FE38B7C));
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(38);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = /* First usage */(global_deaths);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_3FE38B7C;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg2_3FE38B7C;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue((const char*)g_pString323_3FE38B7C) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(39);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_3FE38B7C;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg3_3FE38B7C;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue((const char*)g_pString324_3FE38B7C) + /* local */local_timeStr);
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
;

if(BOOL_RValue( /* First usage */(global_debugOverlay) )) {

YY_STACKTRACE_LINE(43);

YY_STACKTRACE_LINE(44);
YYGML_draw_set_colour((int)0);
;

YY_STACKTRACE_LINE(45);
YYGML_draw_set_font((int)3);
;

YY_STACKTRACE_LINE(46);
YYGML_draw_set_halign((int)0);
;

YY_STACKTRACE_LINE(47);
YYGML_draw_set_valign((int)0);
;

YY_STACKTRACE_LINE(49);
;

YY_STACKTRACE_LINE(50);
if(YYGML_instance_exists(pSelf,pOther,(int)12)) {

YY_STACKTRACE_LINE(50);

YY_STACKTRACE_LINE(51);
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_x );
local_drawX=/* First usage */i12000000000_x;
;

YY_STACKTRACE_LINE(52);
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_y );
local_drawY=/* First usage */i12000000000_y;
;

YY_STACKTRACE_LINE(53);
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_x );
local_drawAlign=yyfmod(/* volatile */i12000000000_x.asReal(), 3);
;
;
}
else {

YY_STACKTRACE_LINE(54);

YY_STACKTRACE_LINE(55);
local_drawX=0;
;

YY_STACKTRACE_LINE(56);
local_drawY=0;
;

YY_STACKTRACE_LINE(57);
local_drawAlign=0;
;
;
}
;

YY_STACKTRACE_LINE(60);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local_drawX;
__Args__[1] = (YYRValue*)&gs_constArg0_3FE38B7C;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_3FE38B7C;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue((const char*)g_pString325_3FE38B7C) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(61);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local_drawY;
__Args__[1] = (YYRValue*)&gs_constArg0_3FE38B7C;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg4_3FE38B7C;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue((const char*)g_pString326_3FE38B7C) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(62);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local_drawAlign;
__Args__[1] = (YYRValue*)&gs_constArg0_3FE38B7C;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg5_3FE38B7C;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue((const char*)g_pString327_3FE38B7C) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(63);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room );
__Args__[0] = /* First usage */global_builtin_room;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_3FE38B7C;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg6_3FE38B7C;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue((const char*)g_pString328_3FE38B7C) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_room_get_name.val,&__pArgs__[0]));
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(64);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room );
__Args__[0] = /* volatile */global_builtin_room;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_3FE38B7C;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg7_3FE38B7C;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue((const char*)g_pString329_3FE38B7C) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(65);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = /* First usage */(global_debugNoDeath);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_3FE38B7C;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg8_3FE38B7C;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue((const char*)g_pString330_3FE38B7C) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(66);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = /* First usage */(global_debugInfJump);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_3FE38B7C;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg9_3FE38B7C;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue((const char*)g_pString331_3FE38B7C) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(67);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_fps.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_fps );
__Args__[0] = /* First usage */global_builtin_fps;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_3FE38B7C;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg10_3FE38B7C;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue((const char*)g_pString332_3FE38B7C) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(68);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_fps_real.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_fps_real );
__Args__[0] = /* First usage */global_builtin_fps_real;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_3FE38B7C;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg11_3FE38B7C;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue((const char*)g_pString333_3FE38B7C) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[1]);
;
;
}
;

bool sc334 = false;
if (/* First usage */(global_debugMode).asBool()){
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room );
sc334 = ((/* volatile */global_builtin_room == 1));
 } 

if(sc334) {

YY_STACKTRACE_LINE(72);

YY_STACKTRACE_LINE(73);
YYGML_draw_set_colour((int)255);
;

YY_STACKTRACE_LINE(74);
YYGML_draw_set_font((int)3);
;

YY_STACKTRACE_LINE(75);
YYGML_draw_set_halign((int)0);
;

YY_STACKTRACE_LINE(76);
YYGML_draw_set_valign((int)0);
;

YY_STACKTRACE_LINE(78);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg12_3FE38B7C;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg12_3FE38B7C;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString335_3FE38B7C;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[0]);
;
;
}
;
}
#endif
