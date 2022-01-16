#include"ExptreeADT.h"
#include<stdio.h>
#include<stdlib.h>

struct node *create(char data)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void construct(struct Exptree *t)
{	
	init(t->s,6);
	struct node *a;
	int i=0;
	while(t->postfix[i++]!='\0')
	{
		if(t->postfix[i]=='+' || t->postfix[i]=='-' | t->postfix[i]=='*' | t->postfix[i]=='/')
		{
			a=create(t->postfix[i]);
			a->right=pop(t->s);
			a->left=pop(t->s);
			push(t->s,a);
		}
		else
		{
			a=create(->postfix[i]);
			push(t->s,a);
		}
	}
}
void inorder(struct Exptree *t)
{
	if(top(t->s)!=NULL)
	{
		inorder(top(t->s)->left);
		printf(" %d",top(t->s)->data);
		inorder(top(t->s)->right);
	}
}
