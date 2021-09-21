#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_layer;
extern YYVAR g_Script_gml_Script_scrPlayerShoot;
extern YYVAR g_Script_gml_GlobalScript_scrPlayerShoot;
extern YYVAR g_FUNC_instance_create_layer;
extern YYVAR g_FUNC_audio_play_sound;
#ifndef __YYNODEFS
DValue gs_constArg0_0A5FF959 = { 15, 0, VALUE_REAL };
DValue gs_constArg1_0A5FF959 = { 3, 0, VALUE_REAL };
DValue gs_constArg2_0A5FF959 = { 0, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_0A5FF959;
extern DValue gs_constArg1_0A5FF959;
extern DValue gs_constArg2_0A5FF959;
#endif // __YYNODEFS

YYRValue& gml_Script_scrPlayerShoot( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrPlayerShoot( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrPlayerShoot", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue sbuiltin_layer;
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrPlayerShoot.val );

static bool sInitialised = false;

if((YYGML_instance_number(pSelf,pOther,(int)15) < 4)) {

YY_STACKTRACE_LINE(5);

YY_STACKTRACE_LINE(6);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_layer.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_layer );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* First usage */sbuiltin_y - (/* First usage */(global_grav) * 2));
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */sbuiltin_layer;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg0_0A5FF959;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,4,g_FUNC_instance_create_layer.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg1_0A5FF959;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg2_0A5FF959;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg2_0A5FF959;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
;
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrPlayerShoot( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrPlayerShoot( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrPlayerShoot", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sself_scrPlayerShoot_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrPlayerShoot); /* set ContextID to 21 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrPlayerShoot_4ABE50B2)) = (YYRValue(gml_Script_scrPlayerShoot, pSelf)), PopContextStack();
;
return _result;
}
#endif
