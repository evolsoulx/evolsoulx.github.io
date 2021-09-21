/// @description Insert description here
// You can write your code in this editor
if(room == rTitle && keyboard_check_pressed(global.jumpbutton))
    room_goto_next();
else if(room == rMenu)
{
    if(keyboard_check_pressed(global.leftbutton))
    {
        select -= 1;
        if(select < 1)
            select = 3;
    }
    else if(keyboard_check_pressed(global.rightbutton))
    {
        select += 1;
        if(select > 3)
            select = 1;
    }
    else if(keyboard_check_pressed(global.jumpbutton))
    {
        global.savenum = select;
        room_goto(rSelectStage);
    }
    else if(keyboard_check_pressed(global.shootbutton))
        room_goto(rControl);
}