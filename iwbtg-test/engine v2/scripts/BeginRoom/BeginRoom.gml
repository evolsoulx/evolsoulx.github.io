// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function BeginRoom(){
	switch(room)
	{
	    case rTitle:
	    case rMenu:
	    case rSelectStage:
	    case rControl:
	        return true;
	        break;
	    default:
	        return false;
	}
}