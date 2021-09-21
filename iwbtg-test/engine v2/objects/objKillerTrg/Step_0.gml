/// @description Insert description here
// You can write your code in this editor
if (!triggered && global.trigger[trg])
{
        if (v != 0 || h != 0)
        {
            vspeed = v;
            hspeed = h;
        }
        else if (spd != 0)
        {
            if(is_real(dir))
				direction = dir;
			else if(dir == "player")
				direction = point_direction(x,y,objPlayer.x,objPlayer.y)
            speed = spd;
			
        }
        triggered = true;
}