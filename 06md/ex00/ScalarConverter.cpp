#include "ScalarConverter.hpp"
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
#include <limits.h>
#include <cmath>

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

	int i = 0;
	while (i < 5)
	{
	    if (function[i](str, v) == true)
			break;
		i++;
	}
	//std::cout << i << std::endl;
    switch (i)
    {
        case 0:
            f_handleChar(v.c);
            break ;
        case 1:
            f_handlePseudo(v);
            break ;
        case 2:
            f_handleFloat(v.f);
            break ;
        case 3:
            f_handleDouble(v.d);
            break ;
        case 4:
            f_handleInt(v.i);
            break ;
        case 5:
            std::cout << "Non Valid Input\n";
            break ;
    }
	
	/*

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
	
	std::cout << "char: " << v.c << std::endl;
	std::cout << "pseudo: " << v.pseudo << std::endl;
	std::cout << "float: " << v.f << std::endl;
	std::cout << "double: " << v.d << std::endl;
	std::cout << "int: " << v.i << std::endl;
	*/
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
		if (ScalarConverter::f_is_float(s, v) == true)
		    return (true);
		else if (ScalarConverter::f_is_double(s, v) == true)
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

void ScalarConverter::f_handleChar(char c)
{
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void ScalarConverter::f_handlePseudo(tVals& v)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (v.d != 0)
        std::cout << "float: " << static_cast<float>(v.d) << "f" << std::endl;
    else
        std::cout << "float: " << v.f << "f" << std::endl;
    if (v.f != 0)
        std::cout << "double: " << static_cast<double>(v.f) << std::endl;
    else
        std::cout << "double: " << v.d << std::endl;;
}

void ScalarConverter::f_handleFloat(float f)
{
    std::cout << "char: ";
    if (f < static_cast<float>(CHAR_MIN) || f > static_cast<float>(CHAR_MAX))
        std::cout << "impossible" << std::endl;
    else
    {
        char c = static_cast<char>(f);
        if (isprint(static_cast<unsigned char>(c)))
            std::cout << "'" << c << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    std::cout << "int: ";
    if (f < static_cast<float>(INT_MIN) || f > static_cast<float>(INT_MAX))
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(f) << std::endl;
    std::cout << "float: ";
    if (f == std::floor(f))
        std::cout << f << ".0";
    else
        std::cout << f;
    std::cout << "f" << std::endl;
    std::cout << "double: ";
    double d = static_cast<double>(f);
    if (d == std::floor(d))
        std::cout << d << ".0";
    else
        std::cout << d;
    std::cout << std::endl;
}

void ScalarConverter::f_handleDouble(double d)
{
    (void) d;
    std::cout << "yey\n";
}

void ScalarConverter::f_handleInt(int i)
{
    (void) i;
    std::cout << "yey\n";
}