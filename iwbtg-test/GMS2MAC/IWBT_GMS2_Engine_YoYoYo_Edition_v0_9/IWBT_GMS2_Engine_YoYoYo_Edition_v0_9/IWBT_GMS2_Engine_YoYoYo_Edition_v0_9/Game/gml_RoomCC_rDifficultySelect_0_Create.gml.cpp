#include "pch.hpp"
extern YYVAR g_Script_gml_RoomCC_rDifficultySelect_0_Create;
#ifndef __YYNODEFS
char g_pString231_EF125137[] = {
0x4d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x00,                                                            // Medium.
};
#else
extern char g_pString231_EF125137[];
#endif // __YYNODEFS

void gml_RoomCC_rDifficultySelect_0_Create( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_RoomCC_rDifficultySelect_0_Create( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_RoomCC_rDifficultySelect_0_Create", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );


YY_STACKTRACE_LINE(1);
YYRValue* sself_dif = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_dif); /* set ContextID to 26 */
(*sself_dif)=0;
;

YY_STACKTRACE_LINE(3);
YYRValue* sself_difName = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difName); /* set ContextID to 26 */
(*sself_difName)=(const char*)g_pString231_EF125137;
;
}
#endif
