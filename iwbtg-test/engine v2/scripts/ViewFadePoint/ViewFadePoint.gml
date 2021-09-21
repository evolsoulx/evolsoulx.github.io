// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg x_destination
/// @arg y_destination
/// @arg final_width
/// @arg final_height
/// @arg time
function ViewFadePoint(argument0,argument1,argument2,argument3,argument4){
	var tx = max(0,argument0);
	var ty = max(0,argument1);
	var t_width = min(argument2,room_width-tx);
	var t_height = min(argument3,room_height-ty);
	var time = argument4;
	var xpos = camera_get_view_x(view_camera[0]);
	var ypos = camera_get_view_y(view_camera[0]);
	var c_width = camera_get_view_width(view_camera[0]);
	var c_height = camera_get_view_height(view_camera[0]);
	if(objCamera.viewFade == 0)
	{
		objCamera.tx = tx;
		objCamera.ty = ty;
		objCamera.t_width = t_width;
		objCamera.t_height = t_height;
		objCamera.xpos = xpos;
		objCamera.ypos = ypos;
		objCamera.c_width = c_width;
		objCamera.c_height = c_height;
		objCamera.x_spd = (tx - xpos)/time;
		objCamera.y_spd = (ty - ypos)/time;
		objCamera.w_spd = (t_width - c_width)/time;
		objCamera.h_spd = (t_height - c_height)/time;
		objCamera.alarm[0] = 1;
		objCamera.alarm[2] = time;
		objCamera.viewFade = 1;
	}
}
