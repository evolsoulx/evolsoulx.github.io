#include "pch.hpp"
extern YYVAR g_Script_gml_Object_objPlayer_CleanUp_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objPlayer_CleanUp_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objPlayer_CleanUp_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objPlayer_CleanUp_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


SWithIterator ___wi517___;
int ___wc518___ = YYGML_NewWithIterator( &___wi517___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, 13);
if (___wc518___ > 0 ) {
do {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
;
} while(YYGML_WithIteratorNext( &___wi517___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi517___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;
}
#endif
