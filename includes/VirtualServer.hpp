#ifndef VIRTUALSERVER_HPP
# define VIRTUALSERVER_HPP

class VirtualServer {
	public:
		VirtualServer(void);
		VirtualServer(const VirtualServer &source);
		VirtualServer &operator=(const VirtualServer &source);
		~VirtualServer(void);
		// public methods here...
	private:
		// private methods here...
		const char *filename;
		std::vector<t_config> _config;
};

#endif