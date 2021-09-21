/// @description Insert description here
// You can write your code in this editor
var inst,i,_spr;
switch(spr)
{
    case -1:
        _spr = sprSpikeUp;
        break;
    case -2:
        _spr = sprSpikeDown;
        break;
    case -3:
        _spr = sprSpikeLeft;
        break;
    case -4:
        _spr = sprSpikeRight;
        break;
    case -5:
        _spr = sprCherry;
		image_speed = 1/15;
        break;
    default :
        _spr = spr;
}
if(dx == -1)
    dx = 32;
if(dy == -1)
	dy = 32;
if(num == -1)
    num = 1;
for(i=0;i<=num-1;i+=1)
{
    inst = instance_create_layer(x + dx*i,y + dy*i,layer,objPlayerKiller);
    inst.sprite_index = _spr;
	inst.image_speed = image_speed;
    with(inst)
        path_start(other.pth,other.spd,1,0);
    inst.path_position = i * 1/num;
}
instance_destroy()