if(keyboard_check_pressed(global.savebutton) && !saved && global.grav == 1)
{
    saved = saveGame();
    if(saved)
    {
        alarm[0] = 30;
        image_index = 1;
        image_speed = 0.017;
    }
}