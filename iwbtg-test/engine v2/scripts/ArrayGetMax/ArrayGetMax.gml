// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function ArrayGetMax(argument0,argument1){
	var array = argument0;
	var type = argument1;
	var divide = 0;
	var Max;
	if(array_length(array) != 0)
	{
		if(type == 1)
		{
			Max = 0;
			for(var i=array_length(array)-1;i>=0;--i)
				Max = max(Max,array[i]);
		}
		else if(type == -1)
		{
			Max = -1/divide;
			for(var i=array_length(array)-1;i>=0;--i)
			{
				if(array[i] <= 0)
					Max = max(Max,array[i]);
			}
			if(Max == -1/divide)
				Max = 0;
		}
		else
		{
			Max = -1/divide;
			for(var i=array_length(array)-1;i>=0;--i)
				Max = max(Max,array[i]);
		}
		return Max;
	}
	else
		return 0;
}