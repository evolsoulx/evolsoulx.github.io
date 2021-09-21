// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg surfaceID
function SurfaceCheckApplication(argument0){
	var surf = argument0;
	if(surface_exists(surf))
		return surf;
	else
		return ApplicationSurfaceCreate();
}