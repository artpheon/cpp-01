#include "Pony.hpp"

Pony::Pony( const std::string &name) {
	this->_name = name;
	this->_colour = "N/A";
	this->_hoofSize = 0;
	this->_height = 0;
	std::cout << "Pony " << this->getName() << " created" << std::endl;
	Pony::instNbr += 1;
}

Pony::Pony() {
	this->_name = "N/A";
	this->_colour = "N/A";
	this->_hoofSize = 0;
	this->_height = 0;
	std::cout << "Pony without a name created" << std::endl;
}

Pony::~Pony() {
	std::cout << "Pony destroyed" << std::endl;
	Pony::instNbr -= 1;
}

void Pony::setName(const std::string& name) {
	this->_name = name;
}

void Pony::setColour(const std::string& colour) {
	this->_colour = colour;
}

void Pony::setHeight(int height) {
	if (height < 0) {
		std::cout << "Height cannot be negative. Set to 0." << std::endl;
		height = 0;
	}
	this->_height = height;
}

void Pony::setHoofSize(int size) {
	if (size < 0) {
		std::cout << "Hoof size cannot be negative. Set to 0." << std::endl;
		size = 0;
	}
	this->_hoofSize = size;
}

const std::string& Pony::getName() const {
	return this->_name;
}

const std::string& Pony::getColour() const {
	return (this->_colour);
}

int Pony::getHeight() const {
	return(this->_height);
}

int Pony::getHoofSize() const {
	return(this->_hoofSize);
}

void	Pony::ponyDescribe() const {
	std::cout << "Pony's name is " << this->getName() <<
				", pony is of a " << this->getColour() <<
				" colour, its height is " << this->getHeight() <<
				" and its hoof is of size " << this->getHoofSize() <<
				"." << std::endl;
}

void	Pony::changeColour(const std::string& colour) {
	this->setColour(colour);
	std::cout << "Changed Pony's colour to " << colour << std::endl;
}

int Pony::instNbr = 0;

int Pony::getInstNbr() {
	return (Pony::instNbr);
}