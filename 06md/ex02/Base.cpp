#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base::~Base()
{
    //std::cout << "Base Destructor called\n";
}

Base *generate(void)
{
    Base *ret = new A;
    //randomly generate A B or C
    return (ret);
}
void identify(Base* p)
{
    A* a = dynamic_cast<A*>(p);
    if (a != NULL)
        std::cout << "A" << std::endl;
    B* b = dynamic_cast<B*>(p);
    if (b != NULL)
        std::cout << "B" << std::endl;
    C* c = dynamic_cast<C*>(p);
    if (c != NULL)
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void) a;
        std::cout << "A" << std::endl;
    }
    catch (...)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            (void) b;
            std::cout << "B" << std::endl;
        }
        catch (...)
        {
            try
            {
                C& c = dynamic_cast<C&>(p);
                (void) c;
                std::cout << "C" << std::endl;
            }
            catch (...)
            {
                std::cout << "Unknown Type" << std::endl;
            }
        }
    }
}