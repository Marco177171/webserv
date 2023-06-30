#include "../includes/webserv.hpp"
#include "../includes/Cgi.hpp"

// Construction and destruction...

Cgi::Cgi(void)
{}

Cgi &Cgi::operator=(const Cgi &source)
{
	// set equals...
	return (*this);
}

Cgi::Cgi(const Cgi &source)
{
	if (this != &source)
		*this = source;
}

Cgi::~Cgi(void)
{}
