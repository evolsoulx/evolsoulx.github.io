#include "pch.hpp"
extern YYVAR g_VAR_room;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Script_scrSaveGame;
extern YYVAR g_Script_gml_GlobalScript_scrSaveGame;
extern YYVAR g_FUNC_room_get_name;
extern YYVAR g_FUNC_floor;
extern YYVAR g_FUNC_array_copy;
extern YYVAR g_FUNC_ds_map_create;
extern YYVAR g_FUNC_md5_string_unicode;
extern YYVAR g_FUNC_ds_map_write;
extern YYVAR g_FUNC_file_text_open_write;
extern YYVAR g_FUNC_string;
extern YYVAR g_FUNC_file_text_write_string;
extern YYVAR g_FUNC_base64_encode;
extern YYVAR g_FUNC_file_text_close;
extern YYVAR g_FUNC_ds_map_destroy;
#ifndef __YYNODEFS
char g_pString72_FC7069F5[] = {
0x64, 0x65, 0x61, 0x74, 0x68, 0x73, 0x00,                                                            // deaths.
};
char g_pString73_FC7069F5[] = {
0x74, 0x69, 0x6d, 0x65, 0x00,                                                                        // time.
};
char g_pString74_FC7069F5[] = {
0x74, 0x69, 0x6d, 0x65, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x00,                                          // timeMicro.
};
char g_pString75_FC7069F5[] = {
0x64, 0x69, 0x66, 0x66, 0x69, 0x63, 0x75, 0x6c, 0x74, 0x79, 0x00,                                    // difficulty.
};
char g_pString76_FC7069F5[] = {
0x73, 0x61, 0x76, 0x65, 0x52, 0x6f, 0x6f, 0x6d, 0x00,                                                // saveRoom.
};
char g_pString77_FC7069F5[] = {
0x73, 0x61, 0x76, 0x65, 0x50, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x58, 0x00,                              // savePlayerX.
};
char g_pString78_FC7069F5[] = {
0x73, 0x61, 0x76, 0x65, 0x50, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x59, 0x00,                              // savePlayerY.
};
char g_pString79_FC7069F5[] = {
0x73, 0x61, 0x76, 0x65, 0x47, 0x72, 0x61, 0x76, 0x00,                                                // saveGrav.
};
char g_pString80_FC7069F5[] = {
0x73, 0x61, 0x76, 0x65, 0x53, 0x65, 0x63, 0x72, 0x65, 0x74, 0x49, 0x74, 0x65, 0x6d, 0x00,            // saveSecretItem.
};
char g_pString81_FC7069F5[] = {
0x73, 0x61, 0x76, 0x65, 0x42, 0x6f, 0x73, 0x73, 0x49, 0x74, 0x65, 0x6d, 0x00,                        // saveBossItem.
};
char g_pString82_FC7069F5[] = {
0x73, 0x61, 0x76, 0x65, 0x47, 0x61, 0x6d, 0x65, 0x43, 0x6c, 0x65, 0x61, 0x72, 0x00,                  // saveGameClear.
};
char g_pString83_FC7069F5[] = {
0x6d, 0x61, 0x70, 0x4d, 0x64, 0x35, 0x00,                                                            // mapMd5.
};
char g_pString84_FC7069F5[] = {
0x50, 0x75, 0x74, 0x20, 0x73, 0x6f, 0x6d, 0x65, 0x74, 0x68, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x65,      // Put something he
0x72, 0x65, 0x21, 0x00,                                                                              // re!.
};
char g_pString85_FC7069F5[] = {
0x44, 0x61, 0x74, 0x61, 0x5c, 0x73, 0x61, 0x76, 0x65, 0x00,                                          // Data.save.
};
DValue gs_constArg0_FC7069F5 = { 0, 0, VALUE_REAL };
DValue gs_constArg1_FC7069F5 = { 8, 0, VALUE_REAL };
#else
extern char g_pString72_FC7069F5[];
extern char g_pString73_FC7069F5[];
extern char g_pString74_FC7069F5[];
extern char g_pString75_FC7069F5[];
extern char g_pString76_FC7069F5[];
extern char g_pString77_FC7069F5[];
extern char g_pString78_FC7069F5[];
extern char g_pString79_FC7069F5[];
extern char g_pString80_FC7069F5[];
extern char g_pString81_FC7069F5[];
extern char g_pString82_FC7069F5[];
extern char g_pString83_FC7069F5[];
extern char g_pString84_FC7069F5[];
extern char g_pString85_FC7069F5[];
extern DValue gs_constArg0_FC7069F5;
extern DValue gs_constArg1_FC7069F5;
#endif // __YYNODEFS

