#include "LinkedList.h"

int main(void) {

    LinkedList* List = CreateNode(18);
    LinkedList* NewNode = CreateNode(28);

    NodeAdd(&List, NewNode);
    NewNode = CreateNode(87);
    NodeAdd(&List, NewNode);
    NewNode = CreateNode(90);
    NodeAdd(&List, NewNode);
    PrintList(&List);
    printf("%d\n", IsEmpty(&List));

    LinkedList* Current = SearchNode(&List, 0);

    printf("%d\n", Current->Data);
    NewNode = CreateNode(9999);
    InsertAfterNode(SearchNode(&List, 3), NewNode);
    PrintList(&List);


    DestroyNode(List);

    return 0;

}