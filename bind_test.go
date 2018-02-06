package bind

import "testing"

//import "fmt"

func TestBind(t *testing.T) {
	foo := NewFoo()
	defer FreeFoo(foo)

	foo.set("first", "second")
	first, second := foo.get()

	if first != "first" {
		t.Fatal()
	}

	if second != "second" {
		t.Fatal()
	}
}
