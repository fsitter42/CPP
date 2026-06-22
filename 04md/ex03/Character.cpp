#include "Character.hpp"
#include <iostream>

Character::Character(const std::string& name) : _name(name)
{
    std::cout << "Character Name Constructor called\n";
    for (int i = 0; i < 4; i++)
        _skills[i] = NULL;
}

Character::Character(const Character& other) : _name(other._name)
{
    std::cout << "Character Copy Constructor called\n";
    for (int i = 0; i < 4; i++)
    {
        if (other._skills[i] != NULL)
            _skills[i] = other._skills[i]->clone();
        else 
            _skills[i] = NULL;
    }
}

Character& Character::operator=(const Character& other)
{
    std::cout << "Character Copy Assignment Instructor called\n";
    if (this != &other)
    {
        this->_name = other._name;
        for (int i = 0; i < 4; i++)
        {
            if (this->_skills[i] != NULL)
            {
                delete this->_skills[i];
                this->_skills[i] = NULL;
            }
            if (other._skills[i] != NULL)
                this->_skills[i] = other._skills[i]->clone();
        }
    }
    return (*this);
}

Character::~Character()
{
    std::cout << "Character Destructor called\n";
    for (int i = 0; i < 4; i++)
        {
            if (_skills[i] != NULL)
                delete _skills[i];
        }
}

std::string const& Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_skills[i] == NULL)
        {
            this->_skills[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 4)
        this->_skills[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (this->_skills[idx] != NULL)
    {
        this->_skills[idx]->use(target);
    }
}
