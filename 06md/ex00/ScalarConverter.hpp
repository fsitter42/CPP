#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>

typedef struct sVals {
	char	c;
	int		i;
	float	f;
	double	d;
	bool	pseudo;
}			tVals;	

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();

		static bool f_is_char(const std::string&, tVals&);
		static bool f_is_pseudo(const std::string&, tVals& v);
		static bool f_is_float(const std::string&, tVals&);
		static bool f_is_double(const std::string&, tVals&);
		static bool f_is_int(const std::string&, tVals&);
	public:
		static void convert(const std::string&);
};

#endif
