#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,col;
    scanf("%d",&row);
    col=row;
    int a[row][col];
    long long int psum=0,ssum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                psum=psum+a[i][j];
            }
           if(i+j==row-1)
            {
                ssum=ssum+a[i][j];
            }
        }
    }
    long long int ans=abs(psum-ssum);
    printf("%lld",ans);
    return 0;
}
