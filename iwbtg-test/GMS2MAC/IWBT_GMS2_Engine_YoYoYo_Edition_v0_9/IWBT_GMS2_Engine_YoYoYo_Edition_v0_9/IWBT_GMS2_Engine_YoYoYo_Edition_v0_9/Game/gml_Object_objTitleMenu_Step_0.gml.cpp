#include "pch.hpp"
YYRValue& gml_Script_scrButtonCheckPressed( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Object_objTitleMenu_Step_0;
extern YYVAR g_FUNC_room_goto;
#ifndef __YYNODEFS
DValue gs_constArg0_976EFC36 = { 2, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_976EFC36;
#endif // __YYNODEFS

void gml_Object_objTitleMenu_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objTitleMenu_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objTitleMenu_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue & global_menuAcceptButton = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_menuAcceptButton);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;


FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global_menuAcceptButton);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( gml_Script_scrButtonCheckPressed(pSelf,pOther,__ret1__,1,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constArg0_976EFC36;
__pArgs__[1] = &__Args__[1];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_room_goto.val,&__pArgs__[1]);
;
;
}
;
}
#endif
