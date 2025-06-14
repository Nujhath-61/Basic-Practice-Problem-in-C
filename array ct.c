#include<stdio.h>
int main ()
{
    int a[10]={8,5,6,0,4,2,3,7,1,9};
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==1)
        {
            a[i]++;
            a[i]=a[i]*i;
            printf("%d %d\n",i,a[i]);
        }
    }
}
