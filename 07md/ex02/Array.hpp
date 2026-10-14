#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>
#include <exception>

template <typename T>
class Array
{
    private:
        T *arr_;
        int n_;
        int isPositive_(int n)
        {
            if (n < 0)
                throw 42;
            return n;
        };

    public:
        // OCF
        Array() : arr_(NULL), n_(0) {};
        Array(const Array& other);
        Array& operator=(const Array& other)
        {
            if (this != &other)
            {
                T *tmp;

                tmp = new T[other.n_];
                for (int i = 0; i < other.n_; i++)
                {
                    tmp[i] = other.arr_[i];
                }
                delete[] arr_;
                arr_ = tmp;
                n_ = other.n_;
            }
            return (*this);
        };
        ~Array()
        {
            delete[] arr_;
        };
        // other
        Array(unsigned int n) : arr_(new T[isPositive_(n)]), n_(n) {};
        // methods
        int size() const {return (this->n_);};
};

#endif
