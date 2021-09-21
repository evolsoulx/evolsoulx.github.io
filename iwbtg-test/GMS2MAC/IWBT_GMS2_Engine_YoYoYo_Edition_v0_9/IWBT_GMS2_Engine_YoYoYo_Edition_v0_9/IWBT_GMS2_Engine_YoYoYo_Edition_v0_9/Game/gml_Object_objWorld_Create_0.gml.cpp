#include "pch.hpp"
extern YYVAR g_VAR_object_index;
extern YYVAR g_Script_gml_Object_objWorld_Create_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objWorld_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objWorld_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objWorld_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_object_index;
YYRValue __ret1__;


Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_object_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_object_index );
if((YYGML_instance_number(pSelf,pOther,(int)(int)(int64)((int)(int64)/* First usage */sbuiltin_object_index.asReal())) > 1)) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
;
}
;
}
#endif
