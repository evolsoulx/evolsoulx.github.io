#include "pch.hpp"
extern YYVAR g_VAR_visible;
extern YYVAR g_Script_gml_Object_objBlockInvis_Step_0;
extern YYVAR g_FUNC_distance_to_object;
extern YYVAR g_FUNC_audio_play_sound;
#ifndef __YYNODEFS
DValue gs_constArg0_790FCC76 = { 12, 0, VALUE_REAL };
DValue gs_constArg1_790FCC76 = { 6, 0, VALUE_REAL };
DValue gs_constArg2_790FCC76 = { 0, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_790FCC76;
extern DValue gs_constArg1_790FCC76;
extern DValue gs_constArg2_790FCC76;
#endif // __YYNODEFS

void gml_Object_objBlockInvis_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objBlockInvis_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objBlockInvis_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue sbuiltin_visible;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


bool sc548 = false;
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_visible.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_visible );
if (!((BOOL_RValue( /* First usage */sbuiltin_visible )))){
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_790FCC76;
__pArgs__[0] = &__Args__[0];
sc548 = ((YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_distance_to_object.val,&__pArgs__[0]) <= 1));
 } 

if(sc548) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constArg1_790FCC76;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg2_790FCC76;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg2_790FCC76;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_audio_play_sound.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(5);
sbuiltin_visible=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_visible.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_visible );
;
;
}
;
}
#endif
