#include"impl.h"
#include<stdio.h>
void equal(struct BSTAdt *t,struct BSTAdt *t2){
	int *p,*q;
int flag=0;
	p=inorder_(t);
	q=inorder_(t);
for(int i=0;i<9;i++){
for(int i=0;i<9;i++){
	if(p[i]==q[i]){
flag=1;
}
else{
flag=0;
break;
}
}
}
if(flag==1){
	printf("Set of same elements");
}
else{
printf("Not Set of same elements");
}
}
int main(){
	struct BSTAdt *t=NULL;
struct BSTAdt *t2=NULL;
	//t=(struct BSTAdt *)malloc(sizeof(struct BSTAdt));
	
	t=Insert(t,29); 
	t=Insert(t,23);
	t=Insert(t,4);
	t=Insert(t,13);
	t=Insert(t,39);
	t=Insert(t,31);
	t=Insert(t,45);
	t=Insert(t,56);
	t=Insert(t,49);

	t2=Insert(t,2); 
	t2=Insert(t,23);
	t2=Insert(t,4);
	t2=Insert(t,13);
	t2=Insert(t,39);
	t2=Insert(t,31);
	t2=Insert(t,45);
	t2=Insert(t,56);
	t2=Insert(t,49);
	inorder(t);
        printf("\n");
	int *p;
	p=inorder_(t);
for(int i=0;i<9;i++){
	printf("%d ",p[i]);
}
equal(t,t2);

}
