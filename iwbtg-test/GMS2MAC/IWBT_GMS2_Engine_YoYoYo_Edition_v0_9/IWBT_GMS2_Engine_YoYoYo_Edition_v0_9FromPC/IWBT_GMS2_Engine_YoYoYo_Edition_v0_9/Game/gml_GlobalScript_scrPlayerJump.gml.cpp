#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_vspeed;
extern YYVAR g_VAR_sprite_index;
extern YYVAR g_Script_gml_Script_scrPlayerJump;
extern YYVAR g_Script_gml_GlobalScript_scrPlayerJump;
extern YYVAR g_FUNC_place_meeting;
extern YYVAR g_FUNC_audio_play_sound;
#ifndef __YYNODEFS
DValue gs_constArg0_A265B54B = { 9, 0, VALUE_REAL };
DValue gs_constArg1_A265B54B = { 72, 0, VALUE_REAL };
DValue gs_constArg2_A265B54B = { 0, 0, VALUE_REAL };
DValue gs_constArg3_A265B54B = { 73, 0, VALUE_REAL };
DValue gs_constArg4_A265B54B = { 1, 0, VALUE_REAL };
DValue gs_constArg5_A265B54B = { 74, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_A265B54B;
extern DValue gs_constArg1_A265B54B;
extern DValue gs_constArg2_A265B54B;
extern DValue gs_constArg3_A265B54B;
extern DValue gs_constArg4_A265B54B;
extern DValue gs_constArg5_A265B54B;
#endif // __YYNODEFS

YYRValue& gml_Script_scrPlayerJump( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrPlayerJump( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrPlayerJump", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[6];
YYRValue __Args__[6];
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue sbuiltin_vspeed;
YYRValue & global_infJump = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_infJump);
YYRValue & global_debugInfJump = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugInfJump);
YYRValue sbuiltin_sprite_index;
YYRValue __ret1__(0);
YYRValue __ret2__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrPlayerJump.val );

static bool sInitialised = false;

YY_STACKTRACE_LINE(5);
bool sc198 = false;
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* First usage */sbuiltin_y + /* First usage */(global_grav));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_A265B54B;
__pArgs__[2] = &__Args__[2];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0])) { sc198=true; } else 
{
YYRValue* sself_onPlatform = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onPlatform); /* set ContextID to sself_onPlatform */
if (/* First usage */(*sself_onPlatform).asBool()) { sc198=true; } else 
{
FREE_RValue( &__ret2__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[3] = /* volatile */sbuiltin_x;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (/* volatile */sbuiltin_y + /* context id changed from 525 to 527*/(global_grav));
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg1_A265B54B;
__pArgs__[5] = &__Args__[5];
sc198 = ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_place_meeting.val,&__pArgs__[3]));
 }  } 

if(sc198) {

YY_STACKTRACE_LINE(5);

YY_STACKTRACE_LINE(7);
YYRValue* sself_jump = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_jump); /* set ContextID to sself_jump */
sbuiltin_vspeed=YYRValue( -/* First usage */(*sself_jump).asReal() );
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;

YY_STACKTRACE_LINE(8);
YYRValue* sself_djump = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_djump); /* set ContextID to 528 */
(*sself_djump)=1;
;

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg2_A265B54B;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg2_A265B54B;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg2_A265B54B;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
;
;
}
else {

bool sc199 = false;
YYRValue* sself_djump = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_djump); /* set ContextID to 529 */
if ((/* context id changed from 528 to 529*/(*sself_djump) == 1)) { sc199=true; } else 
{
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* volatile */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y + /* context id changed from 527 to 530*/(global_grav));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg3_A265B54B;
__pArgs__[2] = &__Args__[2];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0])) { sc199=true; } else 
{
bool sc200 = false;
if (/* First usage */(global_infJump).asBool()) { sc200=true; } else 
{
sc200 = (/* First usage */(global_debugInfJump).asBool());
 } 

sc199 = (sc200);
 }  } 

if(sc199) {

YY_STACKTRACE_LINE(10);

YY_STACKTRACE_LINE(12);
YYRValue* sself_jump2 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_jump2); /* set ContextID to sself_jump2 */
sbuiltin_vspeed=YYRValue( -/* First usage */(*sself_jump2).asReal() );
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;

YY_STACKTRACE_LINE(13);
sbuiltin_sprite_index=6;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
;

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg4_A265B54B;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg2_A265B54B;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg2_A265B54B;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(17);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* volatile */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y + /* context id changed from 530 to 533*/(global_grav));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg5_A265B54B;
__pArgs__[2] = &__Args__[2];
if(!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]) )))) {

YY_STACKTRACE_LINE(17);

YY_STACKTRACE_LINE(18);
sself_djump = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_djump); /* set ContextID to 534 */
(*sself_djump)=0;
;
;
}
else {

YY_STACKTRACE_LINE(19);

YY_STACKTRACE_LINE(20);
sself_djump = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_djump); /* set ContextID to 535 */
(*sself_djump)=1;
;
;
}
;
;
}
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrPlayerJump( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrPlayerJump( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrPlayerJump", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sself_scrPlayerJump_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrPlayerJump); /* set ContextID to 19 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrPlayerJump_4ABE50B2)) = (YYRValue(gml_Script_scrPlayerJump, pSelf)), PopContextStack();
;
return _result;
}
#endif
