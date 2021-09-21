/// @description Insert description here
// You can write your code in this editor
c_width += w_spd;
c_height += h_spd;
if(instance_exists(obj))
{
	camera_set_view_pos(view_camera[0],max(0,obj.x-0.5*c_width),max(0,obj.y-0.5*c_height));
	camera_set_view_size(view_camera[0],min(room_width,c_width),min(room_height,c_height));
	alarm[1] = 1;
}