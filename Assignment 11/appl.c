#include"impl.h"
#include<stdio.h>
#include<stdlib.h>
int main(){
  struct numberADT *t=(struct numberADT *)malloc(sizeof(struct numberADT));
  struct numberADT *t1=(struct numberADT *)malloc(sizeof(struct numberADT));
  struct numberADT *t2=(struct numberADT *)malloc(sizeof(struct numberADT));
     int n;
     int choice;
     int key;
     int found_index;
     int freq;
     int diff;
     int key_element;
     printf("Enter size:\n");
     scanf("%d",&n);
     init(t,n);
     init(t1,5);
     init(t2,n);
     int a[n];
     int b[n];
     int c[n];
     printf("Enter elements: \n");
     for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     insertElements(t,a);
     printf("The array elements are: ");
     display(t);
    //  printf("\n\nChoose searching type:\n 1)linear search 2)Binary search\n");
    //  scanf("%d",&choice);
    //  switch(choice){
    //    case 1:
       printf("\nLinear search\n");
         printf("Enter key to be searched:\n");
         scanf("%d",&key);
          lsearch(t,key);
        //   break;
        // case 2:
        printf("\nBinary Search\n");
          printf("\nEnter key to be searched:\n");
          scanf("%d",&key);
          int i=0;
          selsort(t);
          found_index=binarysearch(t,i,t->size-1,key);
          if(found_index==-1){
            printf("Element not found");
          }
          else{
            printf("Element found at %d",found_index);
          }
//           break;
// }

 printf("\n\nApplication 1\n");
 printf("Enter key element to find second occurence: ");
 scanf("%d",&key_element);
 printsecondoccurence(t,key_element);

printf("\nApplication 2\n");
printf("Enter element to find its frequency: ");
scanf("%d",&freq);
count_frequency(t,freq);


printf("\nApplication 3\n");
printf("Enter elements: ");
     for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
}
insertElements(t1,b);
if(compareArray(t,t1)){
  printf("Same");
}
else{
  printf("Not same");
}

 printf("\nApplication 4\n");
 int num;
 printf("Enter size: ");
 scanf("%d",&num);
 printf("Enter elements: ");
     for(int i=0;i<num;i++){
        scanf("%d",&c[i]);
}
display(t2);
insertElements(t2,c);
 printf("Enter difference value: ");
 scanf("%d",&diff);
 printpair(t2,diff);


    return 0;
}
//A = {4,7,3,2,1,9,8,7,3,4}




