#include "pch.hpp"
extern YYVAR g_Script_gml_Object_objWarpNext_Collision_objPlayer;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objWarpNext_Collision_objPlayer( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objWarpNext_Collision_objPlayer( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objWarpNext_Collision_objPlayer", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


SWithIterator ___wi651___;
int ___wc652___ = YYGML_NewWithIterator( &___wi651___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, 12);
if (___wc652___ > 0 ) {
do {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
;
} while(YYGML_WithIteratorNext( &___wi651___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi651___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;

YY_STACKTRACE_LINE(8);
YYGML_room_goto_next();
;
}
#endif
