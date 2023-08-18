#pragma once

# include "utils.hpp"

class Cgi {
	public:
		Cgi();
		Cgi(t_connection &connectionInfo, unsigned short port);
		~Cgi();
		std::string	executeCgi(t_config &config, const char *path);
		char **getEnv(void) const;
	private:
		// private methods here...
		std::vector<std::pair<std::string, std::string> > _env;
		std::string _body;
};
