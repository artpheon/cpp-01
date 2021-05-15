#include "Logger.hpp"

int main() {
    Logger logs = Logger("logs.txt");
    //logs.log("console", "adf");
    //logs.log("console", "new");
    //logs.log("console", "log");
    logs.log("file", "somethin");
    logs.log("file", "new");
    logs.log("file", "NEW EVENT");
    return(0);
}