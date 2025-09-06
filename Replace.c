#include<stdio.h>
#include<limits.h>

int main()
{
   int n,i,j;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   int max=INT_MIN,min=INT_MAX;
   int big=0,small=0;
   for(i=0;i<n;i++)
   {
       while(a[i]>max)
       {
           max=a[i];
           big=i;
       }
       while(a[i]<min)
       {
           min=a[i];
           small=i;
       }
   }
  
int temp=a[big];
a[big]=a[small];
a[small]=temp;

for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
printf("\n");

    return 0;
}
