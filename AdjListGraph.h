#pragma once
#include "AdjNode.h"
#define MAX_SIZE 256
class AdjListGraph
{
protected:
	int size;
	char vertices[MAX_SIZE];
	AdjNode* adj[MAX_SIZE];
public:

	AdjListGraph(void):size(0){	}

	~AdjListGraph(void)
	{reset();}
	void reset(){
		for(int i=0;i<size;i++)
			if(adj[i] != NULL) delete adj[i];
		size = 0;
	}
	bool isEmpty()	{return (size == 0);}
	bool isFull()	{return (size>=MAX_SIZE);}
	char getVertex(int i)	{return vertices[i];}
	void insertVertex(char val){
		if(!isFull()){
			vertices[size] = val;
			adj[size++] = NULL;
		}
		else printf("그래프 정점 개수 초과\n");
	}
	void insertEdge(int u,int v){
		adj[u] = new AdjNode(v,adj[u]);
		adj[v] = new AdjNode(u,adj[v]);
	}
	void display(){
		printf("%d\n", size);
		for(int i=0;i<size;i++){
			printf("%c ", getVertex(i));
			for(AdjNode* v=adj[i];v!=NULL;v=v->getLink())
				printf(" %c", getVertex(v->getId());
			printf("\n");
		}
	}
};

