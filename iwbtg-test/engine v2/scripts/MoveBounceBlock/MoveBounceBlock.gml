// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function MoveBounceBlock(){
	x = xprevious;
	y = yprevious;
	var h = sign(hspeed);
	var v = sign(vspeed);
	repeat(abs(hspeed))
	{
		if(!place_meeting(x+h,y,objBlockParent))
			x += h;
		if(!place_meeting(x+frac(hspeed),y,objBlockParent))
			x += frac(hspeed);
	}
	repeat(abs(vspeed))
	{
		if(!place_meeting(x,y+v,objBlockParent))
			y += v;
		if(!place_meeting(x,y+frac(vspeed),objBlockParent))
			y += frac(vspeed);
	}
	if(place_meeting(x+h,y,objBlockParent))
		hspeed *= -1;
	if(place_meeting(x,y+v,objBlockParent))
		vspeed *= -1;
}