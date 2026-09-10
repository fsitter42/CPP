#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : name_("Boai"), grade_(150)
{
	std::cout << "Default Contructor called\n";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default Destructor called\n";
}
