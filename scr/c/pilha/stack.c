#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define N 50

struct stack{
    int n;
    float vet[50]
};

//function that creates and return an ampty stack
Stack* stackCreate(){
    Stack* s = (Stack*) malloc(sizeof(Stack));
    s->n = 0;

    return s;
}

//function that checks if the stack is empty
int stackCheckEmpty(Stack* s){
    return (s->n == 0);
}

//function that inserts item on top of stack
void stackPop(Stack* s, float v){
    if(s->n == N){
        printf("burst capacity.\n");
        exit(1);
    }
    s->vet[s->n] = v;
    s->n++;
}


//function that removes item from the top of the stack
float stackPop(Stack* s){
    if(stackCheckEmpty(s)){
        printf("empty list.\n");
        exit(1);
    }

    float v = s->vet[s->n - 1];
    s->n--;

    return v;
}

//function that prints stack elements
void stackPrint(Stack* s){
   for(int i = s->n - 1; i >= 0; i--){
        printf("%f\n", s->vet[i]);
    }
}

//function that frees stack memory
void stackFree(Stack* s){
    free(s);
}