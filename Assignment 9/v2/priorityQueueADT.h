struct job{
  char EmployeeID;
  long int salary;
};

struct PQ{
  int ctptr;
  struct job elt[100];
};
