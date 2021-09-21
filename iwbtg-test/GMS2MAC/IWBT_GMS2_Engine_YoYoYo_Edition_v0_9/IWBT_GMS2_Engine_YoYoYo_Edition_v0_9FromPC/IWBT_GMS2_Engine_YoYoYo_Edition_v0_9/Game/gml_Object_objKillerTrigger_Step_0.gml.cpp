#include "pch.hpp"
extern YYVAR g_VAR_vspeed;
extern YYVAR g_VAR_hspeed;
extern YYVAR g_VAR_speed;
extern YYVAR g_VAR_direction;
extern YYVAR g_Script_gml_Object_objKillerTrigger_Step_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objKillerTrigger_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objKillerTrigger_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objKillerTrigger_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue & global_trigger = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_trigger);
YYRValue sbuiltin_vspeed;
YYRValue sbuiltin_hspeed;
YYRValue sbuiltin_speed;
YYRValue sbuiltin_direction;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


bool sc595 = false;
YYRValue* sself_triggered = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_triggered); /* set ContextID to sself_triggered */
if (!((BOOL_RValue( /* First usage */(*sself_triggered) )))){
YYRValue* sself_trg = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_trg); /* set ContextID to sself_trg */
sc595 = (/* First usage */(global_trigger)[(int)(/* First usage */(*sself_trg))].asBool());
 } 

if(sc595) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
sself_triggered = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_triggered); /* set ContextID to 1294 */
(*sself_triggered)=1;
;

YY_STACKTRACE_LINE(6);
bool sc596 = false;
YYRValue* sself_v = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_v); /* set ContextID to sself_v */
if ((/* First usage */(*sself_v) != 0)) { sc596=true; } else 
{
YYRValue* sself_h = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_h); /* set ContextID to sself_h */
sc596 = ((/* First usage */(*sself_h) != 0));
 } 

if(sc596) {

YY_STACKTRACE_LINE(6);

YY_STACKTRACE_LINE(7);
sself_v = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_v); /* set ContextID to 1296 */
sbuiltin_vspeed=/* context id changed from 1294 to 1296*/(*sself_v);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;

YY_STACKTRACE_LINE(8);
YYRValue* sself_h = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_h); /* set ContextID to sself_h */
sbuiltin_hspeed=/* context id changed from 1295 to 1296*/(*sself_h);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;
;
}
else {

YYRValue* sself_spd = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_spd); /* set ContextID to sself_spd */
if((/* First usage */(*sself_spd) != 0)) {

YY_STACKTRACE_LINE(9);

YY_STACKTRACE_LINE(10);
sself_spd = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_spd); /* set ContextID to 1298 */
sbuiltin_speed=/* context id changed from 1297 to 1298*/(*sself_spd);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_speed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_speed );
;

YY_STACKTRACE_LINE(11);
YYRValue* sself_dir = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_dir); /* set ContextID to sself_dir */
sbuiltin_direction=/* First usage */(*sself_dir);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_direction.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_direction );
;
;
}
;
}
;
;
}
;
}
#endif
