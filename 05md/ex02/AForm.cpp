#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "bLimits.h"

int AForm::isValidGrade_(int grade) const
{
	if (grade > WORST_GRADE)
		throw GradeTooLowException();
	else if (grade < BEST_GRADE)
		throw GradeTooHighException();
	return (grade);
}

AForm::AForm() : name_("Empty Sheet"), gradeToSign_(WORST_GRADE), gradeToExexute_(WORST_GRADE), is_signed_(false)
{
	std::cout << "AForm Default Contructor called\n";
}

AForm::AForm(const AForm& other) : name_(other.name_), gradeToSign_(other.gradeToSign_), gradeToExexute_(other.gradeToExexute_), is_signed_(other.is_signed_)
{
	std::cout << "AForm Copy Constructor called\n";
}

AForm& AForm::operator=(const AForm& other)
{
    std::cout << "AForm Copy Assignment Operator called\n";
    if (this != &other)
        is_signed_ = other.is_signed_;
    return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm Destructor called\n";
}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExexute) : name_(name), gradeToSign_(isValidGrade_(gradeToSign)), gradeToExexute_(isValidGrade_(gradeToExexute)), is_signed_(false)
{
	std::cout << "AForm Name and Grade Constructor called\n";
}

const std::string& AForm::getName() const
{
	return (this->name_);
}

int AForm::getGradeToSign() const
{
	return (this->gradeToSign_);
}

int AForm::getGradeToExecute() const
{
	return (this->gradeToExexute_);
}

bool AForm::getIsSigned() const
{
	return(this->is_signed_);
}

void AForm::beSigned(const Bureaucrat& signer)
{
	if (signer.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();	
	this->is_signed_ = true;
}

void AForm::execute(const Bureaucrat& executor) const 
{
	if (this->is_signed_ == false)
		throw NotSignedExcetption();
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();	
	this->vExecute(executor);
}

std::ostream& operator<<(std::ostream& stream, AForm const& obj)
{
	stream << obj.getName() << "\nMin Level to sign: " << obj.getGradeToSign() << ".";
	stream << "\nMin Level to execute: " << obj.getGradeToExecute() << ".";
	stream << "\nSigned: ";
	if (obj.getIsSigned() == true)
		stream << "Yes";
	else
		stream << "No";
	return (stream);	
}

