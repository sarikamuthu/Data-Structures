 
#include"ADT.h"
#include<stdio.h>

void init(struct hashADT *h,int n){
  h->size=n;
}

void insert(struct hashADT *h,int key){
  int index,i,flag=0,hkey;
 //printf("\nEnter element\n");
 //scanf("%d",&key);
 hkey=key%h->size;
 for(i=0;i<h->size;i++)
    {
      flag++;
     index=(hkey+i)%h->size;

     if(h->a[index] == 0)
     {
        h->a[index]=key;
        printf("%d Inserted at index %d in %d probe\n",key,index,flag);
         break;
     }

    }
}
void display(struct hashADT *h){
  for(int i=0;i<h->size;i++){
    printf("%d -> %d\n",i,h->a[i]);
  }
}

void search(struct hashADT *h)
{

 int key,index,i,flag=0,hkey;
 printf("\nEnter search element\n");
 scanf("%d",&key);
 hkey=key%h->size;
 for(i=0;i<h->size; i++)
 {
   flag++;
    index=(hkey+i)%h->size;
    if(h->a[index]==key)
    {
      //printf("value is found at index %d",index);
       printf("Found at index %d in %d probe\n",index,flag);
      break;
    }
  }
  if(i == h->size)
    printf("\n value is not found\n");
}

void insert_quadratic(struct hashADT *h,int key){
  int index,i,flag=0,hkey;
 //printf("\nEnter element\n");
 //scanf("%d",&key);
 hkey=key%h->size;
 
 for(i=0;i<h->size;i++)
    {
      flag++;
     index=(hkey+i*i)%h->size;

     if(h->a[index] == 0)
     {
       printf("%d Inserted at index %d in %d probe\n",key,index,flag);
        h->a[index]=key;
        
         break;
     }

    }
}

void insert_double(struct hashADT *h,int key){
int index,i,flag=0,hkey,hash2;
 //printf("\nEnter element\n");
 //scanf("%d",&key);
 hkey=key%h->size;
 hash2=7-(key%7);
 for(i=0;i<h->size;i++)
    {
      flag++;
     index=(hkey+i*hash2)%h->size;
      if(i==0){
        index=(hkey+i)%h->size;
      }
     if(h->a[index] == 0)
     {
       printf("%d Inserted at index %d in %d probe\n",key,index,flag);
        h->a[index]=key;
        
         break;
     }

    }
}

void find_range(struct hashADT *h,int start,int end){
  for(int i=0;i<h->size;i++){
    if(h->a[i]>start && h->a[i]<end){
      printf("%d found at %d\n",h->a[i],i);
    }
  }
}