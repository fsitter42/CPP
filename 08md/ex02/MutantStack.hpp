#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        // OCF
        MutantStack<T>() : std::stack<T>() {};
        MutantStack<T>(const MutantStack<T>& other) : std::stack<T>(other) {};
        MutantStack<T>(const std::stack<T>& other) : std::stack<T>(other) {};
        MutantStack<T>& operator=(const MutantStack<T>& other)
        {
            if (this != &other)
            {
                std::stack<T>::operator=(other);
            }
            return (*this);
        }
        MutantStack<T>& operator=(const std::stack<T>& other)
        {
            if (this != &other)
            {
                std::stack<T>::operator=(other);
            }
            return (*this);
        }
        ~MutantStack() {};
        // Iterators
        typedef typename std::stack<T>::container_type::iterator        iterator;
        typedef typename std::stack<T>::container_type::const_iterator  const_iterator;

        iterator begin(void)
        {
            return (this->c.begin());
        }
        iterator end(void)
        {
            return (this->c.end());
        }
        const_iterator begin(void) const
        {
            return (this->c.begin());
        }
        const_iterator end(void) const
        {
            return (this->c.end());
        }
};

#endif // !MUTANTSTACK_HPP
