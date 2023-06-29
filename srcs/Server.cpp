#include "Server.hpp"

// Construction and destruction...

Server::Server(void)
{}

Server &Server::operator=(const Server &source)
{
	// set equals...
	return (*this);
}

Server::Server(const Server &source)
{
	if (this != &source) {
		*this = source;
	}
}

Server::~Server(void)
{}
