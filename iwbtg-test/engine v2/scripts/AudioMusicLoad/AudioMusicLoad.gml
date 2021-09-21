// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
///@arg musicName
///@arg loop
function AudioMusicLoad(argument0,argument1){
	return mm_music_load(working_directory + "\\Bgm\\" + argument0,argument1);
}