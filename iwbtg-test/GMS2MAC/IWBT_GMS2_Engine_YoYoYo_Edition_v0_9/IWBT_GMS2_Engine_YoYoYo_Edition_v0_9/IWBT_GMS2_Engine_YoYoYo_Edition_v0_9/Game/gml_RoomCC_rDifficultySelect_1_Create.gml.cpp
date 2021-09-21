#include "pch.hpp"
extern YYVAR g_Script_gml_RoomCC_rDifficultySelect_1_Create;
#ifndef __YYNODEFS
char g_pString233_B3B4A673[] = {
0x48, 0x61, 0x72, 0x64, 0x00,                                                                        // Hard.
};
#else
extern char g_pString233_B3B4A673[];
#endif // __YYNODEFS

void gml_RoomCC_rDifficultySelect_1_Create( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_RoomCC_rDifficultySelect_1_Create( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_RoomCC_rDifficultySelect_1_Create", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );


YY_STACKTRACE_LINE(1);
YYRValue* sself_dif = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_dif); /* set ContextID to 27 */
(*sself_dif)=1;
;

YY_STACKTRACE_LINE(3);
YYRValue* sself_difName = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difName); /* set ContextID to 27 */
(*sself_difName)=(const char*)g_pString233_B3B4A673;
;
}
#endif
