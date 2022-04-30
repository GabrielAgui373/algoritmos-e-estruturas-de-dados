#include <stdio.h>
#include "list.h"

int main() {
    List* l = listCreate();
    
    listInsert(l, 1);
    listInsert(l, 2);
    listInsert(l, 3);
    listInsert(l, 4);

    listPrint(l);
    
    return 1;
}