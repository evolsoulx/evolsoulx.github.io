// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function LoadGame(){
	//Check the number of player
	if(instance_exists(objPlayer))
	    instance_destroy(objPlayer);
	//Load the data from file
	var f,map,saveX,saveY,saveRoom;
	f = file_text_open_read(working_directory + "\\Save"+string(global.savenum));
	map = ds_map_create();
	ds_map_read(map,base64_decode(file_text_read_string(f)));
	file_text_close(f);
	//Reset some value
	global.death[global.savenum] = map[? "Death"];
	global.time[global.savenum] = map[? "Time"];
	saveRoom = map[? "Room"];
	saveX = map[? "playerX"];
	saveY = map[? "playerY"];
	global.jumptimes = map[? "jumpTimes"];
	global.grav = map[? "Gravity"];
	global.infjump = map[? "infJump"];
	ds_map_destroy(map);
	//Restart game
	instance_create_layer(saveX,saveY,"PlayerLayer",objPlayer);
	room_goto(asset_get_index(saveRoom));
}