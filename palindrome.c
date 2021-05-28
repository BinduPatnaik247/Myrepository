
#include<stdio.h>
#include<stdlib.h>
struct node {
	char data;
	struct node *left;
	struct node *right;
};
int a[15];
int count=0;
struct node *root;
struct node *create(char item)
{
	
	struct node *p= (struct node *)malloc(sizeof(struct node));
	p->data=item;
	p->left=NULL;
	p->right=NULL;
	return p;
}
void inorder(struct node *t)
{
	if(t!=NULL)
	{
		inorder(t->left);
		printf("%c ",t->data);
		a[count++]=t->data;
		inorder(t->right);
	}
}

void palindrome()
{
	int flag;
	for(int i=0;i<count;i++)
	{
		for(int j=count-1;j>=0;j--)
		{
			if(a[i]!=a[j])
			{
				flag=0;
			}
			else
			{
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		printf("\nNot a palindrome");
	}
	else
	   printf("\nPalindrome");
	
}
int main()
{
	root=create('a');
	root->left=create('b');
	root->right=create('b');
	root->left->left=create('b');
	root->left->right=create('a');
	root->right->left=create('a');
	root->right->right=create('b');
	printf("Inorder:\n");
	inorder(root);
	palindrome();
	
	
	root=create('a');
	root->left=create('b');
	root->right=create('b');
	root->left->left=create('b');
	root->left->right=create('b');
	root->right->left=create('a');
	root->right->right=create('a');
	printf("Inorder:\n");
	inorder(root);
	palindrome();
	return 0;
}
	
