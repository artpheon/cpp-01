#include "Human.hpp"

Human::Human(const std::string& name) 
    : _name(name)
{
    this->_actions[0] = &Human::meleeAttack;
    this->_actions[1] = &Human::rangedAttack;
    this->_actions[2] = &Human::intimidatingShout;
    this->_actionsStr[0] = "melee";
    this->_actionsStr[1] = "ranged";
    this->_actionsStr[2] = "shout";
    std::cout << "A human " << this->_name << " is born!" << std::endl;
}

Human::~Human() {
    std::cout << "A human " << this->_name << " dies!" << std::endl;
}

const std::string& Human::getName() {
    return (this->_name);
}

void Human::meleeAttack(std::string const & target) {
    std::cout << "<" << this->getName() << "> stabbed <" << target << "> with a knife!" << std::endl;
}

void Human::rangedAttack(std::string const & target) {
    std::cout << "<" << this->getName() << "> shot <" << target << "> with their bow!" << std::endl;
}

void Human::intimidatingShout(std::string const & target) {
    std::cout << "<" << this->getName() << "> caused <" << target << "> to run away with their intimidating growl!" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {
    int i = 0;

    while (i < 3) {
         if (this->_actionsStr[i].compare(action_name) == 0) {
             (this->*(_actions[i]))(target);
             return ;
         }
         ++i;
    }
    std::cout << "Command not found!" << std::endl;
}
