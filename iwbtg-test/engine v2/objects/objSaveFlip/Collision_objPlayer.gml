/// @description Insert description here
// You can write your code in this editor
if((keyboard_check_pressed(global.savebutton) || keyboard_check_pressed(global.shootbutton)) && !saved && global.grav == -1 && image_index == 0)
{
    saved = SaveGame();
    if(saved)
    {
        alarm[0] = 30;
        image_index = 1;
        image_speed = 0.017;
    }
}