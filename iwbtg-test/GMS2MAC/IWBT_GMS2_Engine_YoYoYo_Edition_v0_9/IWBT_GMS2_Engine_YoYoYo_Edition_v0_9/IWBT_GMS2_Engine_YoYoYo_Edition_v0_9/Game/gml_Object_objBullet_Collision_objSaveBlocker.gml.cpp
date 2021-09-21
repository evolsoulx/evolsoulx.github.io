#include "pch.hpp"
extern YYVAR g_Script_gml_Object_objBullet_Collision_objSaveBlocker;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_objBullet_Collision_objSaveBlocker( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_objBullet_Collision_objSaveBlocker( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_objBullet_Collision_objSaveBlocker", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
}
#endif
