#include<stdio.h>
#include<stdlib.h>
#include"BST.h"
static int a[9];
	 int b=0;
struct BSTAdt *Insert(struct BSTAdt *t,int x){
if(t==NULL)
{
	t=(struct BSTAdt *)malloc(sizeof(struct BSTAdt));
	t->data=x;
	t->left=NULL;
	t->right=NULL;
}
else
{
																															 if(t->data>x){
																															t->left=Insert(t->left,x);
																															
}																															else{
																												t->right=Insert(t->right,x);
}																															
}
return t;
}

void inorder(struct BSTAdt *t){   																																																																																	if(t!=NULL){
	inorder(t->left);
	printf("%d ",t->data);
	inorder(t->right);
}

}
int *inorder_(struct BSTAdt *t){
	
	if(t!=NULL){

	inorder_(t->left);
	a[b++]=t->data;
	inorder_(t->right);

}
return a;
}
