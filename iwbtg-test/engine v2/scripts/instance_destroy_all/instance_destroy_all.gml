// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg object
/// @arg event_flag
function instance_destroy_all(argument0,argument1){
	with(argument0)
		instance_destroy(self,argument1);
}