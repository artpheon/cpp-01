//
// Created by Howe Robbin on 5/12/21.
//
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	if (n < 0) {
		std::cerr << "Number cannot be negative" << std::endl;
		n = 0;
	}
	std::cout << "Zombie horde created! It will create " << n << " random zombies." << std::endl;
	this->_horde = new Zombie[n];
	for (int i = 0; i < n; i++) {
		this->_horde[i].setType(Zombie::randName(6, i));
		this->_horde[i].setName(Zombie::randName(5, i + 1));
	}
	this->_nbr = n;
}

ZombieHorde::~ZombieHorde() {
	delete [] this->_horde;
	std::cout << "Zombie horde destroyed!" << std::endl;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < this->_nbr; i++) {
		this->_horde[i].announce();
	}
}
