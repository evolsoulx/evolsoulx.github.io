/// @description Insert description here
// You can write your code in this editor
/* How to use
trg = set trigger;
pth = your path;
spd = your path speed;
scl = set pth scale;
spr = set sprite;
endl = what to do when path end;
*/
/* endl : 
      0 stop
      1 restart from the start point
      2 restart from the current
      3 go back
*/
event_inherited();
image_speed = 0;
scl = 0;
trg = 0;
triggered = false;
endl = 0;
ended = 0;