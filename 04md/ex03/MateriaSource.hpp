#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
    protected:
        AMateria* _materias[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource& operator=(const MateriaSource& other);
        ~MateriaSource();
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};

#endif
