#include "replace.hpp"

Replace::Replace(std::string file, std::string oldW, std::string newW)
    :_filename(file), _oldW(oldW), _newW(newW), _buffer("") {
    std::cout << "Replacing \033[31m" << oldW << "\033[0m with \033[34m" << newW << "\033[0m in " << file << " file." << std::endl;
}

Replace::~Replace() {
}

int    Replace::fill_buffer() {
    std::ifstream file;
    std::string tmp;

    file.open(this->_filename);
    if (!file.is_open())
        return (1);
    while(!file.eof()) {
        getline(file, tmp);
        this->_buffer += tmp;
        if (!file.eof())
            this->_buffer += "\n";
    }
    file.close();
    return (0);
}

void Replace::replace() {
    size_t index = 0;
    size_t length = this->_oldW.length();

    while (true) {
        index = this->_buffer.find(this->_oldW, index);
        if (index == std::string::npos)
            break ;
        this->_buffer.replace(index, length, this->_newW);
        index += length;
    }
}

int Replace::fill_output() {
    std::ofstream out;
    size_t index = 0;

    out.open(this->_filename + ".replace");
    if (!out.is_open())
        return (1);
    out << std::setw(this->_buffer.length()) << this->_buffer;
    out.close();
    return (0);
}