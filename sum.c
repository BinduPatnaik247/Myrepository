#include<stdio.h>
int main()
{
   int i,k,j,sum=0;
   scanf("%d",&i);
   scanf("%d",&k);
   for(j=i;j<=k;j++)
   {
     sum=sum+j;
   }
   printf("%d",sum);
   return 0;
}
