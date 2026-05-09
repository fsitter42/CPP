#include "replaceinfile.hpp"


int replaceInFile(ss filename, ss s1, ss s2)
{
    std::ifstream inf(filename);
    if (!inf)
    {
        std::cerr << "ERROR: file\n";
        return (1);
    }
    std::string buffer;
    while (inf >> buffer)
        std::cout << "\n";
    (void) s1;
    (void) s2;
    std::cout << buffer << "\n";
    return (0);
}
