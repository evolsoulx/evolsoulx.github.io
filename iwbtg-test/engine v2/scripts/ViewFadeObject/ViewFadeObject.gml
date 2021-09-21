// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg obj
/// @arg final_width
/// @arg final_height
/// @arg time
function ViewFadeObject(argument0,argument1,argument2,argument3){
	var obj = argument0;
	var t_width = argument1;
	var t_height = argument2;
	var time = argument3;
	var c_width = camera_get_view_width(view_camera[0]);
	var c_height = camera_get_view_height(view_camera[0]);
	if(objCamera.viewFade == 0)
	{
		objCamera.obj = obj;
		objCamera.t_width = t_width;
		objCamera.t_height = t_height;
		objCamera.c_width = c_width;
		objCamera.c_height = c_height;
		objCamera.w_spd = (t_width - c_width)/time;
		objCamera.h_spd = (t_height - c_height)/time;
		objCamera.alarm[1] = 1;
		objCamera.alarm[3] = time;
		objCamera.viewFade = 1;
	}
}
