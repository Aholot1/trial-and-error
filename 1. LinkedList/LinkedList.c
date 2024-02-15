//링크드 리스트
//기본연산 : 삽입, 삭제, 검색, 연결, 역순, 길이체크, 접근, 정렬 
#include "LinkedList.h"

LinkedList* SLL_CreateNode(int NewData) { //노드 생성
    LinkedList* NewNode = (LinkedList*)malloc(sizeof(LinkedList));
    NewNode->Data = NewData;
    NewNode->NextNode = NULL;
    return NewNode;

}

void SLL_DestroyNode(LinkedList* NewNode) {
    free(NewNode);
}

void SLL_NodeAdd(LinkedList** Head, LinkedList* NewNode) {
    if ((*Head)->NextNode == NULL) {
        (*Head)->NextNode = NewNode;
    }

    else {
        LinkedList* Tail = *Head;
        while (Tail->NextNode != NULL) {
            Tail = Tail->NextNode;
        }

        Tail->NextNode = NewNode;
    }
}
LinkedList* SLL_SearchNode(LinkedList** Head, int index) {
    LinkedList* Node = (*Head);
    if (*Head == NULL) {
        return 0;
    }
    else {

        for (int i = 0; i < index; i++) {
            Node = Node->NextNode;
        }
    }

    return Node;
}
void SLL_InsertAfterNode(LinkedList* Current, LinkedList* Add){
    Add->NextNode = Current->NextNode;
    Current->NextNode = Add;
    


}

void SLL_PrintList(LinkedList** Head) {

    LinkedList* ImsiNode = *Head;

    if (ImsiNode->NextNode == NULL) {
        printf("%d", ImsiNode->Data);
    }
    else {
        while (ImsiNode != NULL) {
            printf("%d\n", ImsiNode->Data);
            ImsiNode = ImsiNode->NextNode;
        }
    }
}

LinkedList* SLL_Top(LinkedList** Head) {
    return *Head;
}

void SLL_CleanList(LinkedList** Head) {
    LinkedList* Current = *Head;
    LinkedList* Remove = Current;
    while (Current != NULL) {
        Remove = Current;
        Current = Current->NextNode;

        SLL_DestroyNode(Remove);

    }
    *Head = NULL;
}

int SLL_ReMoveNode(LinkedList** Head, LinkedList* Remove) {
    LinkedList* Current = *Head;

    if ((*Head) == Remove) {
        (*Head)->NextNode = NULL;
        return Remove->Data;
    }

    while (Current->NextNode != Remove) {
        Current = Current->NextNode;
    }

    Current->NextNode = Remove->NextNode;
    Remove->NextNode = NULL;

    return Remove->Data;



}

int SLL_IsEmpty(LinkedList** Head) {// empty is 1, not empty is 0;
    if ((*Head) == NULL) {
        return 1;
    }
    return 0;
}

void SLL_InsertBeforeNode(LinkedList** Head,LinkedList* Current, LinkedList* Add){
    LinkedList* BeforeNode = *Head;
    while(BeforeNode->NextNode != Current){
        BeforeNode = BeforeNode->NextNode;
    }
    Add->NextNode = BeforeNode->NextNode;
    BeforeNode->NextNode = Add;


}