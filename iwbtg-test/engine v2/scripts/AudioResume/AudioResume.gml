// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg music or sound ID
function AudioResume(argument0){
	if(AudioIsPaused(argument0))
		mm_resume(argument0);
}