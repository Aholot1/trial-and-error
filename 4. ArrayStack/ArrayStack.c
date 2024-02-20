#include "ArrayStack.h"

void AS_CreateStack(ArrayStack** Stack, int Capacity){
    (*Stack) = (ArrayStack*)malloc(sizeof(ArrayStack));//스택 생성

    (*Stack)->Nodes = (Node*)malloc(sizeof((Node) * Capacity));// 노드 생성


}