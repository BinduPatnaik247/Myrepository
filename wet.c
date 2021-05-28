#include<stdio.h>
int pick =0;
void linearsearch(int m,int picked[],int time,int drytime[])
{
	for(int i=0;i<m;i++)
	{
		if(time>drytime[i])
		{
		}
     }
}
int main()
{
	int n,m,g;
	int drytime[50],raintime[50],time,picked[50];
	scanf("%d %d %d",&n,&m,&g);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&raintime[i]);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&drytime[i]);
	}
	for(int i=0;i<m;i++)
	{
		picked[i]=0;
	}
	for(int i=0;i<m;i++)
	{
		time=raintime[i+1]-drytime[i];
		linearsearch(m,picked,time,drytime);
	}
	printf("%d",pick);
    
	return 0;
}

	
