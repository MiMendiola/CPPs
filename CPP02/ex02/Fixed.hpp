#ifndef __FIXED_H__
#define __FIXED_H__

// ************************************************************************** //
//                                Fixed Class                                //
// ************************************************************************** //
#include <iostream>
#include <string>
#include <cmath>

class Fixed {
    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float n);
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &fixed);
        ~Fixed();

        // GETTERS & SETTERS
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        // MEMBER FUNCTIONS
        float toFloat( void ) const;
        int toInt( void ) const;

        static Fixed&          min(Fixed& a, Fixed& b);
        static const Fixed&    min(const Fixed& a, const Fixed& b);
        static Fixed&          max(Fixed& a, Fixed& b);
        static const Fixed&    max(const Fixed& a, const Fixed& b);

        // COMPARISON OPERATORS
        bool operator!=(const Fixed& fixed);
        bool operator==(const Fixed& fixed);
        bool operator<=(const Fixed& fixed);
        bool operator>=(const Fixed& fixed);
        bool operator<(const Fixed& fixed);
        bool operator>(const Fixed& fixed);

        // ARITHMETIC OPERATORS
        Fixed operator+(const Fixed& fixed);
        Fixed operator-(const Fixed& fixed);
        Fixed operator*(const Fixed& fixed);
        Fixed operator/(const Fixed& fixed);

        // INCREMENT/DECREMENT OPERATORS
        Fixed	operator++( int ); 		// i++
		Fixed&	operator++( void ); 	// ++i
		Fixed	operator--( int );		// i--
		Fixed&	operator--( void );		// --i

    private:
        int _fixedPointNumber;
        static const int _fractBits = 8;
};

std::ostream& operator<<(std::ostream& op, const Fixed& fixedPointNumber);

#endif
