#ifndef FOO_WRAPPER_H
#define FOO_WRAPPER_H

#include "Foo.h"
#include "pair.h"

class FooWrapper
{
public:
	void set(const char *first, const char *second);
	pair_t get() const; 
private:
	Foo foo_;
};

#endif /* FOO_WRAPPER_H */
