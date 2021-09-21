#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_vspeed;
extern YYVAR g_Script_gml_Object_objBlockRise_Step_0;
extern YYVAR g_FUNC_place_meeting;
#ifndef __YYNODEFS
DValue gs_constArg0_F084B196 = { 12, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_F084B196;
#endif // __YYNODEFS

void gml_Object_objBlockRise_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objBlockRise_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objBlockRise_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue i12000000000_vspeed;
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


bool sc567 = false;
YYRValue* sself_yspeed = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_yspeed); /* set ContextID to sself_yspeed */
if ((/* First usage */(*sself_yspeed) == 0)){
sc567 = (YYGML_instance_exists(pSelf,pOther,(int)12));
 } 

if(sc567) {

YY_STACKTRACE_LINE(3);

FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_vspeed );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((/* First usage */sbuiltin_y - /* First usage */i12000000000_vspeed) - /* First usage */(global_grav));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_F084B196;
__pArgs__[2] = &__Args__[2];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(4);

YY_STACKTRACE_LINE(5);
sself_yspeed = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yspeed); /* set ContextID to 1284 */
(*sself_yspeed)=-2;
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(10);
YYGML_event_inherited(pSelf,pOther);
;
}
#endif
