#include <string>
#include <iostream>
#include <stdlib.h>

/*
       double strtod(const char *nptr, char **endptr);
       float strtof(const char *nptr, char **endptr);
       long double strtold(const char *nptr, char **endptr);
*/
#include <stdio.h>
void fdouble(std::string nptr)
{
	char *endptr;

	errno = 0;
	double d = strtod(nptr.c_str(), &endptr);
	if (*endptr != '\0')
		printf("Not ending correct: %s\n", endptr);
	if (errno == ERANGE)
		std::cout << "Overflow detected\n";
	else
		std::cout << "Overflow detected\n";
		
	std::cout << d << "\n";	
	d++;
	std::cout << d << "\n";	
	
}

void ffloat(std::string nf)
{
	char *eptr;
	
	errno = 0;
	float f = strtof(nf.c_str(), &eptr);
	if (eptr == nf.c_str())
		std::cout << "no conversion\n";
	if (*eptr == 'f')
		eptr++;
	if (*eptr != '\0')
		std::cout << "Not ending correct " << eptr << std::endl;
	if (errno == ERANGE)
		std::cout << "Overflow!!!!\n";
	std::cout << f << "\n";
	f++;
	std::cout << f << "\n";
}

int main(int ac, char *av[])
{
	ffloat(av[1]);
	//fdouble(av[1]);
}
