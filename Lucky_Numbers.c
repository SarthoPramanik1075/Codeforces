#include<stdio.h>
#include<math.h>
int main()

{
    int a,r,temp,sum=0,p;
    scanf("%d",&a);

    r=a/10;
    p=a%10;

    if(p==0)
    {
        printf("YES\n");
    }

    else if(r%p==0 || p%r==0)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    return 0;

}

