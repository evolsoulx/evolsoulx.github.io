#include "pch.hpp"
YYRValue& gml_Script_scrSaveGame( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_gravity;
extern YYVAR g_VAR_mask_index;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_depth;
extern YYVAR g_Script_gml_Object_objPlayer_Create_0;
extern YYVAR g_FUNC_instance_create_depth;
#ifndef __YYNODEFS
DValue gs_constArg0_7DA5B605 = { 13, 0, VALUE_REAL };
DValue gs_constArg1_7DA5B605 = { 1, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_7DA5B605;
extern DValue gs_constArg1_7DA5B605;
#endif // __YYNODEFS

void gml_Object_objPlayer_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objPlayer_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objPlayer_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue sbuiltin_gravity;
YYRValue sbuiltin_mask_index;
YYRValue & global_difficulty = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_difficulty);
YYRValue & global_gameStarted = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_gameStarted);
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue sbuiltin_depth;
YYRValue & global_autosave = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_autosave);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(3);
YYRValue* sself_frozen = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_frozen); /* set ContextID to 118 */
(*sself_frozen)=0;
;

YY_STACKTRACE_LINE(5);
YYRValue* sself_jump = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_jump); /* set ContextID to 118 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_jump))=(8.5 * /* First usage */(global_grav));
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(6);
YYRValue* sself_jump2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_jump2); /* set ContextID to 118 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_jump2))=(7 * (global_grav));
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(7);
sbuiltin_gravity=(0.4 * (global_grav));
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_gravity.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_gravity );
;

YY_STACKTRACE_LINE(9);
YYRValue* sself_djump = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_djump); /* set ContextID to 118 */
(*sself_djump)=1;
;

YY_STACKTRACE_LINE(10);
YYRValue* sself_maxHSpeed = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_maxHSpeed); /* set ContextID to 118 */
(*sself_maxHSpeed)=3;
;

YY_STACKTRACE_LINE(11);
YYRValue* sself_maxVSpeed = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_maxVSpeed); /* set ContextID to 118 */
(*sself_maxVSpeed)=9;
;

YY_STACKTRACE_LINE(12);
YYRValue* sself_onPlatform = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_onPlatform); /* set ContextID to 118 */
(*sself_onPlatform)=0;
;

YY_STACKTRACE_LINE(14);
YYRValue* sself_xScale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xScale); /* set ContextID to 118 */
(*sself_xScale)=1;
;

YY_STACKTRACE_LINE(17);
if(((global_grav) == 1)) {

YY_STACKTRACE_LINE(17);

YY_STACKTRACE_LINE(18);
sbuiltin_mask_index=3;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_mask_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_mask_index );
;
;
}
else {

YY_STACKTRACE_LINE(19);

YY_STACKTRACE_LINE(20);
sbuiltin_mask_index=4;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_mask_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_mask_index );
;
;
}
;

bool sc475 = false;
if ((/* First usage */(global_difficulty) == 0)){
sc475 = (/* First usage */(global_gameStarted).asBool());
 } 

if(sc475) {

YY_STACKTRACE_LINE(24);

YY_STACKTRACE_LINE(25);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_depth.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_depth );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (/* First usage */sbuiltin_depth - 1);
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg0_7DA5B605;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,4,g_FUNC_instance_create_depth.val,&__pArgs__[0]);
;
;
}
;

if(BOOL_RValue( /* First usage */(global_autosave) )) {

YY_STACKTRACE_LINE(29);

YY_STACKTRACE_LINE(30);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg1_7DA5B605;
__pArgs__[0] = &__Args__[0];
gml_Script_scrSaveGame(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(31);
(global_autosave)=0;
;
;
}
;
}
#endif
