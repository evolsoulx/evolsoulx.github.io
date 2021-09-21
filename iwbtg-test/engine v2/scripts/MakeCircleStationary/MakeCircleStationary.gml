// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg x
/// @arg y
/// @arg layer
/// @arg angle
/// @arg number
/// @arg length
/// @arg obj
function MakeCircleStationary(argument0,argument1,argument2,argument3,argument4,argument5,argument6){
	var dx = argument0;
	var dy = argument1;
	var dlayer = argument2
	var ang = argument3;
	if(ang == -1)
		ang = random(360);
	else if(ang == -2)
		ang = point_direction(dx,dy,PlayerGetX(),PlayerGetY());
	else if(ang == -3)
		ang = point_direction(dx,dy,PlayerGetX(),PlayerGetY()) + 180/argument4;
	var num = argument4;
	var len = argument5;
	var obj = argument6;
	var inst;

	for (var i=0;i<num;i++)
	{
	    inst[i] = instance_create_layer(dx+lengthdir_x(len,ang + i*(360/num)),dy+lengthdir_y(len,ang + i*(360/num)),dlayer,obj);
		inst[i].direction = ang + i*(360/num);
	}
	return inst;
}