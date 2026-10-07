#include "Serializer.hpp"
#include <iostream>
#include <cassert>

int main(void)
{
    Data data = {};
    data.lel = true;
    Data *pData = &data;
    std::cout << pData << " .... ";
	std::cout << "Inital pointer created ...\n";

	uintptr_t a = Serializer::serialize(pData);
	
	std::cout << "Serialized to:\t" << a << std::endl;

	Data *pData2 = Serializer::deserialize(a);
	
	std::cout << "Deserialized to:\t" << pData2 << std::endl;
	std::cout << "Original Pointer:\t" << pData << std::endl;


	assert(pData2 == pData);
	std::cout << "ASSERT:\tPointers are equal.\n";

	Data data2 = {};
    data.lel = false;

	Data *pData3 = &data2;
	assert(pData != pData3);
	std::cout << "ASSERT:\tPointers are not equal.\n";
}

