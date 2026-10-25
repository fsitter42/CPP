#ifndef SPAN_HPP 
# define SPAN_HPP

#include <vector>

class Span
{
	private:
		std::size_t		free_slots_;
		std::vector<int>	slot_;	
		Span();

		std::vector<int>::iterator min_(void);
		std::vector<int>::iterator max_(void);
	public:
		Span(std::size_t free_slots);		
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void	addNumber(int n);
		int	shortestSpan() const;
		int	longestSpan();
		
		class NoFreeSlotsEx : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("I am full of this ... ");
			}
		};	 	
		class ToSmallToCompareEx : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("I am no big enough to do this ... ");
			}
		};
};

#endif // !SPAN_HPP
