#ifndef __SCALARCONVERTER_H__
#define __SCALARCONVERTER_H__

//   COLORS
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

// ************************************************************************** //
//                               ScalarConverter Class                             //
// ************************************************************************** //
#include <iostream>
#include <cstring>
#include <climits>
#include <cmath>

class ScalarConverter {  
    public:
        static void convert(char *str);

    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &ScalarConverter);
        virtual ~ScalarConverter();
};

#endif
