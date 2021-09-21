#include "pch.hpp"
YYRValue& gml_Script_scrKillPlayer( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_room_width;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_room_height;
extern YYVAR g_Script_gml_Object_objPlayer_Step_2;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objPlayer_Step_2( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objPlayer_Step_2( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objPlayer_Step_2", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_x;
YYRValue global_builtin_room_width;
YYRValue sbuiltin_y;
YYRValue global_builtin_room_height;
YYRValue & global_edgeDeath = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_edgeDeath);
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


bool sc478 = false;
bool sc477 = false;
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
if ((/* First usage */sbuiltin_x < 0)) { sc477=true; } else 
{
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_width.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_width );
if ((/* volatile */sbuiltin_x > /* First usage */global_builtin_room_width)) { sc477=true; } else 
{
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
if ((/* First usage */sbuiltin_y < 0)) { sc477=true; } else 
{
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_height.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_height );
sc477 = ((/* volatile */sbuiltin_y > /* First usage */global_builtin_room_height));
 }  }  } 

if (sc477){
sc478 = (/* First usage */(global_edgeDeath).asBool());
 } 

if(sc478) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret1__ );
gml_Script_scrKillPlayer(pSelf,pOther,__ret1__,0,NULL);
;
;
}
;

YY_STACKTRACE_LINE(8);
;
}
#endif
