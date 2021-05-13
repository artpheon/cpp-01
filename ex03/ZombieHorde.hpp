//
// Created by Howe Robbin on 5/12/21.
//

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"
# include <map>

class ZombieHorde
{
private:
	Zombie *_horde;
	int _nbr;
public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announce();

};


#endif
