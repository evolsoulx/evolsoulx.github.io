#include "pch.hpp"
extern YYVAR g_Script_gml_Object_objOutsideRoomChanger_Create_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objOutsideRoomChanger_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objOutsideRoomChanger_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objOutsideRoomChanger_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(5);
YYGML_event_inherited(pSelf,pOther);
;

YY_STACKTRACE_LINE(9);
YYRValue* sself_smoothTransition = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_smoothTransition); /* set ContextID to 230 */
(*sself_smoothTransition)=0;
;
}
#endif
