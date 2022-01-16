
#include<stdio.h>
#include<stdlib.h>  

struct node{
	char data;
	struct node *left,*right;
};
struct stack{
	struct node *data[100];
	int size;
	int top;
};	
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
void push(struct stack *s,struct node *n){
    s->top++;
    if(isFull(s)){
        printf("\n\nThe stack is full\n");
        s->top--;
    }
    else{
   s->data[s->top]=n;
    }
}

struct node * pop(struct stack *s){
   return s->data[s->top--];
}

struct node *top(struct stack *s){
    return s->data[s->top];
}
