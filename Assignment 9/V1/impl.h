#include<stdio.h>
#include"priorityQueueADT.h"
void init_(struct PQ_ *p){
  p->ctptr=0;
  p->elt[p->ctptr]=-10;
}

void insert_(struct PQ_ *p,int data)
{
  p->ctptr++;
  p->elt[p->ctptr]=data;

  for(int i=p->ctptr;p->elt[i/2]>data;i=i/2)
  {
    p->elt[i]=p->elt[i/2];
    p->elt[i/2]=data;
  }
}

void display_(struct PQ_ *p)
{
  printf("\n");
  for(int i=0;i<=p->ctptr;i++)
  {
      printf("\t %d",p->elt[i]);
  }
}
 void swap_(int a[],int m,int n)
 {
   int temp;
   temp=a[m];
   a[m]=a[n];
   a[n]=temp;
 }

void deletePQ_(struct PQ_ *p)
{
  p->elt[1]=p->elt[p->ctptr];
  int i=1;
  p->ctptr--;
  while(i<p->ctptr)
  {
    int left=p->elt[2*i];
    int right=p->elt[2*i+1];
    int min=left<right?2*i:2*i+1;
    if(p->elt[i]>p->elt[min] && min<=p->ctptr)
    {
      swap_(p->elt,i,min);
      i=min;
    }
    else
    {
      return;
    }
  }
}


