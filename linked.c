#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node
{
	int data;
	struct *left;
	struct *right;
};
int bst(struct node* node,int min,int max);
int bstu(struct node* node)
{
	return 
