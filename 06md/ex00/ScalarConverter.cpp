#include "ScalarConverter.hpp"
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
#include <limits.h>

void ScalarConverter::convert(const std::string& str)
{
	tVals v = {};

	bool (*function[])(const std::string&, tVals&) = {
	    &ScalarConverter::f_is_char,
		&ScalarConverter::f_is_pseudo,
		&ScalarConverter::f_is_float,
		&ScalarConverter::f_is_double,
		&ScalarConverter::f_is_int
	};
	

	std::cout << "I am usable and my string is " << str << std::endl;
	if (function[0](str, v) == true)
		std::cout << "im a char\n";
	else
		std::cout << "im no char\n";
	if (function[1](str, v) == true)
		std::cout << "im a pseudo\n";
	else
		std::cout << "im no pseudo\n";
	if (function[2](str, v) == true)
		std::cout << "im a float\n";
	else
		std::cout << "im no float\n";
	if (function[3](str, v) == true)
		std::cout << "im a double\n";
	else
		std::cout << "im no double\n";
	if (function[4](str, v) == true)
		std::cout << "im a int\n";
	else
		std::cout << "im no int\n";

	if (v.c == '\0')
		v.c = '0';
	
	std::cout << v.c << std::endl;
	std::cout << v.pseudo << std::endl;
	std::cout << v.f << std::endl;
	std::cout << v.d << std::endl;
	std::cout << v.i << std::endl;
	
}

bool ScalarConverter::f_is_char(const std::string& s, tVals& v)
{
	if (s.length() == 1 && !isdigit(static_cast<unsigned char>(s[0])))
	{
		v.c = static_cast<unsigned char>(s[0]);
		return (true);
	}
	return (false); 
}

bool ScalarConverter::f_is_pseudo(const std::string& s, tVals& v)
{
	if (s == "nan" || s == "+inf" || s == "-inf" || s == "nanf" || s == "+inff" || s == "-inff")
	{
		v.pseudo = true;
		return (true);
	}
	return (false);
}

bool ScalarConverter::f_is_float(const std::string& s, tVals& v)
{
	if (s.find('.') == std::string::npos && v.pseudo == false)
		return (false);
	char *eptr = NULL;
	errno = 0;

	float f = strtof(s.c_str(), &eptr);
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
	v.f = f;
	return (true);
}
	
bool ScalarConverter::f_is_double(const std::string& s, tVals& v)
{
	if (s.find('.') == std::string::npos && v.pseudo == false)
		return (false);
	char *eptr = NULL;
	errno = 0;

	double d = strtod(s.c_str(), &eptr);
	if (eptr == s.c_str())
		return (false);
	if (*eptr != '\0')
		return (false);
	if (errno == ERANGE)
		return (false);
	v.d = d;
	return (true);
}

bool ScalarConverter::f_is_int(const std::string& s, tVals& v)
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
	v.i = static_cast<int>(l);
	return (true);
}
	
