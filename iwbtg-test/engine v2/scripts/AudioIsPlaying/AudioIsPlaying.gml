// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg musicID
function AudioIsPlaying(argument0){
	if(mm_get_active(argument0) == 1)
		return true;
	else
		return false;
}