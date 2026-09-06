#ifndef GRADEEXCEPTION_HPP
# define GRADEEXCEPTION_HPP

#include <string>
#include <exception>

class GradeException : public std::exception
{
    protected:
        std::string _msg;
        int _val;
        
    public:
        GradeException(const std::string& msg);
        GradeException(const std::string& msg, int val);
        virtual ~GradeException() throw();
        const char* what() const throw();
        int getVal() const throw();
};

#endif