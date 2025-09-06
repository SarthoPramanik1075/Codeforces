#include<stdio.h>
int main()
{
    int n,i,b;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);

    for(i=0;i<n;i++)
    {
        if(b==a[i])
        {
            printf("%d\n",i);
            break;
        }
       else if(i==n-1 && b!=a[i])
       {
           printf("-1\n");
       }
    }
    return 0;
}
