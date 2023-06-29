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
};

#endif