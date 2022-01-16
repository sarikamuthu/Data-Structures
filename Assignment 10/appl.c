#include<stdio.h>
#include"impl.h"

int main(){
  struct queue *q;
  q=(struct queue *)malloc(sizeof(struct queue));
  q->size=100;
  q->f=q->b=-1;
  q->arr=(int *)malloc(q->size*sizeof(int));
  int a [6][6] = {
        {0,1,0,0,0,0,0},
        {0,0,0,1,1,0,0},
        {1,0,0,0,0,0,1},
        {0,0,0,0,0,1,0},
        {0,0,0,0,0,0,1},
        {0,0,0,0,0,0,0}
    };
for(int i=0;i<6;i++){
  for(int j=0;j<6;j++){
    if(a[i][j]==1){
      printf("%d -> %d\n",i,j);
    }
  }
}
bfs(q,a);
DFS(a,0);
connected(a);

  return 0;
}
