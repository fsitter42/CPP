#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : name_("Boai"), grade_(150)
{
	std::cout << "Default Contructor called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name_(other.name_), grade_(other.grade_)
{
	std::cout << "Copy Constructor called\n";
}	

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Copy Assignment Operator called\n";
	if (this != &other)
	{
		this->grade_ = other.grade_;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called\n";
}

Bureaucrat::Bureaucrat(const std::string& name) : name_(name), grade_(150)
{
	std::cout << "Name Constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name_(name), grade_(grade)
{
	std::cout << "Name and Grade Constructor called\n";
}

