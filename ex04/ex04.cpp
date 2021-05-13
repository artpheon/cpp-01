#include <iostream>
#include <string>

int main() {
    std::string str("HI THIS IS BRAIN");
    std::string* strptr;
    std::string& strref = str;

    strptr = &str;
    std::cout << "Original string: " << str << std::endl;
    std::cout << "String by pointer: " << *strptr << std::endl;
    std::cout << "string by reference: " << strref << std::endl;
    return (0);
}