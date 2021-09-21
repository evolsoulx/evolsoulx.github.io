// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function SaveDeathTime(){
	if(!BeginRoom())
	{
	    var f,map;
	    f = file_text_open_read("Save"+string(global.savenum));
	    map = ds_map_create();
	    ds_map_read(map,base64_decode(file_text_read_string(f)));
	    ds_map_replace(map,"Death",global.death[global.savenum]);
	    ds_map_replace(map,"Time",global.time[global.savenum]);
	    file_text_close(f);
	    f = file_text_open_write("Save"+string(global.savenum));
	    file_text_write_string(f,base64_encode(ds_map_write(map)));
	    file_text_close(f);
	    ds_map_destroy(map);
	}
}