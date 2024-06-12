#include "Serializer.hpp"
#include <iomanip>

int main(void)
{
	{
		Data	*ptr  = 0;
		Data	*ptr2 = 0;
		uintptr_t raw = 0;

		ptr = new Data(65);
		raw = Serializer::serialize(ptr);
		ptr2 = Serializer::deserialize(raw);

		std::cout << "************************" << std::endl;
		std::cout << ptr->getRaw() << std::endl;
		std::cout << ptr2->getRaw() << std::endl;
		std::cout << raw << std::endl;
		std::cout << Serializer::serialize(ptr2) << std::endl;
		std::cout << "************************" << std::endl;
		delete ptr;
	}
}
