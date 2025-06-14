#include<stdio.h>
int main () {

int t;
scanf("%d",&t);
for(int i=1;i<=t;i++)
{
    int n;
    scanf("%d",&n);
    int a[n];
int max;
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[j]);

        }
max=a[0];
for(int k=0;k<n;k++)
{
   if(max<a[k])
   {
       max = a[k];
   }
}


    printf("%d\n",max);
}
}



