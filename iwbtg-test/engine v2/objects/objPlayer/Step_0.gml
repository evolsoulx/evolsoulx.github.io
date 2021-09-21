/// @description Basic move
#region Player stats
var L,R,h,notOnBlock,temp,spd_up,spd_down;
var onVineL,onVineR,wallJump,Shoot,Auto_Shoot;
var onSlipBlock,onConveyorL,onConveyorR;
var list_b,num_b,spd;
h = 0;
temp[0] = 0;
temp[1] = 0;
notOnBlock = !place_meeting(x,y+global.grav,objBlockParent);
onSlipBlock = instance_place(x,y+global.grav,objSlipBlock);
onConveyorL = instance_place(x,y+global.grav,objConveyorL);
onConveyorR = instance_place(x,y+global.grav,objConveyorR);
onVineL = (place_meeting(x-1,y,objWallJumpL) && notOnBlock);
onVineR = (place_meeting(x+1,y,objWallJumpR) && notOnBlock);
//Set Direction
L = (window_has_focus())?keyboard_check_direct(global.leftbutton):0;
R = (window_has_focus())?keyboard_check_direct(global.rightbutton):0;
wallJump = ((onVineL && keyboard_check_pressed(global.rightbutton)) || (onVineR && keyboard_check_pressed(global.leftbutton)));
Shoot = (keyboard_check_pressed(global.shootbutton))?1:0;
Auto_Shoot = (keyboard_check_direct(global.shootbutton))?global.AutoShoot:0;
if(keyboard_check_released(global.shootbutton))
	Shoot = 0;
list_b = ds_list_create()
spd_up = 0;
spd_down = 0;
#endregion
#region Player move
if(!global.frozen && (R || L))
	h = (R)?1:-1;

if(h != 0 )
{
	if((h == 1 && !onVineL) || (h == -1 && !onVineR))
	{
		if(!onSlipBlock)
			hspeed = global.maxSpeed*h;
		else if((h == 1 && hspeed < global.maxSpeed) || (h == -1 && hspeed > -global.maxSpeed))
	        hspeed += (onSlipBlock.slip) * h;
		else if((h == 1 && hspeed > global.maxSpeed) || (h == -1 && hspeed < -global.maxSpeed))
			hspeed -= (onSlipBlock.slip) * h;
		xscale = h;
	}
}
else
{
	if(!onSlipBlock)
	    hspeed = 0;
	else
	{
	    if(hspeed > 0 && (hspeed - onSlipBlock.slip) > 0)
			hspeed -= onSlipBlock.slip;
	    else  if(hspeed < 0 && (hspeed + onSlipBlock.slip) < 0)
			hspeed += onSlipBlock.slip;
	    else
	        hspeed = 0;
	}
}
if(!onSlipBlock)
{
	if(onConveyorL && !onConveyorR)
		hspeed -= onConveyorL.h;
	else if(!onConveyorL && onConveyorR)
		hspeed += onConveyorR.h;
	else if(onConveyorL && onConveyorR)
		hspeed += onConveyorR.h - onConveyorL.h;
	if(global.grav == 1)
		num_b = collision_line_list(bbox_left,bbox_bottom+1,bbox_right,bbox_bottom+1,objBlockParent,true,true,list_b,false);
	else if(global.grav == -1)
		num_b = collision_line_list(bbox_left,bbox_top-1,bbox_right,bbox_top-1,objBlockParent,true,true,list_b,false);
	if(num_b)
	{
		for(var i=0;i<num_b;++i)
			spd[i] = ds_list_find_value(list_b,i).hspeed;
		temp[0] = ArrayGetMax(spd,1);
		temp[1] = ArrayGetMin(spd,-1)
	}
	ds_list_clear(list_b);
	spd = [];
	if(onPlatform)
	{
		if(global.grav == 1)
			num_b = collision_line_list(bbox_left,bbox_bottom+1,bbox_right,bbox_bottom+1,objPlatformParent,true,true,list_b,false);
		else if(global.grav == -1)
			num_b = collision_line_list(bbox_left,bbox_top-1,bbox_right,bbox_top-1,objPlatformParent,true,true,list_b,false);
		if(num_b)
		{
			for(var i=0;i<num_b;++i)
				spd[i] = ds_list_find_value(list_b,i).hspeed;
			temp[0] = max(temp[0],ArrayGetMax(spd,1));
			temp[1] = min(temp[1],ArrayGetMin(spd,-1));
		}
		ds_list_clear(list_b);
	}
	hspeed += temp[0];
	hspeed += temp[1];
}
//Move block or platform
if(global.grav == 1)
{
	num_b = collision_line_list(bbox_left,bbox_bottom+1,bbox_right,bbox_bottom+1,objBlockParent,true,true,list_b,false);
	if(num_b)
	{
		for(var i=0;i<num_b;++i)
			spd[i] = ds_list_find_value(list_b,i).vspeed;
		spd_down = ArrayGetMin(spd,1);
		spd = [];
		ds_list_clear(list_b);
	}
	if(onPlatform)
	{
		num_b = collision_line_list(bbox_left,bbox_bottom+1,bbox_right,bbox_bottom+1,objPlatformParent,true,true,list_b,false);
		if(num_b)
		{
			for(var i=0;i<num_b;++i)
				spd[i] = ds_list_find_value(list_b,i).vspeed;
			if(spd_down == 0)
				spd_down = ArrayGetMin(spd,1);
			else
				spd_down = min(spd_down,ArrayGetMin(spd,1));
			spd = [];
			ds_list_clear(list_b);
		}
	}
	vspeed += spd_down;
}
else if(global.grav == -1)
{
	num_b = collision_line_list(bbox_left,bbox_top-1,bbox_right,bbox_top-1,objBlockParent,true,true,list_b,false);
	if(num_b)
	{
		for(var i=0;i<num_b;++i)
			spd[i] = ds_list_find_value(list_b,i).vspeed;
		spd_up = ArrayGetMax(spd,-1);
		spd = [];
		ds_list_clear(list_b);
	}
	if(onPlatform)
	{
		num_b = collision_line_list(bbox_left,bbox_top-1,bbox_right,bbox_top-1,objPlatformParent,true,true,list_b,false);
		if(num_b)
		{
			for(var i=0;i<num_b;++i)
				spd[i] = ds_list_find_value(list_b,i).vspeed;
			if(spd_up == 0)
				spd_up = ArrayGetMax(spd,-1);
			else
				spd_up = max(spd_up,ArrayGetMax(spd,-1));
			spd = [];
			ds_list_clear(list_b);
		}
	}
	vspeed += spd_up;
}
ds_list_destroy(list_b);

