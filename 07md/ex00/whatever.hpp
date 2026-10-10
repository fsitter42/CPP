#ifndef WE_HPP
# define WE_HPP

template <typename T>
void swap (T& val1, T& val2)
{
    T swap;

    swap = val1;
    val1 = val2;
    val2 = swap;
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

#endif
