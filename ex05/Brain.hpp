#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>

class Brain {
private:
    unsigned _size;
    unsigned _decaddress;
    std::string _owner;
    std::string _hexaddress;
    void    _setAddress();
public:
    Brain();
    ~Brain();
    const std::string& identify() const;
    void	describe() const;
    void    setOwner(const std::string& owner);
    void    setSize(long size);
    const   std::string& getOwner() const;
    unsigned getSize() const;
    static void strToUpper(std::string *st);
};

#endif