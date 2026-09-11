#ifndef FORM_HPP
# define FORM_HPP

#include "bLimits.h"
#include <string>
#include <iostream>

class Form
{
    private:

	// attributes
        const std::string	name_;
	bool			is_signed_;
        const int		gradeToSign_;
        const int		gradeToExexute_;
	// priv methods
        int			isValidGrade_(int grade) const;
        
    public:
        // OCF Mandatory
        Form();
        Form(const Form& other);
        Form&			operator=(const Form& other);
        ~Form();
        // specific
        Form(const std::string& name);
        Form(const std::string& name, int grade);
        // getter methods
        const std::string&	getName() const;
	bool			getIsSigned() const;
	const int		getGradeToSign() const;
	const int		getGradeToExecute() const;
	// setter methods
	void			beSigned(const Bureaucrat& bureaucrat);

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw ()
			return ("Grade too high boai.. ");
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw ()
			return ("Grade too low boai.. ");
	};
};

std::ostream& operator<<(std::ostream& stream, Form const& obj);

#endif
