#include "Zombie.hpp"
#include <iostream>

int main()
{
	int n = 50;
	Zombie *horde = zombieHorde(n, "Zed");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}
