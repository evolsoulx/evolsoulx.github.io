var ya,v;
ya = frac(v_temp);
v = sign(v_temp);
PlayerOnPlatform();
if(onPlatform)
{
	y = yprevious;
	if(v_temp * global.grav >= 0)
	{
		if(!place_meeting(x,y,onPlatform))
		{
			repeat(floor(abs(v_temp)))
			{
				if(!place_meeting(x,y+v,onPlatform))
					y += v;
			}
			while( !place_meeting(x,y+0.4*global.grav,onPlatform))
				y += 0.4*global.grav;
			if(place_meeting(x,y+global.grav,onPlatform))
			{
				vspeed = 0;
				djump = floor(global.jumptimes) - 1;
			}
		}
		else
		{
			while(place_meeting(x,y,onPlatform))
				y -= global.grav;
			if(!place_meeting(x,y+ya,onPlatform))
				y += ya;
			while(place_meeting(x,y+global.grav,onPlatform) && !place_meeting(x,y+0.4*global.grav,onPlatform))
				y += 0.4*global.grav;
			vspeed = 0;
			djump = floor(global.jumptimes) - 1;
			
		}
	}
	else if(v_temp * global.grav < 0)
	{
		if(place_meeting(x,y,onPlatform))
		{
			while(place_meeting(x,y,onPlatform))
				y -= global.grav;
			if(!place_meeting(x,y+ya,onPlatform))
				y += ya;
			while(place_meeting(x,y+global.grav,onPlatform) && !place_meeting(x,y+0.4*global.grav,onPlatform))
				y += 0.4*global.grav;
			vspeed = 0;
			djump = floor(global.jumptimes) - 1;
		}
		else
		{
			repeat(floor(abs(v_temp)))
			{
				if(!place_meeting(x,y+v,objBlockParent))
					y += v;
			}
			if(!place_meeting(x,y+ya,objBlockParent))
				y += ya;
			while(place_meeting(x,y+global.grav,onPlatform) && !place_meeting(x,y+0.4*global.grav,onPlatform))
				y += 0.4*global.grav;
			if(place_meeting(x,y+v,onPlatform))
			{
				vspeed = 0;
				djump = floor(global.jumptimes) - 1;
			}
		}
	}
}
else if(!place_meeting(x,yprevious,objBlockParent))
{
	y = yprevious;
	repeat(floor(abs(v_temp)))
	{
		if(!place_meeting(x,y+v,objBlockParent))
			y += v;
	}
	if(!place_meeting(x,y+ya,objBlockParent))
		y += ya;
	if(place_meeting(x,y+global.grav,objBlockParent))
	{
		vspeed = 0;
		djump = floor(global.jumptimes) - 1;
	}
	if(place_meeting(x,y+v,objBlockParent))
		vspeed = 0;
}