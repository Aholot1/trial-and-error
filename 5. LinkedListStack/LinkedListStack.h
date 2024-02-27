#pragma once
#ifndef _LINKED_LIST_STACK_
#define _LINKED_LIST_STACK_
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct tagNode {
    char* Data;
    struct tagNode* NextNode;
} Node;

typedef struct tagLinkedListStack {
    Node* List; //첫 노드
    Node* Top; // 최상위 노드
} LinkedListStack;


void LLS_CreateStack(LinkedListStack** Stack);
void LLS_DestroyStack(LinkedListStack* Stack);

Node* LLS_CreateNode(char* Data);
void LLS_DestroyNode(Node* _Node);

void LLS_Push(LinkedListStack* Stack, Node* NewNode);
Node* LLS_Pop(LinkedListStack* Stack);

Node* LLS_Top(LinkedListStack* Stack);
int   LLS_GetSize(LinkedListStack* Stack);
int   LLS_IsEmpty(LinkedListStack* Stack);

#endif
