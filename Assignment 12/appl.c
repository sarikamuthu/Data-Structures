#include<stdio.h>
#include"impl.h"
int main(){
     struct numberADT *t;
     int n;
     int choice;
     printf("Enter size:\n");
     scanf("%d",&n);
     init(t,n);
     int a[n];
     printf("Enter elements: \n");
     for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     insertElements(t,a);
     printf("The array elements are: \n");
     display(t);
     printf("\n\nChoose sorting type:\n 1)Selection sort 2)Shell sort\n");
     scanf("%d",&choice);
     switch(choice){
       case 1:
          selsort(t);
          printf("\nArray after Selection sort\n");
          display(t);
          break;
        case 2:
          shellsort(t);
          printf("\nArray after Shell sort\n");
          display(t);
          break;
}

     return 0;
}