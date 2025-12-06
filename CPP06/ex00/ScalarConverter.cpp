#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << BLUE << "ScalarConverter Default Constructor Called!" << RESET << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    *this = other;
    std::cout << BLUE << "ScalarConverter Copy Constructor Called!" << RESET << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &ScalarConverter)
{
    (void)ScalarConverter;
    std::cout << BLUE << "ScalarConverter Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

ScalarConverter::~ScalarConverter()
{
    std::cout << BLUE << "ScalarConverter Destructor Called!" << RESET << std::endl;
}

static bool     isPseudoLiteral(std::string const &str) {
    return (
        str == "nan"   || str == "nanf"  ||
        str == "+inf"  || str == "+inff" ||
        str == "-inf"  || str == "-inff"
    );
}

static  void    character(char c)
{
	if (c >= CHAR_MIN && c < CHAR_MAX)
		std::isprint(c) ? std::cout << "char: " << "'" << c << "'" << std::endl : std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;

    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

static  void    intConverter(int nbr)
{
	if (nbr >= CHAR_MIN && nbr < CHAR_MAX)
		std::isprint(nbr) ? std::cout << "char: " << "'" << static_cast<char>(nbr) << "'" << std::endl : std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;

    std::cout << "int: " << nbr << std::endl;
    std::cout << "float: " << static_cast<float>(nbr) << ((nbr > -1000000 && nbr < 1000000) ? ".0f" : "") << std::endl;
    std::cout << "double: " << static_cast<double>(nbr) << ((nbr > -1000000 && nbr < 1000000) ? ".0" : "") << std::endl;
}

static  void    floatDoubleConverter(double doubleNbr, char *str)
{
    int nbr = static_cast<int>(doubleNbr);
	if (nbr >= CHAR_MIN && nbr < CHAR_MAX)
		std::isprint(nbr) ? std::cout << "char: " << "'" << static_cast<char>(nbr) << "'" << std::endl : std::cout << "char: Non displayable" << std::endl;
	else 
		std::cout << "char: impossible" << std::endl;

    if (doubleNbr <= static_cast<double>(INT_MIN) || doubleNbr >= static_cast<double>(INT_MAX) || isPseudoLiteral(str))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(doubleNbr) << std::endl;

    std::cout << "float: " << static_cast<float>(doubleNbr) << ((floor(doubleNbr) == doubleNbr && (doubleNbr > -1000000 && doubleNbr < 1000000)) ? ".0f" : "f") << std::endl;
    std::cout << "double: " << doubleNbr << ((floor(doubleNbr) == doubleNbr && (doubleNbr > -1000000 && doubleNbr < 1000000)) ? ".0" : "") << std::endl;
}

void ScalarConverter::convert(char *str)
{
    char *tmp = str;
    char *strEnd = NULL;
    int length = strlen(str);
    long nbr = strtol(str, &strEnd, 10);

    if (length == 1 && !std::isdigit(static_cast<int>(tmp[0])))
        return character(static_cast<char>(str[0]));

    if (!strEnd[0] && length < 12 && nbr >= INT_MIN && nbr <= INT_MAX)
        return intConverter(atoi(str));

    strEnd = NULL;
    strtod(str, &strEnd);
    if (!strEnd[0] || strEnd[0] == 'f')
        return floatDoubleConverter(atof(str), str);

    std::cerr << "Impossible to convert" << std::endl;
}        
