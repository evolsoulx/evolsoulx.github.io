#include "pch.hpp"
extern YYVAR g_Script_gml_RoomCC_rSample02_2_Create;
#ifndef __YYNODEFS
char g_pString254_841FDEBA[] = {
0x54, 0x68, 0x69, 0x73, 0x20, 0x69, 0x73, 0x20, 0x61, 0x20, 0x73, 0x69, 0x67, 0x6e, 0x00,            // This is a sign.
};
#else
extern char g_pString254_841FDEBA[];
#endif // __YYNODEFS

void gml_RoomCC_rSample02_2_Create( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_RoomCC_rSample02_2_Create( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_RoomCC_rSample02_2_Create", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue __ret1__;


YYRValue* sself_signText = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_signText); /* set ContextID to 44 */
(*sself_signText)=(const char*)g_pString254_841FDEBA;
;
}
#endif
