#pragma once

#include <iostream>
#include <stack>
#include <deque>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack& other);
    MutantStack &operator=(const MutantStack& other);

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin();
    iterator end();

    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    const_iterator cbegin();
    const_iterator cend();

    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    reverse_iterator rbegin();
    reverse_iterator rend();

    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
    const_reverse_iterator crbegin();
    const_reverse_iterator crend();
};

#include "MutantStack.tpp"