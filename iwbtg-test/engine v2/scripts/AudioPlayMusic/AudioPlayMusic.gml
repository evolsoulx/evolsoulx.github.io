// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg musicID
function AudioPlayMusic(argument0){
	if((global.curmusic != argument0 || !AudioIsPlaying(argument0)) && !global.audio_music_mute)
	{
		mm_stop(global.curmusic);
		global.curmusic = argument0;
		mm_set_volume(global.curmusic,global.audio_music_volume);
	    mm_play(global.curmusic);
	}
return argument0;
}