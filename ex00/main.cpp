#include "ScalarConverter.hpp"

int main(void)
{
    //Can't be instanciable
    // ScalarConverter test = ScalarConverter();
    ScalarConverter::convert("'a'"); // Char: a
    ScalarConverter::convert("42");  // Int: 42
    ScalarConverter::convert("3.14f"); // Float: 3.14
    ScalarConverter::convert("-4.2"); // Double: -4.2
    ScalarConverter::convert("0x1A"); // Invalid input

    return (0);
}