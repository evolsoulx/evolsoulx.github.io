/// @description Insert description here
// You can write your code in this editor
var len = ds_list_size(shadowSpriteID);
var len1,i,j;
if(len > 0)
{
	for(i=0;i<len;i++)
	{
		len1 = ds_list_size(shadowSpriteX[| i]);
		shadowSpriteImgIndex[| i] += shadowSpriteImgSpd[| i];
		for(j=0;j<len1;j++)
		{
			shadowSpriteXscale[| i][| j] = max(0,shadowSpriteXscale[| i][| j] - shadowSpriteScaleSpd[| i]);
			shadowSpriteYscale[| i][| j] = max(0,shadowSpriteYscale[| i][| j] - shadowSpriteScaleSpd[| i]);
		}
		if(shadowSpriteIntervalCount[| i] == 0)
		{
			if(instance_exists(shadowSpriteID[| i]) && shadowSpriteShow[| i])
			{
				ds_list_add(shadowSpriteX[| i],shadowSpriteID[| i].x);
				ds_list_add(shadowSpriteY[| i],shadowSpriteID[| i].y);
				ds_list_add(shadowSpriteXscale[| i],shadowSpriteID[| i].image_xscale);
				ds_list_add(shadowSpriteYscale[| i],shadowSpriteID[| i].image_yscale);

			}
			if(ds_list_size(shadowSpriteX[| i]) > 0)
			{
				
				if(shadowSpriteXscale[| i][| 0] <= 0)
				{
					ds_list_delete(shadowSpriteX[| i],0);
					ds_list_delete(shadowSpriteY[| i],0);
					ds_list_delete(shadowSpriteXscale[| i],0);
					ds_list_delete(shadowSpriteYscale[| i],0);
				}
			}
			shadowSpriteIntervalCount[| i] = shadowSpriteInterval[| i];
		}
		shadowSpriteIntervalCount[| i]  = shadowSpriteIntervalCount[| i] - 1;
	}
	for(var i=0;i<len;i++)
	{
		if(shadowIntervalCount == 0)
		{
			len1 = ds_list_size(shadowSpriteX[| i]);
			if(len1 == 0)
			{
				ds_list_delete(shadowSpriteID,i);
				ds_list_delete(shadowSpriteShow,i);
				ds_list_delete(shadowSpriteSpr,i);
				ds_list_delete(shadowSpriteImgIndex,i);
				ds_list_destroy(shadowSpriteX[| i]);
				ds_list_destroy(shadowSpriteY[| i]);
				ds_list_destroy(shadowSpriteXscale[| i]);
				ds_list_destroy(shadowSpriteYscale[| i]);
				ds_list_delete(shadowSpriteX,i);
				ds_list_delete(shadowSpriteY,i);
				ds_list_delete(shadowSpriteXscale,i);
				ds_list_delete(shadowSpriteYscale,i);
				ds_list_delete(shadowSpriteScaleSpd,i);
				ds_list_delete(shadowSpriteImgSpd,i);
				ds_list_delete(shadowSpriteInterval,i);
				ds_list_delete(shadowSpriteIntervalCount,i);
				len--;
			}
			shadowIntervalCount = shadowInterval;
		}
		shadowIntervalCount --;
	}
}
