// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg view_xpos
/// @arg view_ypos
/// @arg view_width
/// @arg view_height
function ViewSet(argument0,argument1,argument2,argument3){
	var dx = max(0,argument0);
	var dy = max(0,argument1);
	var width = min(room_width-dx,argument2);
	var height = min(room_height-dy,argument3);
	view_camera[0] = camera_create_view(dx,dy,width,height);
}