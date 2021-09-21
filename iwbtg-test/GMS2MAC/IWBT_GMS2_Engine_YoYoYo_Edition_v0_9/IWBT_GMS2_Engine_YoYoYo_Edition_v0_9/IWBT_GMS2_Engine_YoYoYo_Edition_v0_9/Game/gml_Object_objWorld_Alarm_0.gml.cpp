#include "pch.hpp"
extern YYVAR g_Script_gml_Object_objWorld_Alarm_0;
extern YYVAR g_FUNC_audio_pause_sound;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objWorld_Alarm_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objWorld_Alarm_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objWorld_Alarm_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue & global_currentMusic = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_currentMusic);
YYRValue __ret1__;


YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_currentMusic);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_audio_pause_sound.val,&__pArgs__[0]);
;
}
#endif
