#ifndef XORSTRING_HPP
#define XORSTRING_HPP

#include <cstddef>

template <size_t N>
class XorString
{
    public:
        constexpr XorString(const char(&str)[N]) {
            for (size_t i = 0; i < N; ++i) {
                _data[i] = str[i] ^ _key[i % 4];
            }
        }
    
        void decrypt(char* dest) const {
            for (size_t i = 0; i < N; ++i) {
                dest[i] = _data[i] ^ _key[i % 4];
            }
        }

    private:
        char _data[N]{};
        static constexpr unsigned char _key[4] = {0x42, 0x13, 0x37, 0xA9};
};

#endif