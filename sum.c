#include<stdio.h>
#include<strings.h>
int main()
{
   int n,sum=0;
   scanf("%d",&n);
   char a[n];
   scanf("%s",a);
   for(int i=0;i<strlen(a);i++)
   {
       sum=sum+(a[i]-48);
   }
   printf("%d\n",sum);

 return 0;
}
