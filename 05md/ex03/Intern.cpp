#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

tFormEntry Intern::_formList[3] = {
	{"robotomy request", &Intern::makeRRF_},
	{"shrubbery creation", &Intern::makeSCF_},
	{"presidential pardon", &Intern::makePPF_}
};

AForm *Intern::makeRRF_(const std::string& target)
{
	AForm* a = new RobotomyRequestForm(target);
	return (a);
}
AForm *Intern::makeSCF_(const std::string& target)
{
	AForm* a = new ShrubberyCreationForm(target);
	return (a);
}
AForm *Intern::makePPF_(const std::string& target)
{
	AForm* a = new PresidentialPardonForm(target);
	return (a);
}

Intern::Intern()
{
	std::cout << "Intern Default Contructor called\n";
}

Intern::Intern(const Intern& other)
{
	(void) other;
	std::cout << "Intern Copy Contructor called\n";
}

Intern& Intern::operator=(const Intern& other)
{
	std::cout << "Intern Copy Assignment Operator called\n";
	(void) other;	
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern Destruktor called\n";
}

AForm *Intern::makeForm(const std::string& form, const std::string& target)
{
	for (int i = 0; i < 3; ++i)
	{
		if (_formList[i].name == form)
		{
			std::cout << "Intern creates " << form << "\n";
			return ((this->*_formList[i].function)(target));
		}
	}
	std::cout << "Intern could not create " << form << "\n";
	return (NULL);
}
