// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg soundID
function AudioPlaySound(argument0){
	if(!global.audio_sound_mute)
	{
		mm_stop(argument0);
		mm_set_volume(argument0,global.audio_sound_volume);
		mm_play(argument0);
	}
}