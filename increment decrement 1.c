#include<stdio.h>
int main () {
   int x=5,y=10;
   x--;
   y--;
   x++;
   y++;
   printf("%d %d\n",x,y);
   y = x++ + y++;
   printf("%d %d\n",x,y);
   x = x++ + y++;
   printf("%d %d\n",x,y);




}
