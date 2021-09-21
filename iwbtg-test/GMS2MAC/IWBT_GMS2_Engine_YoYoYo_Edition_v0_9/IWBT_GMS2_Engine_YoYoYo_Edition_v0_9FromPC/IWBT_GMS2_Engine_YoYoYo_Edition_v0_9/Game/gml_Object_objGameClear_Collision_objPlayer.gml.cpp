#include "pch.hpp"
YYRValue& gml_Script_scrSaveGame( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Object_objGameClear_Collision_objPlayer;
#ifndef __YYNODEFS
DValue gs_constArg0_30575E7F = { 1, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_30575E7F;
#endif // __YYNODEFS

void gml_Object_objGameClear_Collision_objPlayer( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objGameClear_Collision_objPlayer( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objGameClear_Collision_objPlayer", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue & global_gameClear = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gameClear);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


if(!((BOOL_RValue( /* First usage */(global_gameClear) )))) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
(global_gameClear)=1;
;

YY_STACKTRACE_LINE(5);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_30575E7F;
__pArgs__[0] = &__Args__[0];
gml_Script_scrSaveGame(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;
;
}
;
}
#endif
