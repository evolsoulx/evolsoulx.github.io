/// @description Insert description here
// You can write your code in this editor
switch(room)
{
	//put your code here 
	default:
		smooth = false;
}

if(!do_nothing)
{
	if(smooth)
	{
		if(x_temp >= 0 || y_temp >= 0)
			view_camera[0] = camera_create_view(x_temp,y_temp,800,608,0,-1,0,0,1,1);
		else
		{
			if(instance_exists(objPlayer))
			{
				xpos = objPlayer.x - 400;
				ypos = objPlayer.y - 304;
				xpos = clamp(xpos,0,room_width - 800);
				ypos = clamp(ypos,0,room_height - 608);
				view_camera[0] = camera_create_view(xpos,ypos,800,608,0,-1,0,0,1,1);
			}
		}
	}
	else if(instance_exists(objPlayer))
	{
		xpos = floor(objPlayer.x/800)*800;
		ypos = floor(objPlayer.y/608)*608;
		xpos = clamp(xpos,0,room_width - 1);
		ypos = clamp(ypos,0,room_height - 1);
		view_camera[0] = camera_create_view(xpos,ypos,800,608,0,-1,0,0,1,1);
	}
	x_temp = -1;
	y_temp = -1;
}