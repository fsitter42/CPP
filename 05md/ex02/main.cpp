#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
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
		b2.signForm(scf);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}
