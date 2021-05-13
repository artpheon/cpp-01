#include "Human.hpp"

Human::Human() {
	std::cout << "A Human is created!" << std::endl;
}
Human::~Human() {
	std::cout << "A Human is destroyed" << std::endl;
}

const Brain& Human::getBrain() const {
	return (this->_brain);
}
const std::string& Human::identify() const {
	return(this->getBrain().identify());
}