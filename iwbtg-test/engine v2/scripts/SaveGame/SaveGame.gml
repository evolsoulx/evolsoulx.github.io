// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function SaveGame(){
	if(!BeginRoom())
	{
		if(instance_exists(objPlayer))
		{
		    var saveX,saveY,saveRoom,f,map;
		    saveX = floor(objPlayer.x);
		    saveY = floor(objPlayer.y);
		    saveRoom = room_get_name(room);
		    with(objPlayer)
		    {
		        if(!place_meeting(saveX,saveY,objBlockParent) && !place_meeting(saveX,saveY,objPlatformParent))
		            canSave = 1;
		        else if(!place_meeting(saveX,saveY+1,objBlockParent) && !place_meeting(saveX,saveY+1,objPlatformParent))
		        {
		            canSave = 1;
		            saveY += 1;
		        }
		        else if(!place_meeting(saveX+1,saveY,objBlockParent) && !place_meeting(saveX+1,saveY,objPlatformParent))
		        {
		            canSave = 1;
		            saveX += 1;
		        }
		        else if(!place_meeting(saveX+1,saveY+1,objBlockParent) && !place_meeting(saveX+1,saveY+1,objPlatformParent))
		        {
		            canSave = 1;
		            saveX += 1;
		            saveY += 1;
		        }
		        else
		            canSave = 0;
		    }
		    if(objPlayer.canSave == 1)
		    {
		        map = ds_map_create();
				map[? "Death"] = global.death[global.savenum];
				map[? "Time"] = global.time[global.savenum];
				map[? "Room"] = saveRoom;
				map[? "playerX"] = saveX;
		        map[? "playerY"] = saveY;
				map[? "jumpTimes"] = global.jumptimes;
				map[? "Gravity"] = global.grav;
				map[? "infJump"] = global.infjump;
		        f = file_text_open_write(working_directory + "\\Save"+string(global.savenum));
		        file_text_write_string(f,base64_encode(ds_map_write(map)));
		        file_text_close(f);
		        ds_map_destroy(map);
		        objPlayer.canSave = 0;
		        return true;
		    }
		    else
		    return false;
		}
	}
}