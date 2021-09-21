/// @description Insert description here
// You can write your code in this editor
if(global.trigger[trg])
{
	instance_create_layer(x,y,"BlockLayer",obj);
	instance_destroy(self,false);
}
