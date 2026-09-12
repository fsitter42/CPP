#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", _gradeToSign, _gradeToExec), target_("default")
{
	std::cout << "ShrubberyCreationForm Default Contructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm("ShrubberyCreationForm", _gradeToSign, _gradeToExec), target_(other.target_)
{
	std::cout << "ShrubberyCreationForm Copy Contructor called\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    std::cout << "ShrubberyCreationForm Copy Assignment Operator called\n";
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", _gradeToSign, _gradeToExec), target_(target)
{
	std::cout << "ShrubberyCreationForm Target Constructor called\n";
}

const std::string& ShrubberyCreationForm::getTarget() const
{
	return(this->target_);
}

void ShrubberyCreationForm::vExecute(Bureaucrat const& executor) const
{
	(void) executor; // TODO loeschen
	std::string outname = this->getTarget() + "_shrubbery";
    std::ofstream outf(outname.c_str());
    if (!outf)
    {
        std::cerr << "ERROR: outfile\n";
        throw 42; // TODO main catch ...
    }
	outf << "ASCII trees" << std::endl;
}
