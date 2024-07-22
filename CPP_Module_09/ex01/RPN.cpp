#include "RPN.hpp"
#include <sstream>
#include <iostream>

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& other) { *this = other; }

RPN& RPN::operator=(const RPN& other) { operandStack = other.operandStack; return *this; }

void RPN::exitError() { std::cout << "Error" << std::endl; exit(1); }

int RPN::stringToInteger(const std::string& str) {
    std::istringstream iss(str);
    int num;
    iss >> num;
    return num;
}

int RPN::checkToken(std::string token)
{
    if (token.length() == 1)
    {
        if (token[0] == PLUS || token[0] == MINUS || token[0] == MULTI
            || token[0] == DIVIDE || (token[0] >= '0' && token[0] <= '9'))
            return 0;
    }
    return 1;
}

void RPN::processInput(std::string input)
{
    std::istringstream expression(input);

    std::string token;
    while (expression >> token)
    {
        if (checkToken(token))
            exitError();
        if (token[0] >= '0' && token[0] <= '9')
            operandStack.push(stringToInteger(token));
        else
        {
            if (operandStack.size() < 2)
                exitError();
            int a = operandStack.top();
            operandStack.pop();
            int b = operandStack.top();
            operandStack.pop();
            if (token[0] == PLUS)
                operandStack.push(b + a);
            else if (token[0] == MINUS)
                operandStack.push(b - a);
            else if (token[0] == MULTI)
                operandStack.push(b * a);
            else if (token[0] == DIVIDE)
            {
                if (a == 0)
                    exitError();
                operandStack.push(b / a);
            }
        }
    }
    if (operandStack.size() != 1)
        exitError();
    std::cout << operandStack.top() << std::endl;
}
