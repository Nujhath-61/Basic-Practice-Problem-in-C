#include<stdio.h>
int main(){
int a,b,t;
scanf("%d",&t);
for(int i =1;i<=t;i++)
{
    scanf("%d %d",&a,&b);
    if((a+b)% 3 == 0  )
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


}

}
