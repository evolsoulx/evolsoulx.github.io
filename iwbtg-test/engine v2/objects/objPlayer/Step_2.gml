/// @description Set sprite
#region Sprite Fix
var notOnBlock,onVineR,onVineL,L,R,inWater;
PlayerOnPlatform();
inWater = (place_meeting(x,y,objWater));
notOnBlock = !place_meeting(x,y + global.grav,objBlockParent) || vspeed * global.grav < 0;
onVineR = (place_meeting(x + 1,y,objWallJumpR) && notOnBlock);
onVineL = (place_meeting(x - 1,y,objWallJumpL) && notOnBlock);
L = (window_has_focus())?keyboard_check_direct(global.leftbutton):0;
R = (window_has_focus())?keyboard_check_direct(global.rightbutton):0;
if(inWater)
	vspeed = (global.grav * vspeed > 2)?global.grav * 2:vspeed;
if (!onVineR && !onVineL)
{
    if (!notOnBlock|| onPlatform)
    {
	    if ((L || R) && !global.frozen)
	        sprite_index = global.running;
	    else
	        sprite_index = global.idle;
    }
    else    //in the air
    { 
        if ((vspeed * global.grav) < 0)
            sprite_index = global.jump;
        else if((vspeed * global.grav) > 0)
            sprite_index = global.fall;
		else
			sprite_index = global.idle;
    }
}
else    //touching a vine
    sprite_index = global.sliding;
#endregion
#region Outside Room
if ((x < 0 || x > room_width || y < 0 || y > room_height))
{
    if(!global.room_wrap && !place_meeting(x,y,objOutSideWarp) && global.edgeDeath)
        KillPlayer();
    else
        move_wrap(1,1,0);
}
#endregion