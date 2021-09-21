if(other.object_index == objBlock || other.visible ==true)
{
	move_contact_solid(direction,speed);
	speed = 0;
	direction = 0;
}