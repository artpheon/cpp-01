#ifndef LOGGER_HPP
# define LOGGER_HPP
# include <iostream>
# include <fstream>
# include <iomanip>
# include <string>
# include <ctime>

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::ofstream;
using std::setw;

class Logger {
private:
    ofstream    *_out;
    string _logTypeStr[2];
    void (Logger::*_logTypeFun[2])(const string&);
    void    _logToConsole(const string& entry);
    void    _logToFile(const string& entry);
    string _makeLogEntry(string data);
public:
    Logger(const string& file);
    ~Logger();
    void log(string const & dest, string const & message);
};

#endif