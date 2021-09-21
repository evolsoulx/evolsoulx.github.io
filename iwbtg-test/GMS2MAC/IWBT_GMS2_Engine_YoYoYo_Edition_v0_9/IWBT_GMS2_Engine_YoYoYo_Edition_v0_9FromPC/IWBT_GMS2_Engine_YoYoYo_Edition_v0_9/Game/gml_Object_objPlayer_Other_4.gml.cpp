#include "pch.hpp"
extern YYVAR g_VAR_layer;
extern YYVAR g_Script_gml_Object_objPlayer_Other_4;
extern YYVAR g_FUNC_layer_get_id;
#ifndef __YYNODEFS
char g_pString513_4F6129DC[] = {
0x50, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x00,                                                            // Player.
};
#else
extern char g_pString513_4F6129DC[];
#endif // __YYNODEFS

void gml_Object_objPlayer_Other_4( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objPlayer_Other_4( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objPlayer_Other_4", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue sbuiltin_layer;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret1__ );
__Args__[0] = (const char*)g_pString513_4F6129DC;
__pArgs__[0] = &__Args__[0];
sbuiltin_layer=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_id.val,&__pArgs__[0]);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_layer.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_layer );
;
}
#endif
