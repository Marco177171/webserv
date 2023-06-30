#ifndef SERVER_HPP
# define SERVER_HPP

class Server {
	public:
		Server(const char *filename);
		Server(void);
		Server(const Server &source);
		Server &operator=(const Server &source);
		~Server(void);
		// public methods here...
	private:
		// private methods here...
		const char *_filename;
};

#endif