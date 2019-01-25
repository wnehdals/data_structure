#pragma once
#include <stdio.h>
class AdjNode
{
protected:
	int id;
	AdjNode* link;
public:

	AdjNode(int i,AdjNode* l=NULL):id(i),link(l){	}

	~AdjNode(void){
		if(link != NULL)
			delete link;
	}
	int getId()	{return id;}
	AdjNode* getLink()	{return link;}
	void setLink(AdjNode* l)	{link = l;}
};

