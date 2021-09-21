// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg x
/// @arg y
/// @arg layer
/// @arg starting_angle
/// @arg num
/// @arg distance
/// @arg obj
function MakeHeartStationary(argument0,argument1,argument2,argument3,argument4,argument5,argument6){
	var dx = argument0;
	var dy = argument1;
	var dlayer = argument2;
	var ang = argument3;
	var num = argument4;
	var dis = argument5;
	var obj = argument6;
	var inst;
	var dir_add = 360/num;
	var dir;
	var rate;
	var temp_x;
	var temp_y;
	for(var i=num-1;i>=0;i--)
	{
		temp_x[i] = 16*power(sin(degtorad(360-dir_add*i)),3);
		temp_y[i] = -(16*cos(degtorad(dir_add*i))-5*cos(2*degtorad(dir_add*i))-2*cos(3*degtorad(dir_add*i))-cos(4*degtorad(dir_add*i)))-5;
		dir[i] = point_direction(0,0,temp_x[i],temp_y[i]);
		rate[i] = point_distance(0,0,temp_x[i],temp_y[i])/4;
		inst[i] = instance_create_layer(dx+lengthdir_x(dis*rate[i],dir[i]),dy+lengthdir_y(dis*rate[i],dir[i]),dlayer,obj);
		inst[i]._rate = rate[i];
		inst[i].direction = dir[i] + ang;
	}
	return inst;
}