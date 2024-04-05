#include "Serializer.hpp"

Serializer::Serializer()
{
    return ;
}

Serializer::Serializer(Serializer const & copy)
{
    *this = copy;
    return ;
}

Serializer::~Serializer()
{
    return ;
}

Serializer & Serializer::operator =(Serializer const & src)
{
    if (this != &src)
    {
        return (*this);
    }
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}