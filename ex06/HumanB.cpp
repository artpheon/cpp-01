#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(nullptr) {
    std::cout << "<A humanB " << this->_name << " is born!>" << std::endl;
}

HumanB::HumanB() : _name("N/A") {
    std::cout << "<A humanB without a name is born!>" << std::endl;
}

HumanB::~HumanB() {
    std::cout << "<A humanB died!>" << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}
Weapon *HumanB::getWeapon() {
    return (this->_weapon);
}

const std::string& HumanB::getName() {
    return(this->_name);
}

void    HumanB::attack() {
    std::cout << "HumanB named \033[31m" << this->getName() << "\033[0m attacks with his \033[32m" << this->getWeapon()->getType() << "\033[0m!" << std::endl;
}