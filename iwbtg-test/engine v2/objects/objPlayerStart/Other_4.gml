/// @description Insert description here
// You can write your code in this editor
if(!instance_exists(objPlayer))
{
    instance_create_layer(x+17,y+23,"PlayerLayer",objPlayer)
    if(save)
		SaveGame();
}
instance_destroy(self);