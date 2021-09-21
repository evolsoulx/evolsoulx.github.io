/// @description Draw pause UI
#region Draw Pause Screen
var drawM,drawS;
drawM = string(global.audio_music_volume);
drawS = string(global.audio_sound_volume);
if(pause)
{
    var pos = 468;
	var str;
	draw_clear_alpha(c_white,0);
    gpu_set_blendmode_ext(bm_one,bm_zero);
    draw_sprite(global.pauseSpr,0,0,0);
    gpu_set_blendmode(bm_normal);
    draw_set_alpha(0.6);
    draw_set_color(c_gray);
    draw_rectangle(0,0,800,608,0);
    draw_set_alpha(1);
    draw_set_color(c_white);
    draw_sprite(sprPause,0,400,304);
    draw_set_font(fPause);
	str = "Time: " + string(h) + ":" + string(m) + ":" + string(s);
    draw_text(64,500,str);
    draw_text(64,500 + string_height(str),"Death: " + string(global.death[global.savenum]));
	draw_set_color((pPos==1)? c_red : c_white);
	str = "Music: " + drawM;
    draw_text(600,pos,str);
    draw_set_color((pPos==2)? c_red : c_white);
	pos += string_height(str);
	str = "Sound: " + drawS;
    draw_text(600,pos,str);
    draw_set_color((pPos==3)? c_red : c_white);
	pos += string_height(str)
	str = "Mute_music: " + string(global.audio_music_mute);
    draw_text(600,pos,str);
	draw_set_color((pPos==4)? c_red : c_white);
	pos += string_height(str);
	str = "Mute_sound: " + string(global.audio_sound_mute);
    draw_text(600,pos,str);
	draw_set_color(c_white);
}
#endregion
