#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include <string>

class Intern;

typedef struct sFormEntry
{
	std::string name;
	AForm* (Intern::*function) (const std::string& target);
} tFormEntry;

class Intern
{
  private:
	static tFormEntry _formList[3];
	// methods
	AForm *makeRRF_(const std::string& target);
	AForm *makeSCF_(const std::string& target);
	AForm *makePPF_(const std::string& target);
  public:
	// OCF Mandatory
	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	~Intern();
	// methods
	AForm *makeForm(const std::string& form, const std::string& target);
};

#endif
