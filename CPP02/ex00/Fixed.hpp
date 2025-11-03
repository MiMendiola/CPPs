#ifndef __FIXED_H__
#define __FIXED_H__

// ************************************************************************** //
//                                Fixed Class                                //
// ************************************************************************** //
#include <iostream>
#include <string>

class Fixed {
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &fixed);
        ~Fixed();

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

    private:
        int _fixedPointNumber;
        static const int _fractBits = 8;
};

#endif
