#include <iostream>
#include <string.h>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce();
		Zombie* newZombie(std::string name);
		void randomChump(std::string name);
		void setName(std::string name);
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

