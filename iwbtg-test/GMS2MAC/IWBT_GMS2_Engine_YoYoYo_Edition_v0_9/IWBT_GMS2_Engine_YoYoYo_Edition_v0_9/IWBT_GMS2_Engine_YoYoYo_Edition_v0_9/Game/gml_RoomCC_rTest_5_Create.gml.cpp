#include "pch.hpp"
extern YYVAR g_VAR_direction;
extern YYVAR g_VAR_speed;
extern YYVAR g_Script_gml_RoomCC_rTest_5_Create;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_RoomCC_rTest_5_Create( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_RoomCC_rTest_5_Create( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_RoomCC_rTest_5_Create", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_direction;
YYRValue sbuiltin_speed;
YYRValue __ret1__;


YY_STACKTRACE_LINE(1);
sbuiltin_direction=YYGML_random((double)360);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_direction.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_direction );
;

YY_STACKTRACE_LINE(4);
sbuiltin_speed=2;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_speed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_speed );
;
}
#endif
