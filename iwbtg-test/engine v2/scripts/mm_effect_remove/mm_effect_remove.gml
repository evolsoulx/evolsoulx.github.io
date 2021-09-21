/// @description mm_effect_remove(musicHandle,effectHandle)
/// @param musicHandle
/// @param effectHandle
function mm_effect_remove(argument0, argument1) {
	return external_call(global.__mm_dll_fx_remove,argument0,argument1)



}
