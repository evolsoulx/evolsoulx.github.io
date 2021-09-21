var h = sign(hspeed);
#region Collision with block
var Invis;//Check invisible block
Invis = instance_place(x,y,objInvisibleBlock);
if(Invis && Invis.visible == false)
	Invis.visible = true;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
x = xprevious;
y = yprevious;
y += global.flipfix;
PlayerWithMoveObject(objBlockParent);// Collision move block
#region Set to new place
var v = sign(v_temp);
var ya = frac(v_temp);
if(frac(abs(hspeed)) < 1 && frac(abs(hspeed)) > 0)
{
	if(!place_meeting(x+frac(hspeed),y,objBlockParent))
		x += frac(hspeed);
}
repeat(abs(hspeed))
{
	if(!place_meeting(x+h,y,objBlockParent))
		x += h;
}
repeat(floor(abs(v_temp)))
{
	if(!place_meeting(x,y+v,objBlockParent) || ((v * global.grav < 0) && !place_meeting(x,y+v,objBlockParent)))
		y += v;
}
if(!place_meeting(x,y+v,objBlockParent) && place_meeting(x+h,y,objBlockParent))
		y += ya;
while(place_meeting(x,y+global.grav,objBlockParent) && !place_meeting(x,y+0.4*global.grav,objBlockParent))
	y += 0.4*global.grav;
if(place_meeting(x,y,objPlatformParent))
	event_perform(ev_collision,objPlatformParent);
if(place_meeting(x,y+v,objBlockParent))
	vspeed = 0;
if(place_meeting(x,y+global.grav,objBlockParent))
{
	djump = floor(global.jumptimes) - 1;
	vspeed = 0;
}
if(place_meeting(x+hspeed,y+vspeed,objBlockParent))
	hspeed = 0;
if(place_meeting(x,y,objBlockParent))
	KillPlayer();
#endregion
#endregion