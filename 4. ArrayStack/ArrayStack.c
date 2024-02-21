#include "ArrayStack.h"

void AS_CreateStack(ArrayStack** Stack, ElementType Capacity){
    (*Stack) = (ArrayStack*)malloc(sizeof(ArrayStack));//스택 생성

    (*Stack)->Nodes = (Node*)malloc(sizeof(Node) * Capacity);// 노드 생성

    (*Stack)->Capacity = Capacity;//용량 지정
    (*Stack)->Top = -1; //탑노드 인덱스
}

void AS_DestroyStack(ArrayStack* Stack){
    free(Stack->Nodes);

    free(Stack);
}

void AS_Push(ArrayStack* Stack, ElementType Data){
    Stack->Top++;
    Stack->Nodes[Stack->Top].Data = Data;
}

ElementType AS_Pop(ArrayStack* Stack){
    int Posision = Stack->Top--;
    return Stack->Nodes[Posision].Data;
}

ElementType AS_Top(ArrayStack* Stack){
    return Stack->Nodes[Stack->Top].Data;//탑의 데이터 반환
}

int AS_GetSize(ArrayStack* Stack){
    return Stack->Top + 1;// 인덱스는 사이즈 - 1
}

int AS_IsEmpty(ArrayStack* Stack){
    return (Stack->Top == -1); //만약 탑 노드가 없다면
}

int AS_IsFull(ArrayStack* Stack){
    return (Stack->Top + 1 == Stack->Capacity);
}