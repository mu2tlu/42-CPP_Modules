#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm::AForm("robotomy request", 72, 45), target("Default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm::AForm("robotomy request", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm::AForm("robotomy request", 72, 45) {
    *this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
    if (this != &copy)
       target = copy.target;
    return *this; 
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    
    if (this->getIsSigned() == "false")
        throw FormNotSignedException();
    if (executor.getGrade() >= this->getGradeToExec())
        throw GradeTooLowException();
    std::cout << executor.getName() << " executed " << this->getName() << std::endl;

    std::srand(time(0));
    size_t t = std::rand();
    std::cout << "*DRILLING NOISES*" << std::endl;
    if (t % 2 == 0)
        std::cout << target << " has been robotomized!" << std::endl;
    else
        std::cout << "Robotomy " <<target << " failed!" << std::endl;       
}
