#include <cctype>
#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
	    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	    return (0);
	}
	size_t i = 1;
	size_t ac = static_cast<size_t>(argc);
	while (i < ac)
	{
	    size_t j = 0;
	    while (argv[i][j])
		{
	        std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(argv[i][j])));
	        j++;
	    }
	    if (i < ac - 1)
	        std::cout << " ";
	    i++;
	}
	std::cout << '\n';
}
