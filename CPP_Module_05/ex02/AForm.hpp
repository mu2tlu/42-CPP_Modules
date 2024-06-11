#ifndef AFORM_HPP
#define AFORM_HPP

#include <exception>
#include <iostream>

class Bureaucrat;

class AForm {
    private:
        const std::string name;
        bool isSigned;
        const size_t requiredGradeToSign;
        const size_t requiredGradeToExecute;
    public:
        AForm(void);
        virtual ~AForm(void);
        AForm(std::string name);
        AForm(std::string name, int requiredGradeToSign, int requiredGradeToExecute);
        AForm(const AForm& copy);
        AForm &operator=(const AForm& copy);
        std::string getName(void) const;
        size_t getGradeToSign(void) const;
        size_t getGradeToExec(void) const;
        bool getIsSigned(void) const;
        void beSigned(Bureaucrat& b);
        
        virtual void execute(const Bureaucrat& executor) const = 0;
        
        class GradeTooHighException: public std::exception {
            const char* what() const throw();
        };
        class GradeTooLowException: public std::exception {
            const char* what() const throw();
        };
        class FormNotSignedException: public std::exception {
            const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream& o, AForm& f);

#endif
