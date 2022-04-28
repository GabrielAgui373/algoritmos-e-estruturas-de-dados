package listaencadeada

import "fmt"

type List struct {
	Value int
	Next  *List
}

//function that creates an empty list
func ListCreate() *List {
	return nil
}

//function that inserts an element at the beginning of the list
func ListInsert(l *List, v int) *List {
	first := new(List)

	first.Value = v
	first.Next = l

	return first
}

//function that check if the list is empty
func ListCheckEmpty(l *List) bool {
	return (l == nil)
}

//function that prints the elements of the list
func ListPrint(l *List) {
	var i *List

	for i = l; i != nil; i = i.Next {
		fmt.Printf("Value: %d\n", i.Value)
	}
}

//function that prints the elements of the list recursively
func ListPrintRec(l *List) {
	if !ListCheckEmpty(l) {
		fmt.Printf("Value: %d\n", l.Value)
		ListPrintRec(l.Next)
	}
}
