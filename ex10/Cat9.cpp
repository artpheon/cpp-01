#include "Cat9.hpp"

Cat9::Cat9()
    : _file(""), _ifs(nullptr) {
}

Cat9::~Cat9() {
}

void    Cat9::_openStream() {
    this->_ifs = new ifstream(this->_getFileName());
    if (!this->_ifs->is_open()) {
        cerr << "Cannot open the file " << this->_getFileName() << "." << endl;
    }
}

void    Cat9::_closeStream() {
    this->_ifs->close();
    delete this->_ifs;
}

ifstream*    Cat9::_getStream() {
    return (this->_ifs);
}

void Cat9::_setFileName(const string& file) {
    this->_file = file;
}

const string& Cat9::_getFileName() const {
    return (this->_file);
}


void Cat9::cat9() {
    string buffer;
    while (!cin.eof()) {
        getline(cin, buffer);
        cout << buffer;
        if (!cin.eof())
            cout << "\n";
    }
}

void Cat9::cat9(const string& file) {
    this->_setFileName(file);
    int stat = this->getPathStat(file);

    if (stat == -1)
        cerr << "cat9: " << this->_getFileName() << ": cannot open the file" << endl;
    if (stat == 1)
        cerr << "cat9: " << this->_getFileName() << ": is a directory" << endl;
    if (stat == 2)
        cerr << "cat9: " << this->_getFileName() << ": cannot cat this file" << endl;
    if (stat == 0)
        this->_printCont();
}

void    Cat9::_printCont() {
    string buffer;

    this->_openStream();
    while (!this->_getStream()->eof()) {
        getline(*(this->_getStream()), buffer);
        buffer += "\n";
        cout << buffer;
    }
    this->_closeStream();
}

inline bool Cat9::fexists(const string& name) {
    static struct stat st;
    return (stat(name.c_str(), &st) == 0);
}

int Cat9::getPathStat(const string& file) {
    static struct stat s;

    if (stat(file.c_str(), &s) == 0) {
        if (s.st_mode & S_IFDIR) {
            return (1);
        }
        else if (s.st_mode & S_IFREG) {
            return (0);
        }
        else {
            return (2);
        }
    }
    else {
        return (-1);
    }
}