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
        delete rrf;
    }
    catch (std::exception &e) {
        if (rrf != nullptr)
            delete rrf;
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    AForm* zpf;
    try {
        zpf = someRandomIntern.makeForm("NOT FOUND FORM", "nothing");
    	delete zpf;
    } catch (std::exception &e) {
        if (zpf != nullptr)
            delete zpf;
        std::cout << e.what() << std::endl;
    }
}
