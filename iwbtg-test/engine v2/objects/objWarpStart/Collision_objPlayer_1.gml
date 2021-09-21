if(dif)
{
    if(file_exists(working_directory + "Save"+string(global.savenum)))
        file_delete(working_directory + "Save"+string(global.savenum));
    with(other)
        instance_destroy();
    room_goto(global.startRoom);
}
else
{
    if(file_exists(working_directory + "Save"+string(global.savenum)))
        loadGame();
    else
        killplayer();
}