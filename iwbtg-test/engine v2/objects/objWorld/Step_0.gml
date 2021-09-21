/// @description Set title && Caculate pause options position
#region Time && Title
var console_state = "";
var title = global.title;
//if(global.console_state == 1)
//	console_state = " Console Mode On";
if(!BeginRoom())
{
    if(!pause)
        global.time[global.savenum] += delta_time/1000000;
	t = floor(global.time[global.savenum]);
	h = t div 60 div 60;
	m = t div 60 mod 60;
	s = t mod 60;
	title += "  Time[" + string(h) + ":";
	title += string(m) + ":";
	title += string(s) + "]";
	title += " Death[" + string(global.death[global.savenum]) + "]";
	title += "  Fps[" + string(fps) + "]";
	title += console_state;
    window_set_caption(title);
}
else
    window_set_caption(title + "  Fps[" + string(fps) + "]" + console_state);

#endregion
#region Numpad Check
if(!pause)
{
    if(!global.enable_numpad && keyboard_get_numlock())
    {
        KillPlayer();
        keyboard_set_numlock(false);
    }
}
#endregion
#region Set Volume
if(pause)
{
    if(keyboard_check_pressed(global.upbutton))
        pPos -= 1;
    if(keyboard_check_pressed(global.downbutton))
        pPos += 1;
   pPos = clamp(pPos,1,4);
    if(keyboard_check(global.rightbutton))
    {
        if(pPos == 1)
            AudioMusicVolume(1);
        else if(pPos == 2)
            AudioSoundVolume(1);
		else if(pPos == 3 && !global.audio_music_mute)
		{
			global.audio_music_mute = true;
			AudioPause(global.curmusic);
		}
		else if(pPos == 4)
			global.audio_sound_mute = true;
    }
    else if(keyboard_check(global.leftbutton))
    {
        if(pPos == 1)
            AudioMusicVolume(0);
        else if(pPos == 2)
            AudioSoundVolume(0);
		else if(pPos == 3 && global.audio_music_mute)
		{
			global.audio_music_mute = false;
			if(AudioIsPaused(global.curmusic))
				AudioResume(global.curmusic);
			else
				MusicPlay();
		}
		else if(pPos == 4)
			global.audio_sound_mute = false;
    }
}
#endregion
