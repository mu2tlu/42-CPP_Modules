#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(ScalarConverter const &other) {*this = other;}
ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other) {(void)other;return *this;}
ScalarConverter::~ScalarConverter() {}

int ScalarConverter::isValid(const std::string &str) {
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff" || str == "inf" || str == "inff")
		return (1);
	else if (str.find_first_of("+-") != str.find_last_of("+-"))
		return (0);
	else if (str.length() == 1 &&	(str[0] == '+' || str[0] == '-' || str[0] == '.' || str[0] == 'f') )
		return (2);
	else if (str.find_first_not_of("+-0123456789") == std::string::npos)
		return (3);
	else if (str.find_first_not_of("+-0123456789.")== std::string::npos) {
		return (4);
	}
	else if (str.find_first_not_of("+-0123456789.f") == std::string::npos) {
		if (str.find_first_of("f") != str.find_last_of("f") || str.find_first_of(".") != str.find_last_of(".") || str.find_first_of("f") == 0 || isdigit(str[str.find_first_of("f") + 1]))
			return(0);
		return (5);
	}
	else if (str.length() == 1 && isprint(str[0]))
		return (2);
	return (0);
}

void ScalarConverter::convert(const std::string &str) {

	int type = ScalarConverter::isValid(str);
	/*	0 -> Hata
		1 -> özel
		2 -> char
		3 -> int
		4 -> double
		5 -> float 	*/
	if (type == 0) {
		std::cout << "Error: Impossible to print or input not convertable" << std::endl;
		return ;
	}
	char c; int i; float f; double d;
	if (type == 2) {
        c = static_cast<char>(str[0]);
        ScalarConverter::print(type, str, c, static_cast<int>(c), static_cast<float>(c), static_cast<double>(c));
    } else if (type == 3) {
        i = atoi(str.c_str());
        ScalarConverter::print(type, str, static_cast<char>(i), i, static_cast<float>(i), static_cast<double>(i));
    } else if (type == 4 || type == 1) {
        d = atof(str.c_str());
        ScalarConverter::print(type, str, static_cast<char>(d), static_cast<int>(d), static_cast<float>(d), d);
    } else if (type == 5) {
        f = atof(str.c_str());
        ScalarConverter::print(type, str, static_cast<char>(f), static_cast<int>(f), f, static_cast<double>(f));
    }
}

void ScalarConverter::print(int type, const std::string& input, char c, int i, float f, double d)
{
	printChar(type, i, c);
	printInt(type, input, i);
	printFloat(type, input, f);
	printDouble(type, input, d);
}

void	ScalarConverter::printChar(int type, int i, char c) {
	if (type == 1 || i < 0 || i > 255){
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (isprint(i)) std::cout << "char: \'" << c << "\'" << std::endl;
	else std::cout << "char: Non displayable" << std::endl;
}

void	ScalarConverter::printInt(int type, const std::string& in, int i) {

	double check = atof(in.c_str());
	if (type != 1 && (check >= INT_MIN && check <= INT_MAX)) std::cout << "int: " << i << std::endl;
	else std::cout << "int: impossible" << std::endl;
}

void	ScalarConverter::printFloat(int type, const std::string& input, float f) {

	if (type == 1){
		printSpecial("float", input);
		return ;
	}

	double check = atof(input.c_str());

	if (type == 3 && (check < INT_MIN || check > INT_MAX))	std::cout << "float: impossible" << std::endl;
	else std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
}

void	ScalarConverter::printDouble(int type, const std::string& input, double d) {

	if (type == 1) {
		printSpecial("double", input);
		return ;
	}

	double check = atof(input.c_str());

	if (type == 3 && (check < INT_MIN || check > INT_MAX)) std::cout << "double: impossible" << std::endl;
	else std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void ScalarConverter::printSpecial(const std::string type, const std::string& in) {
    std::string specialStr;

    if (in == "nan" || in == "nanf")
        specialStr = "nan";
    else if (in == "+inf" || in == "+inff")
        specialStr = "+inf";
    else if (in == "-inf" || in == "-inff")
        specialStr = "-inf";
    else if (in == "inf" || in == "inff")
        specialStr = "inf";
    else
        return;

    std::cout << type << ": " << specialStr;
    if (type == "float")
        std::cout << "f";
    std::cout << std::endl;
}
