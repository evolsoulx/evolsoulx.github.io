/// @description Insert description here
// You can write your code in this editor
if(!do_nothing)
{
	var xv,yv,hv,wv;
	if(instance_exists(objPlayer) && smooth)
	{
		xv = camera_get_view_x(view_camera[0]);
		yv = camera_get_view_y(view_camera[0]);
		hv = camera_get_view_height(view_camera[0]);
		wv = camera_get_view_width(view_camera[0]);
		if((objPlayer.x > 400 && (objPlayer.x < (room_width - hv/2))) || xv > 0)
			xv += (objPlayer.x - xv - hv/2)/smooth_speed;
		if(objPlayer.y > 304 && (objPlayer.y < (room_height - wv/2)) || yv > 0)
			yv += (objPlayer.y - yv - wv/2)/smooth_speed;
		xv = clamp(xv,0,room_width-800);
		yv = clamp(yv,0,room_height-608);
		camera_set_view_pos(view_camera[0],xv,yv);
	}
	else if(instance_exists(objPlayer) && !smooth)
	{
		xpos = floor(objPlayer.x/800)*800;
		ypos = floor(objPlayer.y/608)*608;
		xpos = clamp(xpos,0,room_width - 1);
		ypos = clamp(ypos,0,room_height - 1);
		camera_set_view_pos(view_camera[0],xpos,ypos);
	}
}