#include "foo_c.h"
#include "FooWrapper.h"

FOO Foo_construct() {
	return reinterpret_cast<FOO>(new FooWrapper);
}

void Foo_destruct(FOO id) {
	delete reinterpret_cast<FooWrapper*>(id);
}


void Foo_set(FOO id, const char* first, const char* second) {
	reinterpret_cast<FooWrapper*>(id)->set(first, second);
}

pair_t Foo_get(FOO id) {
	return reinterpret_cast<FooWrapper*>(id)->get();
}

