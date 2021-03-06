#pragma once
#include<stdlib.h>
#include<stdio.h>

#define LEN sizeof(Node) 
typedef union headData headData;
typedef struct Node Node;


typedef union headData
{
	//charData for standrad nodes
	char charData;

	//point to tail node for head node
	Node* tail;

}headData;
typedef struct Node
{
	//data
	int numData;
	headData unionData;

	//Linklist pointer
	Node* next;
}Node;

int homeworkFunction(Node* p);

int fillData(Node* NodePointer, int numData, char charData);

int iter(Node* head, int fun(Node* node),int delTag);

int printData(Node* node);

int printNum(Node* node);

Node* creatLinklist();

int delete(Node* head, int tag);

int remove(Node* del);

int addNode(Node* head, int tag, int numData, char charData);

int clear(Node* head);