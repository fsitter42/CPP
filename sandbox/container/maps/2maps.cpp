#include <string>
#include <map>
#include <iostream>

typedef std::map<std::string, int> IntMap;

void printMap(IntMap& map);
void revPrintMap(IntMap& map);

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
	std::cout << "\n\n\n";
	revPrintMap(map1);

	bool isEmpty = map1.empty();
	if (isEmpty == true)
		std::cout << "e\n";
	else
		std::cout << "ne\n";

	auto s = map1.size();
	std::cout << "mapsize = " << s << "\n";
	
	auto ms = map1.max_size();
	std::cout << "max mapsize = " << ms << "\n";
	

	IntMap map2;
	map2["eins"] = 1;
	map2.insert(std::make_pair("zwei", 2));
	map2.insert(std::pair<std::string, int>("drei", 3));
	printMap(map2);


	std::cout << "\n\n\n";

	map1.swap(map2);
	printMap(map1);
	std::cout << "\n\n\n";
	printMap(map2);
	std::cout << "\n\n\n";

	map1.erase("zwei");
	printMap(map1);
	

	map1.clear();
	std::cout << "nothing:\n";
	printMap(map1);	
	std::cout << "after nothing\n";
	

	if (map2.find("hallo") == map2.end())
		std::cout << "not here\n";	
	if (map2.find("ari") != map2.end())
		std::cout << "here\n";	
	else
		std::cout << "not here\n";	


	if (map2.count("ari") == 1)
		std::cout << "here\n";	
	if (map2.count("ari") != 0)
		std::cout << "here\n";	
	// TODO
	// map2.lowerbound(key);
	// map2.upperbound(key);
	// map2.equal_range(key);
	/*
		map.key_comp();
		map.value_comp();
		map.get_allocator();
	*/
}

void printMap(IntMap& map)
{
	for (IntMap::const_iterator it = map.begin(); it != map.end(); ++it)
	{
		std::cout << it->first << ": " << it->second << "\n";
	}
}

void revPrintMap(IntMap& map)
{
	for (IntMap::reverse_iterator it = map.rbegin(); it != map.rend(); ++it)
		std::cout << it->first << ": " << it->second << "\n";
}

