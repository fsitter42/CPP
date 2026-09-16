#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", _gradeToSign, _gradeToExec), target_("default")
{
	std::cout << "RobotomyRequestForm Default Contructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm("RobotomyRequestForm", _gradeToSign, _gradeToExec), target_(other.target_)
{
	std::cout << "RobotomyRequestForm Copy Contructor called\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "RobotomyRequestForm Copy Assignment Operator called\n";
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", _gradeToSign, _gradeToExec), target_(target)
{
	std::cout << "RobotomyRequestForm Target Constructor called\n";
}

const std::string& RobotomyRequestForm::getTarget() const
{
	return(this->target_);
}

void RobotomyRequestForm::vExecute(Bureaucrat const& executor) const
{
	(void) executor;
	std::cout << "DRRRRRRRRRR... DRRRRRRRR... DRRRRRRRRRRR...\n" << this->getTarget();
	if (rand() % 2 == 0)
		std::cout << " has been robotomized\n";
	else
		std::cout << " has not been robotomized\n";
}