YYRValue& gml_Script_scrSaveGame( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrSaveGame( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrSaveGame", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[5];
YYRValue __Args__[5];
YYRValue local_savePosition;
YYRValue global_builtin_room;
YYRValue & global_saveRoom = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_saveRoom);
YYRValue i12000000000_x;
YYRValue & global_savePlayerX = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_savePlayerX);
YYRValue i12000000000_y;
YYRValue & global_savePlayerY = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_savePlayerY);
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue & global_saveGrav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_saveGrav);
YYRValue & global_saveSecretItem = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_saveSecretItem);
YYRValue & global_secretItem = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_secretItem);
YYRValue & global_saveBossItem = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_saveBossItem);
YYRValue & global_bossItem = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_bossItem);
YYRValue & global_gameClear = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gameClear);
YYRValue & global_saveGameClear = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_saveGameClear);
YYRValue local_saveMap;
YYRValue & global_deaths = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_deaths);
YYRValue & global_time = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_time);
YYRValue & global_timeMicro = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_timeMicro);
YYRValue & global_difficulty = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_difficulty);
YYRValue & global_saveNum = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_saveNum);
YYRValue local_f;
YYRValue __ret1__(0);
YYRValue __ret2__(0);
YYRValue __ret3__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrSaveGame.val );

static bool sInitialised = false;

YY_STACKTRACE_LINE(6);
local_savePosition=(*YY_GET_ARG(_args, (int)(0), _count));
;

if(BOOL_RValue( /* local */local_savePosition )) {

YY_STACKTRACE_LINE(9);

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret1__ );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room );
__Args__[0] = /* First usage */global_builtin_room;
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_saveRoom))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_room_get_name.val,&__pArgs__[0]);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(11);
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_x );
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_savePlayerX))=/* First usage */i12000000000_x;
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(12);
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_y );
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_savePlayerY))=/* First usage */i12000000000_y;
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(13);
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_saveGrav))=/* First usage */(global_grav);
PopContextStack(1)
;
;

SWithIterator ___wi70___;
int ___wc71___ = YYGML_NewWithIterator( &___wi70___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, 12);
if (___wc71___ > 0 ) {
do {

YY_STACKTRACE_LINE(16);

FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 374 to 375*/(global_savePlayerX);
__pArgs__[0] = &__Args__[0];
if(!(YYGML_place_free(pSelf,(float)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_floor.val,&__pArgs__[0]).asReal(),(float)(float)(/* context id changed from 374 to 375*/(global_savePlayerY).asReal())))) {

YY_STACKTRACE_LINE(17);

YY_STACKTRACE_LINE(18);
/* context id changed from 375 to 376*/(global_savePlayerX)+=1;
;
;
}
;

FREE_RValue( &__ret1__ );
__Args__[0] = (global_savePlayerY);
__pArgs__[0] = &__Args__[0];
if(!(YYGML_place_free(pSelf,(float)(float)(/* context id changed from 376 to 375*/(global_savePlayerX).asReal()),(float)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_floor.val,&__pArgs__[0]).asReal()))) {

YY_STACKTRACE_LINE(21);

YY_STACKTRACE_LINE(22);
/* context id changed from 375 to 377*/(global_savePlayerY)+=1;
;
;
}
;

FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = (global_savePlayerX);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* context id changed from 377 to 375*/(global_savePlayerY);
__pArgs__[1] = &__Args__[1];
if(!(YYGML_place_free(pSelf,(float)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_floor.val,&__pArgs__[0]).asReal(),(float)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_floor.val,&__pArgs__[1]).asReal()))) {

YY_STACKTRACE_LINE(25);

YY_STACKTRACE_LINE(26);
/* context id changed from 375 to 378*/(global_savePlayerX)+=1;
;

YY_STACKTRACE_LINE(27);
/* context id changed from 375 to 378*/(global_savePlayerY)+=1;
;
;
}
;
;
} while(YYGML_WithIteratorNext( &___wi70___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi70___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;

YY_STACKTRACE_LINE(32);
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 378 to 374*/(global_savePlayerX);
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_savePlayerX))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_floor.val,&__pArgs__[0]);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(33);
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 378 to 374*/(global_savePlayerY);
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_savePlayerY))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_floor.val,&__pArgs__[0]);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(35);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_saveSecretItem);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_FC7069F5;
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */(global_secretItem);
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg0_FC7069F5;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg1_FC7069F5;
__pArgs__[4] = &__Args__[4];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,5,g_FUNC_array_copy.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(36);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_saveBossItem);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_FC7069F5;
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */(global_bossItem);
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg0_FC7069F5;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg1_FC7069F5;
__pArgs__[4] = &__Args__[4];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,5,g_FUNC_array_copy.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(38);
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_saveGameClear))=/* First usage */(global_gameClear);
PopContextStack(1)
;
;
;
}
;

