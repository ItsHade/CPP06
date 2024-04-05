#include "ScalarConverter.hpp"

int main(void)
{

    //Can't be instanciable
    // ScalarConverter test = ScalarConverter();
    ScalarConverter::convert("!"); // Char: !
    std::cout << std::endl;
    ScalarConverter::convert("42");  // Int: 42
    std::cout << std::endl;
    ScalarConverter::convert("44142");  // Int: 44142
    std::cout << std::endl;
    ScalarConverter::convert("3.14f"); // Float: 3.14
    std::cout << std::endl;
    ScalarConverter::convert("-4.2"); // Double: -4.2
    std::cout << std::endl;
    ScalarConverter::convert("1."); // Double: 1.
    std::cout << std::endl;
    ScalarConverter::convert("0x1A"); // Invalid input

    return (0);
}