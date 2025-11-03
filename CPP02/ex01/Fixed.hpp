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

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        float toFloat( void ) const;
        int toInt( void ) const;

    private:
        int _fixedPointNumber;
        static const int _fractBits = 8;
};

std::ostream& operator<<(std::ostream& op, const Fixed& fixedPointNumber);

#endif
