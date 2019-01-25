#pragma once
#include <stdio.h>
#include <stdlib.h>
const int MAX_STACK_SIZE = 20;
class stack
{
	int top;
	int data[MAX_STACK_SIZE];
public:

	stack(void){top = -1;}
	~stack(void){}
	bool isEmpty(){return top ==-1;}
	bool isFull(){return top == MAX_STACK_SIZE-1;}

	void push(int e){
		if(isFull()){
			printf("���� ��ȭ ����");
		}
		data[++top] = e;
	}
	int pop(){
		if(isEmpty()){
			printf("���� ���� ����");
		}
		return data[top--];
	}
	int peek(){
		if(isEmpty()){
			printf("���� ���� ����");
		}
		return data[top];
	}
};

