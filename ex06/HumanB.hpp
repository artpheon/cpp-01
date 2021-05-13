#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB {
private:
    Weapon *_weapon;
    std::string _name;
public:
    HumanB(std::string name);
    HumanB();
    ~HumanB();
    Weapon *getWeapon();
    void    setWeapon(Weapon &weapon);
    const std::string& getName();

    void    attack();
};

#endif