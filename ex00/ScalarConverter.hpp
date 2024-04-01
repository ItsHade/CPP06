#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>

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

#endif