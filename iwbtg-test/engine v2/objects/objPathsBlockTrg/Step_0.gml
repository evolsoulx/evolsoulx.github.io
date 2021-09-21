/// @description Insert description here
// You can write your code in this editor
if(!triggered[flag] && global.trigger[trg[flag]])
{
    path_start(pth[flag],spd[flag],endl[flag],0);
    if(!scl[flag])
        scl[flag] = 1;
    path_scale = scl[flag];
    triggered[flag] = true;
    ended = 0;
}
if(!instance_exists(objPlayer) && path_speed != 0 && !ended)
{
    speed = path_speed;
    path_end();
    ended = 1;
}
