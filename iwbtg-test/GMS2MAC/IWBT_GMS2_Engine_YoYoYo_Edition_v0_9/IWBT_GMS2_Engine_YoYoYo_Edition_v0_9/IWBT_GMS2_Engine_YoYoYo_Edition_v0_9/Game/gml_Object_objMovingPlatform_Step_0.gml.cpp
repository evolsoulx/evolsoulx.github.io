#include "pch.hpp"
extern YYVAR g_VAR_speed;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_hspeed;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_vspeed;
extern YYVAR g_Script_gml_Object_objMovingPlatform_Step_0;
extern YYVAR g_FUNC_instance_place;
#ifndef __YYNODEFS
DValue gs_constArg0_B2B194D1 = { 12, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_B2B194D1;
#endif // __YYNODEFS

void gml_Object_objMovingPlatform_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objMovingPlatform_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objMovingPlatform_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue sbuiltin_speed;
YYRValue sbuiltin_x;
YYRValue sbuiltin_hspeed;
YYRValue sbuiltin_y;
YYRValue sbuiltin_vspeed;
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue obuiltin_vspeed;
YYRValue obuiltin_hspeed;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


bool sc559 = false;
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_speed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_speed );
if ((/* First usage */sbuiltin_speed != 0)) { sc559=true; } else 
{
YYRValue* sself_yspeed = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_yspeed); /* set ContextID to sself_yspeed */
sc559 = ((/* First usage */(*sself_yspeed) != 0));
 } 

if(sc559) {

YY_STACKTRACE_LINE(3);

YYRValue* sself_bounce = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bounce); /* set ContextID to sself_bounce */
if(BOOL_RValue( /* First usage */(*sself_bounce) )) {

YY_STACKTRACE_LINE(5);

Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
if(!(YYGML_place_free(pSelf,(float)(/* First usage */sbuiltin_x + /* First usage */sbuiltin_hspeed),(float)(float)(/* First usage */sbuiltin_y.asReal())))) {

YY_STACKTRACE_LINE(6);

YY_STACKTRACE_LINE(7);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
sbuiltin_hspeed=YYRValue( -/* volatile */sbuiltin_hspeed.asReal() );
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;
;
}
;

YYRValue* sself_yspeed = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_yspeed); /* set ContextID to sself_yspeed */
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
if(!(YYGML_place_free(pSelf,(float)(float)(/* volatile */sbuiltin_x.asReal()),(float)((/* volatile */sbuiltin_y + /* First usage */sbuiltin_vspeed) + /* context id changed from 1271 to 1273*/(*sself_yspeed))))) {

YY_STACKTRACE_LINE(10);

YY_STACKTRACE_LINE(11);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
if((/* volatile */sbuiltin_vspeed != 0)) {

YY_STACKTRACE_LINE(11);

YY_STACKTRACE_LINE(12);
sself_yspeed = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yspeed); /* set ContextID to 1276 */
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_yspeed))=YYRValue( -/* volatile */sbuiltin_vspeed.asReal() );
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(13);
sbuiltin_vspeed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;
;
}
else {

YY_STACKTRACE_LINE(14);

YY_STACKTRACE_LINE(15);
sself_yspeed = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yspeed); /* set ContextID to 1277 */
sbuiltin_vspeed=YYRValue( -/* context id changed from 1276 to 1277*/(*sself_yspeed).asReal() );
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;

YY_STACKTRACE_LINE(16);
sself_yspeed = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yspeed); /* set ContextID to 1277 */
(*sself_yspeed)=0;
;
;
}
;
;
}
;
;
}
;

FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* volatile */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y - (2 * /* First usage */(global_grav)));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_B2B194D1;
__pArgs__[2] = &__Args__[2];
// considering sself_bounce with OriginalContextID 1272 VarTracking_ContextIDIsValid True
SWithIterator ___wi561___;
int ___wc562___ = YYGML_NewWithIterator( &___wi561___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_instance_place.val,&__pArgs__[0]));
if (___wc562___ > 0 ) {
do {

YY_STACKTRACE_LINE(22);

YY_STACKTRACE_LINE(23);
YYRValue* oself_yspeed = &((CInstanceBase*)pOther)->GetYYVarRef(kVARID_self_yspeed); /* set ContextID to oself_yspeed */
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_vspeed );
/* volatile */sbuiltin_y+=(/* First usage */obuiltin_vspeed + /* First usage */(*oself_yspeed));
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
;

Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_hspeed );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
if(YYGML_place_free(pSelf,(float)(/* volatile */sbuiltin_x + /* First usage */obuiltin_hspeed),(float)(float)(/* volatile */sbuiltin_y.asReal()))) {

YY_STACKTRACE_LINE(24);

YY_STACKTRACE_LINE(25);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pOther, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_hspeed );
/* volatile */sbuiltin_x+=/* volatile */obuiltin_hspeed;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
;
;
}
;
;
} while(YYGML_WithIteratorNext( &___wi561___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi561___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;

YY_STACKTRACE_LINE(29);
YYRValue* sself_yspeed = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yspeed); /* set ContextID to 1272 */
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
/* volatile */sbuiltin_y+=/* context id changed from 1277 to 1272*/(*sself_yspeed);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
;

Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
if((/* volatile */sbuiltin_vspeed < 0)) {

YY_STACKTRACE_LINE(31);

YY_STACKTRACE_LINE(32);
sself_yspeed = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yspeed); /* set ContextID to 1280 */
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_yspeed))=/* volatile */sbuiltin_vspeed;
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(33);
sbuiltin_vspeed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;
;
}
;

if((/* context id changed from 1280 to 1272*/(*sself_yspeed) > 0)) {

YY_STACKTRACE_LINE(35);

YY_STACKTRACE_LINE(36);
sself_yspeed = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yspeed); /* set ContextID to 1281 */
sbuiltin_vspeed=/* context id changed from 1272 to 1281*/(*sself_yspeed);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;

YY_STACKTRACE_LINE(37);
sself_yspeed = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yspeed); /* set ContextID to 1281 */
(*sself_yspeed)=0;
;
;
}
;
;
}
;
}
#endif
