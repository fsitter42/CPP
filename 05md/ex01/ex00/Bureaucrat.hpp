#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "GradeException.hpp"
#include <string>
#include <iostream>

class Bureaucrat
{
    private:
        const static int _bestGrade = 1;
        const static int _worstGrade = 150;

        const std::string _name;
        int _grade;

        int _isValidGrade(int grade) const;
        
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

        class GradeTooHighException : public GradeException {
            public:
                GradeTooHighException();
                GradeTooHighException(int grade);
        };

        class GradeTooLowException : public GradeException {
            public:
                GradeTooLowException();
                GradeTooLowException(int grade);
        };
};

std::ostream& operator<<(std::ostream& stream, Bureaucrat const& obj);
std::ostream& operator<<(std::ostream& stream, Bureaucrat const* obj);

#endif