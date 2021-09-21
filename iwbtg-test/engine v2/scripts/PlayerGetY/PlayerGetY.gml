// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function PlayerGetY(){
	if(instance_exists(objPlayer))
		return objPlayer.y;
	else
		return 0;
}