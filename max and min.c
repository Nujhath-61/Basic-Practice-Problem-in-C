#include<stdio.h>
int main()
{
  int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(int k = 0;k<n-1;k++)
{
  for(int j=0;j<n-1-k;j++)
  {
      if(a[j]> a[j+1])
      {
          int temp = a[j];
          a[j] = a[j+1];
          a[j+1] = temp;
      }
  }
}
int max = a[n-1];
int min = a[0];


printf("max=%d, min= %d\n",max,min);
return 0;
}
