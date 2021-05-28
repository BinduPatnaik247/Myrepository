#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
int a[15];
int count=0;
struct node *root;
struct node *create()
{
	struct node *p= (struct node *)malloc(sizeof(struct node));
	int item;
	printf("\nEnter data(-1 if null):");
	scanf("%d",&item);
	if(item==-1)
	{
		return NULL;
	}
	p->data=item;
	printf("Left of %d:",item);
	p->left=create();
	printf("Right of %d:",item);
	p->right=create();
	
	return p;
}
void inorder(struct node *t)
{
	
	if(t!=NULL)
	{
		inorder(t->left);
		printf("%d  ",t->data);
		a[count++]=t->data;
		inorder(t->right);
	   
	}
	
}

void ksuccessor()
{
	int p,k;
	printf("\nEnter the node in the tree: ");
	scanf("%d",&p);
	printf("\nNo of successors needed:");
	scanf("%d",&k);
	//printf("%d",count);
	for(int i=0;i<count;i++)
	{
		if(a[i]==p)
		{
			printf(" %d Successors of %d are: ",k,p);
			while(k!=0)
			{
				printf("%d ",a[i+1]);
				k--;
				i++;
			}
		}
		
	}
}
			
int main()
{
	root=create();
	inorder(root);
	ksuccessor();
	return 0;
}
	
	
	
		
