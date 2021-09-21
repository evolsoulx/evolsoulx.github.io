/// @description Insert description here
// You can write your code in this editor
draw_self();
draw_set_valign(1);
draw_set_halign(1);
draw_set_font(fText);
draw_set_color(c_black);
draw_text(x+16,y-10,string_hash_to_newline(text));
draw_set_valign(0);
draw_set_halign(0);