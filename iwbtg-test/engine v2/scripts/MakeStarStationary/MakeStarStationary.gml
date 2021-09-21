// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg shape;
/// @arg x
/// @arg y
/// @arg layer
/// @arg starting_angle
/// @arg num
/// @arg length
/// @arg obj
function MakeStarStationary(argument0,argument1,argument2,argument3,argument4,argument5,argument6,argument7){
	var edge = argument0;
	var dx = argument1;
	var dy = argument2;
	var dlayer = argument3;
	var ang = argument4;
	var num = argument5;
	var spd = argument6;
	var obj = argument7;
	var alpha = 90-360/edge;
	var a0 = sin(degtorad(alpha));
	var inst;
	var x0 = lengthdir_x(spd,alpha);
	var x1 = lengthdir_x(spd,180-alpha);
	var y0 = lengthdir_y(spd,alpha);
	var dis = x0-x1;
	var ddx,dir,dspd;
	for(var i=0;i<=num-1;i++)
	{
		ddx[i] = x0-dis/num*i;
		dir[i] = point_direction(0,0,ddx[i],y0);
		dspd[i] = spd*a0/sin(degtorad(dir[i]));
	}
	for(var i=0;i<=edge-1;i++)
	{
		for(var j=0;j<=num-1;j++)
		{
			inst[i][j] = instance_create_layer(dx+lengthdir_x(dspd[j],ang + dir[j] + 360*i/edge),dy+lengthdir_y(dspd[j],ang + dir[j] + 360*i/edge),dlayer,obj);
			//inst[i][j].speed = dspd[j];
			inst[i][j].direction = ang + dir[j] + 360*i/edge;
			inst[i][j]._rate = dspd[j]/spd;
		}
	}
	return inst;
}