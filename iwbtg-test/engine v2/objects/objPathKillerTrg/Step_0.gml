/// @description Insert description here
// You can write your code in this editor
if (!triggered && global.trigger[trg])
{
    path_start(pth,spd,endl,0);
    path_scale = scl;
    triggered = true;
}
if(!instance_exists(objPlayer) && path_speed != 0 && !ended)
{
    speed = path_speed;
    path_end();
    ended = 1;
}