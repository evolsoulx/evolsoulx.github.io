global.flipfix = 0;
if(global.grav == -1 && place_meeting(x,y,objPlayer))
{
    objPlayer.gravity_direction = -90;
    objPlayer.mask_index = sprPlayerMask;
    objPlayer.djump = floor(global.jumptimes) - 1;
    objPlayer.vspeed = 0;
	objPlayer.y += 4 * other.image_yscale;
	global.flipfix =  4 * other.image_yscale;
    global.grav = 1;
}