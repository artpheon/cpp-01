#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <iostream>
# include <string>

class Human {
private:
	const Brain _brain;
public:
	Human();
	~Human();
	const Brain& getBrain() const;
	const std::string& identify() const;
};

#endif