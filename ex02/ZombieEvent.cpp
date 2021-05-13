//
// Created by Howe Robbin on 5/11/21.
//

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() : _type("N/A") {
	std::cout << "Event created!" << std::endl;
}

ZombieEvent::~ZombieEvent() {
	std::cout << "Event finished" << std::endl;
}

Zombie* ZombieEvent::newZombie(const std::string& name) {
	Zombie *zomb = new Zombie();
	zomb->setName(name);
	zomb->setType(this->getZombieType());
	return (zomb);
}

void ZombieEvent::setZombType(const std::string& type) {
	this->_type = type;
}

const std::string& ZombieEvent::getZombieType() const {
	return (this->_type);
}

void ZombieEvent::killZombie(Zombie *zomb) {
	delete zomb;
}

Zombie* ZombieEvent::randomChamp(int nameSize) {
	Zombie *zomb = this->newZombie(Zombie::randName(nameSize));
	return (zomb);
}