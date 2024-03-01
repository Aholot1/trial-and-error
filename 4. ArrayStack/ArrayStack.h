#ifndef _ARRAY_STACK_
#define _ARRAY_STACK_
#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct TagNode{
    ElementType Data;
} Node;

typedef struct tagArrayStack{
    ElementType   Capacity;
    ElementType   Top;
    Node*         Nodes;
} ArrayStack;

void        AS_CreateStack(ArrayStack** Stack, ElementType Capacity);
void        AS_DestroyStack(ArrayStack* Stack);
void        AS_Push(ArrayStack* Stack, ElementType Data);
ElementType AS_Pop(ArrayStack* Stack);
ElementType AS_Top(ArrayStack* Stack);
int         AS_GetSize(ArrayStack* Stack);
int         AS_IsEmpty(ArrayStack* Stack);
int         AS_IsFull(ArrayStack* Stack);
#endif