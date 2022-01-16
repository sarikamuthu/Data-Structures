#include"impl.h"
#include<stdio.h>
#include<stdlib.h>
int main(){
  struct queue *q1,*q2;
  q1=(struct queue *)malloc(sizeof(struct queue));
  init(q1,10);
  q2=(struct queue *)malloc(sizeof(struct queue));
  init(q2,10);

  struct job j1,j2,j3,j4,j5,j6,j7,j8,j9,j10;

  j1.jobno=1;
  j2.jobno=2;
  j3.jobno=3;
  j4.jobno=4;
  j5.jobno=5;
  j6.jobno=6;
  j7.jobno=7;
  j8.jobno=8;
  j9.jobno=9;
  j10.jobno=10;

  j1.time=2;
  j2.time=4;
  j3.time=8;
  j4.time=5;
  j5.time=2;
  j6.time=7;
  j7.time=4;
  j8.time=3;
  j9.time=6;
  j10.time=6;

  job_enqueue(q1,q2,j1);
  job_enqueue(q1,q2,j2);
  job_enqueue(q1,q2,j3);
  job_enqueue(q1,q2,j4);
  job_enqueue(q1,q2,j5);
  job_enqueue(q1,q2,j6);
  job_enqueue(q1,q2,j7);
  job_enqueue(q1,q2,j8);
  job_enqueue(q1,q2,j9);
  job_enqueue(q1,q2,j10);

  printf("Queue 1: \n");
  display(q1);
  printf("\n");

  printf("Queue 2: \n");
  display(q2);
  return 0;
}
