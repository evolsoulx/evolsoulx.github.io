/// @description Insert description here
// You can write your code in this editor
if(room == rMenu)
{
    select = 1;
    str[1] = "Data1";
    str[2] = "Data2";
    str[3] = "Data3";
    var i,f,map,t;
    for(i=1;i<=3;i+=1)
    {
        if(file_exists(working_directory + "\\Save"+string(i)))
        {
            f = file_text_open_read(working_directory + "\\Save"+string(i));
            map = ds_map_create();
            ds_map_read(map,base64_decode(file_text_read_string(f)));
            file_text_close(f);
            menu_death[i] = ds_map_find_value(map,"Death");
            menu_time[i] = ds_map_find_value(map,"Time");
            ds_map_destroy(map);
            t = floor(menu_time[i]);
            hour[i] = floor(t/3600);
            minu[i] = floor(t/60 - hour[i]*60);
            sec[i] = floor(t - minu[i]*60 - hour[i]*3600);
        }
		else
		{
			menu_death[i] = 0;
			hour[i] = 0;
			minu[i] = 0;
			sec[i] = 0;
		}
    }
}