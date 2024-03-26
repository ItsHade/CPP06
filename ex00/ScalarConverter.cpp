#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
    return ;
}

ScalarConverter::ScalarConverter(ScalarConverter const & copy)
{
    *this = copy;
    return ;
}

ScalarConverter::~ScalarConverter(void)
{
    return ;
}

ScalarConverter & ScalarConverter::operator =(ScalarConverter const & src)
{
    if (this != &src)
    {
        return (*this);
    }

    return (*this);
}

static void convert(std::string literal)
{
    if (literal[0] >= 32 && literal[0] <= 126)
    {
        std::cout << "char : " << static_cast<char>(literal[0]) << std::endl;
        std::cout << "int : " << static_cast<int>(literal[0]) << std::endl;
        std::cout << "float : " << static_cast<float>(literal[0]) << std::endl;
        std::cout << "double : " << static_cast<double>(literal[0]) << std::endl;
    }
    else
        std::cout << "Non displayable character is not a valid input!" << std::endl;
    return ;
}