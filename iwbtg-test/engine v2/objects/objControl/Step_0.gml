/// @description Insert description here
// You can write your code in this editor
if(!wait)
{
    if(keyboard_check_pressed(global.upbutton))
    {
		pos -= 1;
		accept = "Accept";
	}
    if(keyboard_check_pressed(global.downbutton))
	{
        pos += 1;
		accept = "Accept";
	}
    pos = clamp(pos,1,17);
    if(keyboard_check_pressed(global.jumpbutton))
    {
        if(pos != 15 && pos != 16 && pos != 17)
        {  
            wait = 1;
			change_temp = temp[pos];
            temp[pos] = "..";
        }
        else if(pos = 15)
            event_user(1);
        else if(pos = 16)
            event_user(0);
        else
            instance_destroy(self);
    }
}
else
{
    if(keyboard_check_pressed(vk_anykey))
    {    
        for(var i=14;i>0;i--)
		{
			if(keyboard_key = temp[i])
			{
				temp[i] = change_temp;
				break;
			}
		}
		temp[pos] = keyboard_key;
        wait = 0;
    }
}