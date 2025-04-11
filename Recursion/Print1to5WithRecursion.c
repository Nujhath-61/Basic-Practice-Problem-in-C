#include<stdio.h>
//Descending Order
void recurse1(int count)
{
    if(count > 5){
        return;
    }
   recurse1(count + 1);
    printf("%d ",count);
    //output : 5 4 3 2 1



}
//Ascending Order
void recurse2(int count)
{
    if(count > 5){
        return;
    }

    printf("%d ",count);
    recurse2(count + 1);
    //output : 1 2 3 4 5



}
int main ()
{
    printf("descending: ");
    recurse1(1);
    printf("\n");
    printf("ascending: ");
    recurse2(1);
    return 0;
}