YY_STACKTRACE_LINE(42);
FREE_RValue( &__ret1__ );
local_saveMap=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_ds_map_create.val,NULL);
;

YY_STACKTRACE_LINE(44);
YYGML_ds_map_add((int)(int)(int64)((int)(int64)/* local */local_saveMap.asReal()),YYRValue((const char*)g_pString72_FC7069F5),/* First usage */(global_deaths));
;

YY_STACKTRACE_LINE(45);
YYGML_ds_map_add((int)(int)(int64)((int)(int64)/* local */local_saveMap.asReal()),YYRValue((const char*)g_pString73_FC7069F5),/* First usage */(global_time));
;

YY_STACKTRACE_LINE(46);
YYGML_ds_map_add((int)(int)(int64)((int)(int64)/* local */local_saveMap.asReal()),YYRValue((const char*)g_pString74_FC7069F5),/* First usage */(global_timeMicro));
;

YY_STACKTRACE_LINE(48);
YYGML_ds_map_add((int)(int)(int64)((int)(int64)/* local */local_saveMap.asReal()),YYRValue((const char*)g_pString75_FC7069F5),/* First usage */(global_difficulty));
;

YY_STACKTRACE_LINE(49);
YYGML_ds_map_add((int)(int)(int64)((int)(int64)/* local */local_saveMap.asReal()),YYRValue((const char*)g_pString76_FC7069F5),/* context id changed from 374 to 373*/(global_saveRoom));
;

YY_STACKTRACE_LINE(50);
YYGML_ds_map_add((int)(int)(int64)((int)(int64)/* local */local_saveMap.asReal()),YYRValue((const char*)g_pString77_FC7069F5),/* context id changed from 374 to 373*/(global_savePlayerX));
;

YY_STACKTRACE_LINE(51);
YYGML_ds_map_add((int)(int)(int64)((int)(int64)/* local */local_saveMap.asReal()),YYRValue((const char*)g_pString78_FC7069F5),/* context id changed from 374 to 373*/(global_savePlayerY));
;

YY_STACKTRACE_LINE(52);
YYGML_ds_map_add((int)(int)(int64)((int)(int64)/* local */local_saveMap.asReal()),YYRValue((const char*)g_pString79_FC7069F5),/* context id changed from 374 to 373*/(global_saveGrav));
;

YY_STACKTRACE_LINE(54);
YYGML_ds_map_add((int)(int)(int64)((int)(int64)/* local */local_saveMap.asReal()),YYRValue((const char*)g_pString80_FC7069F5),/* context id changed from 374 to 373*/(global_saveSecretItem));
;

YY_STACKTRACE_LINE(55);
YYGML_ds_map_add((int)(int)(int64)((int)(int64)/* local */local_saveMap.asReal()),YYRValue((const char*)g_pString81_FC7069F5),/* context id changed from 374 to 373*/(global_saveBossItem));
;

YY_STACKTRACE_LINE(57);
YYGML_ds_map_add((int)(int)(int64)((int)(int64)/* local */local_saveMap.asReal()),YYRValue((const char*)g_pString82_FC7069F5),/* context id changed from 374 to 373*/(global_saveGameClear));
;

YY_STACKTRACE_LINE(60);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local_saveMap;
__Args__[1] = (YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_ds_map_write.val,&__pArgs__[0]) + YYRValue((const char*)g_pString84_FC7069F5));
__pArgs__[1] = &__Args__[1];
YYGML_ds_map_add((int)(int)(int64)((int)(int64)/* local */local_saveMap.asReal()),YYRValue((const char*)g_pString83_FC7069F5),YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_md5_string_unicode.val,&__pArgs__[1]));
;

YY_STACKTRACE_LINE(64);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = /* First usage */(global_saveNum);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue((const char*)g_pString85_FC7069F5) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[1] = &__Args__[1];
local_f=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_file_text_open_write.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(66);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
FREE_RValue( &__ret3__ );
__pArgs__[0] = &/* local */local_saveMap;
__Args__[1] = YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,1,g_FUNC_ds_map_write.val,&__pArgs__[0]);
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_f;
__Args__[3] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_base64_encode.val,&__pArgs__[1]);
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_file_text_write_string.val,&__pArgs__[2]);
;

YY_STACKTRACE_LINE(68);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_f;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_file_text_close.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(71);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_saveMap;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_ds_map_destroy.val,&__pArgs__[0]);
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrSaveGame( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrSaveGame( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrSaveGame", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(4);
YYRValue* sself_scrSaveGame_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrSaveGame); /* set ContextID to 6 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrSaveGame_4ABE50B2)) = (YYRValue(gml_Script_scrSaveGame, pSelf)), PopContextStack();
;
return _result;
}
#endif
