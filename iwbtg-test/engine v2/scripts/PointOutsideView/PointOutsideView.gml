// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function PointOutsideView(argument0,argument1){
	var dx = argument0;
	var dy = argument1;
	if(dy < camera_get_view_y(view_camera[0])
	|| dx < camera_get_view_x(view_camera[0])
	|| dx > ((camera_get_view_x(view_camera[0]) + camera_get_view_width(view_camera[0])))
	|| dy > ((camera_get_view_y(view_camera[0]) + camera_get_view_height(view_camera[0]))))
		return true;
	else 
		return false
}