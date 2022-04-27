typedef struct list List;

//function that creates an empty list
List* listCreate();

//function that frees the list memory
void listFree(List* l);

//function that frees list memory recursively
void listFreeRec(List* l);

//function that inserts an element at the beginning of the list
List* listInsert(List* l, int v);

//function that removes an element from the list recursively
List* listRemove(List* l, int v);

//function that removes an element from the list recursively
List* listRemoveRec(List* l, int v);

//function that checks if the list is empty
int listCheck(List* l);

//function that searches for an element int the list
List* listSearch(List* l, int v);

//function that prints the elements of the list recursively
void listPrint(List* l);

//function that prints the elements of the list recursively
void listPrintRec(List* l);