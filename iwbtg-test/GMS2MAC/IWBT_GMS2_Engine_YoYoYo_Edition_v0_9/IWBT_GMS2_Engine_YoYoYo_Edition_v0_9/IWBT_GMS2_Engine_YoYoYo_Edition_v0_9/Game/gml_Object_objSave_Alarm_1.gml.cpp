#include "pch.hpp"
extern YYVAR g_VAR_image_index;
extern YYVAR g_Script_gml_Object_objSave_Alarm_1;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objSave_Alarm_1( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objSave_Alarm_1( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objSave_Alarm_1", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_image_index;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


sbuiltin_image_index=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_index );
;
}
#endif
