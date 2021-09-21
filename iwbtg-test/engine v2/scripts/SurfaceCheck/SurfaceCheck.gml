// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg surfaceID
/// @arg width
/// @arg height
function SurfaceCheck(argument0,argument1,argument2){
	var surf = argument0;
	var width = argument1;
	var height = argument2;
	if(surface_exists(surf))
		return surf;
	else
		return surface_create(width,height);
}