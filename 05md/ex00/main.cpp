#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat a;
	Bureaucrat b("B");
	Bureaucrat c(b);
	Bureaucrat d("D", 42);
	a = d;
}
