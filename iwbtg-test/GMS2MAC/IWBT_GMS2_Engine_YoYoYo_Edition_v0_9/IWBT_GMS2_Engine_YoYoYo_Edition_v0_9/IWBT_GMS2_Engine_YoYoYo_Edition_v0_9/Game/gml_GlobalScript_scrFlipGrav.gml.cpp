#include "pch.hpp"
extern YYVAR g_VAR_vspeed;
extern YYVAR g_VAR_gravity;
extern YYVAR g_VAR_mask_index;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Script_scrFlipGrav;
extern YYVAR g_Script_gml_GlobalScript_scrFlipGrav;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_scrFlipGrav( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrFlipGrav( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrFlipGrav", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue sbuiltin_vspeed;
YYRValue sbuiltin_gravity;
YYRValue sbuiltin_mask_index;
YYRValue sbuiltin_y;

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrFlipGrav.val );

static bool sInitialised = false;

YY_STACKTRACE_LINE(6);
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_grav))=YYRValue( -/* First usage */(global_grav).asReal() );
PopContextStack(1)
;
;

SWithIterator ___wi205___;
int ___wc206___ = YYGML_NewWithIterator( &___wi205___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, 12);
if (___wc206___ > 0 ) {
do {

YY_STACKTRACE_LINE(9);

YY_STACKTRACE_LINE(10);
sbuiltin_vspeed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
;

YY_STACKTRACE_LINE(11);
YYRValue* sself_djump = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_djump); /* set ContextID to 544 */
(*sself_djump)=1;
;

YY_STACKTRACE_LINE(13);
YYRValue* sself_jump = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_jump); /* set ContextID to 544 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_jump))=(YYGML_abs((double)/* First usage */(*sself_jump).asReal()) * /* context id changed from 543 to 544*/(global_grav));
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(14);
YYRValue* sself_jump2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_jump2); /* set ContextID to 544 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_jump2))=(YYGML_abs((double)/* First usage */(*sself_jump2).asReal()) * (global_grav));
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(15);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_gravity.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_gravity );
sbuiltin_gravity=(YYGML_abs((double)/* First usage */sbuiltin_gravity.asReal()) * (global_grav));
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_gravity.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_gravity );
;

YY_STACKTRACE_LINE(17);
if(((global_grav) == 1)) {

YY_STACKTRACE_LINE(17);

YY_STACKTRACE_LINE(18);
sbuiltin_mask_index=3;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_mask_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_mask_index );
;
;
}
else {

YY_STACKTRACE_LINE(19);

YY_STACKTRACE_LINE(20);
sbuiltin_mask_index=4;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_mask_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_mask_index );
;
;
}
;

YY_STACKTRACE_LINE(23);
Variable_GetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
/* First usage */sbuiltin_y+=(4 * (global_grav));
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
;
;
} while(YYGML_WithIteratorNext( &___wi205___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi205___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrFlipGrav( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrFlipGrav( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrFlipGrav", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sself_scrFlipGrav_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrFlipGrav); /* set ContextID to 22 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrFlipGrav_4ABE50B2)) = (YYRValue(gml_Script_scrFlipGrav, pSelf)), PopContextStack();
;
return _result;
}
#endif
