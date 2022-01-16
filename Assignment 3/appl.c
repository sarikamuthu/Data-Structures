
#include<stdio.h>
#include<stdlib.h>
#include"impl.h"
int main(){
    struct node *p=NULL;
    int n;
    char str_after;
    char str_new;
    char str_delete;
    char str_search;
    int k;
    int count;
    char choice;
    int choice_menu;
    p=(struct node *)malloc(sizeof(struct node));
    printf("\nInsert front\n");
    insertfront(p,'A');
display(p);
    printf("\nInsert end\n");
    insertEnd(p,'B');
display(p);
printf("\nInsert middle\n");
    insertMiddle(p,'A','E');
display(p);
printf("\nInsert middle\n");
    insertMiddle(p,'A','E');
    display(p);
    printf("\nThe occurence of E is %d\n",search(p,'E'));
    //--------palindrome--------
	printf("\nApplication");
	struct node *pali1=NULL;
	pali1=(struct node *)malloc(sizeof(struct node));
	insertEnd(pali1,'A');
	insertEnd(pali1,'C');
	insertEnd(pali1,'E');
	insertEnd(pali1,'K');
	insertEnd(pali1,'P');
	insertEnd(pali1,'I');
	insertEnd(pali1,'O');
	insertEnd(pali1,'U');
	insertEnd(pali1,'J');

	
	printf("\n\nACEKPIOUJ is\n");
	palindrome(pali1);

	struct node *pali2=NULL;
	pali2=(struct node *)malloc(sizeof(struct node));
	insertEnd(pali2,'A');
	insertEnd(pali2,'P');
	insertEnd(pali2,'P');
	insertEnd(pali2,'A');
	printf("\n\nAPPA is\n");
	palindrome(pali2);

      //--------vowel-consonant---------
	struct node *vc=NULL;
	vc=(struct node *)malloc(sizeof(struct node));
	insertEnd(vc,'A');
	insertEnd(vc,'C');
	insertEnd(vc,'E');
	insertEnd(vc,'K');
	insertEnd(vc,'P');
	insertEnd(vc,'I');
	insertEnd(vc,'O');
	insertEnd(vc,'U');
	insertEnd(vc,'J');
	vowels_consonants(vc);
	swapKthnode(vc,2);
	printf("\nThe list after swapping node:\n");
	display(vc);	
    /*do{
    printf("_________MENU_________\n");
    printf("\n 1)Insertfront\n 2)Insertend\n 3)InsertMiddle\n 4)Display\n 5)Delete an item\n 6)Search and element and find its occurence\n 7)Check palindrome\n 8)Separate Vowels and Consonants\n 9)Swap kth node from the beginning with kth node from the end\n");
    printf("\n\nEnter choice:\n");
    scanf("%d",&choice_menu);
    
    switch(choice_menu){
      case 1:
      printf("How many elements do you want to enter:\n");
      scanf("%d",&n);
      for(int i=0;i<n;i++){
       insertfront(p);
     }
     break;

     case 2:
     printf("How many elements do you want to enter:\n");
      scanf("%d",&n);
      for(int i=0;i<n;i++){
       insertEnd(p);
     }
     break;

     case 3:
      printf("Enter after which character do you want to add alphabet:\n");
      scanf(" %c",&str_after);
      printf("Enter character which you want to add:\n");
      scanf(" %c",&str_new);
      insertMiddle(p,str_after,str_new);
      break;

      case 4:
      display(p);
      break;

      case 5:
      printf("Enter alphabet you want to delete:\n");
      scanf(" %c",&str_delete);
      deleteItems(p,str_delete);
      break;

      case 6:
      printf("Which alpbahet do you want to search:\n");
      scanf(" %c",&str_search);
      count=search(p,str_search);
      printf("The occurence of %c is %d\n",str_search,count);
      break;

      case 7:
      palindrome(p);
      break;

      case 8:
      vowels_consonants(p);
      break;

      case 9:
      printf("Which node do you want to swap:\n");
      scanf("%d",&k);
      swapKthnode(p,k);
      break;
    }
    printf("Do you want to continue(Y/N)\n");
    scanf(" %c",&choice);
    }while(choice!='N');
    printf("\U0001F600 THANK YOU \U0001F600\n");*/
    return 0;
}
