#include "Serializer.hpp"

int main(void)
{
    Data ptr;
    ptr.name = "malo";
    ptr.lvl = 8;
    ptr.hp = 100;
    ptr.armor = 20;

    std::cout << "Address of ptr: " << &ptr << std::endl;
    std::cout << "Name: " << ptr.name << std::endl;
    std::cout << "Level: " << ptr.lvl << std::endl;
    std::cout << "Health Point: " << ptr.hp << std::endl;
    std::cout << "Armor: " << ptr.armor << std::endl;

    uintptr_t a = Serializer::serialize(&ptr);
    std::cout << "\nUnsigned int: " << a << std::endl;

    Data *newptr = Serializer::deserialize(a);
    std::cout << "\nAddress of newptr: " << newptr << std::endl;
    std::cout << "Name: " << newptr->name << std::endl;
    std::cout << "Level: " << newptr->lvl << std::endl;
    std::cout << "Health Point: " << newptr->hp << std::endl;
    std::cout << "Armor: " << newptr->armor << std::endl;
}