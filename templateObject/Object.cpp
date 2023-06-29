#include "Object.hpp"

// Construction and destruction...

Object::Object(void)
{}

Object &Object::operator=(const Object &source)
{
	// set equals...
	return (*this);
}

Object::Object(const Object &source)
{
	if (this != &source)
		*this = source;
}

Object::~Object(void)
{}
