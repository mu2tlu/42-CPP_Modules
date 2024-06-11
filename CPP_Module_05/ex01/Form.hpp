#pragma once

#include <exception>
#include <iostream>

class Bureaucrat;

class Form {
    private:
        const std::string name;
        bool isSigned;
        const size_t requiredGradeToSign;
        const size_t requiredGradeToExecute;
    public:
        Form(void);
        ~Form(void);
        Form(std::string name);
        Form(std::string name,
            int requiredGradeToSign,
            int requiredGradeToExecute);
        Form(const Form& copy);
        Form &operator=(const Form& copy);
        std::string getName(void) const;
        size_t getGradeToSign(void) const;
        size_t getGradeToExec(void) const;
        std::string getIsSigned(void) const;
        void beSigned(Bureaucrat& b);
        class GradeTooHighException: public std::exception {
            const char* what() const throw();
        };
        class GradeTooLowException: public std::exception {
            const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream& o, Form& f);