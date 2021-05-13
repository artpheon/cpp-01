#include "Brain.hpp"
#include "Human.hpp"

int main() {
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << "\n" << std::endl;

	Brain brain = Brain();
	brain.setOwner("me");
	brain.setSize(100);
	brain.describe();
    return(0);
}