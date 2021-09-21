#include "pch.hpp"
extern YYVAR g_VAR_layer;
extern YYVAR g_Script_gml_Object_objWaterParent_Other_4;
extern YYVAR g_FUNC_layer_exists;
extern YYVAR g_FUNC_layer_get_id;
#ifndef __YYNODEFS
char g_pString683_4D6D7EAF[] = {
0x41, 0x62, 0x6f, 0x76, 0x65, 0x5f, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x00,                        // Above_player.
};
#else
extern char g_pString683_4D6D7EAF[];
#endif // __YYNODEFS

void gml_Object_objWaterParent_Other_4( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objWaterParent_Other_4( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objWaterParent_Other_4", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue sbuiltin_layer;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


FREE_RValue( &__ret1__ );
__Args__[0] = (const char*)g_pString683_4D6D7EAF;
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_exists.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret2__ );
__Args__[1] = (const char*)g_pString683_4D6D7EAF;
__pArgs__[1] = &__Args__[1];
sbuiltin_layer=YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_layer_get_id.val,&__pArgs__[1]);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_layer.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_layer );
;
;
}
;
}
#endif
