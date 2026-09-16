#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "AForm.hpp"
# include <string>

class RobotomyRequestForm : public AForm
{
  private:
	// class attributes
	static const int _gradeToSign = 72;
	static const int _gradeToExec = 45;
	// attributes
	const std::string target_;

  public:
	// OCF Mandatory
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
	virtual ~RobotomyRequestForm();
	// specific
	RobotomyRequestForm(const std::string &target);
	// getter methods
	const std::string &getTarget() const;
	virtual void vExecute(Bureaucrat const& executor) const;
};

#endif
