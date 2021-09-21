// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function ArrayGetMin(argument0,argument1){
	var array = argument0;
	var type = argument1;
	var divide = 0;
	var Min;
	if(array_length(array) != 0)
	{
		if(type == 1)
		{
			Min = 1/divide;
			for(var i=array_length(array)-1;i>=0;--i)
			{
				if(array[i] >= 0)
					Min = min(Min,array[i]);
			}
			if(Min = 1/divide)
				Min = 0;
		}
		else if(type == -1)
		{
			Min = 0;
			for(var i=array_length(array)-1;i>=0;--i)
				Min = min(Min,array[i]);
		}
		else
		{
			Min = 1/divide;
			for(var i=array_length(array)-1;i>=0;--i)
				Min = min(Min,array[i]);
		}
		return Min;
	}
	else
		return 0;
}