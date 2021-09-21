#include "pch.hpp"
extern YYVAR g_Script_gml_Object_objWarpStart_Create_0;
#ifndef __YYNODEFS
char g_pString629_3AC87D85[] = {
0x4c, 0x6f, 0x61, 0x64, 0x20, 0x47, 0x61, 0x6d, 0x65, 0x00,                                          // Load Game.
};
#else
extern char g_pString629_3AC87D85[];
#endif // __YYNODEFS

void gml_Object_objWarpStart_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objWarpStart_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objWarpStart_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(3);
YYRValue* sself_dif = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_dif); /* set ContextID to 223 */
(*sself_dif)=4;
;

YY_STACKTRACE_LINE(5);
YYRValue* sself_difName = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_difName); /* set ContextID to 223 */
(*sself_difName)=(const char*)g_pString629_3AC87D85;
;
}
#endif
