#include<stdio.h>
void subset(int,int,int);
char a[10],n;
int main()
{
	int len;
	printf("Enter no of elements");
	scanf("%d",&len);
	printf("Enter the string:");
	scanf("%s",a);
	n=len;
	for(int i=1;i<=n;i++)
	   subset(0,0,i);
}
void subset(int start,int index,int sub)
{
	int i,j;
	if(index-start+1 == sub)
	{
		if(sub==1)
		{
			for(i=0;i<n;i++)
			printf("%c\n",a[i]);
			
		}
		else
		{
			for(j=index;j<n;j++)
			{
				for(i=start;i<index;i++)
				printf("%c",a[i]);
				printf("%c\n",a[j]);
			}
			if(start!= n-sub)
			subset(start+1,start+1,sub);
		}
	}
	else
	{
		subset(start,index+1,sub);
	}
}
			
			
	
	
        		
    
