#include "../includes/webserv.hpp"
#include "../includes/Server.hpp"

int main(int argc, char *argv[])
{
	if (argc > 2)
		usage();
	Server webserv(argv[1]);
}