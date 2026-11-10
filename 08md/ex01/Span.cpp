#include "Span.hpp"
#include <algorithm>
#include <climits>

Span::Span(std::size_t free_slots) : free_slots_(free_slots) {}

Span::Span(const Span& other) : free_slots_(other.free_slots_)
{
	this->slot_.assign(other.slot_.begin(), other.slot_.end());
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->slot_.assign(other.slot_.begin(), other.slot_.end());
		this->free_slots_ = other.free_slots_;
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int n)
{
	if (free_slots_ < 1)
		throw (NoFreeSlotsEx());
	this->slot_.push_back(n);
	this->free_slots_--;
	return ;
}

int Span::shortestSpan() const
{
	long span;
	long currentSpan;
	std::vector<int> tmp;
	
	if (this->slot_.size() < 2)
		throw (ToSmallToCompareEx());

	tmp.assign(slot_.begin(), slot_.end());
	std::sort(tmp.begin(), tmp.end());
	span = static_cast<long>(tmp.back()) - tmp.front();
	for (std::vector<int>::iterator it = tmp.begin() + 1; it != tmp.end(); ++it)
	{
		currentSpan = static_cast<long>(*it) - *(it - 1);
		if (currentSpan < span)
			span = currentSpan;
		if (span == 0)
			break ;
	}
	if (span > INT_MAX)
	    throw (ToSmallToCompareEx());
	return (static_cast<int>(span));
}

int Span::longestSpan() const
{
    long span;
	if (this->slot_.size() < 2)
		throw (ToSmallToCompareEx());
	span = static_cast<long>(*this->max_()) - *this->min_();
	if (span > INT_MAX)
	    throw (ToSmallToCompareEx());
	return (static_cast<int>(span));
}

std::vector<int>::const_iterator Span::max_(void) const
{
	return (std::max_element(this->slot_.begin(), this->slot_.end()));
}

std::vector<int>::const_iterator Span::min_(void) const
{
	return (std::min_element(this->slot_.begin(), this->slot_.end()));
}



