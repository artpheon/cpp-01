#include "replace.hpp"

int exit_error(const std::string& err) {
    std::cerr << err << std::endl;
    return (1);
}

int main(int argc, char *argv[]) {
    int err;

    if (argc != 4)
        return (exit_error("wrong number of arguments."));
    Replace replace = Replace(argv[1], argv[2], argv[3]);
    err = replace.fill_buffer();
    if (err)
        return (exit_error("Could not open the file. File may not exist."));
    replace.replace();
    err = replace.fill_output();
    if (err)
        return (exit_error("Could not open the outfile."));
    return(0);
}