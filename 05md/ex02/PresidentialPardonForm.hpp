#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "AForm.hpp"
# include <string>

class PresidentialPardonForm : public AForm
{
  private:
	// class attributes
	static const int _gradeToSign = 25;
	static const int _gradeToExec = 5;
	// attributes
	const std::string target_;

  public:
	// OCF Mandatory
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
	virtual ~PresidentialPardonForm();
	// specific
	PresidentialPardonForm(const std::string &target);
	// getter methods
	const std::string &getTarget() const;
	virtual void vExecute(Bureaucrat const& executor) const;
};

#endif
