#ifndef REPLACE_HPP
# define REPLACE_HPP
# include <iostream>
# include <string>
# include <fstream>

    class Replace {
        private:
            std::string _filename;
            std::string _oldW;
            std::string _newW;
            std::string _buffer;
        public:
            Replace(std::string file, std::string oldW, std::string newW);
            ~Replace();
            int fill_buffer();
            void    replace();
            int fill_output();
    };
#endif