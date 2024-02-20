#ifndef _ARRAY_STACK_
#define _ARRAY_STACK_
#include <stdio.h>
#include <stdlib.h>

typedef struct TagNode{
    int Data;
} Node;

typedef struct tagArrayStack{
    int   Capacity;
    int   Top;
    Node* Nodes;
} ArrayStack;

void AS_CreateStack(ArrayStack** Stack, int Capacity);

#endif