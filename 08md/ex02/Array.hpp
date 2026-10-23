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
                throw NegativeIndex();
            return n;
        };

    public:
        // OCF
        Array() : arr_(NULL), n_(0) {};
        Array(const Array& other) : arr_(new T[other.n_]), n_(other.n_)
        {
            for (int i = 0; i < this->n_; i++)
                this->arr_[i] = other.arr_[i];
        };
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
            delete[] this->arr_;
        };
        // other
        Array(unsigned int n) : arr_(new T[isPositive_(n)]), n_(n) {};\
        T& operator[](int index)
        {
            if (index >= 0 && index < this->n_)
                return (this->arr_[index]);
            throw OutOfRangeEx();
        };
        const T& operator[](int index) const
        {
            if (index >= 0 && index < this->n_)
                return (this->arr_[index]);
            throw OutOfRangeEx();
        };
        // methods
        int size() const {return (this->n_);};
        // exceptions
        class OutOfRangeEx : public std::exception
        {
            virtual const char* what() const throw()
            {
                return ("OOB ...");
            }
        };
        class NegativeIndex : public std::exception
        {
            virtual const char* what() const throw()
            {
                return ("NI ...");
            }
        };
};

#endif
