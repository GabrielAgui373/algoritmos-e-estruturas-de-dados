#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct list{
    int value;
    List* next;
};

//function that creates an empty list
List* listCreate() {
    return NULL;
}

//function that frees the list memory
void listFree(List* l){
    List* p = l;

    while(p != NULL){
        List* temp = p->next;
        free(p);
        p = temp;
    }
}

//function that frees the list memory recursively
void listFreeRec(List* l){
    if(listCheckEmpty(l)){
        listFreeRec(l->next);
        free(l);
    }
}

//function that inserts an element at the beginning of the list
List* listInsert(List* l, int v){
    List* first = (List*) malloc(sizeof(List));

    first->value = v;
    first->next = l;

    return first;
}


//function that removes an element from the list
List* listRemove(List* l, int v){
    List* previous = NULL; //pointer to previous element
    List* p = l; //pointer to scroll through the list

    //look for element in list
    while(p != NULL && p->value != v){
        previous = p;
        p = p->next;
    }

    //check if you found the element
    if(p == NULL)
        return l;

    //remove element
    if(previous == NULL){
        //remove first element
        l = p->next;
    }
    else{
        //remove middle element
        previous->next = p->next;
    }
    free(p);
    return l;
}

//function that check if the list is empty
int listCheckEmpty(List* l){
    return (l == NULL);
}

//function that searches for an element in the list
List* listSearch(List* l, int v){
    List* p;

    for(p = l; p != NULL; p = p->next){
        if(p->value == v)
            return p;
    }
    return NULL;
}

//function that prints the elements of the list 
void listPrint(List* l){
    List* i;

    for(i = l; i != NULL; i = i->next){
        printf("Value: %d\n", i->value);
    }
}

//function that prints the elements of the list recursively
void listPrintRec(List* l){
    if(!listCheckEmpty(l)){
        printf("Value: %d\n", l->value);
        listPrintRec(l->next);
    }
}