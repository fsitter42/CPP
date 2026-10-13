#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>

template <typename T>
class Array
{
    private:
        T *arr_;
        unsigned int n_;

    public:
        // OCF
        Array();
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();
        // other
        Array(unsigned int n);
};

#endif
