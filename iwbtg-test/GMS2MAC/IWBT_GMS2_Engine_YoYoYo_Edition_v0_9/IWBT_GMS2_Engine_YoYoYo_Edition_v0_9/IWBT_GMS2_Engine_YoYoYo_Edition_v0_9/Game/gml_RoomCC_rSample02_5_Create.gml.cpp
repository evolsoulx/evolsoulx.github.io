#include "pch.hpp"
extern YYVAR g_Script_gml_RoomCC_rSample02_5_Create;
#ifndef __YYNODEFS
char g_pString258_43D57C04[] = {
0x59, 0x6f, 0x75, 0x0a, 0x63, 0x61, 0x6e, 0x0a, 0x6d, 0x61, 0x6b, 0x65, 0x0a, 0x6d, 0x75, 0x6c,      // You.can.make.mul
0x74, 0x69, 0x70, 0x6c, 0x65, 0x0a, 0x6c, 0x69, 0x6e, 0x65, 0x73, 0x0a, 0x6c, 0x69, 0x6b, 0x65,      // tiple.lines.like
0x0a, 0x74, 0x68, 0x69, 0x73, 0x00,                                                                  // .this.
};
#else
extern char g_pString258_43D57C04[];
#endif // __YYNODEFS

void gml_RoomCC_rSample02_5_Create( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_RoomCC_rSample02_5_Create( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_RoomCC_rSample02_5_Create", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue __ret1__;


YYRValue* sself_signText = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_signText); /* set ContextID to 47 */
(*sself_signText)=(const char*)g_pString258_43D57C04;
;
}
#endif
