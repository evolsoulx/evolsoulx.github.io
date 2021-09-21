function AudioLoad(){
	#region Music init
	global.curmusic  = noone;
	global.kizuna = AudioMusicLoad("001.ogg",0);
	#endregion
	#region Sound init
	global.se_Death = AudioSoundLoad("sndDeath.wav",0);
	global.se_Jump = AudioSoundLoad("sndJump.wav",0);
	global.se_Djump = AudioSoundLoad("sndDjump.wav",0);
	global.se_Shoot = AudioSoundLoad("sndShoot.wav",0);
	global.se_WallJump = AudioSoundLoad("sndWallJump.wav",0);
	global.se_BlockChange = AudioSoundLoad("sndBlockChange.wav",0);
	global.se_fall = AudioSoundLoad("sndFall.wav",0);
	#endregion
}