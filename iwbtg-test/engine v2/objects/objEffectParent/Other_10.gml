/// @description Shadow Stop
// You can write your code in this editor
var len = ds_list_size(shadowSpriteID);
for(var i=0;i<len;i++)
{
	ds_list_destroy(shadowSpriteX[| i]);
	ds_list_destroy(shadowSpriteY[| i]);
	ds_list_destroy(shadowSpriteXscale[| i]);
	ds_list_destroy(shadowSpriteYscale[| i]);
}
ds_list_clear(shadowSpriteID);
ds_list_clear(shadowSpriteSpr);
ds_list_clear(shadowSpriteImgIndex);
ds_list_clear(shadowSpriteX);
ds_list_clear(shadowSpriteY);
ds_list_clear(shadowSpriteXscale);
ds_list_clear(shadowSpriteYscale);
ds_list_clear(shadowSpriteScaleSpd);
ds_list_clear(shadowSpriteImgSpd);
ds_list_clear(shadowSpriteInterval);
ds_list_clear(shadowSpriteIntervalCount);