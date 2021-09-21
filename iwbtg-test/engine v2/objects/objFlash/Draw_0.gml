/// @description Insert description here
// You can write your code in this editor
draw_set_color(color);
if(in != 0 || out != 0)
    draw_set_alpha(_alpha);
else
    draw_set_alpha(alpha);
draw_rectangle(camera_get_view_x(view_camera[0]),camera_get_view_y(view_camera[0]),camera_get_view_width(view_camera[0]),camera_get_view_height(view_camera[0]),0)
draw_set_alpha(1);
draw_set_color(c_white);