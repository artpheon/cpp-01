#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA {
private:
    Weapon *_weapon;
    std::string _name;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    Weapon* getWeapon();
    const std::string& getName();
    void    attack();
};

#endif