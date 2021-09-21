#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_room_width;
extern YYVAR g_VAR_room_height;
extern YYVAR g_VAR_view_wport;
extern YYVAR g_VAR_view_hport;
extern YYVAR g_VAR_view_camera;
extern YYVAR g_Script_gml_Object_objSnapCamera_Step_2;
extern YYVAR g_FUNC_clamp;
extern YYVAR g_FUNC_floor;
extern YYVAR g_FUNC_camera_set_view_pos;
#ifndef __YYNODEFS
DValue gs_constArg0_AEEB51C7 = { 0, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_AEEB51C7;
#endif // __YYNODEFS

void gml_Object_objSnapCamera_Step_2( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objSnapCamera_Step_2( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objSnapCamera_Step_2", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue i12000000000_x;
YYRValue local_xFollow;
YYRValue i12000000000_y;
YYRValue local_yFollow;
YYRValue global_builtin_room_width;
YYRValue global_builtin_room_height;
YYRValue global_builtin_view_wport_FF09D93A;
YYRValue global_builtin_view_hport_FF09D93A;
YYRValue global_builtin_view_camera_FF09D93A;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


if(YYGML_instance_exists(pSelf,pOther,(int)12)) {

YY_STACKTRACE_LINE(3);

YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_x );
local_xFollow=/* First usage */i12000000000_x;
;

YY_STACKTRACE_LINE(5);
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_y );
local_yFollow=/* First usage */i12000000000_y;
;

YYRValue* sself_leaveRoom = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_leaveRoom); /* set ContextID to sself_leaveRoom */
if(!((BOOL_RValue( /* First usage */(*sself_leaveRoom) )))) {

YY_STACKTRACE_LINE(7);

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_width.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_width );
__pArgs__[0] = &/* local */local_xFollow;
__Args__[1] = (YYRValue*)&gs_constArg0_AEEB51C7;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (/* First usage */global_builtin_room_width - 1);
__pArgs__[2] = &__Args__[2];
local_xFollow=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_clamp.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret1__ );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_height.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_height );
__pArgs__[0] = &/* local */local_yFollow;
__Args__[1] = (YYRValue*)&gs_constArg0_AEEB51C7;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (/* First usage */global_builtin_room_height - 1);
__pArgs__[2] = &__Args__[2];
local_yFollow=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_clamp.val,&__pArgs__[0]);
;
;
}
;

YY_STACKTRACE_LINE(12);
FREE_RValue( &__ret1__ );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_view_wport.val, (int)0, &global_builtin_view_wport_FF09D93A );
__Args__[0] = (/* local */local_xFollow / /* First usage */global_builtin_view_wport_FF09D93A);
__pArgs__[0] = &__Args__[0];
local_xFollow=(YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_floor.val,&__pArgs__[0]) * /* volatile */global_builtin_view_wport_FF09D93A);
;

YY_STACKTRACE_LINE(13);
FREE_RValue( &__ret1__ );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_view_hport.val, (int)0, &global_builtin_view_hport_FF09D93A );
__Args__[0] = (/* local */local_yFollow / /* First usage */global_builtin_view_hport_FF09D93A);
__pArgs__[0] = &__Args__[0];
local_yFollow=(YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_floor.val,&__pArgs__[0]) * /* volatile */global_builtin_view_hport_FF09D93A);
;

YY_STACKTRACE_LINE(15);
FREE_RValue( &__ret1__ );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_view_camera.val, (int)0, &global_builtin_view_camera_FF09D93A );
__Args__[0] = /* First usage */global_builtin_view_camera_FF09D93A;
__pArgs__[0] = &__Args__[0];
__pArgs__[1] = &/* local */local_xFollow;
__pArgs__[2] = &/* local */local_yFollow;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_camera_set_view_pos.val,&__pArgs__[0]);
;
;
}
;
}
#endif
