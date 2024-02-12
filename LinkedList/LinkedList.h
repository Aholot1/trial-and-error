#ifndef _LINKED_LIST_
#define _LINKED_LIST_

#include <stdio.h>
#include <stdlib.h>


typedef struct linkedlist {
    int Data;
    struct linkedlist* NextNode;
} LinkedList;


LinkedList* CreateNode(int NewData);
void        DestroyNode(LinkedList* Node);


void        InsertAfterNode(LinkedList** Head, LinkedList* NewNode);
LinkedList* SearchNode(LinkedList** Head, int index);

void        PrintList(LinkedList **Head);


#endif