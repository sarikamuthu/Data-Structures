#include"listADT.h"
#include<stdio.h>
#include<stdlib.h>
int count_nodes(struct node *head){
    int count=0;
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;
    }
    return count;
}
void insertfront(struct node *head,char data){
  
        struct node *temp;
        struct node *ptr=head;
         temp=(struct node *)malloc(sizeof(struct node));
        //printf("Enter data:\n");
       //scanf(" %c",&temp->data);
	temp->data=data;
       temp->next=NULL;
       if(head->next==NULL){
         temp->prev=head;
         head->next=temp;
       }
       else{
            ptr=ptr->next;
          
          head->next=temp;
          temp->next=ptr;
          ptr->prev=temp;
          temp->prev=head;
          
       }
        
        
        
}
void insertEnd(struct node *head,char data){
        struct node *temp;
        struct node *ptr=head;
         temp=(struct node *)malloc(sizeof(struct node));
        //printf("Enter data:\n");
       //scanf(" %c",&temp->data);
temp->data=data;
       temp->next=NULL;
       while(ptr->next!=NULL){
         ptr=ptr->next;
       }
       ptr->next=temp;
       temp->prev=ptr;
}
void display(struct node *head){
    struct node *ptr,*ptr1;
    ptr=head->next;
    ptr1=head->next;
    //printf("Printing Forward:\n");
    while(ptr->next!=NULL){
        printf("Data:%c\n",ptr->data);
        ptr=ptr->next;
    }
printf("Data:%c\n",ptr->data);
    /*ptr1=head->next;
    while(ptr1->next!=NULL){
      ptr1=ptr1->next;
    }
   
    printf("Printing reverse:\n");
    while(ptr1->prev!=NULL){
        printf("Data:%c\n",ptr1->data);
        ptr1=ptr1->prev;
    }*/
   

}

void insertMiddle(struct node *head,char s,char s1){
  struct node *p;
  int num;
  p=head->next;
    for(int i=1;i<=4;i++){
      if(s==p->data){
        num=i;
        break;
      }
      p=p->next;
    }
    struct node *temp=NULL;
    struct node *ptr1,*ptr2;
    ptr1=head;
    ptr2=head;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=s1;
    temp->next=NULL;
    int i=1;
    while(i<num+1){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        i++;
    }
    ptr2=ptr2->next;
    ptr1->next=temp;
    ptr2->prev=temp;
    temp->next=ptr2;
    temp->prev=ptr1;
    
}
void deleteItems(struct node *head,char s){
    struct node *p;
    struct node *ptr1=head;
    struct node *ptr2=head;
  int num;
  p=head;
    for(int i=1;i<=count_nodes(head);i++){
      if(s==p->data){
        num=i;
        break;
      }
      p=p->next;
    }
    for(int i=1;i<num-1;i++){
      ptr1=ptr1->next;
    }
    if(num==count_nodes(head)-1){
      ptr1->next=NULL;
      ptr1->next->prev=NULL;
    }
    else{
    for(int i=1;i<num+1;i++){
      ptr2=ptr2->next;
    }
    ptr2->prev=ptr1;
    ptr1->next=ptr2;
    }
}
int search(struct node *head,char c){
  struct node *ptr=head;
  int count=0;
  while(ptr->next!=NULL){
    if(ptr->data==c){
      count++;
    }
    ptr=ptr->next;
  }
  if(ptr->data==c){
      count++;
    }
  return count;
}
void palindrome(struct node *head){
  struct node *ptr1=head->next;
  struct node *ptr2=head;
  int flag=0;
  while(ptr2->next!=NULL){
    ptr2=ptr2->next;
  }
  while(ptr1->next!=NULL){
    if(ptr1->data==ptr2->data){
      flag=1;
    }
    else{
      flag=0;
      break;
    }
    ptr1=ptr1->next;
    ptr2=ptr2->prev;
  }
  if(flag==1){
    printf("Palindrome\n");
  }
  else{
    printf("Not a palindrome\n");
  }

}
void insertend(struct node *head,char s){
        struct node *temp;
        struct node *ptr=head;
         temp=(struct node *)malloc(sizeof(struct node));
       temp->data=s;
       temp->next=NULL;
       while(ptr->next!=NULL){
         ptr=ptr->next;
       }
       ptr->next=temp;
       temp->prev=ptr;
}

void vowels_consonants(struct node *head){
  struct node *vowel=NULL;
  struct node *consonant=NULL;
  vowel=(struct node *)malloc(sizeof(struct node));
  consonant=(struct node *)malloc(sizeof(struct node));
  struct node *ptr=head->next;
  while(ptr->next!=NULL){
  if(ptr->data=='A' ||ptr->data=='E'|| ptr->data=='I' ||ptr->data=='O' ||ptr->data=='U'){
    insertend(vowel,ptr->data);
  }
  else{
    insertend(consonant,ptr->data);
  }
  ptr=ptr->next;
  }
  if(ptr->data=='A' ||ptr->data=='E'|| ptr->data=='I' ||ptr->data=='O' ||ptr->data=='U'){
    insertend(vowel,ptr->data);
  }
  else{
    insertend(consonant,ptr->data);
  }
  printf("\n\nThe vowels are:\n");
  display(vowel);
  printf("\n\nThe consonants are:\n");
  display(consonant);

}
void swapKthnode(struct node *head, int K)
{
    int len = count_nodes(head);
    if (len < K)
        return;
     if (2 * K - 1 == len)
        return;
    struct node *p = head;
    struct node *p_prev = NULL;
    for (int i = 1; i < K+1; i++) {
        p_prev = p;
        p = p->next;
    }
    struct node *p1 = head;
    struct node *p1_prev = NULL;
    for (int i = 1; i < len - K + 1; i++) {
        p1_prev = p1;
        p1 = p1->next;
    }
    if (p_prev){
        p_prev->next = p1;
  
    }
    if (p1_prev){
        p1_prev->prev=p1; 
        p1_prev->next = p;
                      }            
    struct node *temp = p->next;
    p->next = p1->next;
    p->prev=temp;
    p1->prev=p_prev;
    p1->next = temp;
    
     if (K == 1)
         head = p1_prev;
     if (K == len-1)
         head = p_prev;
}


