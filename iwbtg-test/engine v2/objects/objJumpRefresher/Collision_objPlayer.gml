/// @description Insert description here
// You can write your code in this editor
if(visible == true)
{
	visible = false;
	if(other.djump < floor(global.jumptimes) - 1)
		other.djump += 1;
	alarm[0] = refreshTime;
}