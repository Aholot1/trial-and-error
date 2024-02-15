#ifndef _LINKED_LIST_
#define _LINKED_LIST_

#include <stdio.h>
#include <stdlib.h>


typedef struct linkedlist {
    int Data;
    struct linkedlist* NextNode;
} LinkedList;


LinkedList* SLL_CreateNode(int NewData);
void        SLL_DestroyNode(LinkedList* Node);


void        SLL_NodeAdd(LinkedList** Head, LinkedList* NewNode);
LinkedList* SLL_SearchNode(LinkedList** Head, int index);
void        SLL_InsertAfterNode(LinkedList* Current, LinkedList *Add);
void        SLL_PrintList(LinkedList** Head);
LinkedList* SLL_Top(LinkedList** Head);
void        SLL_CleanList(LinkedList** Head);
int         SLL_ReMoveNode(LinkedList** Head, LinkedList* Remove);
int         SLL_IsEmpty(LinkedList** Head);
int         SLL_IsFull(LinkedList** Head);
void        SLL_InsertBeforeNode(LinkedList** Head, LinkedList* Current, LinkedList* Add);


#endif//asfasfasdffsafsaf