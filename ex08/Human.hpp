#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <iostream>
# include <string>

class Human {
    private:
        std::string _name;
        void meleeAttack(std::string const & target);
        void rangedAttack(std::string const & target);
        void intimidatingShout(std::string const & target);
        typedef void (Human::*_fAction)(std::string const & target);
        _fAction _actions[3];
        std::string _actionsStr[3];
    public:
        const std::string& getName();
        Human(const std::string& name);
        ~Human();
        void action(std::string const & action_name, std::string const & target);
};

#endif