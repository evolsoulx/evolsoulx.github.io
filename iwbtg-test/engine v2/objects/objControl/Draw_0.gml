/// @description Insert description here
// You can write your code in this editor
var menu;
menu = "Left#Right#Up#Down#Jump#Shoot#Pause#Suicide#Restart#Save#Quit#Reboot#AD Rignt#AD Left#"+accept+"#Reset#Back";
dy = string_height(string_hash_to_newline(menu))/17;
draw_set_color(c_black);
draw_set_font(fControl);
draw_text(200,64,string_hash_to_newline(menu));
draw_text(500,64,string_hash_to_newline(
				 KeyBind(temp[1])+
             "#"+KeyBind(temp[2])+
             "#"+KeyBind(temp[3])+
             "#"+KeyBind(temp[4])+
             "#"+KeyBind(temp[5])+
             "#"+KeyBind(temp[6])+
             "#"+KeyBind(temp[7])+
             "#"+KeyBind(temp[8])+
             "#"+KeyBind(temp[9])+
             "#"+KeyBind(temp[10])+
             "#"+KeyBind(temp[11])+
             "#"+KeyBind(temp[12])+
             "#"+KeyBind(temp[13])+
             "#"+KeyBind(temp[14])));
draw_text(200,540,string_hash_to_newline("["+KeyBind(global.jumpbutton)+"]Choose"));
draw_sprite(sprSpikeRight,0,168,64+dy*(pos-1));
draw_set_color(c_white);