#include"ADT.h"
#include<stdio.h>

void init(struct graph *G,int num){
	G->num_vertices=num;
	for(int i=1;i<=G->num_vertices;i++)
	{
		for(int j=1;j<=G->num_vertices;j++)
		{
		   G->P[i][j]=0;
		if(i==j)
		{
		    G->D[i][j]=0;
		}
		else
		{
		    G->D[i][j]=999;
		}
		}
	}
}

void update_distance(struct graph *G,int start,int end,int cost)
{
	G->D[start][end]=cost;
}

void display(struct graph *G)
{
	printf("Distance Matrix\n");
	for(int i=1;i<=G->num_vertices;i++){
	for(int j=1;j<=G->num_vertices;j++){
		printf("%d ",G->D[i][j]);
		
	}
	printf("\n");
	}

	printf("Precedence Matrix\n");
	for(int i=1;i<=G->num_vertices;i++){
	for(int j=1;j<=G->num_vertices;j++){
		printf("%d ",G->P[i][j]);
		//printf("\n");
	}
	printf("\n");
	}
}

void floyd_warshall(struct graph *G)
{
	for(int k=1;k<=G->num_vertices;k++)
	{
		for(int i=1;i<=G->num_vertices;i++)
		{
                    for(int j=1;j<=G->num_vertices;j++)
		    {
			if(G->D[i][j] > G->D[i][k]+G->D[k][j])
			{
			   G->D[i][j]=G->D[i][k]+G->D[k][j];
			   G->P[i][j]=k;
			}
		    }
		}
	display(G);
	}
}

void find_path(struct graph *G,int source,int destination)
{
	if(G->P[source][destination]==0)
	{
		printf("%d ",destination);
	}
	else
	{
		find_path(G,source,G->P[source][destination]);
		find_path(G,G->P[source][destination],destination);
	}
}