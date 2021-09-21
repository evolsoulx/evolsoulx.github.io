#include "pch.hpp"
extern YYVAR g_VAR_hspeed;
extern YYVAR g_Script_gml_RoomCC_rSample01_10_Create;
#ifndef __YYNODEFS
DValue gs_constArg0_24112E1A = { -2, 0, VALUE_REAL };
DValue gs_constArg1_24112E1A = { 2, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_24112E1A;
extern DValue gs_constArg1_24112E1A;
#endif // __YYNODEFS

void gml_RoomCC_rSample01_10_Create( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_RoomCC_rSample01_10_Create( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_RoomCC_rSample01_10_Create", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue sbuiltin_hspeed;
YYRValue __ret1__;


YY_STACKTRACE_LINE(2);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_24112E1A;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_24112E1A;
__pArgs__[1] = &__Args__[1];
sbuiltin_hspeed=YYGML_choose(__ret1__,2,&__pArgs__[0]);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;
}
#endif
