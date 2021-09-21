// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg width
/// @arg time
function ScreenShake(argument0,argument1){
	if(objCamera.shake == 0)
	{
		objCamera.shake = 1;
		objCamera.sWidth = argument0;
		objCamera.sXPos = camera_get_view_x(view_camera[0]);
		objCamera.sYPos = camera_get_view_y(view_camera[0]);
		objCamera.alarm[4] = 1;
		objCamera.alarm[5] = argument1;
	}
}