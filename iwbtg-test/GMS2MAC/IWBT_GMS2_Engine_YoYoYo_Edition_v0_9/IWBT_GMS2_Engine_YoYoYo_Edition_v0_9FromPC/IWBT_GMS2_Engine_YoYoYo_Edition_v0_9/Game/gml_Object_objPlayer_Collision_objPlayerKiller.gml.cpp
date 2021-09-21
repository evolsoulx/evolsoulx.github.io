#include "pch.hpp"
YYRValue& gml_Script_scrKillPlayer( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Object_objPlayer_Collision_objPlayerKiller;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objPlayer_Collision_objPlayerKiller( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objPlayer_Collision_objPlayerKiller( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objPlayer_Collision_objPlayerKiller", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret1__ );
gml_Script_scrKillPlayer(pSelf,pOther,__ret1__,0,NULL);
;
}
#endif
