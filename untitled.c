#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *create()
{
	int item;
	printf("Enter data(-1 if no node):");
	scanf("%d",&item);
	if(item==-1)
	return NULL;
	
		struct node *ptr= malloc(sizeof(struct node));
		ptr->data=item;
		printf("left of %d",item);
		printf("\n");
		ptr->left=create();
		printf("right of %d",item);
		ptr->right=create();
		return ptr;
	
}
void inorder(struct node *t)
{
	if(t!=NULL)
	{
		inorder(t->left);
		printf("%d  ",t->data);
		inorder(t->right);
	}
}
struct node *dll(struct node *root)
{
	if(root==NULL)
	{
		
		return root;
	}
	if(root->left!=NULL)
	{
		struct node *left;
		left=dll(root->left);
		while(left->right!=NULL)
		{
			left=left->right;
		}
		left->right=root;
		root->left=left;
	}
	if(root->right!=NULL)
	{
		struct node *right;
		right=dll(root->right);
		while(right->left!=NULL)
		{
			right=right->left;
		}
		right->left=root;
		root->right=right;
	}
	return root;
}
struct node *dll2(struct node *root)
{
	struct node *prev;
	root=dll(root);
	prev=root;
	while(root->left!=NULL)
	{
		root=root->left;
	}
	while(prev->right!=NULL)
	{
		prev=prev->right;
	}
	root->left=prev;
	prev->right=root;
	return root;
}

int main()
{
	struct node *root;
	root=create();
	
	
	inorder(root);
	
	return 0;
}
