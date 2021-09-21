// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function MusicPlay(){
	switch(room)
	{
	    default:
			if(AudioIsPlaying(global.curmusic))
				AudioStop(global.curmusic);
			return global.curmusic = -4;
	}
}