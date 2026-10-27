#include <string>
#include <map>
#include <iostream>

typedef std::map<std::string, int> IntMap;

void printMap(const std::map<std::string, int>& map1);

int main()
{
	std::map<std::string, int> map1;
	map1["greeting"] = 1;
	map1["name"] = 2;
	map1["good bye"] = 3;

	
	printMap(map1);
	map1.insert({"anika", 23});
	printMap(map1);
	map1.emplace("jille", 21);
	printMap(map1);
	map1.erase("name");
	printMap(map1);


	auto it = map1.find("a");
	if (it == map1.end())
		std::cout << "Not there\n";
	else
		std::cout <<  "Found\n";

	it = map1.find("jille");
	if (it == map1.end())
		std::cout << "Not there\n";
	else
		std::cout <<  "Found\n";
}


void printMap(const std::map<std::string, int>& map1)
{
	for (const auto& element : map1)
	{
		std::cout << element.first << " : " << element.second << std::endl;
	}
	std::cout << "\n\n\n";
}
