#include "pch.hpp"
extern YYVAR g_VAR_vspeed;
extern YYVAR g_Script_gml_Script_scrPlayerVJump;
extern YYVAR g_Script_gml_GlobalScript_scrPlayerVJump;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_scrPlayerVJump( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrPlayerVJump( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrPlayerVJump", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_vspeed;
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrPlayerVJump.val );

static bool sInitialised = false;

Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
if(((/* First usage */sbuiltin_vspeed * /* First usage */(global_grav)) < 0)) {

YY_STACKTRACE_LINE(5);

YY_STACKTRACE_LINE(6);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
/* volatile */sbuiltin_vspeed*=0.45;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrPlayerVJump( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrPlayerVJump( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrPlayerVJump", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sself_scrPlayerVJump_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrPlayerVJump); /* set ContextID to 20 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrPlayerVJump_4ABE50B2)) = (YYRValue(gml_Script_scrPlayerVJump, pSelf)), PopContextStack();
;
return _result;
}
#endif
