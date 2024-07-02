#pragma once

#include <vector>
#include <iostream>

typedef std::vector<int>::iterator iter;

class Span {
    public:
        Span(unsigned int N);
        ~Span();
        Span(const Span& other);
        Span &operator=(const Span& other);
        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
        void fill(iter begin, iter end);
        void print();
    private:
        Span();
        std::vector<int> vec;
        unsigned int maxSize;
};