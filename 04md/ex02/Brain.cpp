#include "Brain.hpp"
#include <iostream>

Brain::Brain ()
{
    std::cout << "Brain Default Constructor called.\n";
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain Copy Constructor called.\n";
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain Copy Assignment Operator called.\n";
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = other._ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called.\n";
}

const std::string* Brain::think(int index) const
{
    if (index >= 0 && index <= 99)
        return (&this->_ideas[index]);
    return (NULL);
}

void Brain::learn(int index, const std::string& idea)
{
    if (index >= 0 && index <= 99)
        this->_ideas[index] = idea;
}