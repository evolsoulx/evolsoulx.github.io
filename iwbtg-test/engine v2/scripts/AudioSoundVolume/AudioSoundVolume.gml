// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg soundID
function AudioSoundVolume(argument0){
	var key;
	key = argument0;
	if(key == 1)
	    global.audio_sound_volume += 0.01;
	else
	    global.audio_sound_volume -= 0.01;
	global.audio_sound_volume = clamp(global.audio_sound_volume,0,1);
}