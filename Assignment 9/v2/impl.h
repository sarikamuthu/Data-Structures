#include<stdio.h>
#include"priorityQueueADT.h"

void init(struct PQ *p)
{
  p->ctptr=0;
  p->elt[p->ctptr].salary=-10;
}

void insert(struct PQ *p,struct job j)
{
  p->ctptr++;
  p->elt[p->ctptr].EmployeeID=j.EmployeeID;
  p->elt[p->ctptr].salary=j.salary;

  for(int i=p->ctptr;p->elt[i/2].salary>j.salary;i=i/2)
  {
    p->elt[i]=p->elt[i/2];
    p->elt[i/2]=j;
  }
}

void display(struct PQ *p)
{
  printf("\n");
  for(int i=1;i<=p->ctptr;i++)
  {
      printf("\t\n %c:%ld",p->elt[i].EmployeeID,p->elt[i].salary);
      
  }
}
 void swap(struct PQ *p,long int m,long int n)
 {
   struct PQ temp;
   temp.elt[0]=p->elt[m];
   p->elt[m]=p->elt[n];
   p->elt[n]=temp.elt[0];
   //printf("\n%d",p->elt[n].salary);
 }
void deletePQ(struct PQ *p)
{
  printf("\t\n \n%c:%ld",p->elt[1].EmployeeID,p->elt[1].salary);
  p->elt[1]=p->elt[p->ctptr];
  int i=1;
  p->ctptr--;
  while(i<p->ctptr)
  {
   long int left=p->elt[2*i].salary;
   long int right=p->elt[2*i+1].salary;
   long int min=left<right?2*i:2*i+1;
    if(p->elt[i].salary>p->elt[min].salary && min<=p->ctptr)
    {
      swap(p,i,min);
      i=min;
    }
    else
    {
      return;
    }
    }
}
  

