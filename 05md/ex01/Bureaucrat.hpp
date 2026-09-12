#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "bLimits.h"
#include <string>
#include <iostream>

class Form;

class Bureaucrat
{
    private:
        const static int _bestGrade = BEST_GRADE;
        const static int _worstGrade = WORST_GRADE;

        const std::string name_;
        int grade_;

        int isValidGrade_(int grade) const;
        
    public:
        // OCF Mandatory
        Bureaucrat();
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);
        ~Bureaucrat();
        // specific
        Bureaucrat(const std::string& name);
        Bureaucrat(const std::string& name, int grade);
        // methods
        const std::string& getName() const;
        int getGrade() const;
        bool increment(const unsigned int steps);
        bool decrement(const unsigned int steps);

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw ()
		{
			return ("Grade too high boai.. ");
		}
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw ()
		{
			return ("Grade too low boai.. ");
		}
	};
	void signForm(Form& form);
};

std::ostream& operator<<(std::ostream& stream, Bureaucrat const& obj);

#endif
