#include"impl.h"
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
//#include <dos.h> 
int main()
{
  struct hashADT *h=(struct hashADT *)malloc(sizeof(struct hashADT));
  int n;
  int num;
  
  printf("Enter size of hash table:\n");
  scanf("%d",&n);
  

  init(h,n);

  printf("Enter number of elements to be inserted:\n");
  
  scanf("%d",&num);
  int a[num];
  printf("Enter elements:");
  for(int i=0;i<num;i++){
    scanf("%d",&a[i]);
  }
  printf("\n\nLinear probing\n");
  for(int i=0;i<num;i++)
  {
    
    insert(h,a[i]);
    	
  }
  display(h);

  printf("\n\nQuadratic probing\n");
   for(int i=0;i<num;i++)
  {
    insert_quadratic(h,a[i]);
    
  }
  	display(h);

     printf("\n\nDouble probing\n");
   for(int i=0;i<num;i++)
  {
   
    insert_double(h,a[i]);
    	
  }
  display(h);

  printf("\n\nSearch between ranges\n");
  find_range(h,40,60);

	//search(h);

  return 0;
}
