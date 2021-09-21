// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg musicName
/// @arg offset
/// @arg length
/// @arg loop
function AudioMusicLoadExt(argument0,argument1,argument2,argument3){
	return mm_music_load_ext(working_directory + "\\Bgm\\" + argument0,argument1,argument2,argument3);
}