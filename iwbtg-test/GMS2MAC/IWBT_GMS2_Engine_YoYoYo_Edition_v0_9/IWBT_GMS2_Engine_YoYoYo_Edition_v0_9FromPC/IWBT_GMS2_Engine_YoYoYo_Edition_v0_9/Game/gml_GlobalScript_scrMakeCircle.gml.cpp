#include "pch.hpp"
extern YYVAR g_VAR_speed;
extern YYVAR g_VAR_direction;
extern YYVAR g_Script_gml_Script_scrMakeCircle;
extern YYVAR g_Script_gml_GlobalScript_scrMakeCircle;
extern YYVAR g_FUNC_instance_create_layer;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_scrMakeCircle( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrMakeCircle( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrMakeCircle", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[7];
YYRValue __Args__[7];
YYRValue local_spawnX;
YYRValue local_spawnY;
YYRValue local_spawnLayer;
YYRValue local_spawnAngle;
YYRValue local_spawnNum;
YYRValue local_spawnSpeed;
YYRValue local_spawnObj;
YYRValue local_i;
YYRValue local_a;
YYRValue oa1C4F62BC7_speed;
YYRValue oa1C4F62BC7_direction;
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrMakeCircle.val );

static bool sInitialised = false;

YY_STACKTRACE_LINE(12);
local_spawnX=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(13);
local_spawnY=(*YY_GET_ARG(_args, (int)(1), _count));
;

YY_STACKTRACE_LINE(14);
local_spawnLayer=(*YY_GET_ARG(_args, (int)(2), _count));
;

YY_STACKTRACE_LINE(15);
local_spawnAngle=(*YY_GET_ARG(_args, (int)(3), _count));
;

YY_STACKTRACE_LINE(16);
local_spawnNum=(*YY_GET_ARG(_args, (int)(4), _count));
;

YY_STACKTRACE_LINE(17);
local_spawnSpeed=(*YY_GET_ARG(_args, (int)(5), _count));
;

YY_STACKTRACE_LINE(18);
local_spawnObj=(*YY_GET_ARG(_args, (int)(6), _count));
;

YY_STACKTRACE_LINE(19);
;


YY_STACKTRACE_LINE(21);
local_i=0;
;
bool ___f221___ = true;
while( true ) {
if (!___f221___) {

/* local */local_i+=1;
;
}
___f221___ = false;
bool ___b222___ = ((/* local */local_i < /* local */local_spawnNum));
if (!___b222___) break;
{

YY_STACKTRACE_LINE(21);

YY_STACKTRACE_LINE(22);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_spawnX;
__pArgs__[1] = &/* local */local_spawnY;
__pArgs__[2] = &/* local */local_spawnLayer;
__pArgs__[3] = &/* local */local_spawnObj;
local_a=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,4,g_FUNC_instance_create_layer.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(23);
oa1C4F62BC7_speed=/* local */local_spawnSpeed;
Variable_SetValue( /* local */local_a, g_VAR_speed.val, (int)ARRAY_INDEX_NO_INDEX, &oa1C4F62BC7_speed );
;

YY_STACKTRACE_LINE(24);
oa1C4F62BC7_direction=(/* local */local_spawnAngle + (/* local */local_i * ((double)360 / /* local */local_spawnNum)));
Variable_SetValue( /* local */local_a, g_VAR_direction.val, (int)ARRAY_INDEX_NO_INDEX, &oa1C4F62BC7_direction );
;
;
}
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrMakeCircle( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrMakeCircle( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrMakeCircle", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(10);
YYRValue* sself_scrMakeCircle_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrMakeCircle); /* set ContextID to 24 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrMakeCircle_4ABE50B2)) = (YYRValue(gml_Script_scrMakeCircle, pSelf)), PopContextStack();
;
return _result;
}
#endif
