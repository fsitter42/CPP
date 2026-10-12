#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

template <typename T>
void iter(T *arr, const std::size_t size, void (*f)(T& arg))
{
    for (std::size_t i = 0; i < size; i++)
    {
        f(arr[i]);
    }
    return ;
}

template <typename T>
void iter(T *arr, const std::size_t size, void (*f)(const T& arg))
{
    for (std::size_t i = 0; i < size; i++)
    {
        f(arr[i]);
    }
    return ;
}

#endif
