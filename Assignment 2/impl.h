#include "polyADT.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct node *insertend(struct node *head,int coeff,int exp){
	struct node *temp,*ptr;
	temp=(struct node *)malloc(sizeof(struct node));
	ptr=head;
	temp->coefficient=coeff;
	temp->exponent=exp;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
	}
	else{
		while(ptr->next!=NULL){
	  ptr=ptr->next;
	}
	  ptr->next=temp;
	}
	return head;
}
void display(struct node *head){
	struct node *ptr;
	ptr=head;
	//ptr=ptr->next;
	while(ptr->next!=NULL){
	printf("Coefficient:%d\n",ptr->coefficient);
	printf("Exponent:%d\n",ptr->exponent);
	ptr=ptr->next;
}
	printf("Coefficient:%d\n",ptr->coefficient);
	printf("Exponent:%d\n",ptr->exponent);
}
 void del(struct node *head,int val){
        struct node *prev,*temp;
        prev=head;
        temp=head->next;
        while((prev->next)!=NULL){
            if(temp->coefficient!=val){
                prev=temp;
                temp=temp->next;
            }
            else{
                prev->next=temp->next;
            }
        }
    }
struct node *polyAdd(struct node *head1,struct node *head2){
  struct node *ptr1=head1;
  struct node *ptr2=head2;
  struct node *head3=NULL;
  //head3=(struct node *)malloc(sizeof(struct node));
  while(ptr1!=NULL && ptr2!=NULL){
    if(ptr1->exponent==ptr2->exponent){
      head3=insertend(head3,ptr1->coefficient+ptr2->coefficient,ptr1->exponent);
      ptr1=ptr1->next;
      ptr2=ptr2->next;
    }
    else if(ptr1->exponent > ptr2->exponent){
      head3=insertend(head3,ptr1->coefficient,ptr1->exponent);
      ptr1=ptr1->next;
    }
    else if(ptr1->exponent < ptr2->exponent){
      head3=insertend(head3,ptr2->coefficient,ptr2->exponent);
      ptr2=ptr2->next;
    }
  }
  while(ptr1!=NULL){
    head3=insertend(head3,ptr1->coefficient,ptr1->exponent);
      ptr1=ptr1->next;
  }
  while(ptr2!=NULL){
    head3=insertend(head3,ptr2->coefficient,ptr2->exponent);
      ptr2=ptr2->next;
  }
  return head3;
}
struct node *polyMul(struct node *head1,struct node *head2){
  struct node *ptr1=head1;
  struct node *ptr2=head2;
  struct node *head3=NULL;
  //head3=(struct node *)malloc(sizeof(struct node));
  while(ptr1!=NULL){
    while(ptr2!=NULL){
      head3=insertend(head3,ptr1->coefficient*ptr2->coefficient,ptr1->exponent+ptr2->exponent);
      ptr2=ptr2->next;
    }
    ptr1=ptr1->next;
    ptr2=head2;
  }
  return head3;
}
struct node * polySimplify(struct node  *header)
{
  struct node *ptr, *temp, *clear;
  
  ptr = header;
  while(ptr!=NULL)
  {
    temp = ptr;
    while(temp->next!=NULL)
    {
      clear = temp->next;

      if(ptr->exponent==temp->next->exponent)
      {
        ptr->coefficient = ptr->coefficient + temp->next->coefficient;
        temp->next = temp->next->next;
        free(clear);
      }
      temp = temp->next;
    }
    ptr = ptr->next;
  }

    ptr = header;
  while(ptr!=NULL)
  {
    temp = ptr;
    while(temp->next!=NULL)
    {
      clear = temp->next;

      if(ptr->exponent==temp->next->exponent)
      {
        ptr->coefficient = ptr->coefficient + temp->next->coefficient;
        temp->next = temp->next->next;
        free(clear);
      }
      temp = temp->next;
    }
    ptr = ptr->next;
  }
  
  return header;
}
  /*struct node *ptr1=head;
  struct node *ptr2=ptr1->next;
  struct node *head3=NULL;
  int flag=0;
  head3=(struct node *)malloc(sizeof(struct node));
  while(ptr1->next!=NULL){
    while(ptr2->next!=NULL){
      if(ptr1->exponent==ptr2->exponent){
        head3=insertend(head3,ptr1->coefficient+ptr2->coefficient,ptr1->exponent);
        del(head,ptr2->coefficient);
        flag=1;
      }
      ptr2=ptr2->next;
    }
    if(flag==0){
    head3=insertend(head3,ptr1->coefficient,ptr1->exponent);
    }
    ptr1=ptr1->next;
    ptr2=ptr1->next;
  }
  head3=insertend(head3,ptr1->coefficient,ptr1->exponent);
  return head3;*/

void polyDegree(struct node *head){
  struct node *ptr=head;
  printf("\nThe degree of polynomial is: %d\n",ptr->exponent);
}
int polyEvaluate(struct node *head){
  struct node *ptr=head;
  int x=2;
  int value=0;
  while(ptr->next!=NULL){
    value+=(ptr->coefficient*pow(x,ptr->exponent));
    ptr=ptr->next;
  }
  value+=(ptr->coefficient*pow(x,ptr->exponent));
  return value;
}
