#include "LinkedList.h"

int main(void) {

    LinkedList* List = SLL_CreateNode(18);
    LinkedList* NewNode = SLL_CreateNode(28);

    SLL_NodeAdd(&List, NewNode);
    NewNode = SLL_CreateNode(87);
    SLL_NodeAdd(&List, NewNode);
    NewNode = SLL_CreateNode(90);
    SLL_NodeAdd(&List, NewNode);
    SLL_PrintList(&List);
    printf("%d\n", SLL_IsEmpty(&List));

    printf("------------------------------\n");

    LinkedList* Current = SLL_SearchNode(&List, 0);

    printf("%d\n", Current->Data);
    NewNode = SLL_CreateNode(9999);
    SLL_InsertAfterNode(SLL_SearchNode(&List, 3), NewNode);

    NewNode = SLL_CreateNode(2222);

    SLL_InsertBeforeNode(&List, SLL_SearchNode(&List, 3), NewNode);
    SLL_PrintList(&List);
    printf("-----------------\n");
    Current = SLL_SearchNode(&List, 2);
    printf("%d\n", Current->Data);

    SLL_CleanList(&List);

    if (List == NULL) {
        printf("List is NULL");
    }

    else {
        printf("List isn't NULL");
    }

    SLL_DestroyNode(List);

    return 0;

}