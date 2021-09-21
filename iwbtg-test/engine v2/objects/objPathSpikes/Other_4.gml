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
if(!num)
    num = 1;
for(i=0;i<=num-1;i+=1)
{
    inst = instance_create_layer(x,y,layer,objPlayerKiller);
    inst.sprite_index = _spr;
    with(inst)
        path_start(other.pth,other.spd,1,0);
    inst.path_position = i/num;
}
instance_destroy(self,false);