#include "pch.hpp"
YYRValue& gml_Script_scrGetMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_layer;
extern YYVAR g_Script_gml_Object_objWorld_Other_4;
extern YYVAR g_FUNC_layer_get_id;
#ifndef __YYNODEFS
char g_pString316_FB2E8977[] = {
0x57, 0x6f, 0x72, 0x6c, 0x64, 0x00,                                                                  // World.
};
#else
extern char g_pString316_FB2E8977[];
#endif // __YYNODEFS

void gml_Object_objWorld_Other_4( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objWorld_Other_4( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objWorld_Other_4", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue sbuiltin_layer;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;


YY_STACKTRACE_LINE(3);
FREE_RValue( &__ret1__ );
gml_Script_scrGetMusic(pSelf,pOther,__ret1__,0,NULL);
;

YY_STACKTRACE_LINE(6);
FREE_RValue( &__ret1__ );
__Args__[0] = (const char*)g_pString316_FB2E8977;
__pArgs__[0] = &__Args__[0];
sbuiltin_layer=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_id.val,&__pArgs__[0]);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_layer.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_layer );
;
}
#endif
