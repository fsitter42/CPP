#include <iostream>

using namespace std;

class custom_exception : public exception
{
	virtual const char* what() const noexcept
	{
		return ("custom exception message");
	}
};

void thrower()
{
	throw 6.7;
}

void not_the_thrower()
{
	thrower();
}

int main()
{
		string word = "four";
		try
		{
			// cout << word.at(4) << endl;
			// int *array = new int[9999999999999];
			// throw exception();
			// throw runtime_error("Problem encountered!");
			// throw custom_exception();
			// throw 42;
			// throw 4.2;
			// thrower();
			not_the_thrower();
			// throw ;
		}
		catch (bad_alloc& e)
		{
			cout << "1. Exception thrown! " << e.what() << endl;		
		}
		catch (out_of_range& e)
		{
			cout << "2. Exception thrown! " << e.what() << endl;		
		}
		catch (exception& e)
		{
			cout << "Any other exception " << e.what() << endl;
		}
		catch (int code)
		{
			cout << "Error code: " << code << endl;
		}
		catch (...)
		{
			cout << "Default catcher" << endl;
		} 
		return (0);
}

