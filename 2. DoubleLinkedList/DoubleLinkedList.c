#include "DoubleLinkedList.h"

Node* DLL_CreateNode(int DLL_NewData) { // 노드 생성
    Node* NewNode = (Node*)malloc(sizeof(Node));
    NewNode->NextNode = NULL;
    NewNode->BackNode = NULL;
    NewNode->Data = DLL_NewData;

    return NewNode;
}

void  DLL_DestroyNode(Node* Remove) {
    free(Remove);
}


void DLL_AddNode(Node** Head, Node* NewNode) {
    if ((*Head) == NULL) {
        *Head = NewNode;
    }
    else {
        Node* Tail = *Head;

        while (Tail->NextNode != NULL) {
            Tail = Tail->NextNode;
        }
        Tail->NextNode = NewNode;
        NewNode->BackNode = Tail;

    }
}

void DLL_InsertAfterNode(Node* Current, Node* NewNode) {
    if (Current->NextNode == NULL) {
        Current->NextNode = NewNode;
        NewNode->BackNode = Current;
    }
    else {
        NewNode->NextNode = Current->NextNode;
        Current->NextNode->BackNode = NewNode;
        Current->NextNode = NewNode;
        NewNode->BackNode = Current;
        
    }

}

void DLL_InsertBeforeNode(Node* Current, Node* NewNode) {
    NewNode->BackNode = Current->BackNode;
    Current->BackNode = NewNode;
    NewNode->BackNode->NextNode = NewNode;
    NewNode->NextNode = Current;
}

void DLL_RemoveNode(Node** Head, Node* Remove) {
    Node* Current = *Head;
    while (Current->NextNode != Remove) {
        Current = Current->NextNode;
    }
    if (Current == *Head) {
        *Head = (*Head)->NextNode;
    }
    else {
        Current->BackNode->NextNode = Current->NextNode;
        Current->NextNode->BackNode = Current->BackNode;
        Current->NextNode = NULL;
        Current->BackNode = NULL;
    }
}

void DLL_CleanList(Node** Head) {
    Node* Current = *Head;
    Node* Remove = Current;
    while (Current != NULL) {
        Remove = Current;
        Current->NextNode->BackNode = NULL;
        Current->NextNode = NULL;
        DLL_DestroyNode(Current);
    }

    *Head = NULL;
}



Node* DLL_SearchNode(Node** Head, int index) {
    Node* ReturnNode = (*Head);

    for (int i = 0; i < index; i++) {
        ReturnNode = ReturnNode->NextNode;
    }

    return ReturnNode;

}

Node* DLL_Top(Node** Head) {
    return (*Head);
}

Node* DLL_Tail(Node** Head) {
    Node* Current = *Head;

    while (Current->NextNode != NULL) {
        Current = Current->NextNode;
    }

    return Current;
}

void DLL_PrintList(Node** Head) {

    Node* Current = *Head;

    while (Current != NULL) {
        printf("%d\n", Current->Data);
        Current = Current->NextNode;
    }

}

int IsEmpty(Node** Head) {
    if ((*Head) == NULL) {
        return 1;
    }

    return 0;
}





