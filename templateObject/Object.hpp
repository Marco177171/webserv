#ifndef OBJECT_HPP
# define OBJECT_HPP

class Object {
	public:
		Object(void);
		Object(const Object &source);
		Object &operator=(const Object &source);
		~Object(void);
		// public methods here...
	private:
		// private methods here...
};

#endif