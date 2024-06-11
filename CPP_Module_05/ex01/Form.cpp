#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Default Form"), isSigned(false), requiredGradeToSign(150), requiredGradeToExecute(150) {}

Form::~Form(void) {}

Form::Form(std::string name): name(name), isSigned(false), requiredGradeToSign(150), requiredGradeToExecute(150) {}

Form::Form(std::string name, int reqGtoSign, int reqGtoExec) : name(name), isSigned(false), requiredGradeToSign(reqGtoSign), requiredGradeToExecute(reqGtoExec){
    if (reqGtoExec < 1 || reqGtoSign < 1)
        throw GradeTooHighException();
    else if (reqGtoExec > 150 || reqGtoSign > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& copy) : name(copy.getName()), requiredGradeToSign(copy.getGradeToSign()), requiredGradeToExecute(copy.getGradeToExec()) {
    *this = copy;
}

Form &Form::operator=(const Form& copy) {
    if (this == &copy)
        return *this;
    isSigned = copy.isSigned;
    return *this;
}

std::string Form::getName(void) const {
    return name;
}

size_t Form::getGradeToSign(void) const {
    return requiredGradeToSign;
}

size_t Form::getGradeToExec(void) const {
    return requiredGradeToExecute;
}

std::string Form::getIsSigned(void) const {
    if (isSigned == false)
        return "false";
    return "true";
}

void Form::beSigned(Bureaucrat &b) {
    if (b.getGrade() <= this->getGradeToSign())
        this->isSigned = true;
    else
        throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Form: Grade Too High";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Form: Grade Too Low";
}

std::ostream &operator<<(std::ostream& o, Form& f) { 
    o << f.getName() << ", requried grade to sign " << f.getGradeToSign()
    << ", required grade to execute " <<f.getGradeToExec() << ", is signed " <<  f.getIsSigned() << std::endl;
    return o;
}