#endregion
#region Max Fall Speed
vspeed = clamp(vspeed,-global.maxVspeed,global.maxVspeed)
#endregion
#region Touch Vine
if((onVineL || onVineR) && !global.frozen)
{
	xscale = (onVineL)?1:-1;
	if(vspeed * global.grav >= 0)
		vspeed = 2 * global.grav;
    if(wallJump)
    {
        if(keyboard_check(global.jumpbutton))
        {
            hspeed = (onVineR)?-15:15;
            vspeed = -9 * global.grav;
			AudioPlaySound(global.se_WallJump);
        }
        else
            hspeed = (onVineR)?-3:3;
    }
}
#endregion
#region Player Jump & Shoot
if(!global.frozen)
{
    if(global.jc_enable)
	{
		if(keyboard_check_pressed(global.jumpbutton))
	        PlayerJump();
	    if(keyboard_check_released(global.jumpbutton))
	        PlayerVjump();
	}
	else
	{
		if(keyboard_check_pressed(global.jumpbutton))
			PlayerJump();
		else if(keyboard_check_released(global.jumpbutton))
			PlayerVjump();
	}
    if(Shoot || Auto_Shoot)
        PlayerShoot();
}
#endregion
#region AD Move
if(global.adMove && h == 0 && !global.frozen && !notOnBlock)
{
    if(keyboard_check_pressed(global.alignRightbutton))
	{
		if(!global.dt_enable)
			hspeed = global.grav;
		else
			hspeed += global.grav;
	}
    if(keyboard_check_pressed(global.alignLeftbutton))
	{
		if(!global.dt_enable)
			hspeed = -global.grav;
		else
			hspeed -= global.grav;
	}
}
if(place_meeting(x,y,objPlayerKiller) || place_meeting(x,y,objBlockParent))
	KillPlayer();
v_temp = vspeed;
#endregion