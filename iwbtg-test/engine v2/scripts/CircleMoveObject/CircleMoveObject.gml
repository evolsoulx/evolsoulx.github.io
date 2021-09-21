// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg obj
/// @arg dir_spd
/// @arg len_spd
function CircleMoveObject(argument0,argument1,argument2){
	var obj = argument0;
	var dir_spd = argument1;
	var len_spd = argument2;
	if(instance_exists(obj))
	{
		if(!variable_instance_exists(self,"_dir"))
			_dir = point_direction(obj.x,obj.y,x,y);
		if(!variable_instance_exists(self,"_len"))
			_len = point_distance(obj.x,obj.y,x,y);
		_dir += dir_spd;
		_len += len_spd;
		x = obj.x + lengthdir_x(_len,_dir);
		y = obj.y + lengthdir_y(_len,_dir);
		direction = point_direction(xprevious,yprevious,x,y);
	}
}