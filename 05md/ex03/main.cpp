#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>

int	main(void)
{
	srand(time(0));
	ShrubberyCreationForm	scf;
	std::cout << "\n\n\n\n";
	std::cout << scf << std::endl;
	std::cout << "\n\n\n\n";
	Bureaucrat b1;
	std::cout << "\n\n\n\n";
	std::cout << b1 << std::endl;
	std::cout << "\n\n\n\n";
	try
	{
		b1.signForm(scf);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n\n\n\n";
	ShrubberyCreationForm scf2(scf);
	std::cout << "\n\n\n\n";
	std::cout << scf2 << std::endl;
	std::cout << "\n\n\n\n";

	std::cout << scf2.getTarget() << "-TARGET\n\n\n";

	ShrubberyCreationForm scf3("home");
	std::cout << "\n\n\n\n";
	std::cout << scf3 << std::endl;
	std::cout << "\n\n\n\n";

	std::cout << scf3.getTarget() << "-TARGET\n\n\n";

	Bureaucrat b2("El Repsidente", 1);
	std::cout << "\n\n\n\n";
	std::cout << b2 << std::endl;
	std::cout << "\n\n\n\n";
	try
	{
		b2.executeForm(scf);
		b2.signForm(scf);
		b2.executeForm(scf);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n\n\n\n";
	try
	{
		b1.executeForm(scf);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n\n\n\n";

	RobotomyRequestForm rrf1;
	RobotomyRequestForm rrf2("china");
	
	std::cout << "\n\n\n\n";
	
	try
	{
		b2.signForm(rrf2);
		b1.signForm(rrf2);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		b2.executeForm(rrf2);
		b1.executeForm(rrf2);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n\n\n\n";

	PresidentialPardonForm ppf;
	PresidentialPardonForm ppf2("Fuzi");
	try
	{
		b2.signForm(ppf2);
		b1.signForm(ppf2);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		b2.executeForm(ppf2);
		b1.executeForm(ppf2);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n\n\n\n";


}
