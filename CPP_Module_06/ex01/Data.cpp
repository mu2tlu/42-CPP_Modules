#include "Data.hpp"

Data::Data(void)
{
	std::cout << "Default constructor called (Data)" << std::endl;
	this->_raw = 0;
}

Data::Data(uintptr_t raw)
{
	std::cout << "Parameterized constructor called (Data)" << std::endl;
	this->_raw = raw;
}

Data::Data(const Data& copy)
{
	std::cout << "Copy constructor called (Data)" << std::endl;
	*this = copy;
}

Data::~Data(void)
{
	std::cout << "Destructor called (Data)" << std::endl;
}

Data&	Data::operator=(const Data& other)
{
	std::cout << "Copy assignment operator called (Data)" << std::endl;
	if (this != &other)
		this->_raw = other._raw;
	return (*this);
}

void	Data::setRaw(uintptr_t raw)
{
	this->_raw = raw;
}

const uintptr_t&	Data::getRaw(void) const
{
	return (this->_raw);
}
