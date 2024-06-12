#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include "Data.hpp"
#include <iostream>

class Serializer
{
private:
	Serializer(void);
	Serializer(const Serializer& copy);
	~Serializer(void);
	Serializer&	operator=(const Serializer& other);

public:
	static uintptr_t	serialize(Data *ptr);
	static Data*		deserialize(uintptr_t raw);
};

#endif
