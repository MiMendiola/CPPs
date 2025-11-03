#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Constructor Called!" << std::endl;
    this->_fixedPointNumber = 0;
}

Fixed::Fixed(const Fixed &fixed) : _fixedPointNumber(fixed._fixedPointNumber)
{
    std::cout << "Copy Constructor Called!" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    if (this != &fixed) {
        _fixedPointNumber = fixed._fixedPointNumber;
    }
    std::cout << "Copy Assignment Constructor Called!" << std::endl;

    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called!" << std::endl;
}

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called!" << std::endl;
    return this->_fixedPointNumber;
}

void    Fixed::setRawBits( int const raw )
{
    this->_fixedPointNumber = raw;
}
