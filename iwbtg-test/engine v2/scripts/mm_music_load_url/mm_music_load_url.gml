function mm_music_load_url(argument0) {
	var handle;
	handle = external_call(global.__mm_dll_load_url,argument0)
	ds_list_add(global.__mm_dll_stream_list,handle)
	return handle



}
