// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function KeyBind(argument0){
	
var keyIn;
keyIn = argument0;

switch(keyIn)
{
    //special keys
    case vk_space: return "Space";
    case vk_shift: return "Shift";
    case vk_control: return "Control";
    case vk_alt: return "Alt";
    case vk_enter: return "Enter";
    case vk_up: return "Up";
    case vk_down: return "Down";
    case vk_left: return "Left";
    case vk_right: return "Right";
    case vk_backspace: return "Backspace";
    case vk_tab: return "Tab";
    case vk_insert: return "Insert";
    case vk_delete: return "Delete";
    case vk_pageup: return "Page Up";
    case vk_pagedown: return "Page Down";
    case vk_home: return "Home";
    case vk_end: return "End";
    case vk_escape: return "Escape";
    case vk_printscreen: return "Print Screen";
    case vk_f1: return "F1";
    case vk_f2: return "F2";
    case vk_f3: return "F3";
    case vk_f4: return "F4";
    case vk_f5: return "F5";
    case vk_f6: return "F6";
    case vk_f7: return "F7";
    case vk_f8: return "F8";
    case vk_f9: return "F9";
    case vk_f10: return "F10";
    case vk_f11: return "F11";
    case vk_f12: return "F12";
    case vk_lshift: return "Left Shift";
    case vk_rshift: return "Right Shift";
    case vk_lcontrol: return "Left Control";
    case vk_rcontrol: return "Right Control";
    case vk_lalt: return "Left Alt";
    case vk_ralt: return "Right Alt";
    //numpad keys
	case 65: return "A";
	case 66: return "B";
	case 67: return "C";
	case 68: return "D";
	case 69: return "E";
	case 70: return "F";
	case 71: return "G";
	case 72: return "H";
	case 73: return "I";
	case 74: return "J";
	case 75: return "K";
	case 76: return "L";
	case 77: return "M";
	case 78: return "N";
	case 79: return "O";
	case 80: return "P";
	case 81: return "Q";
	case 82: return "R";
	case 83: return "S";
	case 84: return "T";
	case 85: return "U";
	case 86: return "V";
	case 87: return "W";
	case 88: return "X";
	case 89: return "Y";
	case 90: return "Z";
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
    case 106: return "*";
    case 107: return "+";
    case 109: return "-";
    case 110: return ".";
    case 111: return "/";
    //misc keys
    case 186: return ";";
    case 187: return "=";
    case 188: return ",";
    case 189: return "-";
    case 190: return ".";
    case 191: return "/";
    case 192: return "`";
    case 219: return "[";
    case 220: return "\\";
    case 221: return "]";
    case 222: return "'";
    //other characters
    default: return "";
}
}