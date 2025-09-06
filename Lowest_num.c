#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i,min=INT_MAX,count;


    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<=n;i++)
    {
        while(min>a[i])
        {
            min=a[i];
            count=i;
        }
    }
     printf("%d %d\n",min,count);

    return 0;
}


































































































