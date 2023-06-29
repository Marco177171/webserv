#include "VirtualServer.hpp"

// Construction and destruction...

VirtualServer::VirtualServer(void)
{}

VirtualServer &VirtualServer::operator=(const VirtualServer &source)
{
	// set equals...
	return (*this);
}

VirtualServer::VirtualServer(const VirtualServer &source)
{
	if (this != &source) {
		*this = source;
	}
}

VirtualServer::~VirtualServer(void)
{}
