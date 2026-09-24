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
	
	tVals v = {};
	

	std::cout << "I am usable and my string is " << str << std::endl;
	if (ScalarConverter::f_is_char(str, v) == true)
		std::cout << "im a char\n";
	else
		std::cout << "im no char\n";
	if (ScalarConverter::f_is_pseudo(str, v) == true)
		std::cout << "im a pseudo\n";
	else
		std::cout << "im no pseudo\n";
	if (ScalarConverter::f_is_float(str, v) == true)
		std::cout << "im a float\n";
	else
		std::cout << "im no float\n";
	if (ScalarConverter::f_is_double(str, v) == true)
		std::cout << "im a double\n";
	else
		std::cout << "im no double\n";
	if (ScalarConverter::f_is_int(str, v) == true)
		std::cout << "im a int\n";
	else
		std::cout << "im no int\n";

	if (v.c == '\0')
		v.c = '0';
	
	std::cout << v.c << std::endl;
	std::cout << v.i << std::endl;
	std::cout << v.f << std::endl;
	std::cout << v.d << std::endl;
	std::cout << v.pseudo << std::endl;
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

	v.f = strtof(s.c_str(), &eptr);
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
	
bool ScalarConverter::f_is_double(const std::string& s, tVals& v)
{
	if (s.find('.') == std::string::npos && v.pseudo == false)
		return (false);
	char *eptr = NULL;
	errno = 0;

	v.d = strtod(s.c_str(), &eptr);
	if (eptr == s.c_str())
		return (false);
	if (*eptr != '\0')
		return (false);
	if (errno == ERANGE)
		return (false);
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
	
