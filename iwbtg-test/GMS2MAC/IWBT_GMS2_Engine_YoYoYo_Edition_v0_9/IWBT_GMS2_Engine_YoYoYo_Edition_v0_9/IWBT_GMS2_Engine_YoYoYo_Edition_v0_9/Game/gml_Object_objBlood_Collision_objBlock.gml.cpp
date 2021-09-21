#include "pch.hpp"
extern YYVAR g_VAR_direction;
extern YYVAR g_VAR_speed;
extern YYVAR g_VAR_gravity;
extern YYVAR g_Script_gml_Object_objBlood_Collision_objBlock;
extern YYVAR g_FUNC_move_contact_solid;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objBlood_Collision_objBlock( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objBlood_Collision_objBlock( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objBlood_Collision_objBlock", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue sbuiltin_direction;
YYRValue sbuiltin_speed;
YYRValue sbuiltin_gravity;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(3);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_direction.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_direction );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_speed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_speed );
__Args__[0] = /* First usage */sbuiltin_direction;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_speed;
__pArgs__[1] = &__Args__[1];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_move_contact_solid.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(5);
sbuiltin_speed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_speed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_speed );
;

YY_STACKTRACE_LINE(7);
sbuiltin_gravity=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_gravity.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_gravity );
;
}
#endif
