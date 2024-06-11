#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat a("Mary", 20);
		Form b("Document Form", 20, 10);

		std::cout << b;
		a.signForm(b);
		std::cout << b;
	}
	catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

    std::cout << "\n\033[0;31m-------------------------\033[m"<< std::endl;

	try {
		Bureaucrat d("Jane", 35);
		Form e("Document Form", 20, 10);

		std::cout << e;
		d.signForm(e);
     
	}
	catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}
