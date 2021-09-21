#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_view_camera;
extern YYVAR g_VAR_id;
extern YYVAR g_Script_gml_Object_objSmoothCamera_Create_0;
extern YYVAR g_FUNC_camera_set_view_target;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objSmoothCamera_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objSmoothCamera_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objSmoothCamera_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue i12000000000_x;
YYRValue sbuiltin_x;
YYRValue i12000000000_y;
YYRValue sbuiltin_y;
YYRValue global_builtin_view_camera_FF09D93A;
YYRValue sbuiltin_id;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(3);
YYRValue* sself_snapDiv = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_snapDiv); /* set ContextID to 109 */
(*sself_snapDiv)=4;
;

if(YYGML_instance_exists(pSelf,pOther,(int)12)) {

YY_STACKTRACE_LINE(6);

YY_STACKTRACE_LINE(7);
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_x );
sbuiltin_x=/* First usage */i12000000000_x;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
;

YY_STACKTRACE_LINE(8);
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_y );
sbuiltin_y=/* First usage */i12000000000_y;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
;
;
}
;

YY_STACKTRACE_LINE(12);
FREE_RValue( &__ret1__ );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_view_camera.val, (int)0, &global_builtin_view_camera_FF09D93A );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_id.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_id );
__Args__[0] = /* First usage */global_builtin_view_camera_FF09D93A;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_id;
__pArgs__[1] = &__Args__[1];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_camera_set_view_target.val,&__pArgs__[0]);
;
}
#endif
