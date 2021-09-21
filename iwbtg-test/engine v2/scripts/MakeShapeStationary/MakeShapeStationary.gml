// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg shape
/// @arg x
/// @arg y
/// @arg layer
/// @arg starting_angle
/// @arg num
/// @arg length
/// @arg obj
function MakeShapeStationary(argument0,argument1,argument2,argument3,argument4,argument5,argument6,argument7){
var edge = argument0;
var dx = argument1;
var dy = argument2;
var dlayer = argument3;
var ang = argument4;
var num = argument5;
var len = argument6;
var obj = argument7;
var alpha = 90-180/edge;
var a0 = sin(degtorad(alpha));
var inst;
var x0 = lengthdir_x(len,alpha);
var x1 = lengthdir_x(len,180-alpha);
var y0 = lengthdir_y(len,alpha);
var dis = x0-x1;
var ddx,dir,ddir,dlen;
for(var i=0;i<=num-1;i++)
{
	ddx[i] = x0-dis/num*i;
	dir[i] = point_direction(0,0,ddx[i],y0) + ang;
	dlen[i] = len*a0/sin(degtorad(dir[i]));
}
for(var i=0;i<=edge-1;i++)
{
	for(var j=0;j<=num-1;j++)
	{
		ddir[j] = dir[j] +360*i/edge;
		inst[i][j] = instance_create_layer(dx + lengthdir_x(dlen[j],ddir[j]),dy + lengthdir_y(dlen[j],ddir[j]),dlayer,obj);
		inst[i][j].direction = ddir[j];
		inst[i][j]._rate = dlen[j]/len;
	}
}
return inst;
}