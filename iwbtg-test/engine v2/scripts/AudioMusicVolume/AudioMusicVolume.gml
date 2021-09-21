// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg musicID
function AudioMusicVolume(argument0){
	var key;
	key = argument0;
	if(key == 1)
	{
	    global.audio_music_volume += 0.01;
	    mm_set_volume(global.curmusic,global.audio_music_volume);
	}
	else
	{
	    global.audio_music_volume -= 0.01;
	    mm_set_volume(global.curmusic,global.audio_music_volume);
	}
	global.audio_music_volume = clamp(global.audio_music_volume,0,1);
}