#ifndef _DOUBLE_LINKED_LIST_
#define _DOUBLE_LINKED_LIST_

#include <stdio.h>
#include <stdlib.h>

typedef struct TagNode{
    TagNode* BackNode;
    TagNode* NextNode;
    int Data;
} Node;


Node* DLL_CreateNode(int DLL_NewData);
void  DLL_DestroyNode(Node* Remove);

void  DLL_AddNode(Node** Head, Node* NewNode);

void  DLL_InsertAfterNode(Node* Current, Node* NewNode);
void  DLL_InsertBeforeNode(Node* Current, Node* NewNode);

void  DLL_RemoveNode(Node** Head, Node* Remove);
void  DLL_CleanList(Node** Head);

Node* DLL_SearchNode(Node** Head, int index);
Node*   DLL_Top(Node** Head);
Node*   DLL_Tail(Node** Head);

void  DLL_PrintList(Node** Head);

int   IsEmpty(Node** Head);
int   IsFull(Node** Head);



#endif 