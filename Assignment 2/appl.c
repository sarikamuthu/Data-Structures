#include "impl.h"
//#include<stdio.h>

int main(){
  struct node *h1=NULL;
  struct node *h2=NULL;
  struct node *h3=NULL;
  struct node *h4=NULL;
  struct node *h5=NULL;
int n1,n2;
int coefficient_1[100];
int exponent_1[100];
int coefficient_2[100];
int exponent_2[100];
/*printf("How many elements do you want in polynomial 1:");
scanf("%d",&n1);
printf("How many elements do you want in polynomial 2:");
scanf("%d",&n2);
printf("Polynomial 1:\n");
for(int i=0;i<n1;i++){
	printf("Enter coefficient:\n");
	scanf("%d",&coefficient_1[i]);
	printf("Enter exponent:\n");
	scanf("%d",&exponent_1[i]);
}
printf("Polynomial 2:\n");
for(int i=0;i<n2;i++){
	printf("Enter coefficient:\n");
	scanf("%d",&coefficient_2[i]);
	printf("Enter exponent:\n");
	scanf("%d",&exponent_2[i]);
}
int value;
	for(int i=0;i<n1;i++){
	h1=insertend(h1,coefficient_1[i],exponent_1[i]);
}
for(int i=0;i<n1;i++){
	h2=insertend(h2,coefficient_2[i],exponent_2[i]);
}*/
int value;
  	h1=insertend(h1,5,2);
	h1=insertend(h1,4,1);
	h1=insertend(h1,2,0);
  	h2=insertend(h2,-5,1);
	h2=insertend(h2,-5,0);
      printf("\nPolynomial 1:\n");
      display(h1);    
      printf("\nPolynomial 2:\n");
      display(h2);    
      h3=polyAdd(h1,h2);
      printf("\nThe addition of polynomial is:\n");
      display(h3);
      printf("\n");
      h4=polyMul(h1,h2);
      printf("The Multiplication of polynomial is:\n");
      display(h4);
      printf("\n");
      h5=polySimplify(h4);
      printf("The simplified polynomial is:\n");
      display(h5);
      printf("\n");
      polyDegree(h5);
      value=polyEvaluate(h5);
      printf("\nThe value of polynomial evaluation is %d",value);
return 0;
}
