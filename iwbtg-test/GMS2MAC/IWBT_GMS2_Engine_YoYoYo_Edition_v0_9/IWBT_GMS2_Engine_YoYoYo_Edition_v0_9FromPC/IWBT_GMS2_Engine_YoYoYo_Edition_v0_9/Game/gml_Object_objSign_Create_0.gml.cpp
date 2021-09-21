#include "pch.hpp"
extern YYVAR g_Script_gml_Object_objSign_Create_0;
#ifndef __YYNODEFS
char g_pString706_C0673CF3[] = {
0x00,                                                                                                // .
};
#else
extern char g_pString706_C0673CF3[];
#endif // __YYNODEFS

void gml_Object_objSign_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objSign_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objSign_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(3);
YYRValue* sself_showText = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_showText); /* set ContextID to 280 */
(*sself_showText)=0;
;

YY_STACKTRACE_LINE(7);
YYRValue* sself_signText = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_signText); /* set ContextID to 280 */
(*sself_signText)=(const char*)g_pString706_C0673CF3;
;
}
#endif
