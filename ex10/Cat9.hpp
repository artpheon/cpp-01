#ifndef CAT9_HPP
# define CAT9_HPP
# include <fstream>
# include <string>
# include <iostream>
# include <sys/stat.h>
using std::cout;
using std::endl;
using std::cerr;
using std::cin;
using std::string;
using std::ofstream;
using std::ifstream;

class Cat9 {
private:
    string  _file;
    ifstream    *_ifs;
    void    _openStream();
    void    _closeStream();
    ifstream*    _getStream();
    const string& _getFileName() const;
    void    _setFileName(const string& file);
    void    _printCont();
public:
    Cat9();
    ~Cat9();
    void cat9();
    void cat9(const string &file);
    inline bool fexists(const string& name);
    int getPathStat(const string& file);
};
#endif