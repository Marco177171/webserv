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

typedef struct s_config {
    // configuration features here...
} t_config;

void usage();

#endif