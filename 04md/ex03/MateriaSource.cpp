#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource Default Constructor called\n";
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    std::cout << "MateriaSource Copy Constructor called\n";
    for (int i = 0; i < 4; i++)
    {
        if (other._materias[i] != NULL)
            _materias[i] = other._materias[i]->clone();
        else 
            _materias[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    std::cout << "MateriaSource Copy Assignment Instructor called\n";
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_materias[i] != NULL)
            {
                delete this->_materias[i];
                this->_materias[i] = NULL;
            }
            if (other._materias[i] != NULL)
                this->_materias[i] = other._materias[i]->clone();
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource Destructor called\n";
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i] != NULL)
            delete _materias[i];
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] == NULL)
        {
            this->_materias[i] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    int i = 0;
    while (i < 4 && this->_materias[i] && this->_materias[i]->getType() != type)
        i++;
    if (i < 4)
        return (this->_materias[i]->clone());
    return NULL;
}
