#include "pch.hpp"
extern YYVAR g_VAR_direction;
extern YYVAR g_VAR_speed;
extern YYVAR g_Script_gml_Script_scrMakeShapes;
extern YYVAR g_Script_gml_GlobalScript_scrMakeShapes;
extern YYVAR g_FUNC_sin;
extern YYVAR g_FUNC_instance_create_layer;
extern YYVAR g_FUNC_point_distance;
#ifndef __YYNODEFS
DValue gs_constArg0_BAFAC399 = { 0, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_BAFAC399;
#endif // __YYNODEFS

YYRValue& gml_Script_scrMakeShapes( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrMakeShapes( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrMakeShapes", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[8];
YYRValue __Args__[8];
YYRValue local_spawnX;
YYRValue local_spawnY;
YYRValue local_spawnLayer;
YYRValue local_spawnAngle;
YYRValue local_spawnEdges;
YYRValue local_spawnNum;
YYRValue local_spawnSpeed;
YYRValue local_spawnObj;
YYRValue local_th;
YYRValue local_i;
YYRValue local_xx;
YYRValue local_yy;
YYRValue local_ddx;
YYRValue local_ddy;
YYRValue local_j;
YYRValue local_dx;
YYRValue local_dy;
YYRValue local_a;
YYRValue oa1C4F62BC7_direction;
YYRValue oa1C4F62BC7_speed;
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrMakeShapes.val );

static bool sInitialised = false;

YY_STACKTRACE_LINE(13);
local_spawnX=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(14);
local_spawnY=(*YY_GET_ARG(_args, (int)(1), _count));
;

YY_STACKTRACE_LINE(15);
local_spawnLayer=(*YY_GET_ARG(_args, (int)(2), _count));
;

YY_STACKTRACE_LINE(16);
local_spawnAngle=(*YY_GET_ARG(_args, (int)(3), _count));
;

YY_STACKTRACE_LINE(17);
local_spawnEdges=(*YY_GET_ARG(_args, (int)(4), _count));
;

YY_STACKTRACE_LINE(18);
local_spawnNum=(*YY_GET_ARG(_args, (int)(5), _count));
;

YY_STACKTRACE_LINE(19);
local_spawnSpeed=(*YY_GET_ARG(_args, (int)(6), _count));
;

YY_STACKTRACE_LINE(20);
local_spawnObj=(*YY_GET_ARG(_args, (int)(7), _count));
;

YY_STACKTRACE_LINE(21);
;

YY_STACKTRACE_LINE(23);
local_th=YYGML_degtorad((double)/* local */local_spawnAngle.asReal());
;


YY_STACKTRACE_LINE(25);
local_i=0;
;
bool ___f224___ = true;
while( true ) {
if (!___f224___) {

/* local */local_i+=1;
;
}
___f224___ = false;
bool ___b225___ = ((/* local */local_i < /* local */local_spawnEdges));
if (!___b225___) break;
{

YY_STACKTRACE_LINE(25);


YY_STACKTRACE_LINE(26);
YYGML_array_set_owner((long)1804041);
;

local_xx((int)(/* local */local_i))=YYGML_cos((double)(/* local */local_th + ((6.283185307179586 * /* local */local_i) / /* local */local_spawnEdges)));
PopContextStack(1)
;
;
;


YY_STACKTRACE_LINE(27);
YYGML_array_set_owner((long)1804042);
;

FREE_RValue( &__ret1__ );
__Args__[0] = (/* local */local_th + ((6.283185307179586 * /* local */local_i) / /* local */local_spawnEdges));
__pArgs__[0] = &__Args__[0];
local_yy((int)(/* local */local_i))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_sin.val,&__pArgs__[0]);
PopContextStack(1)
;
;
;
;
}
}
;


YY_STACKTRACE_LINE(30);
YYGML_array_set_owner((long)1804041);
;

local_xx((int)(/* local */local_spawnEdges))=YYRValue(/* volatile */local_xx[(int)(0)]);
PopContextStack(1)
;
;
;


YY_STACKTRACE_LINE(31);
YYGML_array_set_owner((long)1804042);
;

local_yy((int)(/* local */local_spawnEdges))=YYRValue(/* volatile */local_yy[(int)(0)]);
PopContextStack(1)
;
;
;


YY_STACKTRACE_LINE(33);
local_i=0;
;
bool ___f226___ = true;
while( true ) {
if (!___f226___) {

/* local */local_i+=1;
;
}
___f226___ = false;
bool ___b227___ = ((/* local */local_i < /* local */local_spawnEdges));
if (!___b227___) break;
{

YY_STACKTRACE_LINE(33);

YY_STACKTRACE_LINE(34);
local_ddx=(/* volatile */local_xx[(int)((/* local */local_i + 1))] - /* volatile */local_xx[(int)(/* local */local_i)]);
;

YY_STACKTRACE_LINE(35);
local_ddy=(/* volatile */local_yy[(int)((/* local */local_i + 1))] - /* volatile */local_yy[(int)(/* local */local_i)]);
;


YY_STACKTRACE_LINE(37);
local_j=0;
;
bool ___f228___ = true;
while( true ) {
if (!___f228___) {

/* local */local_j+=1;
;
}
___f228___ = false;
bool ___b229___ = ((/* local */local_j < /* local */local_spawnNum));
if (!___b229___) break;
{

YY_STACKTRACE_LINE(37);

YY_STACKTRACE_LINE(38);
local_dx=(/* volatile */local_xx[(int)(/* local */local_i)] + ((/* local */local_ddx * /* local */local_j) / /* local */local_spawnNum));
;

YY_STACKTRACE_LINE(39);
local_dy=(/* volatile */local_yy[(int)(/* local */local_i)] + ((/* local */local_ddy * /* local */local_j) / /* local */local_spawnNum));
;

YY_STACKTRACE_LINE(41);
FREE_RValue( &__ret1__ );
__Args__[0] = (/* local */local_spawnX + /* local */local_dx);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* local */local_spawnY + /* local */local_dy);
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_spawnLayer;
__pArgs__[3] = &/* local */local_spawnObj;
local_a=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,4,g_FUNC_instance_create_layer.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(42);
oa1C4F62BC7_direction=YYGML_point_direction((float)0,(float)0,(float)(float)(/* local */local_dx.asReal()),(float)(float)(/* local */local_dy.asReal()));
Variable_SetValue( /* local */local_a, g_VAR_direction.val, (int)ARRAY_INDEX_NO_INDEX, &oa1C4F62BC7_direction );
;

YY_STACKTRACE_LINE(43);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_BAFAC399;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_BAFAC399;
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_dx;
__pArgs__[3] = &/* local */local_dy;
oa1C4F62BC7_speed=(/* local */local_spawnSpeed * YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,4,g_FUNC_point_distance.val,&__pArgs__[0]));
Variable_SetValue( /* local */local_a, g_VAR_speed.val, (int)ARRAY_INDEX_NO_INDEX, &oa1C4F62BC7_speed );
;
;
}
}
;
;
}
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrMakeShapes( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrMakeShapes( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrMakeShapes", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(11);
YYRValue* sself_scrMakeShapes_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrMakeShapes); /* set ContextID to 25 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrMakeShapes_4ABE50B2)) = (YYRValue(gml_Script_scrMakeShapes, pSelf)), PopContextStack();
;
return _result;
}
#endif
