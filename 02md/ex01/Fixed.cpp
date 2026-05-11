#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other) : _value(other._value)
{
    std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
        _value = other._value;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return (_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    _value = raw;
}

// ex01

Fixed::Fixed(const int n) : _value(n << 8)
{
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float f) : _value (roundf(f * 256))
{
    std::cout << "Float constructor called\n";
}


float Fixed::toFloat( void ) const
{
    return ((float)_value / (1 << 8));
}
int Fixed::toInt( void ) const
{
    return (_value >> 8);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}