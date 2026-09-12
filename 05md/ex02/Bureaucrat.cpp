#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

int Bureaucrat::isValidGrade_(int grade) const
{
	if (grade > this->_worstGrade)
		throw GradeTooLowException();
	else if (grade < this->_bestGrade)
		throw GradeTooHighException();
	return (grade);
}

Bureaucrat::Bureaucrat() : name_("Boai"), grade_(_worstGrade)
{
	std::cout << "Bureaucrat Default Contructor called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name_(other.name_), grade_(other.grade_)
{
	std::cout << "Bureaucrat Copy Constructor called\n";
}	

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Bureaucrat Copy Assignment Operator called\n";
	if (this != &other)
	{
		this->grade_ = other.grade_;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called\n";
}

Bureaucrat::Bureaucrat(const std::string& name) : name_(name), grade_(_worstGrade)
{
	std::cout << "Bureaucrat Name Constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name_(name), grade_(isValidGrade_(grade))
{
	std::cout << "Bureaucrat Name and Grade Constructor called\n";
}

const std::string& Bureaucrat::getName() const
{
	return (this->name_);
}

int Bureaucrat::getGrade() const
{
	return (this->grade_);
}


bool Bureaucrat::increment(const unsigned int steps)
{
	grade_ = isValidGrade_(this->grade_ - static_cast<int>(steps));
	return (true);
}

bool Bureaucrat::decrement(const unsigned int steps)
{
    grade_ = isValidGrade_(this->grade_ + static_cast<int>(steps));
    return (true);
}

void Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << this->getName() << " could not sign " << form.getName() << " because "<<  e.what() << "\n";
	}
}

std::ostream& operator<<(std::ostream& stream, Bureaucrat const& obj)
{
	stream << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (stream);	
}
