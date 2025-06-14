#include<stdio.h>
int main ()
{
   int n;
  scanf("%d",&n);
   while(1)
   {
       if(n-1 < n)
       {
           printf("%d ",n-1);
       }
       else{
        printf("NO SOLUTION\n");
       }
       n--;
   }


}


