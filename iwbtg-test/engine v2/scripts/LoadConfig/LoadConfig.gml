// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
ini_open(working_directory + "\\option.ini");
//music options
global.audio_music_volume = ini_read_real("Music","Music_volume",1);
global.audio_sound_volume = ini_read_real("Music","Sound_volume",1);
global.audio_music_mute = ini_read_real("Music","Music_mute",0);
global.audio_sound_mute = ini_read_real("Music","Sound_mute",0);
//player contol
global.leftbutton = ini_read_real("Control","Left",vk_left);
global.rightbutton = ini_read_real("Control","Right",vk_right);
global.upbutton = ini_read_real("Control","Up",vk_up);
global.downbutton = ini_read_real("Control","Down",vk_down);
global.jumpbutton = ini_read_real("Control","Jump",vk_shift);
global.shootbutton = ini_read_real("Control","Shoot",ord("Z"));
global.pausebutton = ini_read_real("Control","Pause",ord("P"));
global.suicidebutton = ini_read_real("Control","Suicide",ord("Q"));
global.restartbutton = ini_read_real("Control","Restart",ord("R"));
global.savebutton = ini_read_real("Control","Save",ord("S"));
global.quitbutton = ini_read_real("Control","Quit",vk_escape);
global.rebootbutton = ini_read_real("Control","GameReboot",vk_f2);
global.alignRightbutton = ini_read_real("Control","AlignRight",ord("D"));
global.alignLeftbutton = ini_read_real("Control","AlignLeft",ord("A"));
ini_close();