// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
/// @arg time
/// @arf max_alpha
/// @arg fade_in
/// @arg fade_out
/// @arg col
function ScreenFlash(argument0,argument1,argument2,argument3,argument4){
	var time = argument0;
	var max_alpha = argument1;
	var in_time = argument2;
	var out_time = argument3;
	var col = argument4;
	if(!instance_exists(objFlash))
	{
		var inst = instance_create_layer(0,0,"WorldLayer",objFlash);
		inst.alarm[2] = time + 1;
		inst.alpha = max_alpha;
		inst.in = in_time;
		inst.out = out_time;
		inst.color = col;
		if(in_time != 0)
		    inst.alarm[0] = 1;
		if(out_time != 0)
		    inst.alarm[1] = time - out_time;
		if(in_time == 0 && out_time != 0)
			inst._alpha = max_alpha;
	}
}
