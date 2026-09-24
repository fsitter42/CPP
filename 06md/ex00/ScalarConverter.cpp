#include "ScalarConverter.hpp"
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>

void ScalarConverter::convert(const std::string& str)
{
	/*
	char c;
	int i;
	float f;
	double d;
	const std::string pseudo;
	*/

	std::cout << "I am usable and my string is " << str << std::endl;
	if (ScalarConverter::f_is_char(str) == true)
		std::cout << "im a char\n";
	else
		std::cout << "im no char\n";
	if (ScalarConverter::f_is_pseudo(str) == true)
		std::cout << "im a pseudo\n";
	else
		std::cout << "im no pseudo\n";
	if (ScalarConverter::f_is_float(str) == true)
		std::cout << "im a float\n";
	else
		std::cout << "im no float\n";
}

bool ScalarConverter::f_is_char(const std::string& s)
{
	return (s.length() == 1 && !isdigit(static_cast<unsigned char>(s[0]))); 
}

bool ScalarConverter::f_is_pseudo(const std::string& s)
{
	return (s == "nan" || s == "+inf" || s == "-inf" || s == "nanf" || s == "+inff" || s == "-inff");
}

bool ScalarConverter::f_is_float(const std::string& s)
{
	char *eptr = NULL;
	errno = 0;

	strtof(s.c_str(), &eptr);
	if (eptr == s.c_str())
		return (false);
	if (*eptr == 'f')
		eptr++;
	else
		return (false);
	if (*eptr != '\0')
		return (false);
	if (errno == ERANGE)
		return (false);
	return (true);
}
	


