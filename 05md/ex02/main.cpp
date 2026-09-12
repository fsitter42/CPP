#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main(void)
{
	Form		a;
	Bureaucrat	j;

	std::cout << a << std::endl;
	Form b("Very important Form", 3, 1);
	std::cout << b << std::endl;
	Bureaucrat i("El Presidente", 1);
	std::cout << i << std::endl;
	i.signForm(b);
	std::cout << "\n\n\n";
	std::cout << j << std::endl;
	j.signForm(a);
	j.signForm(b);
}
