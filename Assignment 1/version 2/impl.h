#include"studentADT.h"
#include<stdio.h>
#include<string.h>  
void init(struct student_list *p,int no){
    p->n=no;
}
void insert(struct student_list *p){
    for(int i=0;i<p->n;i++){
    printf("Enter register number:");
    scanf("%d",&p->list[i].reg_no);
    printf("Enter name: ");
    scanf("%s",p->list[i].name);
    printf("Enter marks 1: ");
    scanf("%f",&p->list[i].marks1);
    printf("Enter marks 2: ");
    scanf("%f",&p->list[i].marks2);
    printf("Enter marks 3:");
    scanf("%f",&p->list[i].marks3);
    }
}
void display(struct student_list *p){
    for(int i=0;i<p->n;i++){
    printf("\nThe reg no is %d\n",p->list[i].reg_no);
    printf("The name is %s\n",p->list[i].name);
    printf("Marks 1:%.2f\n",p->list[i].marks1);
    printf("Marks 2:%.2f\n",p->list[i].marks2);
    printf("Marks 3:%.2f\n",p->list[i].marks3);
    printf("Total :%.2f\n",p->list[i].total);
    printf("Percentage:%.2f\n",p->list[i].percentage);
    printf("Result:%s\n",p->list[i].result);
    printf("\n");
    }
}
void insertfront(struct student_list *p,struct student s){
    for(int i=((p->n)-1);i>=0;i--){
        p->list[i+1]=p->list[i];
    }
    
    p->list[0]=s;
    p->n++;
}
void insertback(struct student_list *p,struct student s){
    p->list[p->n]=s;
    p->n++;
}
void insertRegNo(struct student_list *p,struct student s,int regno){
    static int i=0;
    while(p->list[i].reg_no!=regno){
        i++;
    }
    for(int j=p->n+1;j>i;j--){
        p->list[j]=p->list[j-1];
    }
    p->list[i+1]=s;
    p->n++;
}
void searchName(struct student_list *p,char Name[10]){
    static int i=0;
    while(strcmp(p->list[i].name,Name)){
        i++;
    }
       
            printf("The reg no is %d\n",p->list[i].reg_no);
            printf("The name is %s\n",p->list[i].name);
            printf("Marks 1:%.2f\n",p->list[i].marks1);
            printf("Marks 2:%.2f\n",p->list[i].marks2);
            printf("Marks 3:%.2f\n",p->list[i].marks3);
            printf("Total :%.2f\n",p->list[i].total);
            printf("Result:%s\n",p->list[i].result);
    
}
void delete(struct student_list *p,int regno){
   static int i=0;
   while(p->list[i].reg_no!=regno){
        i++;
    }
    for(;i<p->n-1;i++){
        p->list[i]=p->list[i+1];
    }
    p->n--; 
}

void computeResult(struct student_list *p){
    float total;
    float percentage;
    for(int i=0;i<p->n;i++){
        total=p->list[i].marks1+p->list[i].marks2+p->list[i].marks3;
        p->list[i].total=total;
        percentage=((total/300)*100);
        p->list[i].percentage=percentage;
        if(percentage>50){
            p->list[i].result="pass";
        }
        else{
            p->list[i].result="fail";
        }
    }
}

struct student_list listresult(struct student_list l){
    int j = 0;
    struct student_list r;
    for (int i = 0; i < l.n; i++){
        if (l.list[i].result == "pass"){
            r.list[j] = l.list[i];
            j++;
        }
    }
    r.n = j;
    return r;
}

int listclass(struct student_list *p){
  int n=0;
    for(int i=0;i<p->n;i++){
        if(p->list[i].percentage>85){
            n++;
        }
    }
    return n;
}
