#include "Pony.hpp"

void	ponyOnTheHeap() {
	std::cout << "Creating a Pony on the heap!" << std::endl;
	Pony *pony = new Pony("April");
	pony->setColour("red");
	pony->setHeight(5);
	pony->setHoofSize(10);
	pony->ponyDescribe();
	pony->changeColour("green");
	pony->ponyDescribe();
	std::cout << "Killing the Pony on the heap!" << std::endl;
	delete pony;
}

void	ponyOnTheStack() {
	std::cout << "Creating a Pony on the stack!" << std::endl;
	Pony pony = Pony();
	pony.ponyDescribe();
	pony.setName("darkHorse666");
	pony.setColour("white");
	pony.setHeight(-10);
	pony.setHoofSize(12);
	pony.ponyDescribe();
	pony.changeColour("black");
	pony.ponyDescribe();
	std::cout << "Killing the Pony on the stack!" << std::endl;
}

int main()
{
	ponyOnTheHeap();
	std::cout << "\n" << std::endl;
	ponyOnTheStack();
	return (0);
}
