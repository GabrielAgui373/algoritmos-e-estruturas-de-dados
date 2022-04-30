package pilhadinamica

// import fmt

type List struct {
	V    float64
	Next *List
}

type Stack struct {
	Top *List
}

func StackCreate() *Stack {
	stack := new(Stack)
	stack.Top = nil

	return stack
}

func StackPush(s *Stack, v float64) {
	list := new(List)
	list.V = v
	list.Next = s.Top

	s.Top = list
}

func StackCheckEmpty(s *Stack) bool {
	return (s.Top == nil)
}
