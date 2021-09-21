#include "pch.hpp"
extern YYVAR g_VAR_vspeed;
extern YYVAR g_Script_gml_Object_objWaterParent_Collision_objPlayer;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objWaterParent_Collision_objPlayer( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objWaterParent_Collision_objPlayer( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objWaterParent_Collision_objPlayer", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_vspeed;
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


SWithIterator ___wi680___;
int ___wc681___ = YYGML_NewWithIterator( &___wi680___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, 12);
if (___wc681___ > 0 ) {
do {

YY_STACKTRACE_LINE(3);

Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
if(((/* First usage */sbuiltin_vspeed * /* First usage */(global_grav)) > 2)) {

YY_STACKTRACE_LINE(4);

YY_STACKTRACE_LINE(5);
sbuiltin_vspeed=(2 * /* context id changed from 1348 to 1349*/(global_grav));
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;
;
}
;

YYRValue* oself_refreshDjump = &((CInstanceBase*)pOther)->GetYYVarRef(kVARID_self_refreshDjump); /* set ContextID to oself_refreshDjump */
if(BOOL_RValue( /* First usage */(*oself_refreshDjump) )) {

YY_STACKTRACE_LINE(8);

YY_STACKTRACE_LINE(9);
YYRValue* sself_djump = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_djump); /* set ContextID to 1350 */
(*sself_djump)=1;
;
;
}
;
;
} while(YYGML_WithIteratorNext( &___wi680___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi680___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;
}
#endif
