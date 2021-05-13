//
// Created by Howe Robbin on 5/11/21.
//

#include "Zombie.hpp"

Zombie::Zombie() : _name("N/A"), _type("N/A") {
	std::cout << "A zombie is created!" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "A zombie \033[31m" << this->getName() << "\033[0m died! (now for real)" << std::endl;
}

void	Zombie::setName(const std::string& name) {
	this->_name = name;
}

void	Zombie::setType(const std::string& type) {
	this->_type = type;
}

const std::string&	Zombie::getName() const {
	return (this->_name);
}

const std::string&	Zombie::getType() const {
	return (this->_type);
}

void Zombie::_zombSumm() const {
	std::cout << "<\033[31m" << this->getName() << "\033[0m (\033[34m" << this->getType() << "\033[0m)>";
}

void Zombie::announce() const {
	this->_zombSumm();
	std::cout << " Brainsssss..." << std::endl;
}

std::string Zombie::randName(int size) {

	char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	std::string name;
	int i = 0;

	srand(time(nullptr));
	while (i < size) {
		name += letters[rand() % 26];
		++i;
	}
	return (name);
}
