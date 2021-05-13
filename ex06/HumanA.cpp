#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(&weapon) {
    std::cout << "<A humanA is born!>" << std::endl;
}

HumanA::~HumanA() {
    std::cout << "<A humanA died!>" << std::endl;
}

Weapon* HumanA::getWeapon() {
    return (this->_weapon);
}

const std::string& HumanA::getName() {
    return(this->_name);
}

void    HumanA::attack() {
    std::cout << "HumanA named \033[31m" << this->getName() << "\033[0m attacks with his \033[32m" << this->getWeapon()->getType() << "\033[0m!" << std::endl;
}
