/// @description Insert description here
// You can write your code in this editor
/*
spr = sprCherry;
num = 0;
spd = 0;
len = 0;
*/
x += 16;
y += 16;
inst = [];
for(var i=num;i>=0;--i)
{
    dir[i] = i * 360/num;
	inst[i] = instance_create_layer(x,y,layer,objCherry);
    inst[i].x = x + lengthdir_x(len,dir[i]);
    inst[i].y = y + lengthdir_y(len,dir[i]);
    if(spr != 0)
        inst[i].sprite_index = spr;
    
}
