#include<stdio.h>
int main ()
{
    int l,r,sum=0;
    scanf("%d %d",&l,&r);
    if(l>r)
    {
        int temp = l;
        l=r;
        r=temp;

    }
    for(int i=l; i<=r;i++)
    {
        if(i%2 != 0)
        {
            sum++;
        }
    }
    printf("total odd number between %d and %d  is  %d",l,r,sum);
    return 0;
}
