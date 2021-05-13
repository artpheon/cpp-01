//
// Created by Howe Robbin on 5/11/21.
//

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>


class Zombie
{
private:
	std::string _name;
	std::string _type;
	void	_zombSumm() const;
public:
	Zombie();
	~Zombie();
	void	setName(const std::string& name);
	void	setType(const std::string& type);
	const std::string&	getName() const;
	const std::string&	getType() const;
	void	announce() const;
	static std::string randName(int size);
};


#endif
