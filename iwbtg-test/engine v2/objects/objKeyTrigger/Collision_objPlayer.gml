/// @description Insert description here
// You can write your code in this editor
if(global.trigger[key] == true)
{
	global.trigger[trg] = true;
	if(snd)
		AudioPlaySound(sound);
	instance_destroy(self,false);
}