// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg id
/// @arg scl_speed
/// @arg sprite
/// @arg image_index
/// @arg image_speed
/// @arg interval
function DrawShadowSprite(argument0,argument1,argument2,argument3,argument4,argument5){
	var _id = argument0;
	var scl_spd = argument1;
	var spr = argument2;
	var img_index = argument3;
	var img_spd = argument4;
	var interval = argument5;
	var par = objEffectParent;
	var temp1,temp2,temp3,temp4;
	var pos = ds_list_find_index(objEffectParent.shadowSpriteID,_id);
	if(pos == -1)
	{
		ds_list_add(par.shadowSpriteID,_id.id);
		ds_list_add(par.shadowSpriteShow,1);
		ds_list_add(par.shadowSpriteSpr,spr);
		ds_list_add(par.shadowSpriteImgIndex,img_index);
		temp1 = ds_list_create();
		temp2 = ds_list_create();
		temp3 = ds_list_create();
		temp4 = ds_list_create();
		ds_list_add(temp1,_id.x);
		ds_list_add(par.shadowSpriteX,temp1);
		ds_list_add(temp2,_id.y);
		ds_list_add(par.shadowSpriteY,temp2);
		ds_list_add(temp3,_id.image_xscale);
		ds_list_add(par.shadowSpriteXscale,temp3);
		ds_list_add(temp4,_id.image_yscale);
		ds_list_add(par.shadowSpriteYscale,temp4);
		ds_list_add(par.shadowSpriteScaleSpd,scl_spd);
		ds_list_add(par.shadowSpriteImgSpd,img_spd);
		ds_list_add(par.shadowSpriteInterval,interval);
		ds_list_add(par.shadowSpriteIntervalCount,interval);
	}
}