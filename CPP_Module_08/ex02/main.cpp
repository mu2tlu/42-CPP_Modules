#include "MutantStack.hpp"
#include "MutantStack.tpp"
#include <iostream>

int main()
{
    {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    MutantStack<int>::iterator first = mstack.begin();
    ++it;
    --it;
    std::cout << "Normal" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "Reverse" << std::endl;
    while (first != ite)
    {
        --ite;
        std::cout << *ite << std::endl;
    }
    std::stack<int> s(mstack);

    MutantStack<int> new_stack(mstack);

    MutantStack<int>::iterator s_it = new_stack.begin();
    MutantStack<int>::iterator s_ite = new_stack.end();
    std::cout << "New_stack_test" << std::endl;
    while (s_it != s_ite)
    {
        std::cout << *s_it << std::endl;
        ++s_it;
    }

    MutantStack<int> copy_stack;
    copy_stack = mstack;

    MutantStack<int>::iterator copy_s_it = copy_stack.begin();
    MutantStack<int>::iterator copy_s_ite = copy_stack.end();

    std::cout << "Copy_stack_test" << std::endl;
    while (copy_s_it != copy_s_ite)
    {
        std::cout << *copy_s_it << std::endl;
        ++copy_s_it;
    }
    std::cout << "Copy_stack size: " << copy_stack.size() << std::endl;
    std::cout << "Copystack push test" << std::endl;
    copy_stack.push(42);
    std::cout << "Copy_stack size: " << copy_stack.size() << std::endl;
    }
}

