#include "CirCularDoublyLinkedList.h"

Node* CDLL_CreateNode(int NewData) {
    Node* NewNode = (Node*)malloc(sizeof(Node));

    NewNode->Data = NewData;
    NewNode->NextNode = NULL;
    NewNode->BackNode = NULL;

    return NewNode;
}

void  CDLL_DestroyNode(Node* Node) {
    free(Node);
}

void  CDLL_AddNode(Node** Head, Node* NewNode) {
    if ((*Head) == NULL) {
        *Head = NewNode;
        (*Head)->BackNode = *Head;
        (*Head)->NextNode = *Head;
    }
    else {
        Node* Tail = *Head;
        while (Tail->NextNode != *Head) {
            Tail = Tail->NextNode;
        }
        Tail->NextNode = NewNode;
        NewNode->BackNode = Tail;
        NewNode->NextNode = *Head;
        (*Head)->BackNode = NewNode;
    }
}

void  CDLL_InsertAfterNode(Node* Current, Node* NewNode) {
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

void  CDLL_RemoveNode(Node** Head, Node* Remove) {
    Node* Tail = *Head;
    while (Tail->NextNode != *Head) {
        Tail = Tail->NextNode;
    }
    if (Remove == *Head) {
        Remove->NextNode->BackNode = Tail;
        Remove->BackNode = NULL;
        Tail->NextNode = Remove->NextNode;
        Remove->NextNode = NULL;

    }
    else if (Remove == Tail) {
        Tail->BackNode->NextNode = *Head;
        Tail->NextNode = NULL;
        (*Head)->BackNode = Remove->BackNode;
        Tail->BackNode = NULL;
    }
    else {
        Remove->BackNode->NextNode = Remove->NextNode;
        Remove->NextNode->BackNode = Remove->BackNode;
        Remove->NextNode = NULL;
        Remove->BackNode = NULL;
    }

}

Node* CDLL_GetNodeAt(Node* Head, int Location) {
    Node* Current = Head;
    for (int i = 0; i < Location; i++) {
        Current = Current->NextNode;
    }

    return Current;
}

int   CDLL_GetNodeCount(Node* Head) {
    unsigned int count = 0;
    Node* Current = Head;

    while (Current != NULL) {
        Current = Current->NextNode;
        count++;
        if (Current == Head) {
            break;
        }
    }

    return count;
}

void  CDLL_PrintNodes(Node** Head) {
    Node* Current = *Head;
    printf("%d\n", Current->Data);
    Current = Current->NextNode;
    while (Current != *Head) {
        printf("%d\n", Current->Data);
        Current = Current->NextNode;
    }
}