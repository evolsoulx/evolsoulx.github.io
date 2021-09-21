/// @description Insert description here
// You can write your code in this editor
if(shake)
{
	camera_set_view_pos(view_camera[0],sXPos + random_range(-sWidth,sWidth),sYPos + random_range(-sWidth,sWidth));
	alarm[4] = 2;
}