#include "Foo.h" 


void Foo::set(const Foo::value_t& value) {
	value_ = value;
}

const Foo::value_t& Foo::get() const {
	return value_;
}
