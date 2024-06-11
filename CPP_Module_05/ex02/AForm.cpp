#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Default AForm"), isSigned(false), requiredGradeToSign(150), requiredGradeToExecute(150) {}

AForm::~AForm(void) {}

AForm::AForm(std::string name): name(name), isSigned(false), requiredGradeToSign(150), requiredGradeToExecute(150) {}

AForm::AForm(std::string name, int reqGtoSign, int reqGtoExec) : name(name), isSigned(false), requiredGradeToSign(reqGtoSign), requiredGradeToExecute(reqGtoExec) {
    if (reqGtoExec < 1 || reqGtoSign < 1)
        throw GradeTooHighException();
    else if (reqGtoExec > 150 || reqGtoSign > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& copy) : name(copy.getName()), requiredGradeToSign(getGradeToSign()), requiredGradeToExecute(getGradeToExec()) {
    *this = copy;
}

AForm &AForm::operator=(const AForm& copy) {
    if (this == &copy)
        return *this;
    isSigned = copy.isSigned;
    return *this;
}

std::string AForm::getName(void) const {
    return name;
}

size_t AForm::getGradeToSign(void) const {
    return requiredGradeToSign;
}

size_t AForm::getGradeToExec(void) const {
    return requiredGradeToExecute;
}

std::string AForm::getIsSigned(void) const {
    if (isSigned == false)
        return "false";
    return "true";
}

void AForm::beSigned(Bureaucrat &b) {
    if (b.getGrade() <= this->getGradeToSign())
        this->isSigned = true;
	else
		throw GradeTooLowException();
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "AForm: Form not signed!";
};

const char* AForm::GradeTooHighException::what() const throw() {
    return "AForm: Grade Too High";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "AForm: Grade Too Low";
}

std::ostream &operator<<(std::ostream& o, AForm& f) { 
    o << f.getName() << ", requried grade to sign " << f.getGradeToSign()
    << ", required grade to execute " <<f.getGradeToExec() << ", is signed " <<  f.getIsSigned() << std::endl;
    return o;
}
