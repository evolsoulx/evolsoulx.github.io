if (warpX == 0 && warpY == 0)
{
    with(objPlayer)
    instance_destroy();
}
else
{
    objPlayer.x = warpX;
    objPlayer.y = warpY;
}
if(roomTo == -1)
    room_goto_next();
else
    room_goto(roomTo);