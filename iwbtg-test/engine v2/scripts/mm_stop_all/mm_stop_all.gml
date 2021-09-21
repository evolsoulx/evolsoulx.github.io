function mm_stop_all() {
	var i,size,list;
	list = global.__mm_dll_stream_list
	size = ds_list_size(list)
	for(i=0;i<size;i+=1) {
	    mm_stop(ds_list_find_value(list,i))
	}




}
