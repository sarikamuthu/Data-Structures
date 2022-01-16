#include"impl.h"
#include<stdio.h>
#include<stdlib.h>

int main(){
	struct Exptree *t=(struct Exptree *)malloc(sizeof(struct Exptree));
	t->postfix="abc+*";
	construct(t);
	inorder(t);


	return 0;
}
