/// @description Insert description here
// You can write your code in this editor
xpos += x_spd;
ypos += y_spd;
c_width += w_spd;
c_height += h_spd;
camera_set_view_pos(view_camera[0],xpos,ypos);
camera_set_view_size(view_camera[0],c_width,c_height);
alarm[0] = 1;