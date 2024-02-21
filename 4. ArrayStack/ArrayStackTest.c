#include "ArrayStack.h"

int main(void){
    ArrayStack* Stack = NULL;

    AS_CreateStack(&Stack, 4);

    AS_Push(Stack, 1);
    AS_Push(Stack, 2);
    AS_Push(Stack, 3);

    printf("%d\n%d\n", AS_Top(Stack), AS_IsFull(Stack));
    AS_Push(Stack, 4);
    printf("%d\n%d\n", AS_Top(Stack), AS_IsFull(Stack));
}