#pragma once
#include "BinaryNode.h"
class BinaryTree
{
	BinaryNode* root;
public:
	BinaryNode t;
	BinaryTree(void): root(NULL){	}
	void setRoot(BinaryNode* node){root=node;}
	BinaryNode* getRoot()	{return root;}
	bool isEmpty(){return root == NULL;}
	void inorder(){
		printf("\n	  inorder: ");
		root->nodeinorder();
	}
	void preorder(){
		printf("\n	 preorder: ");
		root->nodepreorder();
	}
	
	void postorder(){
		printf("\n	postorder: ");
		root->nodepostorder();
	}
	
};

