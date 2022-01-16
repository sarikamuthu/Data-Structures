#include"stackADT.h"
#include<stdio.h>
#include<stdlib.h>  
#include<time.h>
void init(struct stack *s,int max){
    s->top=-1;
    s->size=max;
}
int isFull(struct stack *s){
    if(s->top<s->size){
        return 0;
    }
    else{
        return 1;
    }
}
int isEmpty(struct stack *s){
	if(s->top==-1){
	return 1;
}
	else{
	return 0;
}
}
void push(struct stack *s,int n){
    s->top++;
    if(isFull(s)){
        printf("\n\nThe stack is full\n");
        s->top--;
    }
    else{
   s->data[s->top]=n;
    }
}

void pop(struct stack *s){
   s->top--;
}

void top(struct stack *s){
    if(isEmpty(s)){
    printf("\n\nStack is empty");
    }
    else{
    printf("\nTop element: %d", s->data[s->top]);
}
    s->top--;
}
void display(struct stack *s){
	int i;
	if(s->top==-1){
    printf("Stack is underflow\n");
    return;
  }
  for(i=s->top;i>=0;i--){
    printf("%d ",s->data[i]);
    printf("\n");
  }
}
int topp(struct stack *s){
    return s->data[s->top];
    s->top--;
}
int game(struct stack *s1,struct stack *s2,int sum)
{     srand(time(0));
      
      int total=0;
      int turns=0;
      while(total<=sum){
        int a=rand();
        if(a%2==0){
          total+=topp(s1);
          turns++;
        }
        else{
          total+=topp(s2);
          turns++;
        }
      }
      //printf("\n\nThe score is %d\n",total);
      //printf("\n\nTotal turns %d",turns);
     return turns;
}
