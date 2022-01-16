struct student{
    int reg_no;
    char name[100];
    float marks1;
    float marks2;
    float marks3;
    float total;
    char *result;
    float percentage;
};
struct student_list{
    struct student list[100];
    int n;
};
