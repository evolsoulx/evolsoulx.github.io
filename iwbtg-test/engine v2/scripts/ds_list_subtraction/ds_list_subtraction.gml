// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function ds_list_subtraction(argument0,argument1){
	var list1,list2,size1,size2;
	list1 = ds_list_create();
	list2 = ds_list_create();
	list1 = argument0;
	list2 = argument1;
	size1 = ds_list_size(list1);
	size2 = ds_list_size(list2);
	if( size1!= 0 && size2 !=0){							
		for(var i=0;i<size1;++i)
		{
			for(var j=0;j<size2;++j)
			{
				if(ds_list_find_value(list1,i) == ds_list_find_value(list2,j))
				{
					ds_list_delete(list1,i);
					size1--;
					i--;
					break;
				}
			}
		}
	}
	return list1;
}