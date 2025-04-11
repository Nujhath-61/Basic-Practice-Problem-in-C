#include<stdio.h>
#include<string.h>
int main ()
{
    int sum=0;
    char str [1000];
    char str1[1000];
    gets(str);
    strlwr(str);
    strcat(str1,str);
    strrev(str1);
   for(int i=0;i<strlen(str);i++)
   {
       if(str[i]!=str1[i])
       {
           sum++;
       }
   }
   if(sum == 0)
   {
       printf("%s is a  palindorme\n",str);
   }
   else
   {
       printf("%s is not a palindrome\n",str);
   }

}
