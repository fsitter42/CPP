#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

Base::~Base()
{
    //std::cout << "Base Destructor called\n";
}

Base *generate(void)
{
    Base *ret = NULL;
    if (rand() % 3 == 0)
        ret = new A;
    else if (rand() % 3 == 1)
        ret = new B;
    else
        ret = new C;
    return (ret);
}
void identify(Base* p)
{
    A* a = dynamic_cast<A*>(p);
    if (a != NULL)
    {
        std::cout << "A" << std::endl;
        return ;
    }
    B* b = dynamic_cast<B*>(p);
    if (b != NULL)
    {
        std::cout << "B" << std::endl;
        return ;
    }
    C* c = dynamic_cast<C*>(p);
    if (c != NULL)
    {
        std::cout << "C" << std::endl;
        return ;
    }
    std::cout << "Unknown Type" << std::endl;
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
