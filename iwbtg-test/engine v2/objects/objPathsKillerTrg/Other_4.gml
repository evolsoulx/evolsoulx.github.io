/// @description Insert description here
// You can write your code in this editor
maxium = array_length(trg);
for(var i=0;i<=maxium;i++)
    triggered[i] = 0;
switch(spr)
{
    case -1:
        sprite_index = sprSpikeUp;
        break;
    case -2:
        sprite_index = sprSpikeDown;
        break;
    case -3:
        sprite_index = sprSpikeLeft;
        break;
    case -4:
        sprite_index = sprSpikeRight;
        break;
    case -5:
        sprite_index = sprCherry;
		image_speed = 1/15;
        break;
    default :
        sprite_index = spr;
}