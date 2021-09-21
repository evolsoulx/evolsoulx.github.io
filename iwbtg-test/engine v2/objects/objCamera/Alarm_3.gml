/// @description Insert description here
// You can write your code in this editor
if(instance_exists(obj))
{
	camera_set_view_pos(view_camera[0],obj.x-t_width/2,obj.y-t_height/2);
	camera_set_view_size(view_camera[0],t_width,t_height);
	alarm[1] = 0;
}