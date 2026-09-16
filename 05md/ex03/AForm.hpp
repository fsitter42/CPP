#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>

class	Bureaucrat;

class AForm
{
  private:
	// attributes
	const std::string name_;
	const int gradeToSign_;
	const int gradeToExexute_;
	bool is_signed_;
	// priv methods
	int isValidGrade_(int grade) const;

  public:
	// OCF Mandatory
	AForm();
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	virtual ~AForm();
	// specific
	AForm(const std::string &name, int gradeToSign, int gradeToExexute);
	// getter methods
	const std::string &getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	// setter methods
	void beSigned(const Bureaucrat &signer);
	void execute(const Bureaucrat& executor) const;
	virtual void vExecute(Bureaucrat const& executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Grade too high boai.. ");
		}
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Grade too low boai.. ");
		}
	};
	class NotSignedExcetption : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Not signed boai.. ");
		}
	};
};

std::ostream &operator<<(std::ostream &stream, AForm const &obj);

#endif
