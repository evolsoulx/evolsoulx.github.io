// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function OutsideView(){
	if(bbox_bottom < camera_get_view_y(view_camera[0])
	|| bbox_right < camera_get_view_x(view_camera[0])
	|| bbox_left > ((camera_get_view_x(view_camera[0]) + camera_get_view_width(view_camera[0])))
	|| bbox_top > ((camera_get_view_y(view_camera[0]) + camera_get_view_height(view_camera[0]))))
		return true;
	else 
		return false
}