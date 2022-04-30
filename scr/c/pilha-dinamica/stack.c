#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct list {
    float v;
    List* next;
};

struct stack{
    List* top;
};

//function that creates and return an ampty stack
Stack* stackCreate(){
    Stack* s = (Stack*) malloc(sizeof(Stack));
    s->top = NULL;

    return s;
}

//function that checks if the stack is empty
int stackCheckEmpty(Stack* s){
    return (s->top == NULL);
}

//function that inserts item on top of stack
void stackPush(Stack* s, float v){
    List* l = (List*) malloc(sizeof(List));

    l->v = v;
    l->next = s->top;

    s->top = l;
}

