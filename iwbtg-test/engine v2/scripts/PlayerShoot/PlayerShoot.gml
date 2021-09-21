// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function PlayerShoot(){
	if(instance_number(objBullet) < global.bulletnum)
	{
	    var inst;
	    inst = instance_create_layer(x,y-2,layer,objBullet);
	    inst.hspeed = xscale*16;
		AudioPlaySound(global.se_Shoot);
	}	
}