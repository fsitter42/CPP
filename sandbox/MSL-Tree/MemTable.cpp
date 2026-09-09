#include "MemTable.hpp"
#include <iostream>

MemTable::MemTable() : _head(NULL), _arena(64 * 1024 * 1024), _max_height(16), _bytes_used(0), _max_bytes(64 * 1024 * 1024)
{
	_head = _create_node(StringRef("", 0), StringRef("", 0), _max_height);
	std::cout << "Default constructor called\n";
}

//MemTable::MemTable(size_t arena_size) :
