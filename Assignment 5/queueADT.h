struct job{
  int jobno;
  int time;
};
struct queue{
  struct job data[100];
  int time;
  int max;
  int f;
  int r;
 // int *data;
};

