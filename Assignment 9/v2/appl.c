#include<stdio.h>
#include"impl.h"
#include<stdlib.h>
int main()
{
    /*struct PQ_ *p;
    p=(struct PQ_ *)malloc(sizeof(struct PQ_));
    init_(p);
    
    insert_(p,14);    
    insert_(p,16);
    insert_(p,22);    
    insert_(p,11);
    insert_(p,9);      
    insert_(p,18);
    insert_(p,10);    
    insert_(p,7);
    insert_(p,4);    
    insert_(p,1);*/


    
    
    struct PQ *p1;
  
    p1=(struct PQ *)malloc(sizeof(struct PQ));
    init(p1);
    struct job j1,j2,j3,j4,j5,j6,j7;
    j1.EmployeeID='A';
    j2.EmployeeID='K';
    j3.EmployeeID='R';
    j4.EmployeeID='T';
    j5.EmployeeID='L';
    j6.EmployeeID='P';
    j7.EmployeeID='Y';

    j1.salary=15000;
    j2.salary=12000;
    j3.salary=4000;
    j4.salary=3500;
    j5.salary=4600;
    j6.salary=6000;
    j7.salary=8600;

    insert(p1,j1);
    insert(p1,j2);
    insert(p1,j3);
    insert(p1,j4);
    insert(p1,j5);
    insert(p1,j6);
    insert(p1,j7);
    display(p1);
    
    printf("\n\n\t\t Application\n");
    deletePQ(p1);
    display(p1);
    /*deletePQ(p1);
    deletePQ(p1);
    deletePQ(p1);
    deletePQ(p1);
    deletePQ(p1);
    deletePQ(p1);*/
    

  return 0;
}

