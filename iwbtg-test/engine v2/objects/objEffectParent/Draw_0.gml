/// @description Draw Effect
var len = ds_list_size(shadowSpriteID);
var len1;
if(len > 0)
{
	for(var i=0;i<len;i++)
	{
		len1 = ds_list_size(shadowSpriteX[| i]);
		for(var j=0;j<len1;j++)
			draw_sprite_ext(shadowSpriteSpr[| i],
							shadowSpriteImgIndex[| i],
							shadowSpriteX[| i][| j],
							shadowSpriteY[| i][| j],
							shadowSpriteXscale[| i][| j],
							shadowSpriteYscale[| i][| j],
							0,c_white,1);
	}
}