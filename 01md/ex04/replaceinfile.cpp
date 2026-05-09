#include "replaceinfile.hpp"
#include <iostream>
#include <fstream>

int replaceInFile(std::string filename, std::string s1, std::string s2)
{
    if (s1.empty())
    {
        std::cerr << "ERROR: s1 empty\n";
        return (1);
    }
    std::ifstream inf(filename.c_str());
    if (!inf)
    {
        std::cerr << "ERROR: infile\n";
        return (1);
    }
    std::string outname = filename + ".replace";
    std::ofstream outf(outname.c_str());
    if (!outf)
    {
        std::cerr << "ERROR: outfile\n";
        return (1);
    }
    std::string buffer;
    while (std::getline(inf, buffer))
    {
        size_t pos = buffer.find(s1);
        while (pos != std::string::npos)
        {
            buffer.erase(pos, s1.length());
            buffer.insert(pos, s2);
            pos += s2.length();
            pos = buffer.find(s1, pos);
        }
        outf << buffer << "\n";
    }
    return (0);
}
