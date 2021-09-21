#include "pch.hpp"
extern YYVAR g_VAR_sprite_index;
extern YYVAR g_Script_gml_Object_objGameOver_Draw_64;
extern YYVAR g_FUNC_display_get_gui_width;
extern YYVAR g_FUNC_display_get_gui_height;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objGameOver_Draw_64( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objGameOver_Draw_64( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objGameOver_Draw_64", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_sprite_index;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
YYGML_draw_sprite(pSelf,(int)(int)(int64)((int)(int64)/* First usage */sbuiltin_sprite_index.asReal()),(int)-1,(float)(YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_display_get_gui_width.val,NULL) / (double)2),(float)(YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,0,g_FUNC_display_get_gui_height.val,NULL) / (double)2));
;
}
#endif
