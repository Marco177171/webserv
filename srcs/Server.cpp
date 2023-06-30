#include "../includes/webserv.hpp"
#include "../includes/Server.hpp"

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
	if (this != &source)
		*this = source;
}

Server::~Server(void)
{}

Server::Server(const char *filename): _filename(filename == NULL ? "default.conf" : filename)
{
	std::cout << "server started from configuration file" << std::endl;
}
