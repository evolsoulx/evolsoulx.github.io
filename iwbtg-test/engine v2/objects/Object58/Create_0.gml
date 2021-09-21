/// @description Insert description here
// You can write your code in this editor
var temp,inst;
for(var i=0;i<24;i++)
{
	inst[i] = instance_create_layer(400-50*(23-i),304,"WorldLayer",Object59);
	inst[i].dir_spd = 1;
}
for(var i=25;i<47;i++)
{
	inst[i] = instance_create_layer(400+50*(i-24),304,"WorldLayer",Object59);
	inst[i].dir_spd = 1;
}
for(var i=0;i<47;i++)
{
	if(i != 24)
		{
		for(var j=0;j<24;j++)
		{
			temp[j] = instance_create_layer(inst[i].x,304-50*(24-j),"WorldLayer",Object60);
			temp[j].dir_spd = -1;
			temp[j].ins = inst[i];
		}
		for(var j=25;j<47;j++)
		{
			temp[j] = instance_create_layer(inst[i].x,304+50*(j-24),"WorldLayer",Object60);
			temp[j].dir_spd = -1;
			temp[j].ins = inst[i];
		}
	}
}