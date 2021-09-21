#include "pch.hpp"
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_vspeed;
extern YYVAR g_VAR_sprite_height;
extern YYVAR g_Script_gml_Object_objPlayer_Collision_objPlatform;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objPlayer_Collision_objPlatform( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objPlayer_Collision_objPlatform( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objPlayer_Collision_objPlatform", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue sbuiltin_y;
YYRValue sbuiltin_vspeed;
YYRValue obuiltin_y;
YYRValue obuiltin_vspeed;
YYRValue obuiltin_sprite_height;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(3);
if((/* First usage */(global_grav) == 1)) {

YY_STACKTRACE_LINE(3);

Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_y );
if(((/* First usage */sbuiltin_y - (/* First usage */sbuiltin_vspeed / (double)2)) <= /* First usage */obuiltin_y)) {

YY_STACKTRACE_LINE(4);

Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_vspeed );
if((/* First usage */obuiltin_vspeed >= 0)) {

YY_STACKTRACE_LINE(5);

YY_STACKTRACE_LINE(6);
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_y );
sbuiltin_y=(/* volatile */obuiltin_y - 9);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
;

YY_STACKTRACE_LINE(7);
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_vspeed );
sbuiltin_vspeed=/* volatile */obuiltin_vspeed;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;
;
}
;

YY_STACKTRACE_LINE(10);
YYRValue* sself_onPlatform = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_onPlatform); /* set ContextID to 1248 */
(*sself_onPlatform)=1;
;

YY_STACKTRACE_LINE(11);
YYRValue* sself_djump = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_djump); /* set ContextID to 1248 */
(*sself_djump)=1;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(13);

Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_y );
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_sprite_height.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_sprite_height );
if(((/* volatile */sbuiltin_y - (/* volatile */sbuiltin_vspeed / (double)2)) >= ((/* volatile */obuiltin_y + /* First usage */obuiltin_sprite_height) - 1))) {

YY_STACKTRACE_LINE(14);

YYRValue* oself_yspeed = &((CInstanceBase*)pOther)->GetYYVarRef(kVARID_self_yspeed); /* set ContextID to oself_yspeed */
if((/* First usage */(*oself_yspeed) <= 0)) {

YY_STACKTRACE_LINE(15);

YY_STACKTRACE_LINE(16);
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_y );
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_sprite_height.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_sprite_height );
sbuiltin_y=((/* volatile */obuiltin_y + /* volatile */obuiltin_sprite_height) + 8);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
;

YY_STACKTRACE_LINE(17);
oself_yspeed = &((CInstanceBase*)pOther)->GetYYVarRef(kVARID_self_yspeed); /* set ContextID to 1254 */
sbuiltin_vspeed=/* context id changed from 1253 to 1254*/(*oself_yspeed);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;
;
}
;

YY_STACKTRACE_LINE(20);
YYRValue* sself_onPlatform = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_onPlatform); /* set ContextID to 1253 */
(*sself_onPlatform)=1;
;

YY_STACKTRACE_LINE(21);
YYRValue* sself_djump = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_djump); /* set ContextID to 1253 */
(*sself_djump)=1;
;
;
}
;
;
}
;
}
#endif
