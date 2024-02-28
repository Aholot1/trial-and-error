#include "LinkedListStack.h"

LLS_CreateStack(LinkedListStack** Stack){
    (*Stack)       = (LinkedListStack*)malloc(sizeof(LinkedListStack));
    (*Stack)->List = NULL;
    (*Stack)->Top  = NULL;
}

void LLS_DestroyStack(LinkedListStack** Stack){
    
}
Node* LLS_CreateNode(char* Data){
    Node* _Node = (Node*)malloc(sizeof(Node));
    _Node->Data = (char*)malloc(sizeof(strlen(Data) + 1));// 길이 + 널문자 용량

    strcpy(_Node->Data, Data);
    _Node->NextNode = NULL;

    return _Node;
}
void LLS_DestroyNode(Node* _Node){
    free(_Node->Data);
    free(_Node);
}

void LLS_Push(LinkedListStack* Stack, Node* NewNode){
    if(Stack == NULL){
        Stack->List = NewNode;
        Stack->Top = NewNode;
    }
    else{
        Stack->Top->NextNode = NewNode;
        Stack->Top = NewNode;
    }
}
Node* LLS_Pop(LinkedListStack* Stack){

    Node* NodeTop = Stack->Top;

    if(Stack->List == Stack->Top){

        Stack->Top = NULL;

        Stack->List = NULL;

    }
    else{

        Node* Current = Stack->List;

        while(Current != NULL && Current->NextNode != Stack->Top){

        Current = Current->NextNode;

        }

        Stack->Top = Current;

        Stack->Top->NextNode = NULL;
        
        
    }
    return NodeTop;
}

Node* LLS_Top(LinkedListStack* Stack){
    
    return Stack->Top;
}
int   LLS_GetSize(LinkedListStack* Stack){
    int count = 0;
    Node* Current = Stack->List;

    while(Current != NULL){
        Current = Current->NextNode;
    }

    return count;
}
int   LLS_IsEmpty(LinkedListStack* Stack){
    return (Stack->List == NULL);
}