/// @description Insert description here
// You can write your code in this editor
/* How to use
trg[i] = set trigger;
pth[i] = your path;
spd[i] = your path speed;
scl[i] = set pth scale;
spr = set sprite;
endl = what to do when path end;
endl :	0 stop
        1 restart from the start point
        2 restart from the current
        3 go back
*/
event_inherited();
ended = 0;
spr = 0;
flag = 0;