#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR self_xS;
extern YYVAR g_VAR_image_xscale;
extern YYVAR g_VAR_image_yscale;
extern YYVAR g_VAR_depth;
extern YYVAR g_Script_gml_Object_objBow_Step_2;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objBow_Step_2( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objBow_Step_2( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objBow_Step_2", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue i12000000000_x;
YYRValue sbuiltin_x;
YYRValue i12000000000_y;
YYRValue sbuiltin_y;
YYRValue sbuiltin_image_xscale;
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue sbuiltin_image_yscale;
YYRValue i12000000000_depth;
YYRValue sbuiltin_depth;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(3);
if(YYGML_instance_exists(pSelf,pOther,(int)12)) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_x );
sbuiltin_x=/* First usage */i12000000000_x;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
;

YY_STACKTRACE_LINE(5);
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_y );
sbuiltin_y=/* First usage */i12000000000_y;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
;

YY_STACKTRACE_LINE(6);
DValue ddo12000000000_xScale = { 0 };
YYRValue& o12000000000_xScale = *(YYRValue*)&ddo12000000000_xScale;
YYGML_Variable_GetValue( 12, kVARID_self_xScale, (int)ARRAY_INDEX_NO_INDEX, &o12000000000_xScale );
sbuiltin_image_xscale=/* First usage */(o12000000000_xScale);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_xscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_xscale );
;

YY_STACKTRACE_LINE(9);
if((/* First usage */(global_grav) == 1)) {

YY_STACKTRACE_LINE(9);

YY_STACKTRACE_LINE(10);
sbuiltin_image_yscale=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_yscale );
;
;
}
else {

YY_STACKTRACE_LINE(11);

YY_STACKTRACE_LINE(12);
sbuiltin_image_yscale=-1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_yscale );
;

YY_STACKTRACE_LINE(13);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
/* volatile */sbuiltin_y+=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
;
;
}
;

YY_STACKTRACE_LINE(16);
YYGML_ErrCheck_Variable_GetValue( 12, g_VAR_depth.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_depth );
sbuiltin_depth=(/* First usage */i12000000000_depth - 1);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_depth.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_depth );
;
;
}
else {

YY_STACKTRACE_LINE(17);

YY_STACKTRACE_LINE(18);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
;
}
;
}
#endif
