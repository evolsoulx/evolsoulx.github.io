#include "pch.hpp"
extern YYVAR g_Script_gml_Script_scrInitEngineOptions;
extern YYVAR g_Script_gml_GlobalScript_scrInitEngineOptions;
#ifndef __YYNODEFS
char g_pString3_03D4026D[] = {
0x49, 0x20, 0x57, 0x61, 0x6e, 0x6e, 0x61, 0x20, 0x42, 0x65, 0x20, 0x54, 0x68, 0x65, 0x20, 0x47,      // I Wanna Be The G
0x4d, 0x53, 0x32, 0x20, 0x45, 0x6e, 0x67, 0x69, 0x6e, 0x65, 0x20, 0x59, 0x6f, 0x59, 0x6f, 0x59,      // MS2 Engine YoYoY
0x6f, 0x20, 0x45, 0x64, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x76, 0x30, 0x2e, 0x39, 0x00,            // o Edition v0.9.
};
#else
extern char g_pString3_03D4026D[];
#endif // __YYNODEFS

YYRValue& gml_Script_scrInitEngineOptions( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_scrInitEngineOptions( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_scrInitEngineOptions", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue & global_debugMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugMode);
YYRValue & global_debugVisuals = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugVisuals);
YYRValue & global_debugOverlay = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugOverlay);
YYRValue & global_debugNoDeath = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugNoDeath);
YYRValue & global_debugInfJump = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugInfJump);
YYRValue & global_debugShowHitbox = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debugShowHitbox);
YYRValue & global_windowCaptionDef = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_windowCaptionDef);
YYRValue & global_startRoom = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_startRoom);
YYRValue & global_deathMusicMode = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_deathMusicMode);
YYRValue & global_adAlign = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_adAlign);
YYRValue & global_edgeDeath = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_edgeDeath);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;
CInstance* pStatic = YYGML_GetStaticObject( g_Script_gml_Script_scrInitEngineOptions.val );

static bool sInitialised = false;

YY_STACKTRACE_LINE(7);
(global_debugMode)=0;
;

YY_STACKTRACE_LINE(8);
(global_debugVisuals)=1;
;

YY_STACKTRACE_LINE(9);
(global_debugOverlay)=0;
;

YY_STACKTRACE_LINE(10);
(global_debugNoDeath)=0;
;

YY_STACKTRACE_LINE(11);
(global_debugInfJump)=0;
;

YY_STACKTRACE_LINE(12);
(global_debugShowHitbox)=0;
;

YY_STACKTRACE_LINE(14);
(global_windowCaptionDef)=(const char*)g_pString3_03D4026D;
;

YY_STACKTRACE_LINE(15);
YYGML_window_set_caption((const char*)(global_windowCaptionDef).GetString());
;

YY_STACKTRACE_LINE(17);
(global_startRoom)=5;
;

YY_STACKTRACE_LINE(19);
(global_deathMusicMode)=0;
;

YY_STACKTRACE_LINE(20);
(global_adAlign)=0;
;

YY_STACKTRACE_LINE(21);
(global_edgeDeath)=1;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_scrInitEngineOptions( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_scrInitEngineOptions( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_scrInitEngineOptions", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sself_scrInitEngineOptions_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_scrInitEngineOptions); /* set ContextID to 2 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sself_scrInitEngineOptions_4ABE50B2)) = (YYRValue(gml_Script_scrInitEngineOptions, pSelf)), PopContextStack();
;
return _result;
}
#endif
