#include "ZombieHorde.hpp"
int main()
{
	ZombieHorde *z = new ZombieHorde(10);
	z->announce();
	std::cout << "Press Enter to destroy the zombie horde..." << std::endl;
	getchar();
	delete z;
	return 0;
}
