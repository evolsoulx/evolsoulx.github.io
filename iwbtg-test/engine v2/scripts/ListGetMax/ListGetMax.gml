// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function ListGetMax(argument0,argument1){
	/// @arg Array
	/// @arg Type
	///Type == 1 means positive number only(include 0)
	///Type == 0 means all numer
	///Type == -1 means negative number only(include 0)
	var list = argument0;
	var type = argument1;
	var length = ds_list_size(list);
	var divide = 0;
	var Max;
	if(length == 0)
		return 0;
	else
	{
		if(type == 1)
		{
			Max = 0;
			for(var i=length-1;i>=0;--i)
				Max = max(Max,ds_list_find_index(list,i));
		}
		else if(type == -1)
		{
			Max = -1/divide;
			for(var i=length-1;i>=0;--i)
			{
				if(ds_list_find_index(list,i) < 0)
					Max = max(Max,ds_list_find_index(list,i));
			}
		}
		else
		{
			Max = -1/divide;
			for(var i=length-1;i>=0;--i)
				Max = max(Max,ds_list_find_index(list,i));
		}
	}
	return Max;
}