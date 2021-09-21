/// @description Set default physic
xscale = 1;
jump = 8.5;
jump2 = 7;
v_temp = 0;
canSave = 0;
PlayerOnPlatform();
djump = floor(global.jumptimes) - 1;
gravity = 0.4;
gravity_direction = (global.grav == 1) ? -90 : 90;
mask_index = (global.grav == 1) ? sprPlayerMask : sprPlayerMaskFlip;