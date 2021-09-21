#include "pch.hpp"
extern YYVAR g_VAR_visible;
extern YYVAR g_VAR_alarm;
extern YYVAR g_Script_gml_Object_objJumpRefresher_Collision_objPlayer;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objJumpRefresher_Collision_objPlayer( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objJumpRefresher_Collision_objPlayer( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objJumpRefresher_Collision_objPlayer", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_visible;
YYRValue sbuiltin_alarm_62DEE183;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_visible.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_visible );
if(BOOL_RValue( /* First usage */sbuiltin_visible )) {

YY_STACKTRACE_LINE(3);

SWithIterator ___wi698___;
int ___wc699___ = YYGML_NewWithIterator( &___wi698___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, 12);
if (___wc699___ > 0 ) {
do {

YY_STACKTRACE_LINE(4);

YY_STACKTRACE_LINE(5);
YYRValue* sself_djump = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_djump); /* set ContextID to 1353 */
(*sself_djump)=1;
;
;
} while(YYGML_WithIteratorNext( &___wi698___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi698___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;

YY_STACKTRACE_LINE(8);
sbuiltin_visible=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_visible.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_visible );
;


YY_STACKTRACE_LINE(9);
YYGML_array_set_owner((long)68062);
;

YYRValue* sself_refreshTime = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_refreshTime); /* set ContextID to sself_refreshTime */
sbuiltin_alarm_62DEE183=/* First usage */(*sself_refreshTime);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_alarm.val, (int)0, &sbuiltin_alarm_62DEE183 );
;
;
;
}
;
}
#endif
