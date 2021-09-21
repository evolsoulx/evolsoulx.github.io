/// @description mm_set_effect(musicHandle,effect)
/// @param musicHandle
/// @param effect
function mm_effect_set(argument0, argument1) {
	return external_call(global.__mm_dll_fx_set,argument0,argument1)



}
