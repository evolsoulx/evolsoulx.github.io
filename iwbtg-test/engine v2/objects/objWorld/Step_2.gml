/// @description Funcation Keys
#region Funcation Keys
if(keyboard_check_pressed(global.pausebutton) && !NoPauseRoom() && !BeginRoom())
{
    if(pause == 0 && instance_exists(objPlayer))
    {
        if(objPlayer.speed == 0)
		{
	        global.pauseSpr = sprite_create_from_surface(application_surface,0,0,surface_get_width(application_surface),surface_get_height(application_surface),0,0,0,0);
			instance_deactivate_all(true);
			pPos = 1;
	        pause = 1;
		}
    }
    else
    {
        instance_activate_all();
        sprite_delete(global.pauseSpr);
        pause = 0;
    }
}
if(!pause && !BeginRoom())
{
    if(keyboard_check_pressed(global.restartbutton))
    {
		with(objCamera)
			event_user(0);
		with(objEffectParent)
			event_perform(ev_create,0);
	    SaveDeathTime();
		AudioStop(global.se_Death);
        LoadGame();
    }
    
    if(keyboard_check_pressed(global.suicidebutton))
        KillPlayer();
}
if(keyboard_check_pressed(global.quitbutton))
{
    if(!BeginRoom())
        SaveDeathTime();
    game_end();
}
if(keyboard_check_pressed(global.rebootbutton) && !pause && room != rControl)
{
    if(!BeginRoom())
        SaveDeathTime();
    instance_destroy(objPlayer);
    InitializeGlobal();
    room_goto(rTitle);
}
#endregion