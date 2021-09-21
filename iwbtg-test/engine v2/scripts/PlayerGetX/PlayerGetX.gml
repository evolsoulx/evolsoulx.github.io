// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function PlayerGetX(){
	if(instance_exists(objPlayer))
		return objPlayer.x;
	else
		return 0;
}