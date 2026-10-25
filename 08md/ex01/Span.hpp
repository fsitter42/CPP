#ifndef SPAN_HPP 
# define SPAN_HPP

#include <cstddef>

class Span
{
	private:
		size_t			free_slots_;
		std::vector<int>	slot_;	
		Span();
	public:
		Span(size_t free_slots);		
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void	addNumber(int n);
		int	shortestSpan() const;
		int	longestSpan() const;
};

#endif // !SPAN_HPP
