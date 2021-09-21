#include "pch.hpp"
extern YYVAR g_Script_gml_Object_objWarpNextAutosave_Collision_objPlayer;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objWarpNextAutosave_Collision_objPlayer( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objWarpNextAutosave_Collision_objPlayer( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objWarpNextAutosave_Collision_objPlayer", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue & global_difficulty = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_difficulty);
YYRValue & global_autosave = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_autosave);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


if((/* First usage */(global_difficulty) < 3)) {

YY_STACKTRACE_LINE(4);

YY_STACKTRACE_LINE(5);
(global_autosave)=1;
;
;
}
;

YY_STACKTRACE_LINE(9);
YYGML_event_inherited(pSelf,pOther);
;
}
#endif
