#include<stdio.h>
int main ()
{
    int n,x,sum=0;
    scanf("%d %d",&n,&x);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
   if(arr[j] == x)
   {
     sum++;
    }
}
if(sum>0)
        {
           printf("YES\n");
        }
        else
        {

           printf("No\n");
        }
}
