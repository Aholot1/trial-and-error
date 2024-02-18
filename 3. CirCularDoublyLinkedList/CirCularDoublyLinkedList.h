#ifndef _CIRCULAR_DOUBLY_LINKED_LIST_
#define _CIRCULAR_DOUBLY_LINKED_LIST_

#include <stdio.h>
#include <stdlib.h>

typedef struct TagNode {
    struct TagNode* BackNode;
    struct TagNode* NextNode;
    int Data;
} Node;

Node* CDLL_CreateNode(int NewData);

void  CDLL_DestroyNode(Node* Node);

void  CDLL_AddNode(Node** Head, Node* NewNode);

void  CDLL_InsertAfterNode(Node* Current, Node* NewNode);

void  CDLL_RemoveNode(Node** Head, Node* Remove);

Node* CDLL_GetNodeAt(Node* Head, int Location);

int   CDLL_GetNodeCount(Node* Head);

void  CDLL_PrintNodes(Node** Head);



#endif
