#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h> 

enum types
{
    INVALID,
    CHAR,
    INT,
    FLOAT,
    DOUBLE
};

class ScalarConverter
{

public :

    static void convert(std::string literal);

private :

    ScalarConverter(void);
    ScalarConverter(ScalarConverter const & copy);
    ~ScalarConverter(void);

    ScalarConverter & operator =(ScalarConverter const & src);

};

bool isInt(std::string literal);

bool isDouble(std::string literal);

bool isFloat(std::string literal);

#endif