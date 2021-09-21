#include "pch.hpp"
YYRValue& gml_Script_scrPlayMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_room;
extern YYVAR g_Script_gml_Script_scrGetMusic;
extern YYVAR g_Script_gml_GlobalScript_scrGetMusic;
#ifndef __YYNODEFS
DValue gs_constArg0_F6B82BAD = { 1, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_F6B82BAD;
#endif // __YYNODEFS

YYRValue& gml_Script_scrGetMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrGetMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrGetMusic", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue global_builtin_room;
YYRValue local_roomSong;
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrGetMusic.val );

static bool sInitialised = false;

YY_STACKTRACE_LINE(5);
;

YY_STACKTRACE_LINE(7);
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room );
YYRValue ___sw185___ = (/* First usage */global_builtin_room);
int ___swc186___ = -1;
static SYYCaseEntry ___swcase187___[] = {
{ YYRValue(YYRValue(1)), 0},
{ YYRValue(YYRValue(2)), 0},
{ YYRValue(YYRValue(3)), 0},
{ YYRValue(YYRValue(4)), 0},
{ YYRValue(YYRValue(5)), 0},
{ YYRValue(YYRValue(6)), 0},
{ YYRValue(YYRValue(7)), 1},
};
for( int ___swcount188___=0; ___swcount188___<sizeof(___swcase187___)/sizeof(___swcase187___[0]); ++___swcount188___) {
	if (___swcase187___[___swcount188___].entry == ___sw185___) {
		___swc186___ = ___swcase187___[___swcount188___].value;
		break;
	}
}
switch( ___swc186___ ) {
case 0: {

YY_STACKTRACE_LINE(14);
local_roomSong=12;
;

YY_STACKTRACE_LINE(15);
break;
;
}
case 1: {

YY_STACKTRACE_LINE(17);
local_roomSong=-1;
;

YY_STACKTRACE_LINE(18);
break;
;
}
default: {

YY_STACKTRACE_LINE(20);
local_roomSong=-1;
;

YY_STACKTRACE_LINE(21);
break;
;
}
}
;

if((/* local */local_roomSong != -2)) {

YY_STACKTRACE_LINE(24);

YY_STACKTRACE_LINE(25);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_roomSong;
__Args__[1] = (YYRValue*)&gs_constArg0_F6B82BAD;
__pArgs__[1] = &__Args__[1];
gml_Script_scrPlayMusic(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
;
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrGetMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrGetMusic( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrGetMusic", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sself_scrGetMusic_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrGetMusic); /* set ContextID to 12 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrGetMusic_4ABE50B2)) = (YYRValue(gml_Script_scrGetMusic, pSelf)), PopContextStack();
;
return _result;
}
#endif
