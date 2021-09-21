function mm_music_load_mem_ext(argument0, argument1, argument2, argument3) {
	var handle;
	handle = external_call(global.__mm_dll_load_music_mem_ext,argument0,argument1,argument2,argument3)
	ds_list_add(global.__mm_dll_stream_list,handle)
	return handle



}
