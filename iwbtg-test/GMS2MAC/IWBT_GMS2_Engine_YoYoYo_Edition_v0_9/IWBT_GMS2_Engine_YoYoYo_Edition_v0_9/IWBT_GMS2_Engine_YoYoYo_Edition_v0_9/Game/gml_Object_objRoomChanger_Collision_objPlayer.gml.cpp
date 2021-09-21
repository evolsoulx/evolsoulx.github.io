#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_objRoomChanger_Collision_objPlayer;
extern YYVAR g_FUNC_room_goto;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objRoomChanger_Collision_objPlayer( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objRoomChanger_Collision_objPlayer( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objRoomChanger_Collision_objPlayer", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue i12000000000_x;
YYRValue i12000000000_y;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(3);
bool sc639 = false;
YYRValue* sself_warpX = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_warpX); /* set ContextID to sself_warpX */
if ((/* First usage */(*sself_warpX) == 0)){
YYRValue* sself_warpY = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_warpY); /* set ContextID to sself_warpY */
sc639 = ((/* First usage */(*sself_warpY) == 0));
 } 

if(sc639) {

YY_STACKTRACE_LINE(3);

// considering sself_warpX with OriginalContextID 228 VarTracking_ContextIDIsValid True
SWithIterator ___wi641___;
int ___wc642___ = YYGML_NewWithIterator( &___wi641___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, 12);
if (___wc642___ > 0 ) {
do {

YY_STACKTRACE_LINE(4);

YY_STACKTRACE_LINE(5);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
;
} while(YYGML_WithIteratorNext( &___wi641___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi641___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;
;
}
else {

YY_STACKTRACE_LINE(7);

YY_STACKTRACE_LINE(8);
sself_warpX = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_warpX); /* set ContextID to 1321 */
i12000000000_x=/* context id changed from 228 to 1321*/(*sself_warpX);
Variable_SetValue( 12, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_x );
;

YY_STACKTRACE_LINE(9);
YYRValue* sself_warpY = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_warpY); /* set ContextID to sself_warpY */
i12000000000_y=/* context id changed from 1318 to 1321*/(*sself_warpY);
Variable_SetValue( 12, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &i12000000000_y );
;
;
}
;

YY_STACKTRACE_LINE(13);
FREE_RValue( &__ret1__ );
YYRValue* sself_roomTo = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_roomTo); /* set ContextID to sself_roomTo */
__Args__[0] = /* First usage */(*sself_roomTo);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_room_goto.val,&__pArgs__[0]);
;
}
#endif
