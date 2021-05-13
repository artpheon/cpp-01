//
// Created by Howe Robbin on 5/11/21.
//

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"
# include <iostream>
# include <string>
# include <cstdlib>

class ZombieEvent
{
private:
	std::string _type;
	const std::string& getZombieType() const;
public:
	ZombieEvent();
	~ZombieEvent();
	Zombie* newZombie(const std::string& name);
	Zombie* randomChamp(int nameSize);
	void setZombType(const std::string& type);
	void killZombie(Zombie *zomb);
};


#endif