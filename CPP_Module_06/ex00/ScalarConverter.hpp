#pragma once

#include <string> 
#include <iostream> 
#include <limits.h>
#include <iomanip>


class ScalarConverter{
private:
    ScalarConverter();
    ScalarConverter(ScalarConverter const &other);
    ScalarConverter &operator=(ScalarConverter const &other);
    ~ScalarConverter();

    static int isValid(const std::string &str);
    static void	printChar(int type, int i, char c);
	static void	printInt(int type, const std::string& in, int i);
	static void	printFloat(int type, const std::string& input, float f);
	static void	printDouble(int type, const std::string& input, double d);
	static void	printSpecial(const std::string type, const std::string& in);
	static void	print(int type, const std::string& input, char c, int i, float f, double d);

public:
    static void convert(const std::string &str);

};
