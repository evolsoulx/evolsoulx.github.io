#include "pch.hpp"
extern YYVAR g_Script_gml_RoomCC_rDifficultySelect_2_Create;
#ifndef __YYNODEFS
char g_pString235_7AFF4962[] = {
0x4c, 0x6f, 0x61, 0x64, 0x20, 0x47, 0x61, 0x6d, 0x65, 0x00,                                          // Load Game.
};
#else
extern char g_pString235_7AFF4962[];
#endif // __YYNODEFS

void gml_RoomCC_rDifficultySelect_2_Create( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_RoomCC_rDifficultySelect_2_Create( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_RoomCC_rDifficultySelect_2_Create", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );


YY_STACKTRACE_LINE(1);
YYRValue* sself_dif = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_dif); /* set ContextID to 28 */
(*sself_dif)=4;
;

YY_STACKTRACE_LINE(3);
YYRValue* sself_difName = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difName); /* set ContextID to 28 */
(*sself_difName)=(const char*)g_pString235_7AFF4962;
;
}
#endif
