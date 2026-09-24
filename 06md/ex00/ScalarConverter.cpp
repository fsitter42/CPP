#include "ScalarConverter.hpp"
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
#include <limits.h>

void ScalarConverter::convert(const std::string& str)
{
	/*
	char c;
	int i;
	float f;
	double d;
	bool pseudo;
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
	if (ScalarConverter::f_is_double(str) == true)
		std::cout << "im a double\n";
	else
		std::cout << "im no double\n";
	if (ScalarConverter::f_is_int(str) == true)
		std::cout << "im a int\n";
	else
		std::cout << "im no int\n";
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
	
bool ScalarConverter::f_is_double(const std::string& s)
{
	if (s.find('.') == std::string::npos)
		return (false);
	char *eptr = NULL;
	errno = 0;

	strtod(s.c_str(), &eptr);
	if (eptr == s.c_str())
		return (false);
	if (*eptr != '\0')
		return (false);
	if (errno == ERANGE)
		return (false);
	return (true);
}

bool ScalarConverter::f_is_int(const std::string& s)
{
	char *eptr = NULL;
	errno = 0;
	
	long l = strtol(s.c_str(), &eptr, 10);
	if (eptr == s.c_str())
		return (false);
	if (*eptr != '\0')
		return (false);
	if (errno == ERANGE)
		return (false);
	if (l > INT_MAX || l < INT_MIN)
		return (false);
	return (true);
}
	
