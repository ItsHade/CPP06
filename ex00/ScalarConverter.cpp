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
    std::stringstream sstr(literal);
    int a;

    sstr >> a;
    if (!sstr.fail() && sstr.eof())
        return (true);
    return (false);
}

bool isDouble(std::string literal)
{
    std::stringstream sstr(literal);
    double a;

    sstr >> a;
    if (!sstr.fail() && sstr.eof())
        return (true);
    return (false);
}

bool isFloat(std::string literal)
{
    if (literal[literal.length() - 1] == 'f')
        literal = literal.erase(literal.length() - 1);

    std::stringstream sstr(literal);
    float a;

    sstr >> a;
    if (!sstr.fail() && sstr.eof())
        return (true);
    return (false);
}

void printDataType(types t)
{
	switch (t)
	{
		case INT:		{ std::cout << "Input type found: INT" << std::endl; break; }
		case CHAR:		{ std::cout << "Input type found: CHAR" << std::endl; break; }
		case FLOAT:		{ std::cout << "Input type found: FLOAT" << std::endl; break; }
		case DOUBLE:	{ std::cout << "Input type found: DOUBLE" << std::endl; break; }
		default:		break;
	}
}

int getType(std::string literal)
{
    int type = 0;
    if (literal.size() == 1 && !isdigit(literal[0]) && isprint(literal[0])) 
        type = CHAR;
    else if (literal == "-inff" || literal == "+inff" || literal == "nanf")
        type = FLOAT;
    else if (literal == "-inf" || literal == "+inf" || literal == "nan")
        type = DOUBLE;
    else if (literal.find('.') != std::string::npos)
    {
        if (isDouble(literal))
            type = DOUBLE;
        else if (isFloat(literal))
            type = FLOAT;
    }
    else if (isInt(literal))
        type = INT;
    else
        type = INVALID;
    return (type);
}

void ScalarConverter::convert(std::string literal)
{
    int type = getType(literal);
    double d = std::strtod(literal.c_str(), NULL);

    // std::cout << "d: " << d << std::endl;
    // printDataType(t);
    switch (type)
    {
        case INVALID:
            std::cout << "Invalid input!" << std::endl;
            break;
        case CHAR:
        {
            std::cout << "Char: " << static_cast<char>(literal[0]) << std::endl;
            std::cout << "Int: " << static_cast<int>(literal[0]) << std::endl;
            std::cout << "Float: " << static_cast<float>(literal[0]) << std::endl;
            std::cout << "Double: " << static_cast<double>(literal[0]) << std::endl;
            break;
        }
        case INT:
        {
            std::cout << "Char: " << static_cast<char>(d) << std::endl;
            std::cout << "Int: " << static_cast<int>(d) << std::endl;
            std::cout << "Float: " << static_cast<float>(d) << std::endl;
            std::cout << "Double: " << static_cast<double>(d) << std::endl;
            break;
        }
    }
}