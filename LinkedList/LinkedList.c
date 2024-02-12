//링크드 리스트
//기본연산 : 삽입, 삭제, 검색, 연결, 역순, 길이체크, 접근, 정렬 
#include "LinkedList.h"

LinkedList* CreateNode(int NewData) { //노드 생성
    LinkedList* NewNode = (LinkedList*)malloc(sizeof(LinkedList));
    NewNode->Data = NewData;
    NewNode->NextNode = NULL;
    return NewNode;

}

void DestroyNode(LinkedList* NewNode) {
    free(NewNode);
}

void InsertAfterNode(LinkedList** Head, LinkedList* NewNode) {
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
LinkedList* SearchNode(LinkedList** Head, int index) {
    LinkedList* Node = (*Head);
    if (*Head == NULL) {
        return 0;
    }
    else {

        for (int i = 0; i <= index; i++) {
            Node = Node->NextNode;
        }
    }

    return Node;
}

void PrintList(LinkedList** Head) {

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