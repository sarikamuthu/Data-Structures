#include<stdio.h>
#include"numberADT.h"
void init(struct numberADT *t,int size){
    t->size=size;
}

void insertElements(struct numberADT *t,int x[10]){
    t->arr=x;
}
void display(struct numberADT *t){
  printf("\n");
  for(int i=0;i<t->size;i++){
    printf("%d ",t->arr[i]);
  }
}
void selsort(struct numberADT *t){
  //int b=sizeof(a)/sizeof(a[0]);
  int temp,index;
  int i;
  for(i=0;i<t->size;i++)
  {
    index=i;
    for(int j=i+1;j<t->size;j++)
  {
        if(t->arr[j]<t->arr[index])
        {
          index=j;
        }
  }
  temp=t->arr[i];
  t->arr[i]=t->arr[index];
  t->arr[index]=temp;
  }
}
void shellsort(struct numberADT *t){
  for (int interval = t->size / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < t->size; i += 1) {
      int temp = t->arr[i];
      int j;
      for (j = i; j >= interval && t->arr[j - interval] > temp; j -= interval) {
        t->arr[j] = t->arr[j - interval];
      }
      t->arr[j] = temp;
    }

    display(t);
  }
}


void shellsort_(struct numberADT *t){
  for (int interval = 3; interval > 0; interval /= 2) {
    for (int i = interval; i < t->size; i += 1) {
      int temp = t->arr[i];
      int j;
      for (j = i; j >= interval && t->arr[j - interval] > temp; j -= interval) {
        t->arr[j] = t->arr[j - interval];
      }
      t->arr[j] = temp;
      display(t);
    break;
    }
    
  }
}