// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function PlayerWithMoveObject(argument0){
	var inst = argument0;
	var num_b,spd;
	var list_b = ds_list_create();
	num_b = collision_line_list(bbox_left-1,bbox_top,bbox_left-1,bbox_bottom,inst,true,true,list_b,false);//Stand on move_up block
	if(num_b)
	{
		for(var i=0;i<num_b;++i)
			spd[i] = list_b[| i].hspeed;
		if(ArrayGetMax(spd,1) > 0)
		{
			repeat(floor(abs(ArrayGetMax(spd,1))))
			{
				if(place_meeting(x,y,inst))
					x ++;
			}
		}
		spd = [];
		ds_list_clear(list_b);
	}
	num_b = collision_line_list(bbox_right+1,bbox_top,bbox_right+1,bbox_bottom,inst,true,true,list_b,false);//Stand on move_up block
	if(num_b)
	{
		for(var i=0;i<num_b;++i)
			spd[i] = list_b[| i].hspeed;
		if(ArrayGetMin(spd,-1) < 0)
		{
			repeat(floor(abs(ArrayGetMin(spd,-1))))
			{
				if(place_meeting(x,y,inst))
					x --;
			}
		}
		spd = [];
		ds_list_clear(list_b);
	}
	if(global.grav == 1)
	{
		num_b = collision_line_list(bbox_left,bbox_bottom+1,bbox_right,bbox_bottom+1,inst,true,true,list_b,false);//Stand on move_up block
		if(num_b)
		{
			for(var i=0;i<num_b;++i)
				spd[i] = list_b[| i].vspeed;
			if(ArrayGetMin(spd,-1) < 0)
			{
				repeat(floor(abs(ArrayGetMin(spd,-1))))
				{
					if(place_meeting(x,y,inst))
						y --;
				}
			}
			spd = [];
			ds_list_clear(list_b);
		}
		num_b = collision_line_list(bbox_left,bbox_top-1,bbox_right,bbox_top-1,inst,true,true,list_b,false);// Jump to collision move_down block
		if(num_b)
		{
			for(var i=0;i<num_b;++i)
				spd[i] = list_b[| i].vspeed;
			if(ArrayGetMax(spd,1) > 0)
			{
				vspeed += ArrayGetMax(spd,1);
				while(collision_line(bbox_left,bbox_top,bbox_right,bbox_top,inst,true,true) && !collision_line(bbox_left,bbox_bottom,bbox_right,bbox_bottom,inst,true,true))
					y++;
			}
			spd = [];
			ds_list_clear(list_b);
		}
	}
	else if(global.grav == -1)
	{
		num_b = collision_line_list(bbox_left,bbox_top-1,bbox_right,bbox_top-1,inst,true,true,list_b,false);
		if(num_b)
		{
			for(var i=0;i<num_b;++i)
				spd[i] = list_b[| i].vspeed;
			if(ArrayGetMax(spd,1) > 0)
			{
				repeat(floor(ArrayGetMax(spd,1)))
				{
					if(place_meeting(x,y,inst))
						y ++;
				}
			}
			spd = [];
			ds_list_clear(list_b);
			num_b = collision_line_list(bbox_left,bbox_bottom+1,bbox_right,bbox_bottom+1,inst,true,true,list_b,false);
			if(num_b)
			{
				for(var i=0;i<num_b;++i)
					spd[i] = list_b[| i].vspeed;
				if(ArrayGetMin(spd,-1) < 0)
				{
					vspeed += ArrayGetMin(spd,-1);
					while(collision_line(bbox_left,bbox_bottom,bbox_right,bbox_bottom,inst,true,true) && !collision_line(bbox_left,bbox_top,bbox_right,bbox_top,inst,true,true))
						y--;
				}
				spd = [];
			}
		}
	}
	v_temp = vspeed;
	ds_list_destroy(list_b);
}