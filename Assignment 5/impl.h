#include"queueADT.h"
#include<stdio.h>
#include<stdlib.h>
void init(struct queue *q,int max){
  q->time=0;
  q->max=max;
  q->f=q->r=-1;
}

int isFull(struct queue *q){
  if(((q->r+1)%q->max)==q->f){
    return 1;
  }
  else return 0;
}

void enqueue(struct queue *q,struct job j){
  if(isFull(q)){
    printf("Queue is Full");
  }
  else{
    q->r=((q->r+1)%q->max);
    if(q->f==-1){
      q->f=0;
    }
  }
  q->data[q->r]=j;
}

int isEmpty(struct queue *q){
  if(q->f==-1 && q->r==-1){
    return 1;
  }
  else return 0;
}

struct job dequeue(struct queue *q){
  struct job temp;
  if(isEmpty(q)){
    printf("Circular queue is empty");
    temp.jobno=0;
    temp.time=0;
  }
  else if(q->f==q->r){
    temp=q->data[q->f];
    q->f=((q->f+1)%q->max);
    q->f=q->r=-1;
  }
  else{
    temp=q->data[q->f];
    q->f=((q->f+1)%q->max);
  }

  return temp;
}

void display(struct queue *q){
  if(isEmpty(q)){
    printf("Circular queue is empty");
  }
  else{
    int i=q->f;
    while(i!=q->r){
      printf("Job No: %d\n",q->data[i].jobno);
      printf("Time: %d\n",q->data[i].time);
      i=(i+1)%q->max;
    }
    printf("Job No: %d\n",q->data[i].jobno);
    printf("Time: %d\n",q->data[i].time);
  }
}
void job_enqueue(struct queue *q1,struct queue *q2,struct job j){
  if(!isFull(q1) && (q1->time<=q2->time)){
    enqueue(q1,j);
    q1->time+=j.time;
  }
  else if(!isFull(q2) && (q2->time<=q1->time)){
    enqueue(q2,j);
    q2->time+=j.time;
  }
  else if((!isFull(q1)) && isFull(q2)){
    enqueue(q1,j);
    q1->time+=j.time;
  }
  else if((!isFull(q2)) && isFull(q1)){
    enqueue(q2,j);
    q2->time+=j.time;
  }
  else{
    printf("Circular queue full");
  }
}
