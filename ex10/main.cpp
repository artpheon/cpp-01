#include "Cat9.hpp"
#include <string>
using std::string;



int main (int argc, char *argv[]) {
    Cat9 newCat = Cat9();
    if (argc == 1)
        newCat.cat9();
    else {
        for (int i = 1; i < argc; i++) {
            newCat.cat9(string(argv[i]));
        }
    }
    return (0);
}