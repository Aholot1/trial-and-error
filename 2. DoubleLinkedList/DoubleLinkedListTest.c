#include "DoubleLinkedList.h"

int main(void) {
    Node* List = NULL;
    Node* NewNode = DLL_CreateNode(99);
    DLL_AddNode(&List, NewNode);
    NewNode = DLL_CreateNode(88);
    DLL_AddNode(&List, NewNode);
    NewNode = DLL_CreateNode(77);
    DLL_AddNode(&List, NewNode);

    DLL_PrintList(&List);

    printf("-------------------\n");

    NewNode = DLL_CreateNode(66);
    Node* Current = DLL_SearchNode(&List, 2);
    DLL_InsertAfterNode(Current, NewNode);

    DLL_PrintList(&List);

    printf("-----------------------\n");
    Current = DLL_SearchNode(&List, 3);
    printf("%d\n", Current->BackNode->Data);

}