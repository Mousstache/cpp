#include "./includes/Convert.hpp"
#include <stdlib.h>
#include <sstream>
#include <errno.h>
/*----------------------------------------------CONSTRUCTOR/DESTRUCTOR----------------------------------------------*/
Converter::Converter():literal("1"){};
Converter::~Converter(){};
Converter::Converter(const std::string literal):literal(literal){};
Converter::Converter(const Converter& rhs){*this = rhs;};
Converter& Converter::operator=(const Converter& rhs){(void)rhs;return *this;};
/*----------------------------------------------CONSTRUCTOR/DESTRUCTOR----------------------------------------------*/
/*----------------------------------------------MEMBER FUNCTION----------------------------------------------*/


void Converter::printChar(const std::string& literal)
{
    long value;
    char *ptr;
    const char *lit_c = literal.c_str();
    std::cout << "Char: ";
    value = strtol(lit_c, &ptr, 10);
    if (type == CHAR && std::isprint(literal.at(0)))
        std::cout << literal << std::endl;
    else if (type != CHAR && ((lit_c == ptr || (value <= -127 || value > 128)) || errno == ERANGE))
        std::cout << "impossible" << std::endl;
    else if (type != CHAR && isprint(value))
        std::cout << static_cast<char>(value) << std::endl;
    else if ((type == CHAR && !isprint(literal[0])) || ((value >= -127 && value < 128) && !isprint(value)))
        std::cout << "Non displayble" << std::endl;
    else
        std::cout << "impossible" << std::endl;
}

void Converter::printInt(const std::string& literal)
{
    int value;
    std::stringstream ss(literal);
    ss >> value;
    std::cout << "Int: ";
    if (ss.fail())
        std::cout << "impossible" << std::endl;
    else if (type == INT)
        std::cout << value << std::endl;
    else if (type != CHAR && type != INT)
        std::cout << value << std::endl;
    else
        std::cout << "impossible" << std::endl;
}

void Converter::printDouble(const std::string& literal)
{
    double value;
    std::stringstream ss(literal);
    std::string lit_cpy = literal;
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << "Double: ";
    ss >> value;
    if ((type != CHAR && type != IMPOSSIBLE) && ss.fail())
        std::cout << "impossible" << std::endl;
    else if (type != CHAR && type != IMPOSSIBLE)
        std::cout << value << std::endl;
    else if (type == IMPOSSIBLE && funValue(literal, lit_cpy, DOUBLE))
        std::cout << lit_cpy << std::endl;
    else
        std::cout << "impossible" << std::endl;
}

void Converter::printFloat(const std::string& literal)
{
    float value;
    std::string lit_cpy = literal;
    std::stringstream ss(literal);
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << "Float: ";

    ss >> value;
    if ((type == FLOAT || type == DOUBLE) && ss.fail())
        std::cout << "impossible" << std::endl;
    else if (type != CHAR && type != IMPOSSIBLE)
        std::cout << value << "f" << std::endl;
    else if (type == IMPOSSIBLE && funValue(literal, lit_cpy, FLOAT))
        std::cout << lit_cpy << std::endl;
    else
        std::cout << "impossible" << std::endl;
}

bool Converter::funValue(const std::string& literal, std::string& lit_cpy, dataTypes _type)
{
    size_t len;

    static std::string const funValues[6] = {"-inf","inff","+inf","+inff","nan","nanf"};
    for (size_t i = 0; i < 6; i++)
    {
        if (_type == DOUBLE && literal == funValues[i])
        {
            len = literal.find('f');
            if (literal == "nanf")
                lit_cpy.erase(3);
            if (len == std::string::npos || len == literal.length() - 1)
                return true ;
            lit_cpy.erase(len, 1);
            return true ;
        }
        else if (_type == FLOAT && literal == funValues[i])
        {
            len = literal.find('f');
            if (len == std::string::npos)
                lit_cpy += 'f';
            if (literal == "nanf" || len == std::string::npos)
                return true ;
            len = literal.find('f', len + 1);
            if (len == std::string::npos)
                lit_cpy += 'f';
            return true ;
        }
    }
    return false;
}

void Converter::printScalarConversion(const std::string& literal)
{
    printChar(literal);
    printInt(literal);
    printFloat(literal);
    printDouble(literal);
}

void Converter::convert(const std::string& literal)
{
    setTypes(literal);
    printScalarConversion(literal);
};

bool Converter::checkInt(const std::string& literal)
{
    int pos = (literal[0] == '+' || literal[0] == '-') ? 1 : 0;
    if (pos == 1 && literal.length() == 1)
        return false;
    else if (literal.find_first_not_of("0123456789", pos) != std::string::npos)
        return false;
    type = INT;
    return true;
}

bool Converter::checkChar(const std::string& literal)
{
    if (literal.length() > 1 || literal.find_first_not_of("0123456789") == std::string::npos)
        return false;
    type = CHAR;
    return true;
}

bool Converter::checkFloat(const std::string& literal)
{
    size_t f_index = -1;
    size_t l_index = literal.length() - 1;
    size_t    pos = (literal[0] == '+' || literal[0] == '-') ? 1 : 0;
    f_index = literal.find(".");

    pos = literal.find('f');
    if (literal[l_index] != 'f' || pos != l_index) return false ;
    if (literal.find_first_not_of("0123456789.f") != std::string::npos)
        return false;
    if (f_index > 0 && f_index != std::string::npos)
    {
        if (literal.find(".", f_index + 1) != std::string::npos)
            return false ;
        else if (f_index == l_index)
            return false ;
    }
    type = FLOAT;
    return true;
}

bool Converter::checkDouble(const std::string& literal)
{
    size_t f_index = -1;
    size_t    pos = (literal[0] == '+' || literal[0] == '-') ? 1 : 0;
    size_t l_index = literal.find_first_not_of("0123456789.", pos);

    f_index = literal.find(".");
    if (l_index != std::string::npos)
        return false;
    if (f_index > 0 && f_index != std::string::npos)
    {
        if (literal.find(".", f_index + 1) != std::string::npos)
            return false ;
        else if (literal.length() - 1 == f_index)
            return false ;
    }
    type = DOUBLE;
    return true;
}

void Converter::setTypes(const std::string& literal)
{
    if (checkInt(literal))
        return ;
    if (checkChar(literal))
        return ;
    if (checkFloat(literal))
        return ;
    if (checkDouble(literal))
        return ;
    type = IMPOSSIBLE;
}
Converter::dataTypes Converter::type = Converter::IMPOSSIBLE;
/*----------------------------------------------MEMBER FUNCTION----------------------------------------------*/