// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function InitializeGlobal()
{
	global.frozen = 0;
	global.grav = 1;
	global.jumptimes = 2;
	global.infjump = 0;
	global.maxSpeed = 3;
	global.maxVspeed = 9;
	global.bulletnum = 4;//Set max bullet number
	global.room_wrap = 0;//Move wrap room if outside room
	global.god_mode = 0;
	global.AutoShoot = 0;
	global.edgeDeath = true;//Die outside room or not
	global.pauseSpr = 0;
	for(var i=0;i<100;++i)
		global.trigger[i] = 0;
	global.t = 0;

	//default death && time
	//do not change the default value blow
	global.death[1] = 0;
	global.time[1] = 0;
	global.death[2] = 0;
	global.time[2] = 0;
	global.death[3] = 0;
	global.time[3] = 0;
	global.flipfix = 0;
	global.savenum = 1;
}