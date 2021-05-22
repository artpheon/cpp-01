#include "Human.hpp"

Human::Human(const std::string& name) 
    : _name(name)
{
    std::cout << "A human " << this->_name << "is born!" << std::endl;
}

Human::~Human() {
    std::cout << "A human" << this->_name << "dies!" << std::endl;
}

const std::string& Human::_getName() {
    return (this->_name);
}

void Human::meleeAttack(std::string const & target) {
    std::cout << "<" << this->_getName() << "> stabbed " << target << " with a knife!" << std::endl;
}

void Human::rangedAttack(std::string const & target) {
    std::cout << "<" << this->_getName() << "> shot " << target << " with their bow!" << std::endl;
}

void Human::intimidatingShout(std::string const & target) {
    std::cout << "<" << this->_getName() << "> caused " << target << " to run away with their intimidating growl!" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {

}
