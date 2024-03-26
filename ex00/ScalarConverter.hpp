#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter
{

public :

    ~ScalarConverter(void);

    ScalarConverter & operator =(ScalarConverter const & src);

    static void convert(std::string literal);

private :

    ScalarConverter(void);
    ScalarConverter(ScalarConverter const & copy);

    

};

#endif