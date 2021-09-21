#include "pch.hpp"
extern YYVAR g_VAR_image_number;
extern YYVAR g_VAR_image_index;
extern YYVAR g_VAR_direction;
extern YYVAR g_VAR_speed;
extern YYVAR g_VAR_gravity;
extern YYVAR g_Script_gml_Object_objBlood_Create_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objBlood_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objBlood_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objBlood_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_image_number;
YYRValue sbuiltin_image_index;
YYRValue sbuiltin_direction;
YYRValue sbuiltin_speed;
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue sbuiltin_gravity;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(3);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_number.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_number );
sbuiltin_image_index=YYGML_irandom((long)(/* First usage */sbuiltin_image_number - 1));
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_index );
;

YY_STACKTRACE_LINE(5);
sbuiltin_direction=(YYGML_irandom((long)35) * 10);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_direction.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_direction );
;

YY_STACKTRACE_LINE(6);
sbuiltin_speed=YYGML_random((double)6);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_speed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_speed );
;

YY_STACKTRACE_LINE(8);
sbuiltin_gravity=((0.1 + YYGML_random((double)0.2)) * /* First usage */(global_grav));
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_gravity.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_gravity );
;
}
#endif
