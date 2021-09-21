#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_sprite_index;
extern YYVAR g_VAR_image_index;
extern YYVAR g_VAR_image_xscale;
extern YYVAR g_VAR_image_yscale;
extern YYVAR g_VAR_image_angle;
extern YYVAR g_VAR_image_blend;
extern YYVAR g_VAR_image_alpha;
extern YYVAR g_VAR_mask_index;
extern YYVAR g_Script_gml_Object_objPlayer_Draw_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objPlayer_Draw_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objPlayer_Draw_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objPlayer_Draw_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_x;
YYRValue local_drawX;
YYRValue sbuiltin_y;
YYRValue local_drawY;
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue sbuiltin_sprite_index;
YYRValue sbuiltin_image_index;
YYRValue sbuiltin_image_xscale;
YYRValue sbuiltin_image_yscale;
YYRValue sbuiltin_image_angle;
YYRValue sbuiltin_image_blend;
YYRValue sbuiltin_image_alpha;
YYRValue & global_debugShowHitbox = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugShowHitbox);
YYRValue sbuiltin_mask_index;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(3);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
local_drawX=/* First usage */sbuiltin_x;
;

YY_STACKTRACE_LINE(4);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
local_drawY=/* First usage */sbuiltin_y;
;

if((/* First usage */(global_grav) == -1)) {

YY_STACKTRACE_LINE(6);

YY_STACKTRACE_LINE(7);
/* local */local_drawY+=1;
;
;
}
;

YY_STACKTRACE_LINE(10);
YYRValue* sself_xScale = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xScale); /* set ContextID to sself_xScale */
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_index );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_xscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_xscale );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_yscale );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_angle );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_blend.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_blend );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
YYGML_draw_sprite_ext(pSelf,(int)(int)(int64)((int)(int64)/* First usage */sbuiltin_sprite_index.asReal()),(int)(int)(int64)((int)(int64)/* First usage */sbuiltin_image_index.asReal()),(float)(float)(/* local */local_drawX.asReal()),(float)(float)(/* local */local_drawY.asReal()),(float)(/* First usage */sbuiltin_image_xscale * /* First usage */(*sself_xScale)),(float)(/* First usage */sbuiltin_image_yscale * (global_grav)),(float)(float)(/* First usage */sbuiltin_image_angle.asReal()),(int)(int)(int64)((int)(int64)/* First usage */sbuiltin_image_blend.asReal()),(float)(float)(/* First usage */sbuiltin_image_alpha.asReal()));
;

if(BOOL_RValue( /* First usage */(global_debugShowHitbox) )) {

YY_STACKTRACE_LINE(13);

YY_STACKTRACE_LINE(14);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_mask_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_mask_index );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_index );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_xscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_xscale );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_yscale );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_angle );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_blend.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_blend );
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
YYGML_draw_sprite_ext(pSelf,(int)(int)(int64)((int)(int64)/* First usage */sbuiltin_mask_index.asReal()),(int)(int)(int64)((int)(int64)/* volatile */sbuiltin_image_index.asReal()),(float)(float)(/* volatile */sbuiltin_x.asReal()),(float)(float)(/* volatile */sbuiltin_y.asReal()),(float)(float)(/* volatile */sbuiltin_image_xscale.asReal()),(float)(float)(/* volatile */sbuiltin_image_yscale.asReal()),(float)(float)(/* volatile */sbuiltin_image_angle.asReal()),(int)(int)(int64)((int)(int64)/* volatile */sbuiltin_image_blend.asReal()),(float)(/* volatile */sbuiltin_image_alpha * 0.8));
;
;
}
;
}
#endif
