#pragma once
#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 20
class deque
{
	int front;
	int rear;
	int data[MAX_QUEUE_SIZE];
public:
	deque(void){front = rear = 0;}
	bool isEmpty(){return front == rear;}
	bool isFull(){return (rear+1)%MAX_QUEUE_SIZE == front;}
	
	void addrear(int val){
		if(isFull())
			printf("큐가 포화상태입니다");
		else{
			rear = (rear+1) % MAX_QUEUE_SIZE;
			data[rear] = val;
		}
	}
	void addfront(int val){
		if(isFull())
			printf("큐가 포화상태입니다");
		else{
			data[front] = val;
			front = (front-1+MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
		}
	}
	int deletefront(){
		if(isEmpty())
			printf("큐가 공백상태입니다");
		else{
			front = (front+1) % MAX_QUEUE_SIZE;
			return data[front];
		}
	}
	int deleterear(){
		if(isEmpty())
			printf("큐가 공백상태입니다");
		else{
			int ret = data[rear];
			rear = (rear-1+MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
			return ret;
		}
	}
};

