#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b("Coni");

    std::cout << b << std::endl;
    try {
        b.decreaseGrade();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
    	Bureaucrat a("Taylor", 1); 
        std::cout << a << std::endl;
        a.increaseGrade();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
