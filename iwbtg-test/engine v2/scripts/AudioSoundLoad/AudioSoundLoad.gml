// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
///@arg soundName
///@arg loop
function AudioSoundLoad(argument0,argument1){
	return mm_music_load(working_directory + "\\Sound\\" + argument0,argument1);
}