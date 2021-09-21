/// @description mm_music_load_res(sound,loop?)
/// @param sound
/// @param loop?
function mm_music_load_res(argument0, argument1) {
	var handle;
	handle = external_call(global.__mm_dll_LoadMusicRes,argument0,argument1)
	ds_list_add(global.__mm_dll_stream_list,handle)
	return handle



}
