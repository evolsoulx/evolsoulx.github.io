#include "pch.hpp"
YYRValue& gml_Script_scrLoadGame( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrKillPlayer( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Object_objWarpStart_Collision_objPlayer;
extern YYVAR g_FUNC_file_exists;
extern YYVAR g_FUNC_string;
extern YYVAR g_FUNC_file_delete;
extern YYVAR g_FUNC_room_goto;
#ifndef __YYNODEFS
char g_pString631_729A9DB7[] = {
0x44, 0x61, 0x74, 0x61, 0x5c, 0x73, 0x61, 0x76, 0x65, 0x00,                                          // Data.save.
};
DValue gs_constArg0_729A9DB7 = { 1, 0, VALUE_REAL };
#else
extern char g_pString631_729A9DB7[];
extern DValue gs_constArg0_729A9DB7;
#endif // __YYNODEFS

void gml_Object_objWarpStart_Collision_objPlayer( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objWarpStart_Collision_objPlayer( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objWarpStart_Collision_objPlayer", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
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


YY_STACKTRACE_LINE(3);
YYRValue* sself_dif = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_dif); /* set ContextID to sself_dif */
if((/* First usage */(*sself_dif) == 4)) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = /* First usage */(global_saveNum);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue((const char*)g_pString631_729A9DB7) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[1] = &__Args__[1];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_file_exists.val,&__pArgs__[1]) )) {

YY_STACKTRACE_LINE(4);

FREE_RValue( &__ret3__ );
__Args__[2] = (YYRValue*)&gs_constArg0_729A9DB7;
__pArgs__[2] = &__Args__[2];
gml_Script_scrLoadGame(pSelf,pOther,__ret3__,1,&__pArgs__[2]);
;
;
}
else {

YY_STACKTRACE_LINE(6);

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
gml_Script_scrKillPlayer(pSelf,pOther,__ret1__,0,NULL);
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(9);

FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = /* context id changed from 1312 to 1315*/(global_saveNum);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue((const char*)g_pString631_729A9DB7) + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string.val,&__pArgs__[0]));
__pArgs__[1] = &__Args__[1];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_file_exists.val,&__pArgs__[1]) )) {

YY_STACKTRACE_LINE(10);

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret3__ );
FREE_RValue( &__ret4__ );
__Args__[2] = /* context id changed from 1315 to 1316*/(global_saveNum);
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue((const char*)g_pString631_729A9DB7) + YYGML_CallLegacyFunction(pSelf,pOther,__ret4__,1,g_FUNC_string.val,&__pArgs__[2]));
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,1,g_FUNC_file_delete.val,&__pArgs__[3]);
;
;
}
;

YY_STACKTRACE_LINE(14);
(global_gameStarted)=1;
;

YY_STACKTRACE_LINE(15);
(global_autosave)=1;
;

YY_STACKTRACE_LINE(17);
sself_dif = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_dif); /* set ContextID to 1315 */
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_difficulty))=/* context id changed from 224 to 1315*/(*sself_dif);
PopContextStack(1)
;
;

// considering sself_dif with OriginalContextID 224 VarTracking_ContextIDIsValid True
SWithIterator ___wi633___;
int ___wc634___ = YYGML_NewWithIterator( &___wi633___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, 12);
if (___wc634___ > 0 ) {
do {

YY_STACKTRACE_LINE(19);

YY_STACKTRACE_LINE(20);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
;
} while(YYGML_WithIteratorNext( &___wi633___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi633___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;

YY_STACKTRACE_LINE(23);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_startRoom);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_room_goto.val,&__pArgs__[0]);
;
;
}
;
}
#endif
