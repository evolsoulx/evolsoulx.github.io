#include "pch.hpp"
extern YYVAR self_xS;
extern YYVAR g_VAR_hspeed;
extern YYVAR g_VAR_alarm;
extern YYVAR g_Script_gml_Object_objBullet_Create_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objBullet_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objBullet_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objBullet_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue local_bulletDir;
YYRValue sbuiltin_hspeed;
YYRValue sbuiltin_alarm_62DEE183;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(4);
local_bulletDir=(YYGML_instance_exists(pSelf,pOther,(int)12) ? YYRValue( YYCOMPOUNDEXPR_BEGIN DValue ddo12000000000_xScale = { 0 };
YYRValue& o12000000000_xScale = *(YYRValue*)&ddo12000000000_xScale;
YYGML_Variable_GetValue( 12, kVARID_self_xScale, (int)ARRAY_INDEX_NO_INDEX, &o12000000000_xScale );
 YYCOMPOUNDEXPR_RETURN /* context id changed from 1263 to 1264*/(o12000000000_xScale) YYCOMPOUNDEXPR_END ) : YYRValue(1));
;

YY_STACKTRACE_LINE(7);
sbuiltin_hspeed=(/* local */local_bulletDir * 16);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
;


YY_STACKTRACE_LINE(11);
YYGML_array_set_owner((long)68062);
;

sbuiltin_alarm_62DEE183=40;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_alarm.val, (int)0, &sbuiltin_alarm_62DEE183 );
;
;
}
#endif
