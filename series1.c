#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("1");
    for(int i=1; i<n; i++)
    {
		printf("+");
		printf("1/%d",i+1);
	}
	return 0;
}
	
