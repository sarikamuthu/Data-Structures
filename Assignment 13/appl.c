#include<stdio.h>
#include<stdlib.h>
#include"impl.h"

int main()
{
	struct graph *G=(struct graph *)malloc(sizeof(struct graph));
	int v,e,start,end,cost;
	int source,destination;
	printf("Enter number of vertices: ");
	scanf("%d",&v);
	init(G,v);
	
	printf("Enter number of edges: ");
	scanf("%d",&e);
	
	for(int i=0;i<e;i++)
	{
	printf("Enter start: ");
	scanf("%d",&start);
	printf("Enter End: ");
	scanf("%d",&end);
	printf("Enter cost: ");
	scanf("%d",&cost);
	update_distance(G,start,end,cost);
	}
	
	floyd_warshall(G);
	
	printf("\nEnter source:\n");
	scanf("%d",&source);
	printf("Enter destination:\n");
	scanf("%d",&destination);
	printf("%d ",source);
	find_path(G,source,destination);
	return 0;
}