#include<Stdio.h>
#include<math.h>
int main()
{
   long long int n,i,sum=0;
   scanf("%lld",&n);
   long long int a[n];
   for(i=0;i<n;i++)
   {
       scanf("%lld",&a[i]);
   }
  for(i=0;i<n;i++)
  {
      sum+=a[i];
  }
  if(sum<0)
  {
      sum*=-1;
  }

   printf("%lld\n",sum);
   return 0;
}
