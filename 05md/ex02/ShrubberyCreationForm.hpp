#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "AForm.hpp"
# include <string>

class	Bureaucrat;

class ShrubberyCreationForm : public AForm
{
  private:
	// class attributes
	static const int _gradeToSign = 145;
	static const int _gradeToExec = 137;
	// attributes
	const std::string target_;

  public:
	// OCF Mandatory
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	virtual ~ShrubberyCreationForm();
	// specific
	ShrubberyCreationForm(const std::string &target);
	// getter methods
	const std::string &getTarget() const;
	virtual void vExecute(Bureaucrat const& executor) const;
};

#endif
