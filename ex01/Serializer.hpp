#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h>

typedef struct
{
    std::string name;
    int     lvl;
    float   hp;
    float   armor;
} Data;

class Serializer
{

public :

    static uintptr_t serialize(Data* ptr);

    static Data* deserialize(uintptr_t raw);

private :

    Serializer();
    Serializer(Serializer const & copy);
    ~Serializer();

    Serializer & operator =(Serializer const & src);
};

#endif