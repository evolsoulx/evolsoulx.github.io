// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function SaveConfig() {
	ini_open(working_directory + "\\option.ini")
	//music options
	ini_write_real("Music","Music_volume",global.audio_music_volume);
	ini_write_real("Music","Sound_volume",global.audio_sound_volume);
	ini_write_real("Music","Music_mute",global.audio_music_mute);
	ini_write_real("Music","Sound_mute",global.audio_sound_mute);
	//player control
	ini_write_real("Control","Left",global.leftbutton);
	ini_write_real("Control","Right",global.rightbutton);
	ini_write_real("Control","Up",global.upbutton);
	ini_write_real("Control","Down",global.downbutton);
	ini_write_real("Control","Jump",global.jumpbutton);
	ini_write_real("Control","Shoot",global.shootbutton);
	ini_write_real("Control","Pause",global.pausebutton);
	ini_write_real("Control","Suicide",global.suicidebutton);
	ini_write_real("Control","Restart",global.restartbutton);
	ini_write_real("Control","Save",global.savebutton);
	ini_write_real("Control","Quit",global.quitbutton);
	ini_write_real("Control","GameReboot",global.rebootbutton);
	ini_write_real("Control","AlignRight",global.alignRightbutton);
	ini_write_real("Control","AlignLeft",global.alignLeftbutton);
	ini_close();


}
