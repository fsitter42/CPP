#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", _gradeToSign, _gradeToExec), target_("default")
{
	std::cout << "PresidentialPardonForm Default Contructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm("PresidentialPardonForm", _gradeToSign, _gradeToExec), target_(other.target_)
{
	std::cout << "PresidentialPardonForm Copy Contructor called\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    std::cout << "PresidentialPardonForm Copy Assignment Operator called\n";
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", _gradeToSign, _gradeToExec), target_(target)
{
	std::cout << "PresidentialPardonForm Target Constructor called\n";
}

const std::string& PresidentialPardonForm::getTarget() const
{
	return(this->target_);
}

void PresidentialPardonForm::vExecute(Bureaucrat const& executor) const
{
	(void) executor;
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
}

