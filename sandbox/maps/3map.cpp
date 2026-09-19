#include <string>
include <map>
#include <iostream>

typedef struct s_IntPair
{
	int val1;
	int val2;
}	t_IntPair;

typedef std::map<std::string, t_IntPair> MyMap;

void struct_as_value()
{
	MyMap map;
	t_IntPair lz;
	lz.val1 = 600;
	lz.val2 = 42;
	map["Lieblingszahlen"] = lz;
	t_IntPair ez;
	ez.val1 = 1;
	ez.val2 = 2;
	map["Eins Zwei"] = ez; 

	std::cout << "Val1: " << map["Lieblingszahlen"].val1 << std::endl;
}	

typedef std::map<int, std::pair<int, int> > YourMap;

void std_pair_as_value()
{
	YourMap map;
	
	map[1] = std::make_pair(600, 42);
	std::cout << "Val2: "<< map[1].second << std::endl;
}

int main()
{
	struct_as_value();
	std_pair_as_value();
}
