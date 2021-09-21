#include "pch.hpp"
extern YYVAR g_VAR_hspeed;
extern YYVAR g_Script_gml_RoomCC_rSample01_1_Create;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_RoomCC_rSample01_1_Create( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_RoomCC_rSample01_1_Create( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_RoomCC_rSample01_1_Create", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_hspeed;


sbuiltin_hspeed=2;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;
}
#endif
