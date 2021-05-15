#include "Logger.hpp"

Logger::Logger(const std::string& file) {
    this->_out = new ofstream(file, ofstream::out | ofstream::app);
    if (!this->_out->is_open()) {
        cerr << "Could not open the file for logging.";
        this->~Logger();
    }
    this->_logTypeStr[0] = "console";
    this->_logTypeStr[1] = "file";
    this->_logTypeFun[0] = &Logger::_logToConsole;
    this->_logTypeFun[1] = &Logger::_logToFile;
    cout << "Logging started" << endl;
}

Logger::~Logger() {
    this->_out->close();
    delete this->_out;
    cout << "Logging finished" << endl;
}

void    Logger::_logToConsole(const std::string& entry) {
    cout << setw(entry.length()) << entry << endl;
}

void    Logger::_logToFile(const std::string& entry) {
    *(this->_out) << setw(entry.length()) << entry << endl;
}

string Logger::_makeLogEntry(std::string data) {
    char buffer[18] = {0};
    static time_t ttime = time(0);
    struct tm *tmPtr = localtime(&ttime);
    strftime(buffer, 18, "%x - %I:%M%p", tmPtr);
    string entry = string(buffer) + "> " + data;
    return (entry);
}

void Logger::log(std::string const & dest, std::string const & message) {
    string entry = _makeLogEntry(message);
    for (int i = 0; i < 2; i++) {
        if (dest.compare(this->_logTypeStr[i]) == 0) {
            (this->*_logTypeFun[i])(entry);
            return ;
        }
    }
    cerr << "Could not find the command specified by " << dest << endl;
}
