#ifndef WEBSERV_HPP
# define WEBSERV_HPP

# include <iostream>
# include <sstream>
# include <vector>
# include <map>
# include <fstream>
# include <cstring>
# include <cstdlib>
# include <cstdio>
# include <algorithm>
# include <unistd.h>
# include <dirent.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/socket.h>
# include <sys/stat.h>
# include <sys/wait.h>
# include <netdb.h>
# include <netinet/in.h>
# include <arpa/inet.h>
# include <fcntl.h>
# include <time.h>

# include "../includes/VirtualServer.hpp"

typedef struct s_location {
	// location features here...
} t_location;

typedef struct s_config {
	// configuration features here...
} t_config;

typedef struct s_request {
	// request features here...
} t_request;

typedef struct s_response {
	// response features here...
} t_response;

typedef struct s_conn_info {
	// conn_info features here...
} t_conn_info;

void usage();

#endif