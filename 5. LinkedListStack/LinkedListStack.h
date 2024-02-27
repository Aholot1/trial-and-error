#ifndef _LINKED_LIST_STACK_
#define _LINKED_LIST_STACK_
#include <stdio.h>
#include <stdlib.h>
typedef struct tagNode{
    char* Data;
    struct tagNode* NextNode;
} Node;

typedef struct tagLinkedListStack{
    Node* List; //헤드 노드
    Node* Top; // 최상위 노드
} LinkedListStack;


void LLS_CreateStack(LinkedListStack** Stack);
void LLS_DestroyStack(LinkedListSTack** Stack);



#endif
