#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root;
struct node* insert()
{
	 int item;
	 scanf("%d",&item);
	struct node *parent, *nodeitem;
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr== NULL)
	{
		printf("can`t insert");
	}
	else
	{
		ptr->data=item;
		ptr->left=NULL;
		ptr->right=NULL;
	}
	if(root==NULL)
	{
		root=ptr;
		root->left=NULL;
		root->right=NULL;
	}
	else
	{
		parent=NULL;
		nodeitem=root;
		while(nodeitem!=NULL)
		{
			parent=nodeitem;
			if(item<nodeitem->data)
			{
				nodeitem=nodeitem->left;
			}
			else
			     nodeitem=nodeitem->right;
	    }
	    if(item<parent->data)
	    {
			parent->left=ptr;
		}
		else
		    parent->right=ptr;
	}  
		  printf("Node inserted\n");
		  
	return 0;	  
}

bool check(struct node *T1,struct node *T2)
{
	 if(T1==NULL && T2 ==NULL)
	 return true;
	 
	 if(T1!=NULL && T2!=NULL){ 
	 return ((T1->data == T2 ->data) && check(T1->left,T2->left) && check(T1->right,T2->right));
	 
  }
  else return false;
}
int main()
 {
	 int n;
	 printf( "no of nodes:");
	 scanf("%d",&n);
	 printf("Nodes for tree1:\n");
	 struct node *t1;
     struct node *t2;
	 for(int i=0;i<n;i++)
	 {
		 t1=insert();
	  }
	  printf("Nodes for tree2:\n");
	  for( int i=0;i<n;i++)
	  {
		  t2=insert();
	   }
	  
	  if(check(t1,t2))
	  {
		  printf("Trees are identical");
	  }
	  else
	  {
		  printf("Trees are Not identical");
	  }
	 return 0;
}
