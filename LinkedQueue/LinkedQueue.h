#pragma once

#ifndef LINKED_QUEUE_H
#define LINKED_QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tagNode
{
	char* Data;
	struct tagNode* NextNode;
} Node;

typedef struct tagLinkedQueue
{
	Node* Front;
	Node* Rear;
	int Count;
} LinkedQueue;

void CreateQueue(LinkedQueue** Queue);
void DestroyQueue(LinkedQueue* Queue);

Node* CreateNode(char* NewData);
void DestroyNode(Node* _Node);

void Enqueue(LinkedQueue* Queue, Node* NewNode);
Node* Dequeue(LinkedQueue* Queue);

int IsEmpty(LinkedQueue* Queue);

#endif
