#include "pch.hpp"
extern YYVAR g_Script_gml_RoomCC_rDifficultySelect_3_Create;
#ifndef __YYNODEFS
char g_pString237_23E28DD6[] = {
0x56, 0x65, 0x72, 0x79, 0x20, 0x48, 0x61, 0x72, 0x64, 0x00,                                          // Very Hard.
};
#else
extern char g_pString237_23E28DD6[];
#endif // __YYNODEFS

void gml_RoomCC_rDifficultySelect_3_Create( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_RoomCC_rDifficultySelect_3_Create( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_RoomCC_rDifficultySelect_3_Create", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );


YY_STACKTRACE_LINE(1);
YYRValue* sself_dif = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_dif); /* set ContextID to 29 */
(*sself_dif)=2;
;

YY_STACKTRACE_LINE(3);
YYRValue* sself_difName = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difName); /* set ContextID to 29 */
(*sself_difName)=(const char*)g_pString237_23E28DD6;
;
}
#endif
