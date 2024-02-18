#include "CirCularDoublyLinkedList.h"

int main(void) {
	Node* List = NULL;
	CDLL_AddNode(&List, CDLL_CreateNode(19));
	CDLL_AddNode(&List, CDLL_CreateNode(29));
	CDLL_AddNode(&List, CDLL_CreateNode(39));
	CDLL_AddNode(&List, CDLL_CreateNode(59));

	CDLL_PrintNodes(&List);

	printf("------------------\n");
	Node* Current = CDLL_CreateNode(49);
	CDLL_InsertAfterNode(CDLL_GetNodeAt(List, 2), Current);
	CDLL_PrintNodes(&List);
	
	Current = CDLL_GetNodeAt(List, 3);
	printf("------------------\n");
	printf("%d\n", Current->Data);

}