if((other.x > room_width || other.x < 0) || (other.y > room_height || other.y < 0))
{
	if(!sMode)
		event_inherited();
	else
	{
		if(other.x > room_width || other.x <= 0)
			other.x -= room_width * sign(other.hspeed);
		if(other.y > room_height || other.y <= 0)
			other.y -= room_height * sign(other.vspeed);
		if(roomTo == -1)
			room_goto_next();
		else
			room_goto(roomTo);
	}
}