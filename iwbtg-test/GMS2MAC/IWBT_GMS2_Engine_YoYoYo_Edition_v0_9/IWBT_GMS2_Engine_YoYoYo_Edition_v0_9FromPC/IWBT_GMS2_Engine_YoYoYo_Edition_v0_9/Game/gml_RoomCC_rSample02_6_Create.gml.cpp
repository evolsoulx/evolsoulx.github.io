#include "pch.hpp"
extern YYVAR g_Script_gml_RoomCC_rSample02_6_Create;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_RoomCC_rSample02_6_Create( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_RoomCC_rSample02_6_Create( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_RoomCC_rSample02_6_Create", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue __ret1__;


YY_STACKTRACE_LINE(1);
YYRValue* sself_trg = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_trg); /* set ContextID to 48 */
(*sself_trg)=2;
;

YY_STACKTRACE_LINE(2);
YYRValue* sself_dir = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_dir); /* set ContextID to 48 */
(*sself_dir)=30;
;

YY_STACKTRACE_LINE(4);
YYRValue* sself_spd = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_spd); /* set ContextID to 48 */
(*sself_spd)=6;
;
}
#endif
