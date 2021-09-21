#include "pch.hpp"
extern YYVAR g_Script_gml_Object_objBlockFake_Collision_objPlayer;
extern YYVAR g_FUNC_audio_play_sound;
#ifndef __YYNODEFS
DValue gs_constArg0_DE7881B6 = { 6, 0, VALUE_REAL };
DValue gs_constArg1_DE7881B6 = { 0, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_DE7881B6;
extern DValue gs_constArg1_DE7881B6;
#endif // __YYNODEFS

void gml_Object_objBlockFake_Collision_objPlayer( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objBlockFake_Collision_objPlayer( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objBlockFake_Collision_objPlayer", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(3);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_DE7881B6;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_DE7881B6;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_DE7881B6;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(5);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
}
#endif
