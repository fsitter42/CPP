#include <cstdint>
#include <string>
#include <sstream>
#include <algorithm>
#include <iostream>
#include <climits>

class Solution {
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t ret = 0;
        for (int i = 0; i < 32; i++)
        {
            ret <<= 1;
            ret |= (n & 1 << 0);
            n >>= 1;
        }
        return (ret);
    }
    uint32_t invertBits(uint32_t n)
    {
        uint32_t ret = 0;
        for (int i = 0; i < 32; i++)
        {
            ret <<= 1;
            ret |= (n & 1 ^ 1);
            n >>= 1;
        }
        return ret;
    }
    uint32_t invertBits2(uint32_t n)
    {
        return (~n);
    }
    int reverseInt(int x)
    {
        long ret;
        std::string str = std::to_string(x);
        std::cout << str << std::endl;
        if (x < 0)
            std::reverse(str.begin() + 1, str.end());
        else
            std::reverse(str.begin(), str.end());
        std::cout << str << std::endl;
        ret = std::stoul(str);
        if (ret > INT_MAX || ret < INT_MIN)
            ret = 0;
        return (ret);
    }
};



int main()
{
    Solution a;
    std::cout << a.reverseBits(1) << "\n";
    std::cout << a.invertBits(0) << "\n";
    std::cout << a.invertBits2(0) << "\n";

    std::cout << a.reverseInt(1534236469) << "\n";
}