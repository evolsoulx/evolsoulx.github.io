#include "pch.hpp"
extern YYVAR g_VAR_sprite_index;
extern YYVAR g_Script_gml_Object_objSaveVHard_Create_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objSaveVHard_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objSaveVHard_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objSaveVHard_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_sprite_index;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(3);
YYGML_event_inherited(pSelf,pOther);
;

YY_STACKTRACE_LINE(5);
YYRValue* sself_maxDifficulty = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_maxDifficulty); /* set ContextID to 215 */
(*sself_maxDifficulty)=2;
;

YY_STACKTRACE_LINE(8);
sbuiltin_sprite_index=45;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
;
}
#endif