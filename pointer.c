void f1(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;

}
void f2(int *a,int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;

}
int main ()
{
    int a=10;
    int b=20;
    int c=30;
    f1(a,b);
    printf("%d,%d,%d\n",a,b,c);
    f2(&a,&b);
    printf("%d,%d,%d\n",a,b,c);
}
