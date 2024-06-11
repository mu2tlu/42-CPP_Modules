#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat a("A", 25);
	Bureaucrat b("B", 1);
	AForm* test = new ShrubberyCreationForm("test");
    RobotomyRequestForm e("x");
    PresidentialPardonForm d("y");
    ShrubberyCreationForm c("z");
    try {
		
		b.signAForm(d);
		b.executeForm(d);
		delete test;
    }
    catch (std::exception &e) {
        delete test;
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}
