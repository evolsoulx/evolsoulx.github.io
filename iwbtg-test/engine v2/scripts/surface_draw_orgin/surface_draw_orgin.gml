// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg surfaceID
/// @arg x
/// @arg y
function surface_draw_orgin(argument0,argument1,argument2){
	var surf = argument0;
	var dx = argument1;
	var dy = argument2;
	gpu_set_blendmode_ext(bm_one,bm_zero);
	draw_surface(surf,dx,dy);
	gpu_set_blendmode(bm_normal);
}