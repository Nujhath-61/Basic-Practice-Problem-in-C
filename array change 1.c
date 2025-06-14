#include<stdio.h>
int main ()
{
    int  t,a,b,c;
    scanf("%d",&t);
   for (int i = 1;i<= t;i++)
   {
       scanf("%d %d %d",&a,&b,&c);
       int d,e,f;
       d = a+b;
       e = b+c;
       f = c+a;
         if( d%2 != 0 || e%2 != 0 || f%2 != 0 )
      {
          printf("YES\n");

      }
            else
        {
        printf("NO\n");
      }
   }

    return 0;
}

