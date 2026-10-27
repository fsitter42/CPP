#ifndef SPAN_HPP 
# define SPAN_HPP

#include <vector>
#include <typeinfo>
#include <iterator>
#include <exception>

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
		class WrongTypeEx : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("You are not my type ... ");
			}
		};
		class EmptyInputEx : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Thank you for nothing ... ");
			}
		};
		template <typename InputIt>
		void addRange(InputIt first, InputIt last)
		{
			std::size_t inputSize;
			
			inputSize = static_cast<std::size_t> (std::distance(first, last));
			if (inputSize == 0)
				throw (EmptyInputEx());
			if (typeid(*(first)) != typeid(int))
				throw (WrongTypeEx()); 
			if (inputSize > this->free_slots_)
				throw (NoFreeSlotsEx());
			this->slot_.insert(this->slot_.end(), first, last);
			this->free_slots_ -= inputSize;
		}
};

#endif // !SPAN_HPP
