// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function PlayerJump(){
	if(place_meeting(x,y+global.grav,objBlockParent) || place_meeting(x,y,objPlatformParent) || onPlatform)
		{
		    vspeed = -jump*global.grav;
			sprite_index = sprPlayerJump;
			djump = floor(global.jumptimes) - 1;
			AudioPlaySound(global.se_Jump);
		}
		else if(djump > 0 || global.infjump || place_meeting(x,y,objWater) || place_meeting(x,y,objPlatformParent))
		{
		    vspeed = -jump2*global.grav;
		    sprite_index = sprPlayerJump;
		    if(place_meeting(x,y,objWater2) || global.infjump)
		        djump = floor(global.jumptimes) - 1;
		    else if(djump >= 1)
				djump -= 1;
			AudioPlaySound(global.se_Djump);
		}
}