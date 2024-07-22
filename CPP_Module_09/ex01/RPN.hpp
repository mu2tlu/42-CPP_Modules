#pragma once

#include <stack>
#include <string>

#define PLUS '+'
#define MINUS '-'
#define MULTI '*'
#define DIVIDE '/'

class RPN
{
    private:
        std::stack<int> operandStack;

    public:
        RPN();
        ~RPN();
        RPN(const RPN& other);
        RPN& operator=(const RPN& other);

        void processInput(std::string input);
        int checkToken(std::string token);
        int stringToInteger(const std::string& str);
        void exitError();
};

