#include "../includes/webserv.hpp"
#include "../includes/Parser.hpp"

// Construction and destruction...

Parser::Parser(void)
{}

Parser &Parser::operator=(const Parser &source)
{
	// set equals...
	return (*this);
}

Parser::Parser(const Parser &source)
{
	if (this != &source)
		*this = source;
}

Parser::~Parser(void)
{}
