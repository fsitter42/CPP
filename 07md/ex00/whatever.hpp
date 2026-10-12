#ifndef WE_HPP
# define WE_HPP

#include <iostream>

template <typename T>
void swap (T& val1, T& val2)
{
    T tmp;

    tmp = val1;
    val1 = val2;
    val2 = tmp;
    return ;
}

template <typename T>
T min (const T& val1, const T& val2)
{
    return ((val1 < val2) ? val1 : val2);
}

template <typename T>
T max (const T& val1, const T& val2)
{
    return ((val1 <= val2) ? val2 : val1);
}

template <typename T>
void addOne (T& val)
{
    val++;
    return ;
}

template <typename T>
void pwint (T& val)
{
    std::cout << val;
    return ;
}

#endif
