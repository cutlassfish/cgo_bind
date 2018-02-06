package bind

// #cgo CFLAGS: -Ilib
// #cgo LDFLAGS: -Llib
// #cgo LDFLAGS: -lfoo -lstdc++
// #include <stdlib.h>
// #include "foo_c.h"
import "C"
import "unsafe"

type Foo struct {
	id C.FOO
}

func NewFoo() *Foo {
	foo := &Foo{}
	foo.id = C.Foo_construct()
	return foo
}

func FreeFoo(foo *Foo) {
	C.Foo_destruct(foo.id)
}

func (foo *Foo) set(first, second string) {
	cfirst := C.CString(first)
	csecond := C.CString(second)
	defer C.free(unsafe.Pointer(cfirst))
	defer C.free(unsafe.Pointer(csecond))

	C.Foo_set(foo.id, cfirst, csecond)
}

func (foo *Foo) get() (first, second string) {
	pair := C.Foo_get(foo.id)
	return C.GoString(pair.first), C.GoString(pair.second)
}
