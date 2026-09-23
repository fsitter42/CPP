#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();

		static bool f_is_char(const std::string&);
		static bool f_is_pseudo(const std::string&);
		static bool f_is_float(const std::string&);
		static bool f_is_double(const std::string&);
		static bool f_is_int(const std::string&);
	public:
		static void convert(const std::string&);
};

#endif
