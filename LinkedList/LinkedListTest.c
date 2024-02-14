#include "LinkedList.h"

int main(void) {

    LinkedList* List = CreateNode(18);
    LinkedList* NewNode = CreateNode(28);

    InsertAfterNode(&List, NewNode);
    NewNode = CreateNode(87);
    InsertAfterNode(&List, NewNode);
    NewNode = CreateNode(90);
    InsertAfterNode(&List, NewNode);
    PrintList(&List);
    printf("%d\n", IsEmpty(&List));

    LinkedList* Current = SearchNode(&List, 0);

    printf("%d", Current->Data);
    
    DestroyNode(List);

    return 0;

}