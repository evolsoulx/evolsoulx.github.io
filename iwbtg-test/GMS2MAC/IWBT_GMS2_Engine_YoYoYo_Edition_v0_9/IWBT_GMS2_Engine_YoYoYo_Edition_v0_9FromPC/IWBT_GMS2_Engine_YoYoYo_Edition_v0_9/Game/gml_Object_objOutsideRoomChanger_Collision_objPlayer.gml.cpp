#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_room_width;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_room_height;
extern YYVAR g_Script_gml_Object_objOutsideRoomChanger_Collision_objPlayer;
extern YYVAR g_FUNC_room_goto;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objOutsideRoomChanger_Collision_objPlayer( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objOutsideRoomChanger_Collision_objPlayer( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objOutsideRoomChanger_Collision_objPlayer", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue obuiltin_x;
YYRValue global_builtin_room_width;
YYRValue obuiltin_y;
YYRValue global_builtin_room_height;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


bool sc646 = false;
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_x );
if ((/* First usage */obuiltin_x < 0)) { sc646=true; } else 
{
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_x );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_width.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_width );
if ((/* volatile */obuiltin_x > /* First usage */global_builtin_room_width)) { sc646=true; } else 
{
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_y );
if ((/* First usage */obuiltin_y < 0)) { sc646=true; } else 
{
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_y );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_height.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_height );
sc646 = ((/* volatile */obuiltin_y > /* First usage */global_builtin_room_height));
 }  }  } 

if(sc646) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
YYRValue* sself_smoothTransition = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_smoothTransition); /* set ContextID to sself_smoothTransition */
if(!((BOOL_RValue( /* First usage */(*sself_smoothTransition) )))) {

YY_STACKTRACE_LINE(4);

YY_STACKTRACE_LINE(5);
YYGML_event_inherited(pSelf,pOther);
;
;
}
else {

YY_STACKTRACE_LINE(6);

YY_STACKTRACE_LINE(7);
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_x );
if((/* volatile */obuiltin_x < 0)) {

YY_STACKTRACE_LINE(7);

YY_STACKTRACE_LINE(8);
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_x );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_width.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_width );
/* volatile */obuiltin_x+=/* volatile */global_builtin_room_width;
Variable_SetValue_Direct( (YYObjectBase*)pOther, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_x );
;
;
}
else {

Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_x );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_width.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_width );
if((/* volatile */obuiltin_x > /* volatile */global_builtin_room_width)) {

YY_STACKTRACE_LINE(9);

YY_STACKTRACE_LINE(10);
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_x );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_width.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_width );
/* volatile */obuiltin_x-=/* volatile */global_builtin_room_width;
Variable_SetValue_Direct( (YYObjectBase*)pOther, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_x );
;
;
}
;
}
;

YY_STACKTRACE_LINE(12);
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_y );
if((/* volatile */obuiltin_y < 0)) {

YY_STACKTRACE_LINE(12);

YY_STACKTRACE_LINE(13);
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_y );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_height.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_height );
/* volatile */obuiltin_y+=/* volatile */global_builtin_room_height;
Variable_SetValue_Direct( (YYObjectBase*)pOther, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_y );
;
;
}
else {

Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_y );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_height.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_height );
if((/* volatile */obuiltin_y > /* volatile */global_builtin_room_height)) {

YY_STACKTRACE_LINE(14);

YY_STACKTRACE_LINE(15);
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_y );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_height.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_height );
/* volatile */obuiltin_y-=/* volatile */global_builtin_room_height;
Variable_SetValue_Direct( (YYObjectBase*)pOther, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_y );
;
;
}
;
}
;

YY_STACKTRACE_LINE(18);
FREE_RValue( &__ret1__ );
YYRValue* sself_roomTo = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_roomTo); /* set ContextID to sself_roomTo */
__Args__[0] = /* First usage */(*sself_roomTo);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_room_goto.val,&__pArgs__[0]);
;
;
}
;
;
}
;
}
#endif
