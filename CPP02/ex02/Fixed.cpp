#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Constructor Called!" << std::endl;
    this->_fixedPointNumber = 0;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int Constructor Called!" << std::endl;
    this->_fixedPointNumber = n << this->_fractBits;
}

Fixed::Fixed(const float n)
{
    std::cout << "Float Constructor Called!" << std::endl;
    this->_fixedPointNumber = roundf(n * (1 << this->_fractBits));
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

float   Fixed::toFloat( void ) const
{
    return (float)_fixedPointNumber / (1 << _fractBits);
}

int     Fixed::toInt( void ) const
{
    return this->_fixedPointNumber >> this->_fractBits;
}

Fixed&          Fixed::min(Fixed& a, Fixed& b)
{
    if (a._fixedPointNumber < b._fixedPointNumber)
        return a;
    return b;
}

const Fixed&    Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a._fixedPointNumber < b._fixedPointNumber)
        return a;
    return b;
}

Fixed&          Fixed::max(Fixed& a, Fixed& b)
{
    if (a._fixedPointNumber > b._fixedPointNumber)
        return a;
    return b;
}

const Fixed&    Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a._fixedPointNumber > b._fixedPointNumber)
        return a;
    return b;
}

bool Fixed::operator!=(const Fixed& fixed)
{
    if (this->toFloat() != fixed.toFloat())
        return true;
    return false;
}

bool Fixed::operator==(const Fixed& fixed)
{
    if (this->toFloat() == fixed.toFloat())
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed& fixed)
{
    if (this->toFloat() <= fixed.toFloat())
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed& fixed)
{
    if (this->toFloat() >= fixed.toFloat())
        return true;
    return false;
}

bool Fixed::operator<(const Fixed& fixed)
{
    if (this->toFloat() < fixed.toFloat())
        return true;
    return false;
}

bool Fixed::operator>(const Fixed& fixed)
{
    if (this->toFloat() > fixed.toFloat())
        return true;
    return false;
}

Fixed Fixed::operator+(const Fixed& fixed)
{
    return this->toFloat()+fixed.toFloat();
}

Fixed Fixed::operator-(const Fixed& fixed)
{
    return this->toFloat()-fixed.toFloat();
}

Fixed Fixed::operator*(const Fixed& fixed)
{
    return this->toFloat()*fixed.toFloat();
}

Fixed Fixed::operator/(const Fixed& fixed)
{
    return this->toFloat()/fixed.toFloat();
}

// i++
Fixed	Fixed::operator++( int )
{
    Fixed fixed = *this;

    this->_fixedPointNumber++;
    return fixed;
} 	
// ++i
Fixed&	Fixed::operator++( void )
{
    this->_fixedPointNumber++;
    return *this;
} 	
// i--
Fixed	Fixed::operator--( int )
{
    Fixed fixed = *this;

    this->_fixedPointNumber--;
    return fixed;
}	
// --i
Fixed&	Fixed::operator--( void )
{
    this->_fixedPointNumber--;
    return *this;
}	

std::ostream& operator<<(std::ostream& op, const Fixed& fixedPointNumber)
{
    op << fixedPointNumber.toFloat();
    return op;
}
