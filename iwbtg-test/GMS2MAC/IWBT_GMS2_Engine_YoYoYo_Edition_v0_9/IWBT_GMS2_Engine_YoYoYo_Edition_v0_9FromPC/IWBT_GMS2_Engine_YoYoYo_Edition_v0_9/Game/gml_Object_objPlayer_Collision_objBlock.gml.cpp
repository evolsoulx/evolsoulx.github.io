#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_hspeed;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_vspeed;
extern YYVAR g_Script_gml_Object_objPlayer_Collision_objBlock;
extern YYVAR g_FUNC_move_contact_solid;
#ifndef __YYNODEFS
DValue gs_constArg0_5EB30381 = { 180, 0, VALUE_REAL };
DValue gs_constArg1_5EB30381 = { 0, 0, VALUE_REAL };
DValue gs_constArg2_5EB30381 = { 90, 0, VALUE_REAL };
DValue gs_constArg3_5EB30381 = { 270, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_5EB30381;
extern DValue gs_constArg1_5EB30381;
extern DValue gs_constArg2_5EB30381;
extern DValue gs_constArg3_5EB30381;
#endif // __YYNODEFS

void gml_Object_objPlayer_Collision_objBlock( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objPlayer_Collision_objBlock( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objPlayer_Collision_objBlock", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue sbuiltin_x;
YYRValue sbuiltin_hspeed;
YYRValue sbuiltin_y;
YYRValue sbuiltin_vspeed;
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
if(!(YYGML_place_free(pSelf,(float)(/* First usage */sbuiltin_x + /* First usage */sbuiltin_hspeed),(float)(float)(/* First usage */sbuiltin_y.asReal())))) {

YY_STACKTRACE_LINE(4);

YY_STACKTRACE_LINE(5);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
if((/* volatile */sbuiltin_hspeed <= 0)) {

YY_STACKTRACE_LINE(5);

YY_STACKTRACE_LINE(6);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
__Args__[0] = (YYRValue*)&gs_constArg0_5EB30381;
__pArgs__[0] = &__Args__[0];
__Args__[1] = YYGML_abs((double)/* volatile */sbuiltin_hspeed.asReal());
__pArgs__[1] = &__Args__[1];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_move_contact_solid.val,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(7);

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
__Args__[0] = (YYRValue*)&gs_constArg1_5EB30381;
__pArgs__[0] = &__Args__[0];
__Args__[1] = YYGML_abs((double)/* volatile */sbuiltin_hspeed.asReal());
__pArgs__[1] = &__Args__[1];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_move_contact_solid.val,&__pArgs__[0]);
;
;
}
;

YY_STACKTRACE_LINE(11);
sbuiltin_hspeed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;
;
}
;

Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
if(!(YYGML_place_free(pSelf,(float)(float)(/* volatile */sbuiltin_x.asReal()),(float)(/* volatile */sbuiltin_y + /* First usage */sbuiltin_vspeed)))) {

YY_STACKTRACE_LINE(15);

YY_STACKTRACE_LINE(16);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
if((/* volatile */sbuiltin_vspeed <= 0)) {

YY_STACKTRACE_LINE(16);

YY_STACKTRACE_LINE(17);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
__Args__[0] = (YYRValue*)&gs_constArg2_5EB30381;
__pArgs__[0] = &__Args__[0];
__Args__[1] = YYGML_abs((double)/* volatile */sbuiltin_vspeed.asReal());
__pArgs__[1] = &__Args__[1];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_move_contact_solid.val,&__pArgs__[0]);
;

if((/* First usage */(global_grav) == -1)) {

YY_STACKTRACE_LINE(19);

YY_STACKTRACE_LINE(20);
YYRValue* sself_djump = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_djump); /* set ContextID to 1243 */
(*sself_djump)=1;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(22);

YY_STACKTRACE_LINE(23);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
__Args__[0] = (YYRValue*)&gs_constArg3_5EB30381;
__pArgs__[0] = &__Args__[0];
__Args__[1] = YYGML_abs((double)/* volatile */sbuiltin_vspeed.asReal());
__pArgs__[1] = &__Args__[1];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_move_contact_solid.val,&__pArgs__[0]);
;

if((/* context id changed from 1242 to 1244*/(global_grav) == 1)) {

YY_STACKTRACE_LINE(25);

YY_STACKTRACE_LINE(26);
YYRValue* sself_djump = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_djump); /* set ContextID to 1245 */
(*sself_djump)=1;
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(30);
sbuiltin_vspeed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;
;
}
;

Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
if(!(YYGML_place_free(pSelf,(float)(/* volatile */sbuiltin_x + /* volatile */sbuiltin_hspeed),(float)(/* volatile */sbuiltin_y + /* volatile */sbuiltin_vspeed)))) {

YY_STACKTRACE_LINE(34);

YY_STACKTRACE_LINE(35);
sbuiltin_hspeed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;
;
}
;
}
#endif
