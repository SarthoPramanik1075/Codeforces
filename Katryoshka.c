#include<stdio.h>

int main()

{
   long long int e,m,b,total;
   scanf("%lld %lld %lld",&e,&m,&b);
   if(e==1 || e==0)
   {
       printf("%lld\n",e);
   }


   else if(m<=e && m<=b)
  {

      e=e-m;
      b=b-m;

      if(e/2<=b)
      {
          e=e/2;
          total=e+m;
          printf("%lld\n",total);
      }
      else
      {
          printf("%lld\n",m+b);
      }
  }
  else if(b<=e && b<=m)
  {

      printf("%lld\n",b);

  }
  else
  {
      printf("%lld\n",e);
  }
return 0;
}

