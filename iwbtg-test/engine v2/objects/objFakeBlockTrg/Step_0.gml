/// @description Insert description here
// You can write your code in this editor
if(global.trigger[trg] == true)
{
    var inst;
    inst = instance_create_layer(x,y,"BlockLayer",objFakeBlock);
    inst.sprite_index = sprite_index;
    inst.image_index = image_index;
    inst.image_xscale = image_xscale;
    inst.image_yscale = image_yscale;
    inst.image_speed = image_speed;
    inst.image_angle = image_angle;
    inst.image_blend = image_blend;
    inst.image_alpha = image_alpha;
    instance_destroy(self,false);
}