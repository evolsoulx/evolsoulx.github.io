function mm_music_free(argument0) {
	ds_list_delete(global.__mm_dll_stream_list,ds_list_find_index(global.__mm_dll_stream_list,argument0))
	return external_call(global.__mm_dll_free_music,argument0)



}
