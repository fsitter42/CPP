#include "Span.hpp"
#include <iostream>
#include <algorithm>

Span::Span(std::size_t free_slots) : free_slots_(free_slots) {}

Span::Span(const Span& other) : free_slots_(other.free_slots_)
{
	if (this != &other)
	{
		this->slot_.assign(other.slot_.begin(), other.slot_.end());
	}
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->free_slots_ = other.free_slots_;
		this->slot_.clear();
		this->slot_.assign(other.slot_.begin(), other.slot_.end());
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
	return (0);
}

int Span::longestSpan()
{
	if (this->slot_.size() < 2)
		throw (ToSmallToCompareEx());
	return (*this->max_() - *this->min_());
}


std::vector<int>::iterator Span::max_(void)
{
	return (std::max_element(this->slot_.begin(), this->slot_.end()));
}

std::vector<int>::iterator Span::min_(void)
{
	return (std::min_element(this->slot_.begin(), this->slot_.end()));
}



