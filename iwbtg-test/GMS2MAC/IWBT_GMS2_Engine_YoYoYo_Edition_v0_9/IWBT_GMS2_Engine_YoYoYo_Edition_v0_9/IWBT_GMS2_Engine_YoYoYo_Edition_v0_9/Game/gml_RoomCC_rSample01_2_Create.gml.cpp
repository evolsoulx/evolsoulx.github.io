#include "pch.hpp"
extern YYVAR g_VAR_vspeed;
extern YYVAR g_Script_gml_RoomCC_rSample01_2_Create;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_RoomCC_rSample01_2_Create( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_RoomCC_rSample01_2_Create( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_RoomCC_rSample01_2_Create", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_vspeed;


sbuiltin_vspeed=2;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;
}
#endif
