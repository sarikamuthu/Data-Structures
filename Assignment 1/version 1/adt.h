struct student{
    int reg_no;
    char *name;
    float marks1;
    float marks2;
    float marks3;
    float total;
    char result;
};
struct student_list{
    struct student list[100];
    int n;
};

