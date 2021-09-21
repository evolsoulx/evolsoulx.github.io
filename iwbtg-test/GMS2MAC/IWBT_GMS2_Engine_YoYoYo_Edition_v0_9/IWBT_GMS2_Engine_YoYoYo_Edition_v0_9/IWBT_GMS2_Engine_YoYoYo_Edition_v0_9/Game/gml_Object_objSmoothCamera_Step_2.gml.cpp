#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_objSmoothCamera_Step_2;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objSmoothCamera_Step_2( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objSmoothCamera_Step_2( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objSmoothCamera_Step_2", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_x;
YYRValue i12000000000_x;
YYRValue sbuiltin_y;
YYRValue i12000000000_y;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


if(YYGML_instance_exists(pSelf,pOther,(int)12)) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
YYRValue* sself_snapDiv = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_snapDiv); /* set ContextID to sself_snapDiv */
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_x );
/* First usage */sbuiltin_x+=((/* First usage */i12000000000_x - /* volatile */sbuiltin_x) / /* First usage */(*sself_snapDiv));
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
;

YY_STACKTRACE_LINE(5);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_y );
/* First usage */sbuiltin_y+=((/* First usage */i12000000000_y - /* volatile */sbuiltin_y) / (*sself_snapDiv));
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
;
;
}
;
}
#endif
