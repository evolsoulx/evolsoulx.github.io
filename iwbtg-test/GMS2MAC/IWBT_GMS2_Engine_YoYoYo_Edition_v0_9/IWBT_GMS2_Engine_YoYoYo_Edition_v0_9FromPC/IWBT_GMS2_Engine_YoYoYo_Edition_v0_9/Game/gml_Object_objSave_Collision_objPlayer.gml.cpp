#include "pch.hpp"
YYRValue& gml_Script_scrButtonCheckPressed( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Object_objSave_Collision_objPlayer;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objSave_Collision_objPlayer( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objSave_Collision_objPlayer( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objSave_Collision_objPlayer", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue & global_shootButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_shootButton);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_shootButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(3);

YYGML_event_user(pSelf,pOther,(int)0);
;
;
}
;
}
#endif
