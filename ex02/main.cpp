#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie *zomb = new Zombie();
	zomb->setName("arthur");
	zomb->setType("braineater");
	zomb->announce();
	delete zomb;
	std::cout << "\n" << std::endl;

	ZombieEvent event = ZombieEvent();
	event.setZombType("random shitter");
	Zombie *randZombie = event.randomChamp(15);
	randZombie->announce();
	event.killZombie(randZombie);
	std::cout << "\n" << std::endl;

	event.setZombType("ghoul");
	Zombie *eventZombie = event.newZombie("Kokyn");
	eventZombie->announce();
	event.killZombie(eventZombie);
	getchar();
	return 0;
}
