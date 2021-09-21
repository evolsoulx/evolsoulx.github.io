/// @description Insert description here
// You can write your code in this editor
for(var i=num;i>=0;--i)
{
    inst[i].x = x + lengthdir_x(len,dir[i]);
    inst[i].y = y + lengthdir_y(len,dir[i]);
    dir[i] += spd;
}
