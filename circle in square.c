#include<stdio.h>
#include<math.h>
int main ()
{
  int n,k;
    int t;
  float r,l;
    scanf("%d",&t);
    for(int i = 1;i<=t;i++)
    {
        scanf("%d %d",&n,&k);
        r = n /(k+1);

   float F = floor (r);
       l = r - F;
       float R  = l * k;
        int p = r+R;
       printf("%d\n",p);
      printf("\n");


    }


}
