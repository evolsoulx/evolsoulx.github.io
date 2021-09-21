/// @description Draw player
#region Draw Self
var drawX,drawY;
drawX = x;
drawY = (global.grav == 1)? y : y + image_yscale;
image_alpha = (global.god_mode)?0.5:1;
draw_sprite_ext(sprite_index,image_index,drawX,drawY,image_xscale*xscale,image_yscale*global.grav,image_angle,image_blend,image_alpha);
shader_reset();
#endregion