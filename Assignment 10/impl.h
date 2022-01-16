#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include"cityADT.h"
int visited[7]={0,0,0,0,0,0,0};
int cycle[7]={0,0,0,0,0,0,0};
struct queue{
  int size;
  int f;
  int b;
  int *arr;
};
int isFull(struct queue *q){
  if(q->b==q->size-1){
    return 1;
  }
  else{
    return 0;
  }
}
int isEmpty(struct queue *q){
    if(q->b==q->f){
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q,int val){
  if(isFull(q)){
    printf("Queue is full");
  }
  else{
    q->b++;
    q->arr[q->b]=val;
  }
}
int dequeue(struct queue *q){
  int a=-1;
  if(q->f==q->b){
    printf("No element is found");
    return -1;
  }
  else{
    q->f++;
    a=q->arr[q->f];
    return a;
  }
}
void init(struct cityADT *t,int m,int n){
	t->m=m;
	t->n=n;
}
void bfs(struct queue *q,struct cityADT *t)
{   
    int count;
    int i=0;
    int n;
    visited[i]=1;
    printf("%d ",i);
    enqueue(q,i);
    while(!isEmpty(q))
    {
       n=dequeue(q);
      for(int j=0;j<7;j++)
      {
        if(a[n][j]==1 && visited[j]==0)
        {
            printf("%d ",j);
            
            visited[j]=1;
            enqueue(q,j);
        }
      }
    }
}
int haspath(struct queue *q,int a[7][7],int b,int c)
{
    int i=0;
    int n;
    int flag=0;
    visited[b]=1;
    //printf("%d ",i);
    enqueue(q,b);
    while(!isEmpty(q))
    {
       n=dequeue(q);
      for(int j=0;j<7;j++)
      {
        if(a[n][j]==1 && visited[j]==0)
        {
            if(c==j)
            {
              flag=1;
              break;
            }
            else{
            visited[j]=1;
            enqueue(q,j);
            }
      }
      }
      
    }
    return flag;

}
void DFS(int a[7][7],int i)
{
  int j;
  int count;
  printf("%d ",i);
  visited[i]=1;
  for(int j=0;j<7;j++)
  {
    if(a[i][j]==1 && !visited[j])
    {
        DFS(a,j);
    }
  }
  //printf("%d\n",count);
}
void connected(int a[7][7])
{
  int count=0;
  for(int i=0;i<7;i++)
  {
    if(visited[i]==0)
    {
      DFS(a,i);
      count++;
      printf("\n");
    }
  }
   printf("\n\ncount %d",count);
}
