// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg cx
/// @arg cy
/// @arg dir_spd
/// @arg len_spd
function CircleMovePoint(argument0,argument1,argument2,argument3){
	var cx = argument0;
	var cy = argument1;
	var dir_spd = argument2;
	var len_spd = argument3;
	if(!variable_instance_exists(self,"_dir"))
		_dir = point_direction(cx,cy,x,y);
	if(!variable_instance_exists(self,"_len"))
		_len = point_distance(cx,cy,x,y);
	_dir += dir_spd;
	_len += len_spd;
	x = cx + lengthdir_x(_len,_dir);
	y = cy + lengthdir_y(_len,_dir);
	direction = point_direction(xprevious,yprevious,x,y);
}