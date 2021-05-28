#include<stdio.h>
int main()
{
   int n,a,d,i,sum=0;
   n=100,a=50,d=1;
   for(i=a;i<=n;i++)
   {
   sum=n/2*(2*a+(n-1)*d);
   }
   printf("%d",sum);
   return 0;
   }
