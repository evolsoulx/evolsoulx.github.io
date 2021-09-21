if (visible)
{
    with (objPlayer)
    {
        if(djump < floor(global.jumptimes) - 1)
			djump += 1;
    }
    visible = false;
    alarm[0] = refreshTime;
}