#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm::AForm("shrubbery creation", 145, 137), target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm::AForm("shrubbery creation", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) :  AForm::AForm("shrubbery creation", 145, 137) {
    *this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
    if (this != &copy)
        target = copy.target;
    return *this; 
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {

    if (!this->getIsSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExec())
        throw GradeTooLowException();
    std::cout << executor.getName() << " executed " << this->getName() << std::endl;

    std::ofstream o((target + ".shrubbery"));
    if (o.fail())
    {
        std::cout << "Error: could not create file!" << std::endl;
        return ;
    }

    o << "                                                         .\n";
    o << "                                              .         ;  \n";
    o << "                 .              .              ;%     ;;   \n";
    o << "                   ,           ,                :;%  %;   \n";
    o << "                    :         ;                   :;%;'     .,   \n";
    o << "           ,.        %;     %;            ;        %;'    ,;\n";
    o << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
    o << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
    o << "               ;%;      %;        ;%;        % ;%;  ,%;'\n";
    o << "                `%;.     ;%;     %;'         `;%%;.%;'\n";
    o << "                 `:;%.    ;%%. %@;        %; ;@%;%'\n";
    o << "                    `:%;.  :;bd%;          %;@%;'\n";
    o << "                      `@%:.  :;%.         ;@@%;'   \n";
    o << "                        `@%.  `;@%.      ;@@%;         \n";
    o << "                          `@%%. `@%%    ;@@%;        \n";
    o << "                            ;@%. :@%%  %@@%;       \n";
    o << "                              %@bd%%%bd%%:;     \n";
    o << "                                #@%%%%%:;;\n";
    o << "                                %@@%%%::;\n";
    o << "                                %@@@%(o);  . '         \n";
    o << "                                %@@@o%;:(.,'         \n";
    o << "                            `.. %@@@o%::;         \n";
    o << "                               `)@@@o%::;         \n";
    o << "                                %@@(o)::;        \n";
    o << "                               .%@@@@%::;         \n";
    o << "                               ;%@@@@%::;.          \n";
    o << "                              ;%@@@@%%:;;;. \n";
    o << "                          ...;%@@@@@%%:;;;;,..  \n";
    o.close();
}
