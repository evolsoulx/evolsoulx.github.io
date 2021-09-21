function mm_free() {
	ds_list_destroy(global.__mm_dll_stream_list)
	external_call(global.__mm_dll_free)
	external_free(global.__mm_dll_path)



}
