#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <iostream>
# include <string>

class Human {
    private:
        std::string _name;
        const std::string& _getName();
        void meleeAttack(std::string const & target);
        void rangedAttack(std::string const & target);
        void intimidatingShout(std::string const & target);
        void (Human::*f[3])(std::string const & target);
    public:
        Human(const std::string& name);
        ~Human();
        void action(std::string const & action_name, std::string const & target);
};

#endif