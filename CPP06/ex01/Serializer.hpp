#ifndef __SERIALIZER_H__
#define __SERIALIZER_H__

//   COLORS
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

// ************************************************************************** //
//                               Serializer Class                             //
// ************************************************************************** //
#include <iostream>
#include <stdint.h>

struct Data
{
    std::string data;
};

class Serializer {
    public:
        Serializer();
        Serializer(const Serializer &other);
        Serializer &operator=(const Serializer &Serializer);
        virtual ~Serializer();

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif
