// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function ApplicationSurfaceCreate(){
	return surface_create(surface_get_width(application_surface),surface_get_height(application_surface));
}