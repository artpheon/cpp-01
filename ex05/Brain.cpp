#include "Brain.hpp"

Brain::Brain() {
    this->_owner = "N/A";
    this->_size = 0;
    this->_decaddress = (long)this;
    this->_setAddress();
    std::cout << "Created a Brain" << std::endl;
}

Brain::~Brain() {
    std::cout << "Destroyed a Brain" << std::endl;
}

void    Brain::_setAddress() {
    std::stringstream strea;
    strea << std::hex << this->_decaddress;
    std::string result(strea.str());
    Brain::strToUpper(&result);
    this->_hexaddress = result.insert(0, "0x");
}

const std::string& Brain::identify() const {
    return (this->_hexaddress);
}

void	Brain::describe() const {
	std::cout << "Brain's size is " << this->getSize() <<
	", brain belongs to " << this->getOwner() << "." << std::endl;
}

void    Brain::setOwner(const std::string& owner) {
    this->_owner = owner;
}

void    Brain::setSize(long size) {
    if (size < 0) {
        std::cerr << "Brain size cannot be negative, set to zero." << std::endl;
        size = 0;
    }
    this->_size = size;
}

const   std::string& Brain::getOwner() const {
    return(this->_owner);
}

unsigned Brain::getSize() const {
    return (this->_size);
}
void Brain::strToUpper(std::string *st) {
    for (int i = 0; i < st->length(); i++) {
        (*st)[i] = std::toupper((*st)[i]);
    }
}