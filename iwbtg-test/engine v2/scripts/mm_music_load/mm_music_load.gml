function mm_music_load(argument0, argument1) {
	var handle;
	handle = external_call(global.__mm_dll_load_music,argument0,argument1)
	ds_list_add(global.__mm_dll_stream_list,handle)
	return handle



}
