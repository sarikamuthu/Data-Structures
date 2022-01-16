#include<stdio.h>

#include"impl.h"
int main(){
    struct student_list l;
    struct student newstudent;
    newstudent.reg_no=3;
    newstudent.name="shruti";
    newstudent.marks1=89;
    newstudent.marks2=90;
    newstudent.marks3=78;
    
    struct student student1,student2;
    student1.reg_no=1;
    student1.name="varsha";
    student1.marks1=67;
    student1.marks2=87;
    student1.marks3=97;

    student2.reg_no=2;
    student2.name="Sarika";
    student2.marks1=56;
    student2.marks2=96;
    student2.marks3=66;
    
    l.n=2;
    l.list[0]=student1;
    l.list[1]=student2;

    insert(&l,2,newstudent);
    display(l);
    

    return 0;
}
