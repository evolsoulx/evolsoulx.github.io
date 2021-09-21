// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information

function PlayerOnPlatform(){
	onPlatform = false;
	var tc,tl,ty,temp,dy,ty2;
	ty = y;
	tl = ds_list_create();
	tc = collision_rectangle_list(bbox_left,bbox_top+global.grav,bbox_right,bbox_bottom+global.grav,objPlatformParent,true,true,tl,false);
	dy = y - yprevious;
	if(tc > 0)
	{
		for(var i=0;i<tc;++i)
		{
			if(global.grav == 1)
			{
				if(tl[| i].bbox_top < bbox_bottom && (tl[| i].bbox_top - (tl[| i].y - tl[| i].yprevious)) < (bbox_bottom - dy))
				{
					ds_list_delete(tl,i);
					i--;
					tc--;
				}
			}
			else if(global.grav == -1)
			{
				if((tl[| i].bbox_bottom > bbox_top) && (tl[| i].bbox_bottom - (tl[| i].y - tl[| i].yprevious)) > (bbox_top - dy))
				{
					ds_list_delete(tl,i);
					i--;
					tc--;
				}
			}
		}
	}
	if(tc > 0)
	{
		for(var i=0;i<tc;++i)
		{
			if(place_meeting(x,y-dy+tl[| i].vspeed,tl[| i]))
			{
				ds_list_delete(tl,i);
				i--;
				tc--;
			}
		}
	}
	if(tc > 0)
	{
		for(var i=0;i<tc;++i)
		{
			if(!place_meeting(xprevious,y,tl[| i]) && place_meeting(x,y,objBlockParent))
			{
				ds_list_delete(tl,i);
				i--;
				tc--;
			}
		}
	}
	if(tc > 0)
	{
		if(global.grav == 1)
		{	
			for(var i=0;i<tc;++i)
				ty2[i] = tl[| i].bbox_top;
			temp = ArrayGetMinPos(ty2,1);
		}
		else if(global.grav == -1)
		{
			for(var i=0;i<tc;++i)
				ty2[i] = tl[| i].bbox_bottom;
			temp = ArrayGetMaxPos(ty2,1);
		}
		temp = ds_list_find_value(tl,temp);
		onPlatform = temp;
	}
	ds_list_destroy(tl);
}