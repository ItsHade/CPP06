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

bool isInt(std::string literal)
{
    std::stringstream sstr;
    int a;

    sstr >> a;
    if (!(sstr.fail() && sstr.eof()))
        return (true);
    return (false);
}

void ScalarConverter::convert(std::string literal)
{
    // Convert to char
    if (literal.size() == 3 && literal[0] == '\'' && literal[2] == '\'') {
        char value = literal[1];
        std::cout << "Char: " << value << std::endl;
    }
    // Convert to int
    else {
        std::istringstream iss(literal);
        int intValue;
        iss >> intValue;
        if (!iss.fail() && iss.eof()) {
            std::cout << "Int: " << intValue << std::endl;
        } else {
            iss.clear();
            float floatValue;
            iss >> floatValue;
            if (!iss.fail() && iss.eof()) {
                std::cout << "Float: " << floatValue << std::endl;
            } else {
                iss.clear();
                double doubleValue;
                iss >> doubleValue;
                if (!iss.fail() && iss.eof()) {
                    std::cout << "Double: " << doubleValue << std::endl;
                } else {
                    std::cout << "Invalid input" << std::endl;
                }
            }
        }
    }
    return ;
}