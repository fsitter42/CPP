#ifndef MEMTABLE_HPP
# define MEMTABLE_HPP

# include <cstddef>
# include "StringRef.hpp"
# include "Arena.hpp"

struct MemTableNode {
	StringRef		key;
	StringRef		val;
	size_t			height;
	MemTableNode		**forward;
};

class MemTable {
	private:
		MemTableNode*	_head;
		Arena		_arena;
		size_t		_max_height;
		size_t		_bytes_used;
		size_t		_max_bytes;

		MemTableNode*	_create_node(StringRef key, StringRef val, size_t height);
		size_t		_random_height();
		int		_compare_keys(const StringRef& a, const StringRef& b) const;

		// OCF prohibit copies
		MemTable(const MemTable& other);
		MemTable& operator=(const MemTable& other);
		
	public:
		MemTable();
		explicit MemTable(size_t arena_size);
		~MemTable();

		// main operations
		bool		insert(StringRef key, StringRef val);
		bool 		search(StringRef key, StringRef& out_val) const;
		void 		flush_to_disk(int fd);
		void 		clear();

		// getter
		size_t		getBytesUsed() const;
		size_t		getMaxBytes() const;
		bool		isFull() const;

};

#endif

