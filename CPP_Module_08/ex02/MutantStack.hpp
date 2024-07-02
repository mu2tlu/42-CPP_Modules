#pragma once

#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack& mutantStack);
    MutantStack &operator=(const MutantStack& mutantStack);

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin();
    iterator end();
};

