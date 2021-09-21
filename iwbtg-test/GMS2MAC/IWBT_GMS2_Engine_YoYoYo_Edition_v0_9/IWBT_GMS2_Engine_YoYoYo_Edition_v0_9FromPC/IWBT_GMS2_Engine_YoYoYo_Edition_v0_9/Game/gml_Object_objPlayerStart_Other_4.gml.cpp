#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_objPlayerStart_Other_4;
extern YYVAR g_FUNC_instance_create_layer;
#ifndef __YYNODEFS
char g_pString468_F53AB6BE[] = {
0x50, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x00,                                                            // Player.
};
DValue gs_constArg0_F53AB6BE = { 12, 0, VALUE_REAL };
#else
extern char g_pString468_F53AB6BE[];
extern DValue gs_constArg0_F53AB6BE;
#endif // __YYNODEFS

void gml_Object_objPlayerStart_Other_4( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objPlayerStart_Other_4( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objPlayerStart_Other_4", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


if(!(YYGML_instance_exists(pSelf,pOther,(int)12))) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret1__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* First usage */sbuiltin_x + 17);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* First usage */sbuiltin_y + 23);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (const char*)g_pString468_F53AB6BE;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg0_F53AB6BE;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,4,g_FUNC_instance_create_layer.val,&__pArgs__[0]);
;
;
}
;
}
#endif
