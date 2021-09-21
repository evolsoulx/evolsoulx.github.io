/// @description Full screen switch
if(keyboard_check_pressed(vk_enter))
{
	if(keyboard_check_direct(vk_alt))
	{
		if(window_get_fullscreen())
		{
			window_set_fullscreen(false);
			surface_resize(application_surface,display_get_gui_width(), display_get_gui_height());
		}
		else
		{
			window_set_fullscreen(true);
			surface_resize(application_surface,display_get_gui_width(), display_get_gui_height());
		}
	}
}