// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function getKey(argument0){
	var keyIn;
	keyIn = argument0;

	switch(keyIn)
	{
	    //special keys
		case 48: return keyboard_check(vk_shift)?")":"0";
		case 49: return keyboard_check(vk_shift)?"!":"1";
		case 50: return keyboard_check(vk_shift)?"@":"2";
		case 51: return keyboard_check(vk_shift)?"#":"3";
		case 52: return keyboard_check(vk_shift)?"$":"4";
		case 53: return keyboard_check(vk_shift)?"%":"5";
		case 54: return keyboard_check(vk_shift)?"^":"6";
		case 55: return keyboard_check(vk_shift)?"&":"7";
		case 56: return keyboard_check(vk_shift)?"*":"8";
		case 57: return keyboard_check(vk_shift)?"(":"9";
		case 65: return keyboard_check(vk_shift)?"A":"a";
		case 66: return keyboard_check(vk_shift)?"B":"b";
		case 67: return keyboard_check(vk_shift)?"C":"c";
		case 68: return keyboard_check(vk_shift)?"D":"d";
		case 69: return keyboard_check(vk_shift)?"E":"e";
		case 70: return keyboard_check(vk_shift)?"F":"f";
		case 71: return keyboard_check(vk_shift)?"G":"g";
		case 72: return keyboard_check(vk_shift)?"H":"h";
		case 73: return keyboard_check(vk_shift)?"I":"i";
		case 74: return keyboard_check(vk_shift)?"J":"j";
		case 75: return keyboard_check(vk_shift)?"K":"k";
		case 76: return keyboard_check(vk_shift)?"L":"l";
		case 77: return keyboard_check(vk_shift)?"M":"m";
		case 78: return keyboard_check(vk_shift)?"N":"n";
		case 79: return keyboard_check(vk_shift)?"O":"o";
		case 80: return keyboard_check(vk_shift)?"P":"p";
		case 81: return keyboard_check(vk_shift)?"Q":"q";
		case 82: return keyboard_check(vk_shift)?"R":"r";
		case 83: return keyboard_check(vk_shift)?"S":"s";
		case 84: return keyboard_check(vk_shift)?"T":"t";
		case 85: return keyboard_check(vk_shift)?"U":"u";
		case 86: return keyboard_check(vk_shift)?"V":"v";
		case 87: return keyboard_check(vk_shift)?"W":"w";
		case 88: return keyboard_check(vk_shift)?"X":"x";
		case 89: return keyboard_check(vk_shift)?"Y":"y";
		case 90: return keyboard_check(vk_shift)?"Z":"z";
		case 96: return "0";
		case 97: return "1";
		case 98: return "2";
		case 99: return "3";
		case 100: return "4";
		case 101: return "5";
		case 102: return "6";
		case 103: return "7";
		case 104: return "8";
		case 105: return "9";
		case 188: return ",";
		case 189: return keyboard_check(vk_shift)?"_":"-";
		case 190: return ".";
		default: return "";
	}
}