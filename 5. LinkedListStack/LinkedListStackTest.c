#include "LinkedListStack.h"

int main(void) {
	LinkedListStack* Stack = NULL;

	int Count = 0;

	LLS_CreateStack(&Stack);

	LLS_Push(Stack, LLS_CreateNode("ABC"));
	LLS_Push(Stack, LLS_CreateNode("DEF"));
	LLS_Push(Stack, LLS_CreateNode("GHI"));
	LLS_Push(Stack, LLS_CreateNode("JKL"));

	Count = LLS_GetSize(Stack);



	printf("Size : %d, Top : %s\n", Count, LLS_Top(Stack)->Data);

	for (int i = 0; i < Count; i++) {
		if (LLS_IsEmpty(Stack)) {
			break;
		}
		Node* Popped = LLS_Pop(Stack);
		printf("Popped : %s, ", Popped->Data);

		LLS_DestroyNode(Popped);

		if (!LLS_IsEmpty(Stack)) {
			printf("Current Top : %s\n", LLS_Top(Stack)->Data);

		}
		else {
			printf("Stack is empty.\n");
		}
	}


}