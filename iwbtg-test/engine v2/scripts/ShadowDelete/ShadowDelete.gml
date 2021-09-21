// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg id
function ShadowDelete(argument0){
	var _id = argument0;
	var pos = ds_list_find_index(objEffectParent.shadowSpriteID,_id);
	if(pos != -1)
		ds_list_replace(objEffectParent.shadowSpriteShow,pos,0);
}