#include "pch.hpp"
extern YYVAR g_Script_gml_Object_objSecretItem_Collision_objPlayer;
extern YYVAR g_FUNC_audio_play_sound;
#ifndef __YYNODEFS
DValue gs_constArg0_E5F07201 = { 5, 0, VALUE_REAL };
DValue gs_constArg1_E5F07201 = { 0, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_E5F07201;
extern DValue gs_constArg1_E5F07201;
#endif // __YYNODEFS

void gml_Object_objSecretItem_Collision_objPlayer( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objSecretItem_Collision_objPlayer( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objSecretItem_Collision_objPlayer", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue & global_secretItem = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_secretItem);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;



YY_STACKTRACE_LINE(3);
YYGML_array_set_owner((long)231082);
;

YYRValue* sself_itemNum = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_itemNum); /* set ContextID to sself_itemNum */
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_secretItem))((int)(/* First usage */(*sself_itemNum)))=1;
PopContextStack(2)
;
;
;

YY_STACKTRACE_LINE(6);
;

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_E5F07201;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_E5F07201;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_E5F07201;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(13);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
}
#endif
