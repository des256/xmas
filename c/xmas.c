#include<stdio.h>
void main(){int x,y,u,v;for(y=-8;y<9;y++){for(x=-8;x<9;x++){u=x<0?-x:x;v=y<0?-y:y;printf((u<v?v-u:u-v)<5&&(u<5||v<5)?"*":" ");}printf("\n");}}
