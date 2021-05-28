#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
	{return a;}
	return gcd(b,a%b);
}
int main()
{    
	int n,i,arr[10];
	printf("Enter no of numbers:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		int ans=arr[0];
		for(i=0;i<n,i++)
		{
			ans=((arr[i]*ans)/(gcd(arr[i],ans));
	     }
	     printf("%d",ans);
		return 0;
}


