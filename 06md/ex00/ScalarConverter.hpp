#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>

typedef struct sVals {
	char	c;
	int		i;
	double	f;
	double	d;
	bool	pseudo;
	bool    hex;
}			tVals;	

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();

		static bool f_is_char(const std::string&, tVals&);
		static bool f_is_pseudo(const std::string&, tVals&);
		static bool f_is_float(const std::string&, tVals&);
		static bool f_is_double(const std::string&, tVals&);
		static bool f_is_int(const std::string&, tVals&);

		static void f_handleChar(char c);
		static void f_handlePseudo(tVals& v);
		static void f_handleFloat(double f, bool hex);
		static void f_handleDouble(double d, bool hex);
		static void f_handleInt(int i);
	public:
		static void convert(const std::string&);
};

#endif
