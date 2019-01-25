#pragma once
#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 20
class queue
{
	int front;
	int rear;
	int data[MAX_QUEUE_SIZE];
public:
	queue(void){front = rear = 0;}
	bool isEmpty(){return front == rear;}
	bool isFull(){return (rear+1)%MAX_QUEUE_SIZE == front;}
	
	void enqueue(int val){
		if(isFull())
			printf("큐가 포화상태입니다");
		else{
			rear = (rear+1) % MAX_QUEUE_SIZE;
			data[rear] = val;
		}
	}
	int dequeue(){
		if(isEmpty())
			printf("큐가 공백상태입니다");
		else{
			front = (front+1) % MAX_QUEUE_SIZE;
			return data[front];
		}
	}
	int peek(){
		if(isEmpty())
			printf("큐가 공백상태입니다");
		else{
			return data[(front+1) % MAX_QUEUE_SIZE];
		}
	}
};

