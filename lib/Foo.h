#ifndef FOO_H
#define FOO_H

#include <string>
#include <utility>

class Foo 
{
public:
	typedef std::pair<std::string, std::string> value_t;
	void set(const value_t& value);
	const value_t& get() const; 
private:
	value_t value_;
};

#endif /* FOO_H */
