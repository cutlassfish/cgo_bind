#include "FooWrapper.h"

void FooWrapper::set(const char *first, const char *second) {
	foo_.set(std::make_pair(first, second));
}

pair_t FooWrapper::get() const {
	const pair_t pair = {
		foo_.get().first .c_str(),
		foo_.get().second.c_str(),
	};
	return pair;
}
