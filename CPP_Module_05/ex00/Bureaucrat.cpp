#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Default"), grade(150) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(std::string name) : name(name), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, size_t grade) : name(name) {
    setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.getName()) {
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& copy) {
    if (this == &copy)
        return *this;
    grade = copy.grade;
    return *this;
}

std::string Bureaucrat::getName(void) const {
    return this->name;
}

size_t Bureaucrat::getGrade(void) const {
    return this->grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade Too Low";
}

void Bureaucrat::increaseGrade(void) {
    setGrade(getGrade() - 1);
}

void Bureaucrat::decreaseGrade(void) {
    setGrade(getGrade() + 1);
}

void Bureaucrat::setGrade(int n) {
    if (n < 1)
        throw GradeTooHighException();
    else if (n > 150)
        throw GradeTooLowException();
    grade = n;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b) {
    o << b.getName() << ", bureaucrat grade " << b.getGrade();
    return o;
}
