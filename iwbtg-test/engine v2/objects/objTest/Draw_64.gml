/// @description Insert description here
// You can write your code in this editor
if(draw_position)
{
	if(instance_exists(objPlayer))
	{
		draw_set_font(fText);
		draw_set_color(c_black)
		draw_text(64,64,"X:"+string(objPlayer.x));
		draw_text(64,80,"Y:"+string(objPlayer.y));
		draw_text(64,96,"Align:"+string(objPlayer.x mod 3));
		draw_text(64,112,"Speed:"+string(objPlayer.speed));
		draw_text(64,128,"Gravity:"+string(objPlayer.gravity));
		draw_set_color(c_white);
	}
}
if(draw_mask)
{
	if(instance_exists(objPlayer))
	{
		var mask = (global.grav == 1)? sprPlayerMask : sprPlayerMaskFlip;
		draw_sprite_ext(mask,0,objPlayer.x-camera_get_view_x(view_camera[0]),objPlayer.y-camera_get_view_y(view_camera[0]),objPlayer.image_xscale,objPlayer.image_yscale,0,c_white,0.8);
	}
}