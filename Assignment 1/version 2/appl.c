#include"impl.h"
#include<stdlib.h>
int main(){
    struct student_list l;
    struct student s;
    struct student s1;
    struct student_list pass;
    int n_3,n_5,n_8;
    char std_name[20];
    int num;
    int choice_menu;
    char choice;
    /*printf("How many student details do you want to enter?\n");
    scanf("%d",&num);
    init(&l,num);
    printf("Insert student details:\n");
    insert(&l);
    printf("\nDetails have been inserted");
    display(&l);*/
    do{
    printf("__________MENU___________");
    printf("\n 1)Insert record in front of list\n 2)Insert record at the end\n 3)Insert record after given register number\n 4)List student details based on name of student\n 5)Delete given record of given register number\n 6)Calculate result and display\n 7)List students who have passed\n 8)List students who have secured first class\n");
    printf("\nEnter the operation number which you want to perform:\n");
    scanf("%d",&choice_menu);
    switch (choice_menu)
    {
    case 1:
        printf("Enter student details");
        printf("\nEnter register number:");
        scanf("%d",&s.reg_no);
        printf("Enter name: ");
        scanf("%s",s.name);
        printf("Enter marks 1: ");
        scanf("%f",&s.marks1);
        printf("Enter marks 2: ");
        scanf("%f",&s.marks2);
        printf("Enter marks 3:");
        scanf("%f",&s.marks3);
        insertfront(&l,s);
        display(&l);
        break;
    case 2:
        printf("Enter student details");
        printf("\nEnter register number:");
        scanf("%d",&s.reg_no);
        printf("Enter name: ");
        scanf("%s",s.name);
        printf("Enter marks 1: ");
        scanf("%f",&s.marks1);
        printf("Enter marks 2: ");
        scanf("%f",&s.marks2);
        printf("Enter marks 3:");
        scanf("%f",&s.marks3);
        insertback(&l,s);
        display(&l);
        break;
    case 3:
        printf("Enter student details");
        printf("\nEnter register number:");
        scanf("%d",&s.reg_no);
        printf("Enter name: ");
        scanf("%s",s.name);
        printf("Enter marks 1: ");
        scanf("%f",&s.marks1);
        printf("Enter marks 2: ");
        scanf("%f",&s.marks2);
        printf("Enter marks 3:");
        scanf("%f",&s.marks3);
        printf("After which register number do you want to enter:\n");
        scanf("%d",&n_3);
        insertRegNo(&l,s,n_3);
        display(&l);
        break;
    case 4:
        printf("\nEnter name of student whose details you want to search:\n");
        scanf("%s",std_name);
        searchName(&l,std_name);
        break;
    case 5:
        printf("\nEnter register number whose details you want to delete:\n");
        scanf("%d",&n_5);
        delete(&l,n_5);
        display(&l);
        break;
    case 6:
        computeResult(&l);
        display(&l);
        break;
    case 7:
        printf("\n The passed students are: \n");
        pass=listresult(l);
        display(&pass);
        break;
    case 8:
        printf("\nNumber of students who secured first class is %d",listclass(&l));
        break;
    default:
        printf("Enter valid choice");
        break;
    }
    printf("\nDo you want to continue(Y/N)");
    scanf(" %c",&choice);
    }while(choice!='N');

    return 0;
}
