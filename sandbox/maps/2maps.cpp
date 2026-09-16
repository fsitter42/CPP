#include <string>
#include <map>
#include <iostream>

typedef std::map<std::string, int> IntMap;

void printMap(IntMap& map);

int main()
{
	IntMap map1;

	map1["enri"] = 1;
	map1["ari"] = 3;
	map1["hina"] = 34;
	
	printMap(map1);
	std::cout << "\n\n\n";

	map1.insert(std::make_pair("zefro", 67));
	
	map1.insert(std::pair<std::string, int>("annika", 42));
	printMap(map1);
}

void printMap(IntMap& map)
{
	for (IntMap::const_iterator it = map.begin(); it != map.end(); ++it)
	{
		std::cout << it->first << ": " << it->second << "\n";
	}
}
