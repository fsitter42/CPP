#include "Intern.hpp"

int	main(void)
{
	Intern i;
	AForm *f1 = i.makeForm("robotomy request", "opfer");
	delete f1;
	AForm *f2 = i.makeForm("shrubbery creation", "opfer");
	delete f2;
	AForm *f3 = i.makeForm("presidential pardon", "opfer");
	delete f3;
	std::cout << "\n\n\n";
	AForm *f4 = i.makeForm("hahahahahah", "opfer");
	if (f4)
		delete f4;
}
