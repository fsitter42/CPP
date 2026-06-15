#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>

class AAnimal
{
    protected:
        std::string _type;

    public:
        AAnimal();
        AAnimal(const AAnimal& other);
        AAnimal& operator=(const AAnimal& other);
        virtual ~AAnimal();
        virtual void makeSound() const = 0;
        const std::string& getType() const;
};

#endif