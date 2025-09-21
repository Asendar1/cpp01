#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << name << " is gone" << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
