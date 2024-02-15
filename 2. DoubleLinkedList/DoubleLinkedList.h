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



#endif 