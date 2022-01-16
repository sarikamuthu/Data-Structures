#include"impl.h"
#include<stdio.h>
int main(){
	//struct stack *s;
struct stack *s;
  s=(struct stack *)malloc(sizeof(struct stack));
init(s,3);
  struct stack *s1;
  s1=(struct stack *)malloc(sizeof(struct stack));
  struct stack *s2;
  s2=(struct stack *)malloc(sizeof(struct stack));
	init(s1,10);
  init(s2,10);
	int top_;
	int choice;
  int n;
     push(s,1);
      push(s,2);
      push(s,3);
      push(s,4);
      top(s);
      top(s);
      top(s);
      top(s);
// char choice_s;
// do{
// printf(" \n1)Push\n 2)pop\n 3)Top\n 4)Full\n 5)Empty\n 6)Display\n");
// printf("Enter choice:\n");
// scanf("%d",&choice);
// 	switch(choice){
// 	case 1:
// 	  printf("Enter number:\n");
// 		scanf("%d",&n);
// 		push(s,n);
// 	  break;

// 	case 2:
// 		pop(s);
//     printf("Element popped successfully");
// 		break;

//   case 3:
//     top_=top(s);
//     printf("The top element is %d\n",top_);
//     break;

//   case 4:
//     if(isFull(s)){
//       printf("The stack is full\n");
//     }
//     else{
//       printf("The stack is not full");
//     }
//     break;
//   case 5:
//     if(isEmpty(s)){
//       printf("The stack is Empty\n");
//     }
//     else{
//       printf("The stack is not Empty");
//     }
//     break;

//   case 6:
//     printf("The elements in stack are:\n");
//     display(s);
//     break;
// 	}
// 		printf("\nDo you want to continue(Y/N)\n");
// 	    	scanf(" %c",&choice_s);
// 	}while(choice_s!='N');
      push(s1,1);
      push(s1,6);
      push(s1,4);
      push(s1,2);
      push(s1,4);
      push(s2,5);
      push(s2,8);
      push(s2,1);
      push(s2,2);
      printf("\n\nTotal turns: %d\n",game(s1,s2,8));	

	return 0;
}
