#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    try {

		Bureaucrat a("V", 151);
		a.signAForm(*rrf);
		a.executeForm(*rrf);
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    AForm* zpf;
    try {
        zpf = someRandomIntern.makeForm("NOT FOUND FORM", "nothing");
    	delete zpf;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    delete rrf;
}
