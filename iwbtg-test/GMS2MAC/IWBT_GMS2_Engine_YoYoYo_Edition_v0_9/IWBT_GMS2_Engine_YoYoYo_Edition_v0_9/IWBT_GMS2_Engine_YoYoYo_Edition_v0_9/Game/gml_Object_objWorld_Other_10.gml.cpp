#include "pch.hpp"
extern YYVAR g_VAR_alarm;
extern YYVAR g_Script_gml_Object_objWorld_Other_10;
extern YYVAR g_FUNC_audio_sound_get_gain;
extern YYVAR g_FUNC_audio_sound_gain;
#ifndef __YYNODEFS
DValue gs_constArg0_7F1F6EE8 = { 0, 0, VALUE_REAL };
DValue gs_constArg1_7F1F6EE8 = { 1000, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_7F1F6EE8;
extern DValue gs_constArg1_7F1F6EE8;
#endif // __YYNODEFS

void gml_Object_objWorld_Other_10( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objWorld_Other_10( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objWorld_Other_10", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue & global_musicFading = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_musicFading);
YYRValue & global_currentMusic = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_currentMusic);
YYRValue & global_currentGain = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_currentGain);
YYRValue sbuiltin_alarm_62DEE183;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;


YY_STACKTRACE_LINE(2);
(global_musicFading)=1;
;

YY_STACKTRACE_LINE(3);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_currentMusic);
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_currentGain))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_audio_sound_get_gain.val,&__pArgs__[0]);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret1__ );
__Args__[0] = (global_currentMusic);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_7F1F6EE8;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_7F1F6EE8;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_sound_gain.val,&__pArgs__[0]);
;


YY_STACKTRACE_LINE(7);
YYGML_array_set_owner((long)68062);
;

sbuiltin_alarm_62DEE183=50;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_alarm.val, (int)0, &sbuiltin_alarm_62DEE183 );
;
;
}
#endif
