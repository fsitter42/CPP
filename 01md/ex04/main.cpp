#include "replaceinfile.hpp"
#include <iostream>

int main(int ac, char *av[])
{
    if (ac != 4)
    {
        std::cout << "instruction: this programm takes 3 arguments:\n";
        std::cout << "./sed file_to_work_on string_to_replace new_string\n";
        return (1);
    }
    return (replaceInFile(av[1], av[2], av[3]));
}