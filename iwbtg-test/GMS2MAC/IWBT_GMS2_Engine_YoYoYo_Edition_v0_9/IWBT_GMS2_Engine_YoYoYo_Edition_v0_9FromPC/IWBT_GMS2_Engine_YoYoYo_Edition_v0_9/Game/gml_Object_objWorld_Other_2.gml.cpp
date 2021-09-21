#include "pch.hpp"
YYRValue& gml_Script_scrInitGlobals( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_scrLoadConfig( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Object_objWorld_Other_2;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objWorld_Other_2( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objWorld_Other_2( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objWorld_Other_2", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;


YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret1__ );
gml_Script_scrInitGlobals(pSelf,pOther,__ret1__,0,NULL);
;

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
gml_Script_scrLoadConfig(pSelf,pOther,__ret1__,0,NULL);
;

YY_STACKTRACE_LINE(23);

YY_STACKTRACE_LINE(24);
YYGML_room_goto_next();
;
;
}
#endif
