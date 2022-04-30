typedef struct stack Stack;

//function that creates and return an ampty stack
Stack* stackCreate();

//function that checks if the stack is empty
int stackCheckEmpty(Stack* s);

//function that inserts item on top of stack
void stackPush(Stack* s, float v);

//function that removes item from the top of the stack
float statckPop(Stack* s);

//function that prints stack elements
void stackPrint(Stack* s);

//function that frees stack memory
void stackFree(Stack* s);