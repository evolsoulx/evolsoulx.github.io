// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function KillPlayer(){
	if(!global.god_mode)
	{
		if(instance_exists(objPlayer))
		{
		    if(!BeginRoom())
		    {
		        with(objPlayer)
		        {
		            instance_create_layer(x,y,"PlayerLayer",objBloodEmitter);
		            instance_destroy(self);
		        }
		        global.death[global.savenum] += 1;
		        instance_create_layer(camera_get_view_x(view_camera[0])+400,camera_get_view_y(view_camera[0])+304,"WorldLayer",objGameOver);
				AudioStop(global.se_Jump);
				AudioStop(global.se_Djump);
				AudioPlaySound(global.se_Death);
		    }
		    else
		    {
		        instance_destroy(objPlayer);
		        room_restart();
		    }
		}
	}
}