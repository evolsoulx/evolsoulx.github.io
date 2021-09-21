/// @description Insert description here
// You can write your code in this editor
if(keyboard_check_pressed(vk_home))
    global.god_mode = !global.god_mode;
if(keyboard_check_pressed(vk_insert) && instance_exists(objPlayer))
    SaveGame();
if(keyboard_check_pressed(vk_delete))
    global.infjump = !global.infjump;
if(keyboard_check_pressed(vk_end))
	draw_mask = !draw_mask;
if(keyboard_check_pressed(vk_pageup) && room != room_first)
{
	instance_destroy(objPlayer);
    room_goto_previous();
}
if(keyboard_check_pressed(vk_pagedown) && room != room_last)
{
    instance_destroy(objPlayer);
    room_goto_next();
}
if(mouse_check_button(mb_left) && instance_exists(objPlayer) && keyboard_check_pressed(vk_control))
{
    objPlayer.x = mouse_x;
    objPlayer.y = mouse_y;
}
if(keyboard_check_pressed(vk_backspace))
	draw_position = !draw_position;