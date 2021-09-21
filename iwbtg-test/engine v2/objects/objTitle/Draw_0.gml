/// @description Insert description here
// You can write your code in this editor
if(room == rMenu)
{
    var i;
    for(i=1;i<=3;i+=1)
    {
        draw_set_color(c_black);
        draw_set_halign(fa_left);
        draw_set_font(fTitle);
        // draw "Data x"
        draw_text(x+21+(i-1)*239,y+9,string_hash_to_newline(str[i]));
        draw_set_font(fText);
        // draw death count
        draw_text(x+(i-1)*239+10,y+70,string_hash_to_newline("death:"+string(menu_death[i])));
        // draw time
        draw_text(x+(i-1)*239+10,y+90,string_hash_to_newline("time:"+string(hour[i])+":"+string(minu[i])+":"+string(sec[i])));
        if(i == select)
            draw_sprite(sprPlayerRunning,-1,x+(i-1)*239+60,y+313);
        draw_text(305,546,string_hash_to_newline("["+KeyBind(global.shootbutton)+"]Key to set keyboard"))
    }
}