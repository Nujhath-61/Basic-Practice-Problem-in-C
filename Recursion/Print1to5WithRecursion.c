#include<stdio.h>
void recurse (int count)
{
    if(count > 5){
        return;
    }

    recurse(count + 1);
    printf("%d\n",count);

}
int main ()
{
    recurse (1);
    return 0;
}
//output : 5 4 3 2 1

