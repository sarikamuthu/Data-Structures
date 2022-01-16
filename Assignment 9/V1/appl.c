#include<stdio.h>
#include"impl.h"
#include<stdlib.h>
int main()
{
    struct PQ_ *p;
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
    insert_(p,1);
     display_(p);
     deletePQ_(p);
     display_(p);

    
    
   

  return 0;
}

