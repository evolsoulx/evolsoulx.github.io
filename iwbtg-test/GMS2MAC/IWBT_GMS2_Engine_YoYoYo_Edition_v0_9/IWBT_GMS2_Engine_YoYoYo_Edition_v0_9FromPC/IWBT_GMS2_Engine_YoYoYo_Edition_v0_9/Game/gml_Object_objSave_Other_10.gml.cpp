#include "pch.hpp"
YYRValue& gml_Script_scrSaveGame( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_room_width;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_room_height;
extern YYVAR g_VAR_alarm;
extern YYVAR g_VAR_image_index;
extern YYVAR g_Script_gml_Object_objSave_Other_10;
#ifndef __YYNODEFS
DValue gs_constArg0_D5506737 = { 1, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_D5506737;
#endif // __YYNODEFS

void gml_Object_objSave_Other_10( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objSave_Other_10( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objSave_Other_10", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue i12000000000_x;
YYRValue global_builtin_room_width;
YYRValue i12000000000_y;
YYRValue global_builtin_room_height;
YYRValue & global_edgeDeath = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_edgeDeath);
YYRValue sbuiltin_alarm_62DEE183;
YYRValue sbuiltin_image_index;
YYRValue sbuiltin_alarm_7BC5D0C2;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


bool sc613 = false;
YYRValue* sself_canSave = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_canSave); /* set ContextID to sself_canSave */
if (/* First usage */(*sself_canSave).asBool()){
if (YYGML_instance_exists(pSelf,pOther,(int)12)){
YYRValue* sself_grav = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_grav); /* set ContextID to sself_grav */
sc613 = ((/* First usage */(global_grav) == /* First usage */(*sself_grav)));
 }  } 

if(sc613) {

YY_STACKTRACE_LINE(3);

bool sc615 = false;
bool sc614 = false;
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_x );
if ((/* First usage */i12000000000_x < 0)) { sc614=true; } else 
{
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_x );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_width.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_width );
if ((/* volatile */i12000000000_x > /* First usage */global_builtin_room_width)) { sc614=true; } else 
{
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_y );
if ((/* First usage */i12000000000_y < 0)) { sc614=true; } else 
{
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_y );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_height.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_height );
sc614 = ((/* volatile */i12000000000_y > /* First usage */global_builtin_room_height));
 }  }  } 

if (sc614){
sc615 = (/* First usage */(global_edgeDeath).asBool());
 } 

if(!(sc615)) {

YY_STACKTRACE_LINE(5);

YY_STACKTRACE_LINE(6);
sself_canSave = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_canSave); /* set ContextID to 1307 */
(*sself_canSave)=0;
;


YY_STACKTRACE_LINE(7);
YYGML_array_set_owner((long)68062);
;

sbuiltin_alarm_62DEE183=30;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_alarm.val, (int)0, &sbuiltin_alarm_62DEE183 );
;
;

YY_STACKTRACE_LINE(8);
sbuiltin_image_index=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_index );
;

YY_STACKTRACE_LINE(9);
sbuiltin_alarm_7BC5D0C2=58;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_alarm.val, (int)1, &sbuiltin_alarm_7BC5D0C2 );
;

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_D5506737;
__pArgs__[0] = &__Args__[0];
gml_Script_scrSaveGame(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;
;
}
;
;
}
;
}
#endif
