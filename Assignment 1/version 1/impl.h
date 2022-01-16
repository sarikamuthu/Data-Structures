#include"adt.h"
#include<stdio.h>
void insert(struct student_list *p,int pos,struct student s){
    p->list[pos].reg_no=s.reg_no;
    p->list[pos].name=s.name;
    p->list[pos].marks1=s.marks1;
    p->list[pos].marks2=s.marks2;
    p->list[pos].marks3=s.marks3;

}
void display(struct student_list p){
    for(int i=0;i<=p.n;i++){
    printf("The reg no is %d\n",p.list[i].reg_no);
    printf("The name is %s\n",p.list[i].name);
    printf("Marks 1:%f\n",p.list[i].marks1);
    printf("Marks 2:%f\n",p.list[i].marks2);
    printf("Marks 3:%f\n",p.list[i].marks3);
    printf("\n");
    }
}

